
#pattern = "or a1, a2; \
#        shl a2, cl; \
#        and ecx, 1Fh; \
#        mov ecx, a3; \
#        shr a1, cl; \
#        and ecx, 1Fh; \
#        neg ecx; \
#        mov ecx, a3; \
#        mov a1, a2" 

'''
pattern = " \
    mov a1, a2; \
    mov ecx, a3; \
    neg ecx; \
    and ecx, 1Fh; \
    shr a1, cl; \
    mov ecx, a3; \
    and ecx, 1Fh; \
    shl a2, cl; \
    or a1, a2; \
    "
'''
pattern = " \
    mov ecx, a3; \
    neg ecx; \
    and ecx, 1Fh; \
    mov a1, a2; \
    shr a1, cl; \
    mov ecx, a3; \
    and ecx, 1Fh; \
    shl a2, cl; \
    or a1, a2; \
    "

replaceWith = " \
    mov ecx, a3; \
    nop; \
    nop; \
    mov a1, a2; \
    nop; \
    nop; \
    nop; \
    rol a1, cl; \
    nop; \
    " 
pattern1 = " \
    shr a1, cl; \
    shl a2, cl; \
    or a1, a2; \
    "
replaceWith1 = " \
    nop; \
    rol a1, cl; \
    nop; \
    "
pattern2 = " \
    shl a1, cl; \
    shr a2, cl; \
    or a1, a2; \
    "
replaceWith2 = " \
    nop; \
    ror a1, cl; \
    nop; \
    "
pattern3 = " \
    shr a3, cl; \
    shl a2, cl; \
    mov a1, a3; \
    or a1, a2; \
"
replaceWith3 = " \
    nop; \
    rol a2, cl; \
    nop; \
    mov a1, a2; \
    "

pattern4 = " \
    shl a3, cl; \
    shr a2, cl; \
    mov a1, a3; \
    or a1, a2; \
    "
replaceWith4 = " \
    nop; \
    ror a2, cl; \
    nop; \
    mov a1, a2; \
    "
pattern5 = " \
    shr a3, cl; \
    mov a1, a3; \
    shl a2, cl; \
    or a1, a2; \
    "
replaceWith5 = " \
    nop; \
    nop; \
    rol a2, cl; \
    mov a1, a2; \
    "
pattern6 = " \
    shl a3, cl; \
    mov a1, a3; \
    shr a2, cl; \
    or a1, a2; \
    "
replaceWith6 = " \
    nop; \
    nop; \
    ror a2, cl; \
    mov a1, a2; \
    "
pattern7 = " \
    shr a2, cl; \
    shl a1, cl; \
    or a1, a2; \
    "
replaceWith7 = " \
    nop; \
    rol a1, cl; \
    nop; \
    "

pattern8 = " \
    shl a2, cl; \
    shr a1, cl; \
    or a1, a2; \
    "
replaceWith8 = " \
    nop; \
    ror a1, cl; \
    nop; \
    "
p9 = " \
    mov ecx, a2; \
    neg ecx; \
    rol a1, cl; \
    "
r9 = " \
    mov ecx, a2; \
    nop; \
    ror a1, cl; \
    "

p10 = " \
    mov ecx, a2; \
    neg ecx; \
    ror a1, cl; \
    "
r10 = " \
    mov ecx, a2; \
    nop; \
    rol a1, cl; \
    "

p11 = " \
    mov ecx, a1; \
    neg ecx; \
    ror a1, cl; \
    "
r11 = " \
    mov ecx, a1; \
    nop; \
    rol a1, cl; \
    "

p12 = " \
    mov ecx, a1; \
    neg ecx; \
    rol a1, cl; \
    "
r12 = " \
    mov ecx, a1; \
    nop; \
    ror a1, cl; \
    "
p13 = "\
    mov ecx, a2; \
    neg ecx; \
    mov ecx, a2; \
    rol a1, cl; \
    "

r13 = "\
    nop; \
    nop; \
    mov ecx, a2; \
    rol a1, cl; \
    "
PATTERNS = [ 
        (pattern1, replaceWith1), 
        (pattern2, replaceWith2), 
        (pattern3, replaceWith3), 
        (pattern4, replaceWith4), 
        (pattern5, replaceWith5), 
        (pattern6, replaceWith6),
        (pattern7, replaceWith7),
        (pattern8, replaceWith8),
        (p9, r9),
        (p10, r10),
        (p11, r11),
        (p12, r12),
        (p13, r13),
        #pattern8, 
        #pattern9, 
        #pattern10, 
        #pattern11, 
        #pattern12, 
        #pattern13, 
        ]
        
