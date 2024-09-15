	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 4
	.file	1 "/Users/danielseo/Desktop/\355\230\270\354\204\234\353\214\200_\354\244\221\354\232\224/1\355\225\231\353\205\204 2\355\225\231\352\270\260/C\355\224\204\353\241\234\352\267\270\353\236\230\353\260\215_\354\235\221\354\232\251/Hoseo_C_programming/Study_files" "Main.c"
	.globl	_inputRandomArray               ; -- Begin function inputRandomArray
	.p2align	2
_inputRandomArray:                      ; @inputRandomArray
Lfunc_begin0:
	.loc	1 25 0                          ; Main.c:25:0
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	str	w1, [sp, #4]
Ltmp0:
	.loc	1 26 13 prologue_end            ; Main.c:26:13
	str	wzr, [sp]
	.loc	1 26 9 is_stmt 0                ; Main.c:26:9
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
Ltmp1:
	.loc	1 26 18                         ; Main.c:26:18
	ldr	w8, [sp]
	.loc	1 26 20                         ; Main.c:26:20
	ldr	w9, [sp, #4]
	.loc	1 26 19                         ; Main.c:26:19
	subs	w8, w8, w9
	cset	w8, ge
Ltmp2:
	.loc	1 26 5                          ; Main.c:26:5
	tbnz	w8, #0, LBB0_4
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
Ltmp3:
	.loc	1 27 22 is_stmt 1               ; Main.c:27:22
	bl	_rand
	mov	w9, #100
	.loc	1 27 29 is_stmt 0               ; Main.c:27:29
	sdiv	w8, w0, w9
	mul	w8, w8, w9
	subs	w8, w0, w8
	.loc	1 27 11                         ; Main.c:27:11
	ldr	x9, [sp, #8]
	.loc	1 27 17                         ; Main.c:27:17
	ldrsw	x10, [sp]
	.loc	1 27 20                         ; Main.c:27:20
	str	w8, [x9, x10, lsl #2]
	.loc	1 28 5 is_stmt 1                ; Main.c:28:5
	b	LBB0_3
Ltmp4:
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	.loc	1 26 27                         ; Main.c:26:27
	ldr	w8, [sp]
	add	w8, w8, #1
	str	w8, [sp]
	.loc	1 26 5 is_stmt 0                ; Main.c:26:5
	b	LBB0_1
Ltmp5:
LBB0_4:
	.loc	1 29 1 is_stmt 1                ; Main.c:29:1
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
Ltmp6:
Lfunc_end0:
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
Lfunc_begin1:
	.loc	1 33 0                          ; Main.c:33:0
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #464
	.cfi_def_cfa_offset 464
	stp	x28, x27, [sp, #432]            ; 16-byte Folded Spill
	stp	x29, x30, [sp, #448]            ; 16-byte Folded Spill
	add	x29, sp, #448
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w27, -24
	.cfi_offset w28, -32
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-24]
	str	wzr, [sp, #20]
	mov	x0, #0
Ltmp7:
	.loc	1 130 11 prologue_end           ; Main.c:130:11
	bl	_time
                                        ; kill: def $w0 killed $w0 killed $x0
	.loc	1 130 5 is_stmt 0               ; Main.c:130:5
	bl	_srand
	add	x0, sp, #24
	mov	w1, #100
	.loc	1 131 5 is_stmt 1               ; Main.c:131:5
	bl	_inputRandomArray
Ltmp8:
	.loc	1 133 13                        ; Main.c:133:13
	str	wzr, [sp, #16]
	.loc	1 133 9 is_stmt 0               ; Main.c:133:9
	b	LBB1_1
LBB1_1:                                 ; =>This Inner Loop Header: Depth=1
Ltmp9:
	.loc	1 133 18                        ; Main.c:133:18
	ldr	w8, [sp, #16]
	.loc	1 133 19                        ; Main.c:133:19
	subs	w8, w8, #100
	cset	w8, ge
Ltmp10:
	.loc	1 133 5                         ; Main.c:133:5
	tbnz	w8, #0, LBB1_6
	b	LBB1_2
LBB1_2:                                 ;   in Loop: Header=BB1_1 Depth=1
Ltmp11:
	.loc	1 134 32 is_stmt 1              ; Main.c:134:32
	ldrsw	x9, [sp, #16]
	add	x8, sp, #24
	.loc	1 134 25 is_stmt 0              ; Main.c:134:25
	ldr	w9, [x8, x9, lsl #2]
                                        ; implicit-def: $x8
	mov	x8, x9
	.loc	1 134 9                         ; Main.c:134:9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
Ltmp12:
	.loc	1 135 13 is_stmt 1              ; Main.c:135:13
	ldr	w8, [sp, #16]
	.loc	1 135 14 is_stmt 0              ; Main.c:135:14
	add	w8, w8, #1
	mov	w10, #10
	.loc	1 135 18                        ; Main.c:135:18
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	.loc	1 135 23                        ; Main.c:135:23
	subs	w8, w8, #0
	cset	w8, ne
Ltmp13:
	.loc	1 135 12                        ; Main.c:135:12
	tbnz	w8, #0, LBB1_4
	b	LBB1_3
LBB1_3:                                 ;   in Loop: Header=BB1_1 Depth=1
	.loc	1 0 12                          ; Main.c:0:12
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
Ltmp14:
	.loc	1 136 13 is_stmt 1              ; Main.c:136:13
	bl	_printf
	.loc	1 137 9                         ; Main.c:137:9
	b	LBB1_4
Ltmp15:
LBB1_4:                                 ;   in Loop: Header=BB1_1 Depth=1
	.loc	1 138 5                         ; Main.c:138:5
	b	LBB1_5
Ltmp16:
LBB1_5:                                 ;   in Loop: Header=BB1_1 Depth=1
	.loc	1 133 27                        ; Main.c:133:27
	ldr	w8, [sp, #16]
	add	w8, w8, #1
	str	w8, [sp, #16]
	.loc	1 133 5 is_stmt 0               ; Main.c:133:5
	b	LBB1_1
Ltmp17:
LBB1_6:
	.loc	1 140 5 is_stmt 1               ; Main.c:140:5
	ldur	x9, [x29, #-24]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	cset	w8, eq
	tbnz	w8, #0, LBB1_8
	b	LBB1_7
LBB1_7:
	bl	___stack_chk_fail
LBB1_8:
	.loc	1 0 5 is_stmt 0                 ; Main.c:0:5
	mov	w0, #0
	.loc	1 140 5                         ; Main.c:140:5
	ldp	x29, x30, [sp, #448]            ; 16-byte Folded Reload
	ldp	x28, x27, [sp, #432]            ; 16-byte Folded Reload
	add	sp, sp, #464
	ret
Ltmp18:
Lfunc_end1:
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%3d\n"

l_.str.1:                               ; @.str.1
	.asciz	"\n"

	.section	__DWARF,__debug_abbrev,regular,debug
Lsection_abbrev:
	.byte	1                               ; Abbreviation Code
	.byte	17                              ; DW_TAG_compile_unit
	.byte	1                               ; DW_CHILDREN_yes
	.byte	37                              ; DW_AT_producer
	.byte	14                              ; DW_FORM_strp
	.byte	19                              ; DW_AT_language
	.byte	5                               ; DW_FORM_data2
	.byte	3                               ; DW_AT_name
	.byte	14                              ; DW_FORM_strp
	.ascii	"\202|"                         ; DW_AT_LLVM_sysroot
	.byte	14                              ; DW_FORM_strp
	.ascii	"\357\177"                      ; DW_AT_APPLE_sdk
	.byte	14                              ; DW_FORM_strp
	.byte	16                              ; DW_AT_stmt_list
	.byte	23                              ; DW_FORM_sec_offset
	.byte	27                              ; DW_AT_comp_dir
	.byte	14                              ; DW_FORM_strp
	.byte	17                              ; DW_AT_low_pc
	.byte	1                               ; DW_FORM_addr
	.byte	18                              ; DW_AT_high_pc
	.byte	6                               ; DW_FORM_data4
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	2                               ; Abbreviation Code
	.byte	52                              ; DW_TAG_variable
	.byte	0                               ; DW_CHILDREN_no
	.byte	73                              ; DW_AT_type
	.byte	19                              ; DW_FORM_ref4
	.byte	58                              ; DW_AT_decl_file
	.byte	11                              ; DW_FORM_data1
	.byte	59                              ; DW_AT_decl_line
	.byte	11                              ; DW_FORM_data1
	.byte	2                               ; DW_AT_location
	.byte	24                              ; DW_FORM_exprloc
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	3                               ; Abbreviation Code
	.byte	1                               ; DW_TAG_array_type
	.byte	1                               ; DW_CHILDREN_yes
	.byte	73                              ; DW_AT_type
	.byte	19                              ; DW_FORM_ref4
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	4                               ; Abbreviation Code
	.byte	33                              ; DW_TAG_subrange_type
	.byte	0                               ; DW_CHILDREN_no
	.byte	73                              ; DW_AT_type
	.byte	19                              ; DW_FORM_ref4
	.byte	55                              ; DW_AT_count
	.byte	11                              ; DW_FORM_data1
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	5                               ; Abbreviation Code
	.byte	36                              ; DW_TAG_base_type
	.byte	0                               ; DW_CHILDREN_no
	.byte	3                               ; DW_AT_name
	.byte	14                              ; DW_FORM_strp
	.byte	62                              ; DW_AT_encoding
	.byte	11                              ; DW_FORM_data1
	.byte	11                              ; DW_AT_byte_size
	.byte	11                              ; DW_FORM_data1
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	6                               ; Abbreviation Code
	.byte	36                              ; DW_TAG_base_type
	.byte	0                               ; DW_CHILDREN_no
	.byte	3                               ; DW_AT_name
	.byte	14                              ; DW_FORM_strp
	.byte	11                              ; DW_AT_byte_size
	.byte	11                              ; DW_FORM_data1
	.byte	62                              ; DW_AT_encoding
	.byte	11                              ; DW_FORM_data1
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	7                               ; Abbreviation Code
	.byte	46                              ; DW_TAG_subprogram
	.byte	1                               ; DW_CHILDREN_yes
	.byte	17                              ; DW_AT_low_pc
	.byte	1                               ; DW_FORM_addr
	.byte	18                              ; DW_AT_high_pc
	.byte	6                               ; DW_FORM_data4
	.byte	64                              ; DW_AT_frame_base
	.byte	24                              ; DW_FORM_exprloc
	.byte	3                               ; DW_AT_name
	.byte	14                              ; DW_FORM_strp
	.byte	58                              ; DW_AT_decl_file
	.byte	11                              ; DW_FORM_data1
	.byte	59                              ; DW_AT_decl_line
	.byte	11                              ; DW_FORM_data1
	.byte	39                              ; DW_AT_prototyped
	.byte	25                              ; DW_FORM_flag_present
	.byte	63                              ; DW_AT_external
	.byte	25                              ; DW_FORM_flag_present
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	8                               ; Abbreviation Code
	.byte	5                               ; DW_TAG_formal_parameter
	.byte	0                               ; DW_CHILDREN_no
	.byte	2                               ; DW_AT_location
	.byte	24                              ; DW_FORM_exprloc
	.byte	3                               ; DW_AT_name
	.byte	14                              ; DW_FORM_strp
	.byte	58                              ; DW_AT_decl_file
	.byte	11                              ; DW_FORM_data1
	.byte	59                              ; DW_AT_decl_line
	.byte	11                              ; DW_FORM_data1
	.byte	73                              ; DW_AT_type
	.byte	19                              ; DW_FORM_ref4
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	9                               ; Abbreviation Code
	.byte	11                              ; DW_TAG_lexical_block
	.byte	1                               ; DW_CHILDREN_yes
	.byte	17                              ; DW_AT_low_pc
	.byte	1                               ; DW_FORM_addr
	.byte	18                              ; DW_AT_high_pc
	.byte	6                               ; DW_FORM_data4
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	10                              ; Abbreviation Code
	.byte	52                              ; DW_TAG_variable
	.byte	0                               ; DW_CHILDREN_no
	.byte	2                               ; DW_AT_location
	.byte	24                              ; DW_FORM_exprloc
	.byte	3                               ; DW_AT_name
	.byte	14                              ; DW_FORM_strp
	.byte	58                              ; DW_AT_decl_file
	.byte	11                              ; DW_FORM_data1
	.byte	59                              ; DW_AT_decl_line
	.byte	11                              ; DW_FORM_data1
	.byte	73                              ; DW_AT_type
	.byte	19                              ; DW_FORM_ref4
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	11                              ; Abbreviation Code
	.byte	46                              ; DW_TAG_subprogram
	.byte	1                               ; DW_CHILDREN_yes
	.byte	17                              ; DW_AT_low_pc
	.byte	1                               ; DW_FORM_addr
	.byte	18                              ; DW_AT_high_pc
	.byte	6                               ; DW_FORM_data4
	.byte	64                              ; DW_AT_frame_base
	.byte	24                              ; DW_FORM_exprloc
	.byte	3                               ; DW_AT_name
	.byte	14                              ; DW_FORM_strp
	.byte	58                              ; DW_AT_decl_file
	.byte	11                              ; DW_FORM_data1
	.byte	59                              ; DW_AT_decl_line
	.byte	11                              ; DW_FORM_data1
	.byte	39                              ; DW_AT_prototyped
	.byte	25                              ; DW_FORM_flag_present
	.byte	73                              ; DW_AT_type
	.byte	19                              ; DW_FORM_ref4
	.byte	63                              ; DW_AT_external
	.byte	25                              ; DW_FORM_flag_present
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	12                              ; Abbreviation Code
	.byte	15                              ; DW_TAG_pointer_type
	.byte	0                               ; DW_CHILDREN_no
	.byte	73                              ; DW_AT_type
	.byte	19                              ; DW_FORM_ref4
	.byte	0                               ; EOM(1)
	.byte	0                               ; EOM(2)
	.byte	0                               ; EOM(3)
	.section	__DWARF,__debug_info,regular,debug
Lsection_info:
Lcu_begin0:
.set Lset0, Ldebug_info_end0-Ldebug_info_start0 ; Length of Unit
	.long	Lset0
Ldebug_info_start0:
	.short	4                               ; DWARF version number
.set Lset1, Lsection_abbrev-Lsection_abbrev ; Offset Into Abbrev. Section
	.long	Lset1
	.byte	8                               ; Address Size (in bytes)
	.byte	1                               ; Abbrev [1] 0xb:0x11a DW_TAG_compile_unit
	.long	0                               ; DW_AT_producer
	.short	12                              ; DW_AT_language
	.long	46                              ; DW_AT_name
	.long	53                              ; DW_AT_LLVM_sysroot
	.long	105                             ; DW_AT_APPLE_sdk
.set Lset2, Lline_table_start0-Lsection_line ; DW_AT_stmt_list
	.long	Lset2
	.long	116                             ; DW_AT_comp_dir
	.quad	Lfunc_begin0                    ; DW_AT_low_pc
.set Lset3, Lfunc_end1-Lfunc_begin0     ; DW_AT_high_pc
	.long	Lset3
	.byte	2                               ; Abbrev [2] 0x32:0x11 DW_TAG_variable
	.long	67                              ; DW_AT_type
	.byte	1                               ; DW_AT_decl_file
	.byte	134                             ; DW_AT_decl_line
	.byte	9                               ; DW_AT_location
	.byte	3
	.quad	l_.str
	.byte	3                               ; Abbrev [3] 0x43:0xc DW_TAG_array_type
	.long	79                              ; DW_AT_type
	.byte	4                               ; Abbrev [4] 0x48:0x6 DW_TAG_subrange_type
	.long	86                              ; DW_AT_type
	.byte	5                               ; DW_AT_count
	.byte	0                               ; End Of Children Mark
	.byte	5                               ; Abbrev [5] 0x4f:0x7 DW_TAG_base_type
	.long	230                             ; DW_AT_name
	.byte	6                               ; DW_AT_encoding
	.byte	1                               ; DW_AT_byte_size
	.byte	6                               ; Abbrev [6] 0x56:0x7 DW_TAG_base_type
	.long	235                             ; DW_AT_name
	.byte	8                               ; DW_AT_byte_size
	.byte	7                               ; DW_AT_encoding
	.byte	2                               ; Abbrev [2] 0x5d:0x11 DW_TAG_variable
	.long	110                             ; DW_AT_type
	.byte	1                               ; DW_AT_decl_file
	.byte	136                             ; DW_AT_decl_line
	.byte	9                               ; DW_AT_location
	.byte	3
	.quad	l_.str.1
	.byte	3                               ; Abbrev [3] 0x6e:0xc DW_TAG_array_type
	.long	79                              ; DW_AT_type
	.byte	4                               ; Abbrev [4] 0x73:0x6 DW_TAG_subrange_type
	.long	86                              ; DW_AT_type
	.byte	2                               ; DW_AT_count
	.byte	0                               ; End Of Children Mark
	.byte	7                               ; Abbrev [7] 0x7a:0x4e DW_TAG_subprogram
	.quad	Lfunc_begin0                    ; DW_AT_low_pc
.set Lset4, Lfunc_end0-Lfunc_begin0     ; DW_AT_high_pc
	.long	Lset4
	.byte	1                               ; DW_AT_frame_base
	.byte	109
	.long	256                             ; DW_AT_name
	.byte	1                               ; DW_AT_decl_file
	.byte	24                              ; DW_AT_decl_line
                                        ; DW_AT_prototyped
                                        ; DW_AT_external
	.byte	8                               ; Abbrev [8] 0x8f:0xe DW_TAG_formal_parameter
	.byte	2                               ; DW_AT_location
	.byte	143
	.byte	8
	.long	282                             ; DW_AT_name
	.byte	1                               ; DW_AT_decl_file
	.byte	24                              ; DW_AT_decl_line
	.long	275                             ; DW_AT_type
	.byte	8                               ; Abbrev [8] 0x9d:0xe DW_TAG_formal_parameter
	.byte	2                               ; DW_AT_location
	.byte	143
	.byte	4
	.long	288                             ; DW_AT_name
	.byte	1                               ; DW_AT_decl_file
	.byte	24                              ; DW_AT_decl_line
	.long	268                             ; DW_AT_type
	.byte	9                               ; Abbrev [9] 0xab:0x1c DW_TAG_lexical_block
	.quad	Ltmp0                           ; DW_AT_low_pc
.set Lset5, Ltmp5-Ltmp0                 ; DW_AT_high_pc
	.long	Lset5
	.byte	10                              ; Abbrev [10] 0xb8:0xe DW_TAG_variable
	.byte	2                               ; DW_AT_location
	.byte	143
	.byte	0
	.long	293                             ; DW_AT_name
	.byte	1                               ; DW_AT_decl_file
	.byte	26                              ; DW_AT_decl_line
	.long	268                             ; DW_AT_type
	.byte	0                               ; End Of Children Mark
	.byte	0                               ; End Of Children Mark
	.byte	11                              ; Abbrev [11] 0xc8:0x44 DW_TAG_subprogram
	.quad	Lfunc_begin1                    ; DW_AT_low_pc
.set Lset6, Lfunc_end1-Lfunc_begin1     ; DW_AT_high_pc
	.long	Lset6
	.byte	1                               ; DW_AT_frame_base
	.byte	109
	.long	273                             ; DW_AT_name
	.byte	1                               ; DW_AT_decl_file
	.byte	32                              ; DW_AT_decl_line
                                        ; DW_AT_prototyped
	.long	268                             ; DW_AT_type
                                        ; DW_AT_external
	.byte	10                              ; Abbrev [10] 0xe1:0xe DW_TAG_variable
	.byte	2                               ; DW_AT_location
	.byte	143
	.byte	24
	.long	295                             ; DW_AT_name
	.byte	1                               ; DW_AT_decl_file
	.byte	128                             ; DW_AT_decl_line
	.long	280                             ; DW_AT_type
	.byte	9                               ; Abbrev [9] 0xef:0x1c DW_TAG_lexical_block
	.quad	Ltmp8                           ; DW_AT_low_pc
.set Lset7, Ltmp17-Ltmp8                ; DW_AT_high_pc
	.long	Lset7
	.byte	10                              ; Abbrev [10] 0xfc:0xe DW_TAG_variable
	.byte	2                               ; DW_AT_location
	.byte	143
	.byte	16
	.long	293                             ; DW_AT_name
	.byte	1                               ; DW_AT_decl_file
	.byte	133                             ; DW_AT_decl_line
	.long	268                             ; DW_AT_type
	.byte	0                               ; End Of Children Mark
	.byte	0                               ; End Of Children Mark
	.byte	5                               ; Abbrev [5] 0x10c:0x7 DW_TAG_base_type
	.long	278                             ; DW_AT_name
	.byte	5                               ; DW_AT_encoding
	.byte	4                               ; DW_AT_byte_size
	.byte	12                              ; Abbrev [12] 0x113:0x5 DW_TAG_pointer_type
	.long	268                             ; DW_AT_type
	.byte	3                               ; Abbrev [3] 0x118:0xc DW_TAG_array_type
	.long	268                             ; DW_AT_type
	.byte	4                               ; Abbrev [4] 0x11d:0x6 DW_TAG_subrange_type
	.long	86                              ; DW_AT_type
	.byte	100                             ; DW_AT_count
	.byte	0                               ; End Of Children Mark
	.byte	0                               ; End Of Children Mark
Ldebug_info_end0:
	.section	__DWARF,__debug_str,regular,debug
Linfo_string:
	.asciz	"Apple clang version 15.0.0 (clang-1500.3.9.4)" ; string offset=0
	.asciz	"Main.c"                        ; string offset=46
	.asciz	"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk" ; string offset=53
	.asciz	"MacOSX.sdk"                    ; string offset=105
	.asciz	"/Users/danielseo/Desktop/\355\230\270\354\204\234\353\214\200_\354\244\221\354\232\224/1\355\225\231\353\205\204 2\355\225\231\352\270\260/C\355\224\204\353\241\234\352\267\270\353\236\230\353\260\215_\354\235\221\354\232\251/Hoseo_C_programming/Study_files" ; string offset=116
	.asciz	"char"                          ; string offset=230
	.asciz	"__ARRAY_SIZE_TYPE__"           ; string offset=235
	.byte	0                               ; string offset=255
	.asciz	"inputRandomArray"              ; string offset=256
	.asciz	"main"                          ; string offset=273
	.asciz	"int"                           ; string offset=278
	.asciz	"array"                         ; string offset=282
	.asciz	"size"                          ; string offset=288
	.asciz	"i"                             ; string offset=293
	.asciz	"number"                        ; string offset=295
	.section	__DWARF,__apple_names,regular,debug
Lnames_begin:
	.long	1212240712                      ; Header Magic
	.short	1                               ; Header Version
	.short	0                               ; Header Hash Function
	.long	3                               ; Header Bucket Count
	.long	3                               ; Header Hash Count
	.long	12                              ; Header Data Length
	.long	0                               ; HeaderData Die Offset Base
	.long	1                               ; HeaderData Atom Count
	.short	1                               ; DW_ATOM_die_offset
	.short	6                               ; DW_FORM_data4
	.long	-1                              ; Bucket 0
	.long	0                               ; Bucket 1
	.long	1                               ; Bucket 2
	.long	2090499946                      ; Hash in Bucket 1
	.long	5381                            ; Hash in Bucket 2
	.long	1133913173                      ; Hash in Bucket 2
.set Lset8, LNames0-Lnames_begin        ; Offset in Bucket 1
	.long	Lset8
.set Lset9, LNames1-Lnames_begin        ; Offset in Bucket 2
	.long	Lset9
.set Lset10, LNames2-Lnames_begin       ; Offset in Bucket 2
	.long	Lset10
LNames0:
	.long	273                             ; main
	.long	1                               ; Num DIEs
	.long	200
	.long	0
LNames1:
	.long	255                             ; 
	.long	2                               ; Num DIEs
	.long	50
	.long	93
	.long	0
LNames2:
	.long	256                             ; inputRandomArray
	.long	1                               ; Num DIEs
	.long	122
	.long	0
	.section	__DWARF,__apple_objc,regular,debug
Lobjc_begin:
	.long	1212240712                      ; Header Magic
	.short	1                               ; Header Version
	.short	0                               ; Header Hash Function
	.long	1                               ; Header Bucket Count
	.long	0                               ; Header Hash Count
	.long	12                              ; Header Data Length
	.long	0                               ; HeaderData Die Offset Base
	.long	1                               ; HeaderData Atom Count
	.short	1                               ; DW_ATOM_die_offset
	.short	6                               ; DW_FORM_data4
	.long	-1                              ; Bucket 0
	.section	__DWARF,__apple_namespac,regular,debug
Lnamespac_begin:
	.long	1212240712                      ; Header Magic
	.short	1                               ; Header Version
	.short	0                               ; Header Hash Function
	.long	1                               ; Header Bucket Count
	.long	0                               ; Header Hash Count
	.long	12                              ; Header Data Length
	.long	0                               ; HeaderData Die Offset Base
	.long	1                               ; HeaderData Atom Count
	.short	1                               ; DW_ATOM_die_offset
	.short	6                               ; DW_FORM_data4
	.long	-1                              ; Bucket 0
	.section	__DWARF,__apple_types,regular,debug
Ltypes_begin:
	.long	1212240712                      ; Header Magic
	.short	1                               ; Header Version
	.short	0                               ; Header Hash Function
	.long	3                               ; Header Bucket Count
	.long	3                               ; Header Hash Count
	.long	20                              ; Header Data Length
	.long	0                               ; HeaderData Die Offset Base
	.long	3                               ; HeaderData Atom Count
	.short	1                               ; DW_ATOM_die_offset
	.short	6                               ; DW_FORM_data4
	.short	3                               ; DW_ATOM_die_tag
	.short	5                               ; DW_FORM_data2
	.short	4                               ; DW_ATOM_type_flags
	.short	11                              ; DW_FORM_data1
	.long	-1                              ; Bucket 0
	.long	-1                              ; Bucket 1
	.long	0                               ; Bucket 2
	.long	193495088                       ; Hash in Bucket 2
	.long	2090147939                      ; Hash in Bucket 2
	.long	-594775205                      ; Hash in Bucket 2
.set Lset11, Ltypes0-Ltypes_begin       ; Offset in Bucket 2
	.long	Lset11
.set Lset12, Ltypes1-Ltypes_begin       ; Offset in Bucket 2
	.long	Lset12
.set Lset13, Ltypes2-Ltypes_begin       ; Offset in Bucket 2
	.long	Lset13
Ltypes0:
	.long	278                             ; int
	.long	1                               ; Num DIEs
	.long	268
	.short	36
	.byte	0
	.long	0
Ltypes1:
	.long	230                             ; char
	.long	1                               ; Num DIEs
	.long	79
	.short	36
	.byte	0
	.long	0
Ltypes2:
	.long	235                             ; __ARRAY_SIZE_TYPE__
	.long	1                               ; Num DIEs
	.long	86
	.short	36
	.byte	0
	.long	0
.subsections_via_symbols
	.section	__DWARF,__debug_line,regular,debug
Lsection_line:
Lline_table_start0:
