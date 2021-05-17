/**
 * bp configuration file for benchmark testing.
 * The difference between this file and the file in bp repo
 * is mostly the branch config part.
 */



localparam bp_proc_param_s bp_default_cfg_p =
  '{multicore : 0
    ,cc_x_dim : 1
    ,cc_y_dim : 1
    ,ic_y_dim : 1
    ,mc_y_dim : 0
    ,cac_x_dim: 0
    ,sac_x_dim: 0
    ,cacc_type: e_cacc_vdp
    ,sacc_type: e_sacc_vdp

    ,num_cce: 1
    ,num_lce: 2

    ,vaddr_width: 39
    ,paddr_width: 40
    // 4 GB
    ,dram_max_size : (1 << 31)
    ,asid_width : 1

    ,boot_pc       : dram_base_addr_gp
    ,boot_in_debug : 0

/*****************************************/
    ,branch_metadata_fwd_width: 35
    ,btb_tag_width            : 9
    ,btb_idx_width            : 6
    ,bht_idx_width            : 9
    ,ghist_width              : 2
/****************************************/
    ,itlb_els_4k : 8
    ,dtlb_els_4k : 8
    ,itlb_els_1g : 2
    ,dtlb_els_1g : 2

    ,lr_sc                : e_l1
    ,amo_swap             : e_none
    ,amo_fetch_logic      : e_none
    ,amo_fetch_arithmetic : e_none

    ,l1_writethrough      : 0
    ,l1_coherent          : 0
    ,dcache_sets          : 64
    ,dcache_assoc         : 8
    ,dcache_block_width   : 512
    ,dcache_fill_width    : 512
    ,icache_sets          : 64
    ,icache_assoc         : 8
    ,icache_block_width   : 512
    ,icache_fill_width    : 512
    ,acache_sets          : 64
    ,acache_assoc         : 8
    ,acache_block_width   : 512
    ,acache_fill_width    : 512

    ,cce_ucode            : 0
    ,cce_pc_width         : 8

    ,l2_en               : 1
    ,l2_data_width       : 64
    ,l2_sets             : 128
    ,l2_assoc            : 8
    ,l2_block_width      : 512
    ,l2_fill_width       : 64
    ,l2_outstanding_reqs : 8

    ,fe_queue_fifo_els : 8
    ,fe_cmd_fifo_els   : 4

    ,async_coh_clk       : 0
    ,coh_noc_max_credits : 8
    ,coh_noc_flit_width  : 128
    ,coh_noc_cid_width   : 2
    ,coh_noc_len_width   : 3

    ,async_mem_clk         : 0
    ,mem_noc_max_credits   : 8
    ,mem_noc_flit_width    : 64
    ,mem_noc_cid_width     : 2
    ,mem_noc_len_width     : 4

    ,async_io_clk         : 0
    ,io_noc_did_width     : 3
    ,io_noc_max_credits   : 16
    ,io_noc_flit_width    : 64
    ,io_noc_cid_width     : 2
    ,io_noc_len_width     : 4
    };
