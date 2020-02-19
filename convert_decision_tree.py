import os, sys

filepath = sys.argv[1]

lines = []
with open(filepath) as fp:
    line = fp.readline()
    while line:
        lines.append(line)
        line = fp.readline()

new_lines = []
new_lines.append("#include <gb/gb.h>")
new_lines.append("#include <gb/drawing.h>")
new_lines.append("#include <rand.h>")
new_lines.append("#include <stdio.h>")
new_lines.append("")
new_lines.append("UINT8 img[784];")
new_lines.append("UINT8 c;")
new_lines.append("UINT16 x = 80, y = 72+4, i=3;")
new_lines.append("UINT8 debug = 0;")
new_lines.append("UINT8 draw = 1;")
new_lines.append("")
new_lines.append("UINT8 inference() {")
new_lines.append("    UINT8 c;")

for i_l in range(len(lines)): 
    l = lines[i_l]
    i_f = l.find("_") 
    i_t = l.find(">") 
    i_fa = l.find("<=") 
    i_c = l.find(":") 
    if i_f != -1: 
        if i_t != -1: 
            new_lines.append("    "*(i_f//4-2)+"else {")
        else: 
            new_lines.append("    "*(i_f//4-2)+"if (img["+l[i_f+1:i_fa-1]+"]==0){")
    elif i_c != -1: 
        new_lines.append("    "*(1+i_c//4-2)+"c = "+l[i_c+2:i_c+3]+";")

for i_l in range(len(new_lines)):
    if i_l <15:
        continue
    i_if = new_lines[i_l].find("if")
    try:
        i_if_n = new_lines[i_l+1].find("if")
        if i_if_n == -1:
            i_if_n = new_lines[i_l+1].find("else")
    except:
        i_if_n = new_lines[4].find("if")
        if i_if_n == -1:
            i_if_n = new_lines[4].find("else")

    i_c = new_lines[i_l].find("c")
    if i_c != -1:
        num_brackets = (i_c-i_if_n)//4
        new_lines[i_l]=new_lines[i_l]+"}"*num_brackets
new_lines[-1]=new_lines[-1][:-1]
new_lines.append('    return c;')
new_lines.append("}")

with open('model_end', 'r') as model_end:
    line = model_end.readline()
    while line:
        new_lines.append(line[:-1])
        line = model_end.readline()

with open('model.c', 'w') as model:
    for l in new_lines:
        model.write(l+"\n")
