# Black Parrot Benchmark
This repo aims to benchmark the performance of branch prediction in Black Parrot and improve its performance.



For more details on Black Parrot, check out:

https://github.com/black-parrot/black-parrot



## Overview

get-country checks branch prediction performance



checkout this article:
https://blog.cloudflare.com/branch-predictor/articlearticle



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



## Branch History Table in Black Parrot