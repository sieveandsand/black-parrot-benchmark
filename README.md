# Black Parrot Benchmark
This repo aims to benchmark the performance of branch prediction in Black Parrot and improve its performance.



For more details on Black Parrot, check out:

https://github.com/black-parrot/black-parrot



## Overview

get-country checks branch prediction performance. It comes from the question of how many ifs are too many?



Checkout this article:
https://blog.cloudflare.com/branch-predictor/



## Branch Target Buffer in Black Parrot

A BTB entry in Black Parrot is defined as:

```verilog
typedef struct packed {
	logic						v;
	logic						jmp;
	logic [btb_tag_width_p-1:0]	tag;
	logic [vaddr_width_p-1:0]	tgt;
} bp_btb_entry_s;
```

| Entry in BTB | Corresponds To              |
| ------------ | --------------------------- |
| v            | Valid bit                   |
| jmp          | Whether the branch is taken |
| tag          | Branch Tag                  |
| tgt          | Branch Target Instruction   |



__btb_taken__ is the variable that Instruction Fetch Units use to determine if the next program counter should be the branch target.

__btb_taken__ is defined as:

```verilog
assign btb_taken = btb_br_tgt_v_lo & (bht_val_lo[1] | btb_br_tgt_jmp_lo);
```

In other words, branch will be predicted taken if the saturation counter in __Branch History Table__ is strongly taken or the branch target has been taken before.





## Branch History Table in Black Parrot

The comment in bp_fe_bht.sv file explains the implementation of Black Parrot BHT:

> Branch History Table (BHT) records the information of the branch history, i.e. branch taken or not taken. Each entry consists of 2 bit saturation counter. If the counter value is in the positive regime, the BHT predicts "taken"; if the counter value is in the negative regime, the BHT predicts "not taken". The implementation of BHT is native to this design.



Branch History Table uses __bsg_mem_1r1w_sync__ memory module. The default number of elements inside is defined by __bht_els_lp__, which is 2^(bht_index_width=9 + ghist_width_p=2)=__2048__. 



## Configurations for Black Parrot

All configuration parameters can be found in __bp_common_aviary_pkgdef.svh__. Below are the default parameters for the branch prediction part, which are defined in the struct __bp_default_cfg_p__.

| Parameter     | Size |
| ------------- | ---- |
| btb_tag_width | 9    |
| btb_idx_width | 6    |
| bht_idx_width | 9    |
| ghist_width   | 2    |

