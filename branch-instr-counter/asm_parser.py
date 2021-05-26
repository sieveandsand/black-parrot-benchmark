import sys
from typing import List, Tuple

COND_BRANCH_INSTRS = {'beq', 'bne', 'blt', 'bge','blte', 'bgeu'}
UNCOND_BRANCH_INSTRS = {'j', 'jal', 'jalr'}


def get_asm_from_dump(filename: str) -> List[List[str]]:
    asm_instrs = []
    f_h = open(filename, 'r')
    lines = f_h.readlines()
    for line in lines:
        tokens = line.split()
        asm_instrs.append(tokens)
    return asm_instrs


def get_counts(asm_instrs: List[List[str]]) -> Tuple[int, int]:
    cond_br_count = 0
    uncond_br_count = 0
    for instr_line in asm_instrs:
        if len(instr_line) < 3:
            continue
        instr = instr_line[2].lower()
        if instr in COND_BRANCH_INSTRS:
            cond_br_count += 1
        elif instr in UNCOND_BRANCH_INSTRS:
            uncond_br_count += 1
    return cond_br_count, uncond_br_count


if __name__=="__main__":
    if len(sys.argv) < 2:
        print('must enter filenames in command line')
        sys.exit()
    f_list = sys.argv[1:]

    for filename in f_list:
        asm_instrs = get_asm_from_dump(filename)
        cond_count, uncond_count = get_counts(asm_instrs)

        total_count = cond_count + uncond_count
        cond_pct = cond_count / total_count
        uncond_pct = uncond_count / total_count

        print('{}: total: {} \t conditional: {} ({}) \t unconditional: {} ({})'.format(
            filename, total_count, cond_count, cond_pct, uncond_count, uncond_pct))

