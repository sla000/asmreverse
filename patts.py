
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

replaceWith1 = " \
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
