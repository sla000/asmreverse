#include "stdafx.h"
#include "ObfuscateFunction.h"

#define var_1C -1Ch
#define var_18 -18h
#define var_14 -14h
#define var_10 -10h
#define var_C -0Ch
#define var_8 -8
#define var_4 -4
#define arg_0  8
#define arg_4  0Ch

__declspec( naked ) int ObfuscatedFunc()
{
	__asm
	{
push		ebp
mov		ebp, esp
sub		esp, 1Ch
mov		eax, ecx
push		ebx
mov		ebx, edx
mov		[ebp+var_18], eax
push		esi
mov		esi, [eax]
nop
mov		eax, [ebp+arg_4]
nop
nop
mov		[ebp+var_1C], ebx
push		edi
mov		edi, [ebp+arg_0]
mov		eax, [eax]
mov		edx, eax
sub		edx, [ebx]
mov		[ebp+var_C], edx
mov		edx, eax
mov		edi, [edi]
nop
nop
sub		edi, 141A441Ch
mov		ecx, esi
rol		edx, cl
nop
nop
nop
nop
mov		ebx, edx
nop
mov		eax, esi
mov		ecx, edi
not		edi
sub		edi, esi
rol		ebx, cl
add		edi, 72A51878h
nop
nop
mov		edx, [ebp+var_C]
nop
sub		edx, ebx
nop
sub		edx, esi
nop
rol		ebx, 0Bh
mov		ecx, edi
add		edx, 5F7C160Bh
ror		eax, cl
nop
rol		edx, 5
mov		esi, ebx
rol		edx, 0Eh
sub		esi, edi
mov		[ebp+var_C], edx
neg		ebx
not		esi
xor		esi, ebx
sub		esi, ebx
neg		ebx
xor		ebx, edx
sub		esi, eax
not		ebx
mov		edi, esi
ror		ebx, 7
mov		[ebp+var_14], ebx
mov		ebx, edx
xor		ebx, eax
add		ebx, esi
nop
mov		edx, ebx
nop
neg		edx
nop
nop
mov		ecx, edx
rol		edi, cl
nop
mov		[ebp+var_10], edi
add		ebx, [ebp+var_10]
nop
mov		esi, [ebp+var_14]
mov		edi, esi
nop
mov		ecx, edx
rol		edi, cl
nop
mov		edx, [ebp+var_C]
nop
nop
mov		eax, edx
nop
nop
mov		ecx, ebx
dec		ebx
rol		eax, cl
nop
nop
nop
nop
mov		esi, eax
nop
mov		ecx, ebx
ror		esi, cl
nop
mov		eax, [ebp+var_10]
xor		edi, esi
nop
nop
ror		esi, 6
nop
neg		edi
mov		[ebp+var_14], edi
not		esi
mov		edi, ebx
mov		[ebp+var_10], esi
nop
mov		ecx, eax
rol		eax, 2
rol		edi, cl
mov		edx, eax
nop
sub		edi, 2F36721Eh
sub		edi, esi
nop
nop
nop
nop
mov		ecx, edi
not		edi
ror		edx, cl
nop
mov		eax, [ebp+var_14]
add		eax, esi
neg		edx
rol		eax, 3
mov		esi, edx
add		eax, edi
neg		esi
neg		eax
rol		edi, 0Dh
mov		ebx, eax
nop
nop
nop
mov		ecx, edx
rol		ebx, cl
nop
mov		eax, [ebp+var_10]
add		eax, edx
ror		eax, 6
add		eax, edx
mov		edx, 251CB667h
lea		ecx, [esi+eax]
sub		ecx, edi
sub		edx, eax
lea		edi, [esi+16B67E8Dh]
xor		edi, ecx
mov		eax, edx
not		ecx
ror		edi, 6
mov		[ebp+var_C], ecx
xor		ebx, 172B2A0Bh
mov		esi, [ebp+var_C]
nop
nop
ror		edi, 1
nop
add		edi, 0C4CEE17h
mov		ecx, esi
ror		ebx, 0Ch
rol		ebx, 0Dh
rol		eax, cl
not		ebx
nop
nop
nop
mov		edx, eax
nop
add		ebx, 7D06DD36h
nop
xor		esi, ebx
mov		ecx, edi
mov		[ebp+var_C], esi
xor		edi, ebx
ror		edx, cl
neg		ebx
nop
mov		[ebp+var_14], ebx
nop
nop
nop
sub		edx, 286005A9h
nop
mov		esi, edx
nop
mov		ecx, ebx
rol		esi, cl
nop
nop
nop
nop
not		esi
nop
mov		ecx, edi
rol		esi, 0Ch
rol		ebx, cl
nop
lea		edx, [ebx+edi]
mov		edi, [ebp+var_C]
rol		ebx, 6
mov		eax, edi
add		ebx, 6E128C75h
neg		edx
nop
not		edx
nop
mov		[ebp+var_C], edx
nop
nop
mov		ecx, ebx
xor		ebx, 48440B28h
rol		eax, cl
add		ebx, edx
nop
mov		edi, esi
neg		edi
sub		eax, esi
nop
add		eax, 7008A539h
nop
nop
mov		ecx, esi
ror		edi, 0Fh
rol		edx, cl
neg		edi
nop
mov		esi, edx
ror		edi, 0Bh
nop
ror		edi, 5
nop
mov		edx, eax
nop
add		edi, 5DD8C417h
nop
xor		edi, 1806D633h
mov		ecx, esi
not		esi
ror		edx, cl
nop
add		edx, esi
neg		esi
mov		[ebp+var_14], edx
lea		edx, [ebx+36E5C9D3h]
mov		ebx, [ebp+var_14]
ror		edx, 0Ch
ror		edx, 0Eh
mov		[ebp+var_C], esi
sub		edx, 2546FEF5h
mov		esi, edi
mov		eax, edx
neg		esi
nop
ror		esi, 1
nop
nop
mov		ecx, edi
rol		eax, cl
nop
nop
nop
mov		edx, [ebp+var_C]
nop
mov		edi, eax
nop
mov		ecx, ebx
sub		ebx, edx
ror		edi, cl
not		ebx
nop
not		edx
not		edi
mov		eax, esi
sub		edi, 7E00D620h
add		edx, 1FD500ABh
nop
nop
nop
nop
mov		ecx, edi
rol		edi, 0Eh
add		ebx, edi
rol		eax, cl
ror		ebx, 0Dh
nop
add		edx, ebx
ror		eax, 2
mov		[ebp+var_C], edx
xor		eax, edi
xor		edx, ebx
neg		edi
mov		ebx, [ebp+var_C]
not		edx
ror		edi, 9
add		edx, 54486342h
rol		edi, 5
inc		eax
add		ebx, edx
rol		eax, 2
neg		ebx
inc		eax
ror		edx, 0Eh
add		eax, edi
ror		ebx, 1
nop
mov		esi, eax
nop
neg		edi
nop
nop
mov		ecx, edx
inc		edx
rol		esi, cl
xor		edx, edi
nop
ror		edi, 8
not		edx
ror		edi, 1
nop
mov		eax, edx
nop
not		esi
nop
neg		esi
nop
mov		ecx, ebx
xor		ebx, 5893A33Fh
rol		eax, cl
nop
mov		edx, ebx
neg		eax
sub		edi, eax
xor		edx, eax
xor		esi, edi
mov		[ebp+var_8], edi
neg		esi
add		edx, 0F51A8BEh
xor		ebx, esi
neg		edx
dec		esi
mov		eax, edx
nop
not		ebx
nop
add		ebx, 7B756874h
nop
mov		[ebp+var_C], ebx
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
nop
not		eax
mov		edi, eax
nop
mov		ecx, [ebp+var_8]
rol		edi, cl
nop
mov		eax, esi
not		edi
nop
nop
nop
nop
mov		ecx, edi
xor		edi, 79924B7Ch
rol		eax, cl
nop
neg		edi
mov		[ebp+var_4], eax
nop
ror		edi, 0Dh
mov		esi, eax
rol		edi, 0Bh
nop
nop
nop
neg		esi
nop
mov		ecx, esi
rol		ebx, cl
nop
nop
nop
mov		eax, [ebp+var_8]
neg		ebx
nop
xor		ebx, 0AB94A055h
mov		ecx, esi
ror		eax, cl
nop
mov		edx, edi
sub		edx, ebx
xor		eax, 9606A064h
ror		eax, 2
add		ebx, 2EFF497Ch
sub		edx, eax
mov		[ebp+var_C], ebx
mov		eax, [ebp+var_4]
nop
nop
sub		[ebp+var_C], 62965E36h
sub		eax, edi
nop
add		eax, 5040251Fh
mov		esi, edx
xor		eax, ebx
mov		ebx, edi
nop
mov		ecx, edx
ror		eax, 0Eh
ror		ebx, cl
nop
not		ebx
sub		ebx, 330546B5h
xor		ebx, 0C7EAA28Bh
nop
sub		eax, ebx
nop
mov		[ebp+var_4], eax
nop
mov		edi, ebx
nop
mov		ecx, ebx
rol		esi, cl
nop
mov		edx, eax
nop
neg		edx
nop
nop
xor		esi, 6EB06671h
mov		ecx, edx
ror		edi, cl
nop
mov		ebx, esi
rol		edi, 3
nop
nop
nop
nop
mov		ecx, edi
rol		ebx, cl
nop
mov		esi, [ebp+var_C]
mov		[ebp+var_8], ebx
nop
mov		ebx, esi
nop
mov		eax, edi
mov		ecx, edx
rol		ebx, cl
nop
mov		esi, [ebp+var_8]
nop
rol		ebx, 0Ah
nop
add		ebx, 2B0BF585h
nop
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
mov		edi, [ebp+var_4]
nop
xor		edi, 0CFD4A15Fh
mov		edx, eax
nop
neg		edi
xor		esi, edi
mov		ecx, ebx
ror		esi, 8
ror		esi, 8
xor		ebx, 0D49B6365h
not		esi
add		edi, 18999320h
xor		esi, eax
not		ebx
rol		edx, cl
mov		ecx, esi
nop
not		esi
mov		eax, 34D48B24h
mov		[ebp+var_8], esi
xor		ebx, [ebp+var_8]
sub		eax, edx
xor		ecx, eax
add		eax, edi
neg		ecx
add		eax, ebx
add		esi, ecx
xor		eax, ebx
add		eax, [ebp+var_8]
neg		esi
sub		ebx, esi
mov		[ebp+var_14], ebx
mov		ebx, esi
mov		edi, [ebp+var_14]
neg		ebx
mov		edx, edi
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
mov		edi, eax
nop
nop
nop
nop
mov		ecx, edx
xor		edx, esi
ror		edi, cl
neg		edx
nop
mov		eax, [ebp+var_8]
neg		eax
nop
nop
nop
mov		esi, edx
nop
mov		ecx, eax
rol		esi, cl
nop
mov		edx, eax
xor		edx, 0BE2663CAh
mov		eax, ebx
nop
xor		esi, 24209029h
nop
not		esi
nop
nop
mov		ecx, edx
rol		edx, 0Bh
ror		eax, cl
nop
nop
nop
nop
mov		ebx, edi
nop
mov		ecx, edx
ror		ebx, cl
nop
xor		edx, ebx
not		ebx
sub		edx, esi
ror		ebx, 0Ch
mov		[ebp+var_8], edx
not		esi
lea		edx, [eax+1]
mov		eax, 3E3F53D2h
sub		eax, [ebp+var_8]
not		edx
add		edx, [ebp+var_8]
xor		eax, esi
sub		eax, edx
dec		edx
xor		ebx, eax
not		eax
xor		ebx, esi
xor		eax, 670254F6h
mov		[ebp+var_8], ebx
mov		edi, eax
mov		ebx, edx
neg		ebx
nop
nop
nop
mov		ecx, edx
rol		edi, cl
nop
nop
nop
mov		eax, esi
nop
not		edi
nop
mov		ecx, [ebp+var_8]
ror		eax, cl
nop
nop
nop
sub		eax, [ebp+var_8]
nop
sub		eax, edx
add		eax, 343C89E5h
rol		eax, 4
mov		edx, eax
nop
mov		ecx, edi
rol		edx, cl
nop
xor		[ebp+var_8], 9AC42FFDh
mov		esi, edx
sub		esi, edi
rol		ebx, 4
nop
mov		eax, edx
nop
nop
nop
mov		ecx, esi
ror		eax, cl
nop
nop
nop
nop
mov		[ebp+var_4], eax
mov		eax, [ebp+var_8]
mov		edi, eax
mov		edx, [ebp+var_4]
nop
mov		ecx, ebx
rol		edi, cl
nop
nop
nop
nop
mov		eax, esi
nop
mov		ecx, edx
not		edx
ror		eax, cl
nop
nop
nop
nop
neg		eax
rol		eax, 8
xor		ebx, eax
xor		edx, ebx
mov		esi, ebx
nop
add		eax, edx
lea		ecx, [edi+4D91B242h]
not		edx
mov		[ebp+var_4], edx
ror		esi, cl
add		edi, 7EBF7B29h
nop
nop
mov		ebx, [ebp+var_4]
nop
nop
mov		edx, edi
nop
neg		esi
mov		ecx, ebx
neg		eax
mov		[ebp+var_C], eax
ror		edx, cl
inc		ebx
nop
sub		esi, edx
add		edx, 6B0FE42Ah
mov		eax, edx
add		edx, ebx
sub		eax, ebx
mov		edi, edx
add		esi, eax
nop
nop
nop
nop
mov		ecx, esi
rol		edi, cl
nop
add		edi, 5A1CA613h
lea		eax, [ebx+78E3BB47h]
xor		edi, esi
rol		eax, 2
sub		esi, edi
mov		ebx, eax
neg		edi
not		esi
rol		edi, 0Eh
neg		esi
ror		edi, 0Dh
ror		edi, 1
not		edi
rol		edi, 0Ch
not		edi
xor		esi, edi
not		edi
ror		edi, 0Ah
sub		ebx, esi
neg		edi
mov		esi, eax
nop
xor		ebx, 0E7E6717Fh
nop
nop
nop
mov		ecx, edi
not		edi
ror		esi, cl
mov		ecx, [ebp+var_C]
nop
not		ecx
ror		edi, 0Dh
sub		ecx, 4CB73131h
sub		esi, 33BAA6B0h
ror		ecx, 0Ah
xor		esi, 380267F2h
neg		ecx
mov		edx, esi
xor		ecx, 0C24B8EBEh
mov		eax, 99129AAFh
sub		ecx, 7355AA3Fh
sub		eax, ebx
ror		ecx, 3
not		ebx
sub		ecx, 0C8CFE6Ch
xor		ecx, edi
not		edi
mov		[ebp+var_C], ecx
nop
nop
rol		edi, 0Ch
nop
add		edi, eax
mov		ecx, [ebp+var_C]
ror		edi, 2
rol		edx, cl
mov		eax, edi
nop
mov		esi, [ebp+var_C]
nop
nop
nop
nop
lea		ecx, [edx-3E692299h]
add		edx, 61A1DF9h
rol		eax, cl
nop
nop
nop
nop
mov		edi, esi
nop
mov		ecx, ebx
rol		edi, cl
nop
not		edi
sub		ebx, edx
mov		esi, edi
sub		esi, eax
rol		edi, 10h
lea		eax, [edx+esi]
xor		esi, ebx
not		eax
sub		esi, 3ADF202Eh
add		edi, eax
sub		eax, edi
not		edi
xor		eax, esi
nop
mov		edx, eax
nop
nop
sub		ebx, edi
nop
xor		ebx, edi
mov		ecx, edi
xor		ebx, 1011FABBh
mov		[ebp+var_14], ebx
ror		edx, cl
add		esi, 0C6AA9678h
nop
add		ebx, esi
mov		eax, 297CC57Ch
rol		ebx, 7
sub		eax, edx
xor		ebx, edx
add		edi, eax
mov		eax, edi
mov		[ebp+var_C], edi
sub		ebx, [ebp+var_C]
xor		eax, edx
xor		eax, 0DC82E6F5h
neg		edi
neg		eax
nop
mov		[ebp+var_10], eax
nop
mov		eax, [ebp+var_14]
add		ebx, 0B621B1Ch
mov		esi, [ebp+var_10]
dec		eax
xor		eax, 20486219h
ror		ebx, 7
mov		edx, eax
nop
mov		ecx, [ebp+var_C]
rol		edx, cl
mov		ecx, 0BB647AAFh
nop
mov		eax, 1
xor		ebx, edx
sub		eax, esi
sub		edx, edi
not		ebx
add		edi, eax
mov		eax, esi
xor		eax, edx
mov		edx, esi
sub		ecx, eax
neg		edx
nop
mov		[ebp+var_14], ecx
nop
mov		esi, ebx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
mov		ebx, edi
nop
mov		ecx, edx
ror		ebx, cl
mov		edx, [ebp+var_10]
nop
mov		eax, [ebp+var_14]
xor		ebx, edx
not		edx
neg		ebx
rol		edx, 0Fh
add		ebx, 191D46C1h
sub		esi, ebx
nop
nop
mov		edi, esi
nop
not		ebx
nop
mov		ecx, edx
rol		edi, cl
nop
nop
nop
nop
mov		esi, edx
nop
sub		edi, edx
mov		ecx, eax
neg		edi
not		eax
ror		esi, cl
sub		ebx, edi
nop
mov		[ebp+var_C], ebx
xor		esi, eax
mov		edx, eax
nop
not		edi
nop
add		[ebp+var_C], edi
nop
nop
mov		ecx, esi
xor		esi, 5F8A51E8h
ror		edx, cl
nop
nop
nop
nop
xor		edx, 63AB7D99h
mov		eax, edx
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
nop
xor		eax, esi
mov		ebx, eax
nop
mov		ecx, esi
ror		esi, 0Bh
rol		ebx, cl
nop
nop
nop
nop
mov		eax, edi
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
nop
mov		edx, eax
nop
mov		edi, [ebp+var_C]
mov		ecx, ebx
add		edi, esi
ror		edx, cl
sub		esi, 7C9B2E59h
nop
add		edi, 0DF8D9C4Bh
sub		ebx, edx
xor		edi, esi
sub		edx, edi
ror		ebx, 0Fh
not		edx
mov		[ebp+var_8], edi
rol		edx, 0Dh
mov		eax, esi
nop
xor		ebx, edi
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
nop
nop
nop
neg		eax
xor		eax, ebx
not		ebx
mov		edi, eax
nop
mov		ecx, [ebp+var_8]
rol		edi, cl
nop
mov		eax, [ebp+var_8]
not		eax
xor		ebx, eax
nop
nop
neg		ebx
nop
add		edx, eax
xor		ebx, edi
not		edx
mov		esi, ebx
add		edx, eax
nop
sub		edx, edi
mov		ecx, eax
not		edx
not		eax
rol		esi, cl
nop
xor		esi, edi
sub		eax, esi
ror		esi, 6
not		esi
sub		esi, eax
add		eax, 475259C1h
mov		[ebp+var_8], eax
xor		edx, eax
mov		ecx, [ebp+var_8]
add		esi, edx
xor		ecx, 0CE2698AFh
ror		edx, 0Fh
mov		ebx, ecx
mov		[ebp+var_8], ecx
sub		eax, edx
neg		ebx
nop
mov		edx, eax
nop
nop
mov		ecx, [ebp+var_8]
rol		edx, cl
nop
mov		eax, [ebp+var_8]
neg		edx
sub		eax, edx
xor		ebx, 326EC1D1h
add		eax, edi
mov		edi, 647A32D1h
sub		edi, esi
not		eax
not		edi
mov		esi, eax
sub		edi, edx
neg		edx
xor		edi, 0F7926544h
xor		edx, 57E61753h
nop
nop
nop
nop
mov		ecx, edi
rol		esi, cl
nop
ror		esi, 0Ch
xor		esi, 9431A2Ah
not		esi
mov		eax, esi
xor		esi, ebx
sub		eax, edx
ror		edx, 9
xor		edx, ebx
add		edi, eax
neg		ebx
not		edi
ror		ebx, 0Bh
mov		eax, ebx
xor		eax, edx
mov		edx, ebx
xor		eax, 99CA9898h
nop
add		edi, eax
nop
xor		edi, esi
nop
mov		[ebp+var_8], edi
nop
mov		ecx, eax
rol		eax, 0Ch
ror		edx, cl
not		eax
nop
mov		ebx, 0D0B54002h
sub		ebx, esi
neg		edx
ror		edx, 2
nop
nop
xor		eax, edx
nop
neg		eax
mov		edi, eax
mov		esi, edx
nop
mov		ecx, ebx
sub		ebx, 6BA14A71h
ror		edi, cl
nop
nop
nop
nop
nop
mov		ecx, edi
ror		esi, cl
nop
xor		esi, 0B71D89B9h
neg		esi
xor		esi, ebx
ror		esi, 0Dh
add		esi, 1A7ED53Ah
mov		ecx, [ebp+var_8]
not		esi
ror		ecx, 7
not		edi
add		ecx, esi
rol		ecx, 1
xor		edi, ecx
sub		esi, ecx
not		ecx
mov		[ebp+var_C], edi
add		esi, ecx
rol		ecx, 0Ch
xor		ebx, ecx
sub		esi, 2A609817h
xor		ebx, 2C7E10EEh
mov		eax, esi
xor		eax, ebx
mov		edx, ebx
xor		ecx, eax
neg		edx
mov		eax, [ebp+var_C]
mov		[ebp+var_8], ecx
nop
nop
mov		edi, esi
nop
nop
mov		ecx, eax
sub		eax, ebx
ror		edi, cl
nop
nop
mov		esi, [ebp+var_8]
nop
nop
sub		edi, edx
mov		ecx, ebx
neg		edi
nop
ror		esi, cl
nop
xor		esi, eax
neg		eax
ror		eax, 6
nop
nop
ror		eax, 1
nop
mov		[ebp+var_C], eax
mov		eax, edx
nop
mov		ecx, esi
ror		eax, cl
nop
mov		edx, [ebp+var_C]
sub		eax, 7B37B76h
nop
nop
mov		ebx, eax
nop
nop
mov		ecx, edx
ror		edx, 5
ror		ebx, cl
nop
mov		[ebp+var_C], edx
mov		eax, edi
sub		ebx, edx
xor		eax, esi
neg		edi
rol		eax, 8
xor		edi, 1BA53909h
nop
mov		edx, edi
nop
nop
nop
mov		ecx, eax
rol		edx, cl
mov		ecx, 9AFAAA62h
nop
sub		eax, edx
mov		esi, edx
xor		esi, [ebp+var_C]
ror		eax, 7
rol		eax, 8
xor		eax, ebx
ror		edx, 0Bh
rol		ebx, 8
xor		edx, 513F4818h
add		esi, ebx
rol		eax, 0Fh
sub		ecx, eax
not		ebx
ror		ebx, 0Fh
neg		esi
not		ebx
xor		esi, ebx
mov		eax, ebx
sub		esi, ecx
rol		ecx, 0Dh
ror		ecx, 6
add		esi, 6445540Bh
sub		edx, esi
mov		[ebp+var_14], ecx
xor		edx, ebx
nop
mov		[ebp+var_C], edx
nop
mov		edx, ecx
nop
nop
neg		edx
mov		ecx, edx
mov		[ebp+var_10], edx
mov		edx, [ebp+var_C]
ror		eax, cl
nop
sub		esi, eax
mov		ebx, esi
mov		[ebp+var_4], esi
nop
neg		ebx
nop
nop
mov		ecx, ebx
ror		edx, cl
nop
nop
mov		[ebp+var_C], eax
nop
mov		ecx, [ebp+var_10]
ror		eax, cl
nop
mov		ecx, eax
ror		edx, 3
dec		ecx
mov		eax, edx
mov		[ebp+var_C], ecx
nop
mov		edi, [ebp+var_14]
nop
mov		ecx, [ebp+var_10]
ror		eax, cl
nop
nop
ror		edi, 3
neg		eax
neg		edi
ror		eax, 5
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
mov		ebx, eax
mov		eax, 10F54987h
neg		ebx
xor		ebx, edi
not		edi
nop
mov		edx, edi
nop
nop
nop
mov		ecx, ebx
rol		edx, cl
mov		ecx, [ebp+var_4]
nop
mov		edi, [ebp+var_C]
dec		edi
add		edi, edx
rol		edx, 8
sub		eax, edx
sub		ebx, edx
add		ecx, eax
not		edi
xor		ecx, 0AF4F842Bh
sub		edx, edi
add		ecx, 74A6426Ah
add		edi, ebx
nop
mov		[ebp+var_4], ecx
mov		esi, ecx
add		ebx, edi
nop
mov		[ebp+var_8], ebx
nop
neg		esi
nop
mov		ecx, esi
xor		edi, 0CDF32338h
ror		ebx, cl
nop
mov		ecx, ebx
lea		ebx, [edx-5D934AF0h]
xor		ebx, 9C37244Ah
mov		edx, edi
not		ebx
add		ebx, ecx
sub		ecx, ebx
not		ecx
xor		ebx, ecx
mov		[ebp+var_8], ecx
nop
mov		eax, [ebp+var_8]
nop
neg		eax
mov		ecx, esi
rol		edx, cl
nop
nop
nop
nop
mov		edi, edx
nop
mov		ecx, eax
rol		eax, 4
ror		edi, cl
nop
nop
nop
nop
mov		edx, ebx
nop
xor		edi, ebx
mov		ecx, eax
rol		eax, 9
add		eax, 10519357h
ror		edx, cl
nop
xor		eax, 4B4B2931h
mov		esi, [ebp+var_4]
xor		edi, edx
mov		[ebp+var_8], eax
not		esi
rol		edi, 0Ah
mov		eax, esi
rol		edi, 10h
nop
nop
nop
nop
mov		ecx, edi
add		edi, 0C942ECC1h
ror		eax, cl
nop
ror		edi, 0Dh
mov		ebx, eax
mov		[ebp+var_10], edi
mov		esi, edx
neg		ebx
neg		edi
nop
nop
nop
mov		ecx, eax
mov		eax, [ebp+var_8]
xor		ebx, eax
rol		esi, cl
nop
mov		[ebp+var_8], ebx
not		esi
add		esi, eax
sub		eax, ebx
nop
mov		edx, eax
nop
nop
nop
mov		ecx, esi
ror		edx, cl
nop
lea		eax, [edx+ebx]
xor		edx, 62172CE4h
sub		esi, eax
mov		[ebp+var_14], edx
not		esi
xor		esi, edx
mov		edx, ebx
neg		edx
nop
mov		eax, esi
nop
mov		[ebp+var_4], edx
nop
mov		ecx, edx
rol		eax, cl
mov		edx, 9E641F22h
nop
xor		eax, 0E819E8E2h
sub		edx, eax
mov		eax, [ebp+var_10]
nop
mov		[ebp+var_C], edx
sub		eax, [ebp+var_8]
nop
nop
nop
mov		ecx, edi
rol		edx, cl
nop
mov		ecx, edx
mov		edx, [ebp+var_14]
xor		ecx, [ebp+var_8]
add		edx, eax
mov		[ebp+var_C], ecx
mov		eax, edx
nop
mov		ebx, [ebp+var_10]
nop
not		ebx
mov		ecx, [ebp+var_4]
ror		eax, cl
nop
nop
mov		edx, eax
nop
mov		ecx, edi
ror		edx, cl
mov		edi, [ebp+var_C]
nop
not		edx
mov		eax, ebx
xor		edx, edi
not		edi
nop
mov		esi, edx
nop
nop
nop
mov		ecx, edx
ror		eax, cl
nop
add		eax, 1810D860h
nop
nop
nop
nop
mov		ecx, eax
rol		esi, cl
nop
mov		edx, [ebp+var_8]
sub		eax, esi
rol		edx, 7
rol		esi, 0Fh
mov		ebx, edx
xor		esi, edi
neg		eax
nop
nop
nop
nop
mov		ecx, esi
add		esi, eax
ror		ebx, cl
nop
lea		edx, [eax+1]
xor		ebx, 2DA75194h
sub		ebx, eax
xor		ebx, esi
ror		esi, 1
add		esi, 74927671h
not		ebx
ror		esi, 0Eh
add		ebx, esi
mov		eax, esi
sub		edi, ebx
rol		ebx, 0Fh
dec		ebx
add		edx, edi
not		ebx
rol		edx, 0Ah
nop
mov		[ebp+var_8], ebx
nop
xor		edi, edx
nop
rol		edx, 10h
nop
xor		edx, esi
mov		ecx, ebx
sub		edi, esi
rol		eax, cl
nop
sub		eax, edx
lea		ebx, [edx+1BD57AEEh]
add		edi, 0E02493A2h
rol		ebx, 8
add		edi, eax
mov		esi, edi
not		edi
sub		esi, eax
mov		edx, edi
neg		edx
mov		eax, esi
mov		[ebp+var_14], edx
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
nop
mov		esi, eax
nop
mov		ecx, edx
mov		edx, [ebp+var_14]
rol		esi, cl
xor		edx, 0A71F81D0h
nop
not		edx
mov		eax, [ebp+var_8]
add		edx, ebx
ror		eax, 0Dh
add		ebx, 0DA8FFBFAh
add		eax, esi
not		ebx
mov		[ebp+var_8], eax
xor		esi, 9FDDC631h
nop
mov		eax, 10A9274Dh
sub		eax, esi
nop
mov		edi, eax
nop
nop
neg		edx
mov		ecx, ebx
rol		ebx, 0Dh
ror		edi, cl
nop
mov		eax, [ebp+var_8]
xor		edx, eax
mov		[ebp+var_C], edi
add		edx, 48696A3Eh
not		eax
mov		[ebp+var_8], eax
mov		esi, edx
neg		esi
add		ebx, edx
nop
rol		ebx, 5
nop
nop
mov		ecx, edx
rol		eax, cl
nop
ror		eax, 0Dh
xor		esi, eax
neg		eax
ror		esi, 0Ch
sub		esi, ebx
xor		ebx, edi
xor		eax, esi
mov		edx, ebx
neg		eax
add		esi, 20EC04Fh
rol		eax, 0Fh
nop
nop
neg		eax
nop
nop
not		eax
mov		ecx, esi
mov		edi, eax
ror		edx, cl
nop
mov		ebx, [ebp+var_C]
nop
add		esi, edx
nop
neg		esi
nop
nop
mov		ecx, edx
ror		edx, 7
rol		edi, cl
nop
nop
nop
nop
mov		eax, edx
nop
not		edi
mov		ecx, ebx
rol		edi, 7
ror		edi, 7
ror		eax, cl
nop
mov		edx, ebx
xor		esi, eax
not		ebx
neg		eax
mov		[ebp+var_C], ebx
sub		edx, eax
add		esi, eax
add		edx, edi
mov		eax, edi
nop
sub		eax, esi
nop
nop
nop
nop
mov		ecx, edx
not		edx
ror		ebx, cl
mov		ecx, 2AD301D3h
sub		ecx, eax
nop
add		edi, ebx
mov		[ebp+var_C], ecx
sub		edx, edi
add		edi, 7F237B3Eh
mov		esi, edx
xor		ebx, edx
neg		esi
nop
mov		eax, edi
nop
dec		ebx
nop
xor		ebx, 0F62E4D59h
mov		ecx, edx
mov		edx, ebx
rol		eax, cl
mov		ecx, [ebp+var_C]
nop
xor		eax, ecx
xor		ecx, 0C22CDCAFh
sub		eax, 7C406541h
rol		eax, 4
neg		eax
xor		edx, eax
rol		ecx, 6
not		edx
mov		eax, 989BF49Ah
sub		eax, edx
ror		ebx, 0Dh
add		ecx, eax
mov		edi, esi
mov		[ebp+var_C], ecx
nop
nop
nop
nop
mov		ecx, edx
rol		edx, 9
ror		edi, cl
mov		eax, edx
nop
mov		esi, [ebp+var_C]
nop
xor		ebx, esi
nop
not		ebx
nop
sub		ebx, 344AE121h
nop
mov		ecx, esi
mov		[ebp+var_14], ebx
rol		eax, cl
not		esi
nop
rol		esi, 5
nop
mov		[ebp+var_C], esi
nop
mov		edx, eax
nop
nop
mov		ecx, edi
rol		edx, cl
nop
nop
nop
mov		eax, [ebp+var_14]
nop
add		edx, ebx
mov		ebx, edi
nop
mov		ecx, eax
ror		ebx, cl
nop
mov		edi, eax
nop
nop
nop
nop
mov		ecx, ebx
ror		edi, cl
nop
lea		eax, [edx-0B244F8h]
rol		eax, 7
mov		edx, eax
nop
nop
nop
nop
lea		ecx, [edi+3487E743h]
ror		edx, cl
nop
mov		eax, [ebp+var_C]
mov		esi, edx
mov		[ebp+var_4], eax
neg		esi
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
add		ebx, 61EF4F22h
mov		ecx, eax
add		edi, 48A81E29h
xor		ecx, esi
mov		eax, ebx
rol		ecx, 5
xor		eax, esi
sub		ecx, 7D29D628h
neg		eax
xor		eax, ecx
mov		[ebp+var_4], ecx
nop
mov		edx, eax
nop
nop
mov		ecx, [ebp+var_4]
ror		edx, cl
nop
lea		eax, [edi+ebx]
nop
lea		ebx, [edi+41CC9B56h]
nop
not		eax
nop
sub		eax, 1482BC30h
mov		edi, eax
xor		ebx, 0BFCA1CCFh
nop
mov		ecx, edx
not		edx
xor		edx, ebx
ror		edi, cl
sub		edx, ebx
nop
sub		ebx, edi
lea		eax, [edx-243825F1h]
mov		edx, [ebp+var_4]
rol		edx, 0Ch
add		eax, edi
rol		edx, 0Eh
sub		ebx, eax
not		edx
inc		ebx
ror		edx, 2
xor		edx, eax
add		eax, 3EC3E897h
xor		ebx, edx
xor		edx, edi
xor		eax, ebx
ror		edi, 5
add		eax, ebx
nop
nop
rol		eax, 8
nop
mov		esi, eax
nop
add		edi, edx
mov		ecx, edx
rol		edi, 1
neg		ebx
rol		esi, cl
nop
mov		eax, ebx
xor		edx, esi
nop
nop
mov		[ebp+var_4], edx
nop
mov		edx, edi
nop
mov		ecx, esi
ror		edx, cl
nop
neg		eax
mov		[ebp+var_C], eax
nop
mov		edi, esi
nop
mov		eax, 323E2893h
nop
sub		eax, ebx
add		[ebp+var_4], eax
mov		ecx, ebx
mov		ebx, [ebp+var_C]
ror		edi, cl
nop
nop
nop
add		edi, 20DD0CDCh
nop
not		edi
xor		edi, 0A80CD690h
mov		eax, edi
sub		eax, edx
mov		edx, 54DC4262h
not		eax
mov		esi, eax
sub		edi, eax
nop
mov		ecx, ebx
ror		ebx, 0Dh
ror		esi, cl
not		ebx
nop
mov		[ebp+var_C], ebx
sub		edx, ebx
ror		edi, 9
mov		eax, 62A834E6h
rol		edi, 8
sub		eax, [ebp+var_4]
nop
nop
ror		eax, 6
nop
ror		esi, 0Ch
neg		eax
xor		esi, edi
rol		eax, 0Eh
neg		edi
sub		edx, eax
mov		ebx, edx
nop
mov		ecx, [ebp+var_C]
rol		ebx, cl
nop
mov		edx, edi
sub		ebx, 69493032h
nop
nop
nop
nop
mov		ecx, ebx
ror		ebx, 2
rol		edx, cl
nop
nop
mov		[ebp+var_8], ebx
xor		edx, 0CF03CBAh
nop
ror		edx, 2
nop
xor		edx, esi
sub		esi, 7E770DBh
mov		eax, edx
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
not		eax
nop
mov		edi, [ebp+var_C]
mov		ebx, eax
add		edi, 0C5AE7BF0h
nop
not		edi
xor		[ebp+var_8], edi
mov		ecx, esi
rol		edi, 8
ror		ebx, cl
nop
xor		ebx, 0A6941F06h
sub		esi, ebx
mov		[ebp+var_4], ebx
nop
mov		edx, ebx
mov		ebx, esi
nop
neg		edx
nop
nop
mov		ecx, edx
rol		ebx, cl
nop
nop
mov		esi, edi
nop
mov		ecx, edx
rol		esi, cl
nop
mov		edx, [ebp+var_4]
nop
nop
mov		edi, esi
nop
sub		edx, 47206804h
nop
mov		ecx, ebx
mov		[ebp+var_4], edx
rol		edi, cl
sub		ebx, 49F5BE38h
nop
mov		[ebp+var_10], ebx
mov		esi, [ebp+var_8]
nop
sub		esi, edi
nop
xor		esi, edx
ror		edi, 0Eh
sub		esi, 4922D11Ch
nop
ror		esi, 8
add		edi, edx
ror		esi, 4
neg		edi
mov		eax, esi
rol		edi, 6
nop
neg		ebx
mov		ecx, edx
mov		edx, edi
ror		eax, cl
nop
mov		esi, ebx
ror		eax, 8
mov		[ebp+var_8], eax
nop
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
mov		edi, [ebp+var_10]
sub		edx, edi
mov		[ebp+var_C], edx
nop
mov		eax, [ebp+var_4]
nop
dec		eax
add		eax, edi
mov		ecx, esi
ror		edx, cl
xor		eax, edi
nop
nop
nop
nop
mov		esi, edx
mov		edx, eax
nop
mov		ecx, [ebp+var_8]
rol		edx, cl
nop
nop
nop
mov		eax, [ebp+var_8]
nop
xor		ebx, edx
add		eax, edx
xor		ebx, 0AD1B7895h
add		edx, eax
mov		edi, ebx
nop
mov		ecx, esi
not		esi
rol		edi, cl
nop
nop
mov		[ebp+var_4], esi
nop
nop
mov		ebx, edx
ror		edi, 9
nop
mov		ecx, eax
rol		edi, 9
rol		ebx, cl
nop
nop
nop
nop
rol		ebx, 0Fh
mov		edx, eax
ror		ebx, 4
nop
mov		ecx, esi
rol		edx, cl
nop
sub		edi, edx
add		edx, 415799Bh
mov		[ebp+var_10], edx
neg		edx
nop
nop
nop
nop
mov		ecx, edx
rol		esi, cl
nop
mov		ecx, esi
mov		esi, edi
ror		ecx, 0Dh
mov		[ebp+var_4], ecx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
mov		edi, [ebp+var_10]
add		esi, [ebp+var_4]
ror		esi, 3
sub		edi, ebx
mov		edx, ebx
nop
nop
nop
nop
mov		ecx, edi
ror		edi, 0Eh
ror		edx, cl
nop
mov		ebx, [ebp+var_4]
nop
add		edx, 833F4504h
nop
add		edx, esi
nop
sub		esi, ebx
mov		eax, esi
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
mov		esi, [ebp+var_4]
nop
mov		ebx, eax
xor		esi, edx
nop
mov		ecx, edx
rol		ebx, cl
nop
nop
nop
nop
xor		edi, ebx
mov		eax, edx
ror		ebx, 5
nop
add		ebx, 27BE687Eh
mov		ecx, esi
mov		[ebp+var_10], ebx
ror		eax, cl
nop
nop
add		eax, edi
nop
add		esi, eax
nop
mov		[ebp+var_4], esi
add		eax, 0E3D7A546h
mov		esi, ebx
not		eax
mov		ebx, edi
neg		esi
nop
mov		ecx, esi
ror		ebx, cl
nop
mov		edi, eax
ror		ebx, 0Ah
nop
mov		[ebp+var_14], ebx
nop
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
nop
mov		eax, [ebp+var_4]
sub		edi, [ebp+var_10]
nop
not		edi
mov		ecx, esi
ror		eax, cl
not		edi
nop
nop
add		eax, [ebp+var_10]
neg		eax
mov		edx, [ebp+var_14]
mov		ebx, eax
nop
mov		ecx, esi
rol		ebx, cl
nop
mov		eax, edi
mov		esi, ebx
neg		ebx
xor		esi, [ebp+var_10]
xor		esi, 32D67D57h
sub		esi, ebx
nop
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
nop
mov		edi, edx
nop
neg		eax
mov		ecx, ebx
add		ebx, 649505AAh
ror		ebx, 1
rol		edi, cl
nop
sub		edi, esi
not		esi
xor		esi, eax
inc		edi
add		ebx, esi
mov		[ebp+var_10], edi
nop
ror		esi, 0Ah
sub		esi, eax
nop
add		eax, 8B255F5Fh
mov		[ebp+var_14], esi
mov		esi, edi
xor		eax, 0DC29025h
mov		edi, eax
nop
nop
neg		esi
not		ebx
mov		ecx, esi
ror		edi, cl
nop
nop
mov		edx, 0D6F56299h
mov		eax, [ebp+var_14]
sub		edx, ebx
mov		[ebp+var_C], edi
xor		eax, 0BBCBA313h
ror		eax, 8
mov		edi, eax
nop
mov		ecx, esi
mov		esi, [ebp+var_C]
ror		edi, cl
nop
nop
neg		edi
xor		edx, edi
sub		edi, edx
not		edi
xor		edi, [ebp+var_10]
not		edi
nop
mov		eax, edi
nop
nop
mov		ecx, esi
xor		esi, 5013B1A5h
ror		eax, cl
sub		esi, 9CB03F3h
nop
rol		esi, 0Bh
mov		edi, [ebp+var_10]
sub		edx, esi
add		edi, 52A97563h
mov		[ebp+var_10], edx
mov		ebx, eax
nop
nop
sub		esi, 5DA373FDh
nop
nop
mov		ecx, edi
ror		ebx, cl
nop
nop
nop
mov		eax, [ebp+var_10]
nop
mov		edx, esi
xor		ebx, 7F819872h
nop
mov		ecx, eax
mov		[ebp+var_14], ebx
rol		edx, cl
xor		eax, edi
nop
nop
nop
neg		eax
nop
mov		esi, eax
nop
mov		ecx, ebx
ror		esi, cl
nop
nop
nop
mov		eax, [ebp+var_10]
nop
mov		edi, eax
xor		esi, ebx
nop
mov		ebx, 0BD85D760h
sub		ebx, [ebp+var_14]
mov		ecx, edx
xor		ebx, 0E5A8A72Bh
rol		edi, cl
not		ebx
nop
xor		ebx, esi
lea		eax, [edx+esi]
sub		edi, 73188F53h
nop
not		eax
nop
mov		edx, eax
nop
sub		ebx, 7BF5CD0Ah
nop
mov		ecx, edi
ror		edx, cl
nop
add		edx, esi
add		esi, 0D1AFF9FDh
add		esi, edx
not		edx
nop
mov		eax, edx
nop
not		edi
nop
ror		edi, 0Bh
nop
xor		edi, esi
mov		ecx, ebx
ror		esi, 9
not		ebx
ror		eax, cl
xor		edi, 0C1DAA6CCh
nop
xor		ebx, 8D6DE85Bh
nop
add		ebx, eax
nop
xor		ebx, esi
nop
mov		edx, edi
nop
mov		ecx, eax
not		eax
ror		edx, cl
nop
nop
rol		eax, 7
nop
mov		[ebp+var_14], eax
nop
mov		eax, esi
mov		edi, [ebp+var_14]
nop
mov		ecx, ebx
ror		edx, 8
add		edx, esi
rol		eax, cl
nop
mov		[ebp+var_8], edx
nop
nop
nop
lea		esi, [edx+ebx]
mov		ebx, [ebp+var_8]
mov		edx, eax
nop
xor		esi, eax
sub		ebx, esi
mov		ecx, edi
mov		[ebp+var_8], ebx
ror		edx, cl
nop
nop
nop
nop
mov		eax, edi
nop
neg		edx
mov		ecx, ebx
mov		ebx, edx
rol		eax, cl
nop
nop
nop
nop
nop
mov		ecx, eax
rol		eax, 1
ror		ebx, cl
add		esi, eax
nop
not		eax
neg		ebx
mov		[ebp+var_10], eax
mov		edi, eax
add		esi, ebx
mov		[ebp+var_14], esi
neg		edi
mov		edx, [ebp+var_14]
nop
nop
mov		eax, edx
nop
nop
mov		ecx, edi
rol		eax, cl
nop
nop
mov		edx, eax
nop
mov		ecx, edi
ror		edx, cl
nop
mov		eax, ebx
neg		eax
mov		[ebp+var_C], eax
nop
nop
mov		eax, edx
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		esi, [ebp+var_10]
nop
rol		eax, 3
add		esi, 3C8B2833h
mov		edx, eax
nop
mov		ecx, edi
rol		edx, cl
mov		edi, esi
nop
nop
nop
mov		ebx, edx
nop
nop
mov		ecx, esi
ror		ebx, cl
nop
mov		eax, ebx
mov		[ebp+var_4], ebx
neg		eax
nop
nop
nop
mov		ecx, eax
mov		[ebp+var_14], eax
mov		eax, [ebp+var_8]
xor		eax, 27430C37h
rol		edi, cl
mov		ecx, [ebp+var_C]
nop
rol		eax, 6
add		edi, ecx
ror		eax, 5
rol		eax, 3
rol		ecx, 10h
dec		eax
mov		esi, eax
mov		[ebp+var_8], eax
add		edi, ecx
mov		[ebp+var_C], ecx
nop
mov		edx, ecx
neg		esi
nop
nop
mov		ecx, esi
rol		edx, cl
nop
nop
xor		edx, 45B64DD6h
mov		eax, edx
nop
mov		ecx, esi
mov		esi, [ebp+var_8]
rol		eax, cl
not		esi
nop
nop
ror		eax, 0Dh
xor		esi, eax
mov		[ebp+var_C], eax
mov		eax, [ebp+var_4]
sub		eax, esi
not		esi
sub		eax, edi
mov		edi, [ebp+var_C]
sub		esi, eax
mov		edx, esi
nop
mov		ecx, [ebp+var_14]
ror		edx, cl
mov		ecx, [ebp+var_4]
nop
sub		edx, 67E3A712h
sub		edi, edx
sub		edi, 734C3BFCh
lea		esi, [ecx+eax]
ror		edi, 0Fh
add		edi, 53EDBBFDh
rol		esi, 0Eh
mov		eax, 1
not		esi
sub		eax, edi
neg		edi
add		ecx, eax
xor		edx, edi
mov		eax, ecx
xor		edx, 2C0D3ADCh
sub		eax, esi
inc		edx
add		esi, eax
rol		edx, 5
add		eax, esi
add		edx, 0A32A422Ch
not		eax
ror		edx, 0Eh
sub		edi, eax
not		esi
xor		edx, esi
nop
nop
xor		eax, edx
nop
mov		ebx, eax
nop
xor		esi, 0A016A365h
mov		ecx, edi
sub		edi, esi
xor		edi, 0A6D7E09Eh
rol		ebx, cl
nop
nop
nop
nop
mov		eax, edi
nop
not		ebx
add		esi, ebx
mov		ecx, edx
rol		eax, cl
nop
lea		ecx, [edx+esi]
not		ecx
sub		ecx, ebx
ror		esi, 7
xor		ecx, eax
xor		esi, 0EF11DF4Ah
neg		ecx
mov		edi, ebx
mov		[ebp+var_14], ecx
xor		edi, eax
mov		eax, esi
rol		edi, 0Eh
nop
nop
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		esi, ebx
xor		eax, edi
mov		[ebp+var_10], eax
mov		edx, eax
nop
neg		edx
nop
nop
mov		ecx, edx
ror		esi, cl
nop
nop
mov		ebx, 0FFFFFFFFh
sub		ebx, edi
not		esi
mov		edi, [ebp+var_14]
mov		eax, esi
mov		[ebp+var_C], edi
nop
mov		ecx, edx
nop
rol		edi, cl
nop
nop
mov		edx, edi
nop
mov		[ebp+var_C], edx
nop
mov		ecx, ebx
rol		eax, cl
nop
nop
nop
nop
dec		eax
mov		esi, eax
nop
mov		ecx, edx
add		edx, ebx
xor		edx, [ebp+var_10]
mov		ebx, [ebp+var_C]
ror		esi, cl
nop
nop
mov		[ebp+var_14], esi
mov		edi, esi
nop
mov		esi, edx
neg		edi
nop
nop
mov		ecx, edi
rol		esi, cl
nop
nop
add		esi, [ebp+var_10]
mov		edx, esi
sub		ebx, esi
nop
mov		ecx, edi
rol		edx, cl
mov		ecx, [ebp+var_14]
inc		ebx
mov		edi, [ebp+var_10]
not		ecx
sub		ecx, ebx
rol		edi, 0Fh
add		edi, ebx
nop
lea		eax, [ebx+6A735DE3h]
mov		esi, 0FFFFFFFFh
ror		eax, 0Fh
sub		esi, edx
lea		ebx, [ecx-206016D6h]
ror		eax, 0Ch
mov		edx, eax
add		ebx, edi
sub		edx, edi
ror		eax, 2
nop
mov		edi, eax
nop
xor		ebx, 78C7CA03h
nop
sub		ebx, 5C70E176h
nop
sub		ebx, esi
mov		ecx, edx
mov		[ebp+var_C], ebx
not		edx
rol		edi, cl
add		edx, ebx
nop
nop
mov		eax, [ebp+var_C]
nop
nop
mov		ebx, esi
nop
mov		ecx, eax
ror		ebx, cl
nop
xor		ebx, eax
xor		eax, ebx
neg		ebx
sub		edi, ebx
mov		[ebp+var_C], eax
nop
mov		eax, edx
nop
nop
nop
mov		ecx, edi
rol		eax, cl
nop
mov		edx, edi
mov		esi, eax
neg		esi
nop
nop
nop
mov		ecx, eax
mov		eax, [ebp+var_C]
rol		edx, cl
nop
nop
nop
nop
mov		[ebp+var_4], edx
mov		edi, eax
nop
mov		ecx, ebx
ror		edi, cl
nop
mov		eax, esi
add		edi, 75F1844h
ror		edi, 0Dh
sub		eax, ebx
nop
nop
add		eax, 51DA4629h
nop
not		eax
add		eax, 4561B9C6h
sub		edi, eax
mov		edx, eax
nop
mov		ecx, [ebp+var_4]
rol		edi, 3
ror		edx, cl
nop
mov		eax, [ebp+var_4]
xor		eax, edi
neg		edx
add		esi, eax
mov		ebx, edx
not		eax
not		esi
nop
add		edi, esi
nop
xor		esi, 750072B1h
nop
nop
mov		ecx, eax
not		eax
rol		ebx, cl
add		eax, 18A1808Fh
nop
mov		[ebp+var_4], eax
nop
nop
nop
rol		ebx, 8
mov		edx, edi
not		ebx
nop
mov		ecx, esi
not		esi
rol		edx, cl
nop
nop
nop
mov		edi, [ebp+var_4]
nop
mov		eax, esi
rol		edx, 4
nop
mov		ecx, edi
rol		edx, 7
ror		eax, cl
not		edi
nop
mov		[ebp+var_4], edi
sub		edx, [ebp+var_4]
mov		edi, ebx
rol		eax, 0Eh
neg		edi
not		eax
mov		[ebp+var_14], edx
sub		eax, ebx
nop
mov		esi, eax
nop
nop
mov		ecx, ebx
rol		esi, cl
nop
xor		esi, edi
ror		esi, 2
mov		eax, esi
neg		eax
mov		[ebp+var_10], eax
nop
nop
nop
nop
mov		ecx, eax
ror		edx, cl
mov		ecx, [ebp+var_4]
nop
sub		ecx, edi
mov		ebx, edi
xor		ecx, edx
xor		ecx, edi
mov		[ebp+var_4], ecx
nop
nop
mov		ecx, eax
mov		eax, [ebp+var_4]
add		edx, eax
rol		ebx, cl
nop
nop
nop
nop
mov		[ebp+var_14], ebx
mov		edi, [ebp+var_14]
mov		ebx, edx
nop
mov		esi, edi
mov		ecx, eax
neg		esi
rol		ebx, cl
nop
mov		edx, [ebp+var_4]
add		ebx, eax
nop
nop
nop
nop
mov		ecx, esi
ror		edx, cl
nop
nop
mov		[ebp+var_4], edx
nop
mov		ecx, esi
mov		esi, [ebp+var_10]
ror		edx, cl
xor		esi, 0DBC5DDB4h
nop
neg		esi
mov		ecx, edx
xor		esi, 40558035h
add		esi, 3331693Ch
add		esi, ecx
xor		esi, 0ADE5894Ch
sub		esi, ecx
sub		ecx, esi
ror		ecx, 3
mov		[ebp+var_4], ecx
nop
lea		eax, [esi+edi]
nop
neg		eax
ror		esi, 0Bh
mov		edi, 467539E5h
sub		edi, ebx
mov		ebx, eax
nop
mov		ecx, [ebp+var_4]
ror		edi, 0Ch
ror		ebx, cl
nop
mov		edx, ebx
mov		[ebp+var_C], ebx
neg		edx
nop
nop
mov		ebx, esi
nop
nop
mov		ecx, edx
ror		ebx, cl
nop
nop
mov		esi, edi
nop
not		ebx
neg		ebx
mov		ecx, edx
rol		esi, cl
nop
nop
mov		edx, [ebp+var_C]
nop
nop
neg		esi
not		edx
mov		eax, esi
mov		[ebp+var_C], edx
nop
mov		ecx, ebx
rol		ebx, 9
ror		eax, cl
mov		edi, ebx
mov		ecx, [ebp+var_4]
nop
xor		ecx, 8636B3B3h
ror		ecx, 7
mov		[ebp+var_4], ecx
nop
nop
nop
nop
mov		ecx, edx
rol		edi, cl
nop
mov		ebx, [ebp+var_4]
mov		edx, ebx
xor		ebx, 21BEB155h
sub		ebx, edi
sub		edx, eax
mov		eax, [ebp+var_C]
nop
add		eax, edi
nop
nop
ror		edi, 5
not		eax
inc		edx
mov		esi, eax
nop
mov		ecx, ebx
sub		ebx, 587F7F53h
rol		esi, cl
nop
mov		[ebp+var_4], ebx
nop
nop
mov		ebx, edx
nop
neg		esi
nop
xor		esi, edi
mov		ecx, [ebp+var_4]
xor		edi, esi
xor		edi, 0E6111314h
ror		ebx, cl
not		esi
nop
mov		edx, [ebp+var_4]
not		ebx
rol		edx, 0Eh
lea		eax, [edi+esi]
neg		eax
nop
nop
mov		[ebp+var_8], eax
mov		eax, edx
nop
nop
mov		edi, ebx
sub		edi, esi
mov		ecx, ebx
rol		eax, cl
nop
nop
nop
nop
neg		eax
mov		edx, eax
nop
mov		ecx, edi
rol		edx, cl
nop
mov		eax, [ebp+var_8]
add		edx, ebx
sub		edi, eax
rol		edx, 10h
sub		edi, 58E9238Ch
add		edx, eax
not		edi
mov		esi, edx
not		eax
add		ebx, edx
nop
nop
add		edi, 0DDAF9A3h
nop
mov		[ebp+var_C], edi
nop
mov		ecx, eax
rol		eax, 3
rol		esi, cl
nop
mov		[ebp+var_8], eax
nop
mov		edx, edi
neg		edx
mov		edi, esi
nop
nop
nop
mov		ecx, edx
ror		edi, cl
mov		ecx, [ebp+var_8]
nop
sub		edi, ecx
mov		esi, ebx
xor		ecx, edi
add		edi, 2DE7C2F8h
mov		[ebp+var_8], ecx
not		edi
nop
nop
mov		ecx, edx
mov		edx, [ebp+var_C]
ror		esi, cl
not		edx
nop
xor		esi, 0FDCB2490h
neg		esi
xor		esi, edx
rol		edx, 9
xor		edx, 818E30D5h
not		esi
add		edx, edi
rol		edx, 10h
xor		edx, 9EA7F9CCh
not		edx
xor		edx, 14AC9C4Ah
nop
mov		eax, esi
nop
mov		ebx, 92F796D5h
nop
nop
mov		ecx, [ebp+var_8]
rol		eax, cl
mov		ecx, [ebp+var_8]
nop
xor		ecx, edx
xor		eax, 69C76E25h
sub		ebx, eax
not		ecx
lea		eax, [edi+218E0B2Eh]
mov		[ebp+var_8], ecx
add		eax, ebx
mov		edi, 5DE27DF0h
add		ebx, edx
sub		edi, eax
add		edx, 601B8477h
not		edi
mov		[ebp+var_C], edx
lea		eax, [edx+edx]
sub		edi, eax
nop
mov		esi, edi
nop
neg		esi
nop
nop
mov		ecx, esi
rol		edx, cl
nop
nop
lea		eax, [edi+57BDC158h]
xor		edx, [ebp+var_8]
not		eax
mov		[ebp+var_4], edx
mov		edi, eax
nop
mov		ecx, esi
nop
ror		edx, cl
mov		esi, edx
mov		edx, 935AC3D7h
sub		edx, [ebp+var_8]
xor		ebx, esi
add		ebx, esi
not		edx
neg		ebx
ror		edx, 8
nop
xor		esi, 410D901Fh
nop
rol		esi, 10h
nop
rol		esi, 9
nop
xor		esi, eax
mov		ecx, ebx
mov		[ebp+var_4], esi
neg		edx
ror		edi, cl
nop
mov		eax, edx
ror		edi, 0Eh
neg		edi
nop
nop
nop
nop
mov		ecx, edi
rol		eax, cl
nop
nop
rol		eax, 1
nop
ror		ebx, 9
nop
mov		esi, eax
nop
mov		ecx, [ebp+var_4]
rol		esi, cl
nop
mov		eax, [ebp+var_4]
neg		esi
xor		esi, edi
rol		edi, 0Ah
xor		eax, esi
sub		ebx, eax
nop
nop
not		ebx
nop
mov		edx, ebx
nop
sub		esi, eax
mov		ecx, eax
rol		esi, 3
ror		esi, 6
rol		edx, cl
not		esi
nop
add		edi, esi
sub		eax, edx
mov		ebx, edi
rol		edx, 5
xor		eax, esi
rol		edx, 3
sub		edx, 1D782398h
mov		[ebp+var_4], eax
nop
mov		eax, edx
nop
xor		eax, esi
nop
rol		eax, 0Eh
nop
xor		eax, 0A31E8A15h
mov		ecx, edx
ror		ebx, cl
nop
mov		edi, eax
ror		ebx, 0Ah
xor		edx, ebx
sub		ebx, eax
nop
nop
nop
nop
mov		ecx, ebx
ror		edi, cl
mov		ecx, [ebp+var_4]
nop
sub		ecx, edx
xor		edx, ecx
xor		edi, ecx
add		ebx, edx
add		ecx, 7A8D9FBh
mov		[ebp+var_4], ecx
mov		eax, ebx
xor		eax, edx
ror		ebx, 2
add		eax, edi
nop
nop
mov		edx, eax
nop
nop
mov		ecx, ebx
rol		edx, cl
nop
nop
mov		[ebp+var_C], edx
nop
mov		esi, ebx
nop
not		edi
nop
sub		edi, 59A4F27Fh
mov		ecx, edx
mov		eax, 41BD0E6Ch
mov		edx, edi
rol		esi, cl
nop
mov		ebx, [ebp+var_4]
sub		eax, esi
nop
nop
nop
nop
mov		ecx, ebx
add		ebx, eax
ror		edx, cl
mov		eax, 9AE3761Fh
nop
nop
nop
mov		edi, esi
nop
not		edx
nop
add		edx, 5BF387D0h
xor		edx, esi
mov		ecx, ebx
sub		eax, edx
ror		edi, cl
not		ebx
nop
mov		esi, [ebp+var_C]
xor		esi, edi
neg		edi
xor		eax, esi
rol		edi, 2
neg		eax
xor		ebx, edi
sub		ebx, eax
xor		esi, 9243D359h
sub		esi, 153E8BDAh
neg		eax
add		ebx, esi
lea		edx, [edi+1]
xor		esi, 19D1CF2Ch
mov		[ebp+var_4], ebx
nop
mov		[ebp+var_C], esi
nop
mov		ebx, eax
nop
nop
mov		ecx, esi
ror		ebx, cl
mov		ecx, [ebp+var_4]
nop
not		ecx
xor		edx, ecx
not		ecx
mov		esi, edx
mov		[ebp+var_4], ecx
sub		esi, [ebp+var_C]
not		edx
xor		esi, 628C1576h
lea		eax, [edx+esi]
add		ebx, eax
mov		eax, ecx
sub		eax, esi
nop
add		edx, eax
nop
mov		edi, edx
mov		eax, esi
nop
mov		ecx, [ebp+var_4]
ror		edi, cl
nop
nop
nop
nop
ror		edi, 9
nop
mov		ecx, ebx
ror		ebx, 6
rol		eax, cl
sub		ebx, edi
nop
nop
mov		esi, [ebp+var_4]
nop
nop
sub		eax, 1268A7F9h
mov		edx, eax
not		esi
nop
mov		ecx, ebx
ror		esi, 0Dh
rol		edx, cl
add		esi, 65D27BA4h
nop
ror		esi, 5
mov		eax, ebx
nop
nop
nop
nop
mov		ecx, edx
sub		edx, esi
ror		eax, cl
nop
nop
nop
nop
sub		esi, eax
mov		ebx, eax
mov		[ebp+var_4], esi
nop
mov		ecx, edx
add		edx, 0E0248F2h
rol		ebx, cl
nop
nop
nop
mov		eax, [ebp+var_4]
nop
mov		esi, edx
neg		ebx
nop
neg		ebx
mov		ecx, eax
xor		ebx, 10D352C8h
add		eax, 6AE5F720h
rol		esi, cl
nop
mov		[ebp+var_4], eax
mov		edx, 192C0D6Fh
add		esi, 431D49C4h
sub		edx, edi
sub		ebx, esi
sub		edx, eax
xor		ebx, edx
xor		ebx, eax
xor		ebx, 0A3C884D0h
nop
nop
nop
nop
not		edx
nop
mov		ecx, ebx
rol		edx, 1
ror		eax, cl
xor		ebx, 0CCE60C44h
nop
neg		eax
xor		esi, eax
xor		eax, ebx
xor		edx, eax
mov		edi, esi
xor		edi, eax
add		edx, 93A8BCDh
rol		edx, 0Bh
sub		edi, edx
mov		eax, edi
sub		eax, ebx
not		ebx
add		eax, 0A826EB3Ah
mov		[ebp+var_10], ebx
add		edx, eax
mov		eax, esi
nop
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
nop
nop
nop
mov		ebx, eax
nop
mov		ecx, [ebp+var_10]
rol		ebx, cl
nop
nop
nop
mov		eax, [ebp+var_10]
nop
sub		eax, edx
ror		ebx, 8
mov		esi, eax
nop
mov		ecx, edi
sub		edi, edx
ror		esi, cl
not		edi
nop
nop
nop
mov		eax, edx
nop
add		ebx, esi
nop
mov		ecx, edi
ror		esi, 5
ror		eax, cl
not		esi
nop
add		ebx, esi
sub		eax, edi
add		eax, ebx
mov		ecx, eax
add		edi, eax
neg		ecx
mov		edx, edi
mov		[ebp+var_4], ecx
nop
nop
mov		ecx, eax
ror		edx, cl
nop
not		ebx
rol		edx, 1
mov		eax, 5A1879C9h
sub		eax, esi
neg		edx
xor		[ebp+var_4], eax
add		ebx, edx
mov		[ebp+var_14], ebx
xor		eax, 0B84D15D0h
mov		esi, [ebp+var_14]
mov		edi, esi
lea		ebx, [edx+1AF2CD47h]
neg		edi
xor		ebx, esi
mov		[ebp+var_C], edi
mov		edx, eax
nop
xor		ebx, 0B453FB57h
nop
nop
mov		ecx, esi
ror		edx, cl
nop
mov		eax, [ebp+var_4]
xor		eax, 4A51EE0Ch
mov		[ebp+var_4], eax
mov		esi, eax
nop
neg		esi
nop
nop
mov		ecx, esi
rol		edi, cl
nop
mov		ecx, edi
mov		[ebp+var_C], ecx
lea		edi, [ecx+15806CBEh]
nop
add		edi, edx
mov		edx, ebx
nop
mov		eax, edi
mov		ecx, esi
rol		edx, cl
nop
mov		esi, edx
neg		esi
nop
nop
nop
mov		ecx, edx
ror		eax, cl
mov		edx, 639AAC45h
mov		ecx, [ebp+var_4]
nop
sub		edx, [ebp+var_C]
xor		eax, esi
sub		esi, 51D1B8B5h
xor		eax, esi
rol		esi, 5
add		eax, 9B6A7CE2h
neg		esi
add		eax, ecx
xor		ecx, eax
mov		[ebp+var_4], ecx
nop
nop
lea		ebx, [eax+0F575592h]
nop
xor		ebx, 0F15AFEF3h
not		ebx
add		ebx, edx
xor		edx, esi
ror		edx, 3
mov		eax, edx
rol		ebx, 0Dh
nop
sub		ebx, esi
mov		ecx, esi
not		esi
ror		eax, cl
mov		edi, esi
nop
nop
mov		edx, [ebp+var_4]
nop
nop
not		edx
nop
add		eax, 308A740Dh
rol		edx, 0Dh
mov		ecx, ebx
add		eax, edx
rol		edi, cl
add		ebx, eax
nop
mov		[ebp+var_14], ebx
add		edi, edx
xor		eax, 9F0F211Ah
xor		edx, 0C03CA988h
sub		edi, eax
not		edx
rol		edi, 1
xor		edx, 5FAAE97Bh
mov		ebx, eax
nop
mov		[ebp+var_4], edx
nop
not		[ebp+var_4]
nop
neg		edi
nop
mov		ecx, edx
mov		edx, edi
ror		ebx, cl
nop
nop
mov		esi, ebx
nop
neg		esi
nop
nop
mov		ecx, esi
rol		edx, cl
nop
nop
mov		edi, [ebp+var_14]
add		edi, 7CC5176Ah
xor		edi, ebx
not		edi
mov		[ebp+var_C], edi
mov		edi, edx
mov		eax, [ebp+var_C]
nop
mov		ecx, esi
mov		esi, [ebp+var_4]
rol		edi, cl
nop
nop
nop
nop
mov		edx, esi
nop
mov		ecx, eax
not		eax
rol		edx, cl
nop
xor		edx, ebx
xor		edx, eax
xor		eax, ebx
nop
nop
nop
not		eax
mov		esi, edi
nop
dec		ebx
add		ebx, edx
mov		ecx, edx
add		eax, ebx
ror		esi, cl
add		edx, 588D96D3h
xor		edx, ebx
mov		[ebp+var_C], eax
xor		ebx, eax
nop
mov		edi, [ebp+var_C]
nop
nop
nop
lea		eax, [edx+esi]
rol		esi, 0Ch
add		edi, eax
not		esi
mov		eax, edx
nop
mov		ecx, ebx
rol		eax, cl
nop
mov		edx, ebx
xor		eax, edx
xor		eax, esi
rol		esi, 4
sub		edx, esi
inc		eax
xor		esi, 0BE8F2D32h
rol		edx, 0Eh
nop
mov		ebx, eax
nop
sub		edx, 0B2BAB2Ah
nop
not		edx
nop
mov		ecx, esi
rol		esi, 4
rol		ebx, cl
nop
mov		eax, 8E127B4Fh
sub		ebx, edx
xor		edx, 0A7446181h
nop
mov		[ebp+var_8], edx
sub		eax, [ebp+var_8]
nop
nop
mov		edx, esi
nop
mov		ecx, [ebp+var_8]
ror		edx, cl
nop
mov		esi, edi
nop
nop
nop
nop
mov		ecx, edx
add		edx, eax
mov		eax, [ebp+var_8]
add		ebx, eax
ror		esi, cl
nop
xor		eax, esi
xor		esi, edx
inc		eax
sub		esi, 72337E8h
add		edx, eax
add		esi, eax
rol		ebx, 9
neg		eax
mov		[ebp+var_14], ebx
mov		edi, eax
not		esi
xor		edi, edx
rol		edi, 4
sub		edi, ebx
mov		ebx, esi
sub		eax, edi
nop
nop
xor		eax, 0D7C10AB1h
nop
rol		eax, 3
nop
mov		ecx, edi
xor		edi, 9E3EA926h
ror		ebx, cl
nop
xor		eax, ebx
add		edi, ebx
xor		eax, 0B0562A78h
neg		edi
neg		eax
mov		esi, edi
mov		[ebp+var_8], eax
mov		edx, eax
nop
neg		edx
nop
nop
neg		ebx
mov		ecx, edx
xor		ebx, 0C63DD31Ch
ror		esi, cl
nop
mov		eax, [ebp+var_8]
nop
mov		edi, ebx
rol		eax, 6
nop
mov		ecx, edx
rol		edi, cl
nop
mov		[ebp+var_8], eax
mov		ebx, [ebp+var_14]
xor		eax, esi
rol		ebx, 0Bh
sub		ebx, 28245B2Eh
ror		eax, 0Bh
not		ebx
mov		edx, eax
nop
mov		esi, ebx
nop
xor		esi, edi
mov		edi, [ebp+var_8]
nop
nop
mov		ecx, ebx
rol		edx, cl
nop
mov		eax, ebx
sub		esi, edx
rol		edx, 3
sub		eax, edx
sub		edx, edi
add		esi, eax
nop
nop
mov		eax, ebx
nop
nop
mov		ecx, edx
ror		eax, cl
nop
sub		eax, 7BB73BC0h
nop
ror		eax, 5
nop
mov		ebx, esi
sub		ebx, edx
nop
mov		edx, edi
ror		ebx, 1
nop
mov		ecx, esi
sub		esi, ebx
ror		edx, cl
mov		ecx, ebx
nop
sub		ecx, eax
ror		edx, 3
rol		ecx, 2
neg		edx
xor		edx, ebx
neg		ebx
xor		edx, esi
ror		esi, 2
xor		esi, ebx
rol		edx, 5
sub		ebx, ecx
neg		edx
not		ecx
add		esi, 7577D1F8h
mov		[ebp+var_C], ecx
mov		eax, edx
neg		eax
add		esi, 15DAF419h
nop
mov		edi, esi
nop
nop
not		ebx
mov		ecx, edx
mov		[ebp+var_14], ebx
ror		edi, cl
mov		ebx, eax
mov		ecx, [ebp+var_C]
nop
neg		edi
xor		edi, ecx
ror		ecx, 0Eh
nop
mov		[ebp+var_C], ecx
mov		esi, ecx
nop
neg		esi
nop
nop
mov		ecx, esi
xor		edi, 0A0350E03h
rol		ebx, cl
nop
mov		eax, [ebp+var_14]
nop
mov		[ebp+var_10], ebx
nop
mov		ebx, eax
nop
nop
mov		ecx, [ebp+var_10]
ror		ebx, cl
nop
nop
mov		eax, edi
nop
mov		ecx, esi
rol		eax, cl
nop
nop
mov		edi, [ebp+var_10]
xor		edi, ebx
sub		edi, 3232D832h
nop
mov		edx, eax
nop
nop
mov		ecx, ebx
ror		edx, cl
nop
mov		eax, [ebp+var_C]
sub		ebx, eax
rol		edx, 5
add		eax, 75148E1Ch
mov		esi, edx
mov		[ebp+var_C], eax
neg		esi
nop
nop
ror		esi, 4
mov		eax, edi
not		ebx
nop
neg		esi
mov		ecx, edx
mov		edx, esi
rol		eax, cl
nop
mov		edi, eax
lea		eax, [ebx+7FE27177h]
mov		ebx, [ebp+var_C]
not		edi
nop
not		edi
nop
xor		edi, 3C53E74Bh
nop
not		eax
nop
mov		ecx, ebx
ror		edx, cl
nop
nop
nop
neg		edx
nop
mov		[ebp+var_C], edx
mov		esi, 0B5CF0CF4h
mov		edx, eax
nop
mov		ecx, edi
rol		edx, cl
nop
mov		eax, edi
xor		ebx, edx
rol		edx, 4
ror		ebx, 8
not		ebx
nop
nop
nop
nop
mov		ecx, ebx
rol		ebx, 0Eh
rol		eax, cl
nop
mov		edi, [ebp+var_C]
ror		eax, 0Ch
neg		edi
sub		eax, ebx
rol		ebx, 5
neg		ebx
not		eax
sub		esi, ebx
xor		eax, 9EF286C3h
sub		esi, edx
mov		edx, 4E7E62B2h
xor		esi, 9EF64D84h
xor		ebx, 0F9DAE3C1h
sub		edx, ebx
nop
nop
mov		ebx, eax
nop
xor		edx, 0C09E8BA3h
nop
mov		ecx, edi
rol		edx, 4
rol		ebx, cl
not		edi
nop
mov		eax, edx
xor		ebx, 2241B6F9h
rol		ebx, 7
sub		ebx, 0ABBB130h
xor		ebx, esi
ror		esi, 6
sub		edi, ebx
inc		esi
not		edi
nop
nop
nop
nop
mov		ecx, edi
not		edi
ror		eax, cl
xor		edi, 8B3E0F01h
nop
sub		edi, ebx
not		eax
not		ebx
rol		eax, 0Bh
neg		edi
xor		esi, eax
add		eax, 0BF76E215h
xor		ebx, esi
xor		eax, 299D0FAFh
not		eax
nop
nop
mov		edx, eax
nop
add		esi, 6EED47A3h
nop
xor		esi, ebx
mov		ecx, ebx
rol		edx, cl
nop
lea		eax, [ebx-7CE5C4C9h]
xor		edi, edx
sub		esi, edx
ror		edi, 8
mov		ecx, edi
mov		[ebp+var_C], edi
neg		ecx
mov		edi, edx
mov		[ebp+var_14], ecx
nop
nop
mov		ecx, [ebp+var_C]
rol		edi, cl
nop
ror		edi, 4
sub		edi, esi
rol		esi, 0Ch
add		esi, ebx
ror		edi, 0Ah
mov		ebx, [ebp+var_14]
nop
xor		eax, ebx
ror		esi, 0Ah
nop
neg		eax
xor		ebx, 6A2DB762h
nop
mov		edx, esi
not		eax
nop
mov		ecx, edi
xor		edi, ebx
rol		edx, cl
not		edi
nop
rol		edi, 1
mov		[ebp+var_14], edx
nop
nop
mov		esi, [ebp+var_14]
nop
mov		edx, eax
nop
neg		ebx
mov		ecx, edi
rol		edx, cl
nop
not		edx
xor		ebx, edx
inc		edx
xor		ebx, 58037AA1h
lea		eax, [edi+ebx]
mov		edi, edx
neg		eax
xor		ebx, esi
add		eax, edx
neg		ebx
nop
xor		esi, 9BDAA6BDh
nop
not		esi
nop
nop
mov		ecx, eax
rol		edi, cl
nop
lea		edx, [eax-5D2FECB1h]
nop
mov		eax, ebx
nop
not		edx
nop
mov		[ebp+var_8], edx
nop
mov		ecx, edi
ror		eax, cl
nop
sub		edx, eax
mov		eax, [ebp+var_8]
add		edx, edi
sub		eax, 3B72FF0Fh
sub		esi, eax
neg		edx
xor		esi, edi
rol		edi, 6
sub		esi, edx
sub		edx, edi
ror		esi, 0Bh
sub		edi, esi
inc		esi
xor		eax, esi
rol		edi, 10h
xor		eax, 0E74A31FBh
ror		edi, 0Ch
rol		eax, 0Dh
sub		edi, 2E5CD177h
lea		ebx, [esi+79113805h]
mov		ecx, eax
ror		ebx, 0Fh
neg		eax
add		ebx, 59F07153h
mov		[ebp+var_8], eax
sub		ecx, edx
xor		ebx, edi
not		ecx
sub		ebx, 4838F2D1h
xor		ecx, eax
mov		eax, 0A3C2206h
sub		eax, edi
not		edi
xor		edi, ebx
not		edi
rol		edi, 3
lea		edx, [ecx+eax*2]
not		edx
add		ebx, edx
xor		edx, edi
sub		edi, [ebp+var_8]
xor		ebx, 857289EDh
add		edi, ebx
nop
nop
not		edi
nop
mov		esi, edi
nop
mov		ecx, edx
ror		esi, cl
nop
not		esi
mov		edi, esi
xor		edi, edx
xor		edi, 35E06C94h
lea		eax, [esi+ebx]
nop
sub		[ebp+var_8], eax
sub		ebx, esi
nop
sub		ebx, 25EB504Eh
nop
rol		ebx, 4
sub		esi, ebx
rol		ebx, 10h
mov		[ebp+var_10], esi
xor		ebx, 599CC78Bh
mov		eax, [ebp+var_10]
mov		esi, ebx
nop
mov		edx, eax
mov		ecx, edi
neg		edx
rol		esi, cl
mov		ecx, [ebp+var_8]
nop
xor		ecx, 186A8B8Fh
mov		ebx, esi
rol		ecx, 0Ah
not		ecx
sub		ecx, eax
nop
mov		[ebp+var_8], ecx
nop
nop
mov		ecx, edx
ror		ebx, cl
nop
mov		eax, edi
nop
nop
mov		ecx, edx
mov		edx, [ebp+var_8]
mov		esi, edx
ror		eax, cl
nop
nop
nop
nop
neg		eax
nop
mov		ecx, ebx
mov		[ebp+var_C], eax
ror		esi, cl
sub		ebx, eax
nop
xor		ebx, eax
mov		edx, [ebp+var_10]
nop
nop
ror		edx, 0Fh
nop
inc		edx
mov		eax, edx
nop
mov		ecx, [ebp+var_C]
ror		eax, cl
nop
mov		edx, ebx
nop
nop
nop
nop
mov		ecx, eax
rol		eax, 3
rol		edx, cl
sub		esi, eax
nop
mov		edi, eax
nop
nop
nop
mov		ebx, edx
nop
neg		ebx
mov		ecx, esi
ror		edi, cl
nop
nop
nop
mov		eax, esi
rol		edi, 1
nop
sub		edi, 18C62190h
mov		ecx, edx
rol		eax, cl
nop
nop
nop
mov		esi, [ebp+var_C]
nop
ror		eax, 5
mov		edx, eax
nop
mov		ecx, ebx
rol		ebx, 5
rol		edx, cl
nop
nop
nop
nop
mov		eax, esi
nop
xor		edx, ebx
mov		ecx, edi
add		ebx, edx
sub		edx, ebx
rol		eax, cl
nop
mov		[ebp+var_8], edx
nop
mov		[ebp+var_C], eax
nop
mov		esi, edi
nop
nop
mov		ecx, eax
ror		esi, cl
mov		eax, ebx
nop
nop
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
nop
nop
nop
mov		ebx, [ebp+var_C]
mov		edx, eax
nop
mov		ecx, esi
ror		edx, cl
nop
mov		eax, [ebp+var_8]
not		edx
xor		eax, edx
sub		edx, eax
mov		[ebp+var_8], eax
sub		esi, edx
add		ebx, eax
neg		edx
mov		[ebp+var_C], ebx
mov		edi, edx
nop
nop
mov		eax, ebx
nop
sub		eax, esi
mov		esi, [ebp+var_8]
nop
mov		ecx, ebx
mov		[ebp+var_14], eax
rol		edi, cl
nop
nop
nop
nop
nop
nop
add		edi, 4EC71D5Fh
mov		ecx, esi
rol		ebx, cl
nop
mov		edx, eax
nop
neg		edx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
mov		eax, [ebp+var_14]
not		esi
mov		[ebp+var_8], esi
mov		esi, edi
nop
mov		ecx, edx
ror		esi, cl
mov		edx, eax
nop
nop
nop
not		esi
nop
nop
mov		ecx, [ebp+var_8]
rol		edx, cl
nop
mov		eax, esi
mov		ecx, esi
sub		eax, ebx
mov		ebx, [ebp+var_8]
sub		edx, eax
sub		ebx, eax
sub		ecx, edx
mov		[ebp+var_8], ebx
sub		ecx, 27BFDB2Bh
mov		[ebp+var_4], ecx
lea		edi, [edx-2831FF6Bh]
mov		edx, ecx
add		edi, eax
xor		edx, esi
add		edi, ebx
not		edx
xor		edi, ebx
mov		eax, ebx
neg		eax
xor		edi, edx
mov		[ebp+var_C], edi
mov		[ebp+var_14], eax
nop
mov		esi, edx
nop
nop
mov		ecx, eax
mov		eax, [ebp+var_4]
sub		eax, [ebp+var_8]
ror		esi, cl
rol		eax, 0Ch
nop
mov		edx, eax
mov		[ebp+var_4], eax
nop
neg		edx
nop
nop
mov		ecx, edx
ror		[ebp+var_C], cl
nop
nop
mov		edi, esi
mov		eax, [ebp+var_4]
nop
mov		ecx, edx
mov		edx, [ebp+var_C]
rol		edi, cl
nop
rol		eax, 6
nop
mov		esi, [ebp+var_8]
add		edi, edx
ror		eax, 2
not		edi
add		eax, 6F3E4270h
sub		edi, esi
not		eax
add		edx, 3FDC0CCDh
mov		ebx, eax
xor		edx, edi
nop
mov		ecx, [ebp+var_14]
ror		ebx, cl
nop
nop
nop
nop
mov		eax, esi
nop
neg		ebx
mov		ecx, edi
xor		edi, 8B166DEDh
rol		eax, cl
nop
nop
nop
nop
mov		esi, eax
nop
mov		ecx, edx
sub		edx, ebx
ror		esi, cl
neg		ebx
nop
mov		[ebp+var_10], edx
nop
mov		eax, edi
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
nop
ror		eax, 9
mov		edx, esi
xor		eax, ebx
nop
not		eax
mov		ecx, [ebp+var_10]
xor		eax, 0EF8E62BDh
mov		[ebp+var_4], eax
ror		edx, cl
mov		edi, eax
nop
nop
mov		esi, edx
neg		edi
nop
nop
neg		ebx
mov		ecx, edi
mov		[ebp+var_C], ebx
ror		esi, cl
nop
nop
not		esi
nop
nop
nop
nop
mov		ecx, esi
ror		ebx, cl
nop
mov		eax, [ebp+var_4]
nop
mov		edx, esi
nop
mov		ecx, edi
mov		edi, [ebp+var_10]
ror		edx, cl
xor		edi, eax
nop
sub		edi, 60AE78A3h
add		edx, eax
mov		esi, ebx
sub		eax, edx
mov		[ebp+var_8], edx
mov		[ebp+var_4], eax
neg		esi
nop
mov		edx, edi
nop
nop
nop
mov		ecx, esi
ror		edx, cl
nop
add		[ebp+var_8], ebx
mov		edi, edx
nop
mov		eax, [ebp+var_4]
nop
sub		ebx, eax
mov		ecx, esi
not		ebx
ror		edi, cl
nop
rol		ebx, 8
nop
mov		[ebp+var_14], ebx
nop
mov		esi, ebx
nop
mov		ebx, eax
nop
neg		esi
mov		ecx, esi
rol		ebx, cl
nop
mov		eax, edi
nop
nop
nop
nop
mov		ecx, ebx
rol		ebx, 1
rol		eax, cl
nop
mov		edx, [ebp+var_14]
nop
sub		ebx, eax
mov		edi, eax
nop
add		edx, ebx
mov		ecx, esi
neg		edx
rol		edi, cl
mov		ecx, [ebp+var_8]
nop
xor		ecx, 1E6834F4h
ror		edi, 0Eh
rol		ecx, 1
xor		edx, ecx
add		ebx, ecx
rol		ecx, 3
neg		ebx
sub		ecx, 3ECDEDE7h
add		edi, ebx
ror		ecx, 0Ch
not		edi
not		ecx
ror		edi, 9
sub		ecx, edi
add		edx, 4787D32Fh
sub		edi, 49E8A824h
ror		edx, 0Ch
add		ecx, 4DE62B84h
ror		edx, 6
nop
mov		[ebp+var_8], ecx
mov		esi, edi
mov		[ebp+var_10], edi
not		edx
nop
neg		esi
mov		edi, edx
nop
nop
not		ebx
mov		ecx, esi
rol		edi, cl
mov		ecx, [ebp+var_8]
nop
add		ecx, [ebp+var_10]
nop
mov		[ebp+var_8], ecx
nop
nop
add		edi, 0AD4CF431h
mov		eax, [ebp+var_10]
mov		ecx, esi
rol		ebx, cl
nop
mov		esi, ebx
xor		edi, [ebp+var_8]
not		esi
mov		edx, eax
nop
not		edi
nop
add		edi, 0F5B7814h
nop
nop
mov		ecx, esi
ror		esi, 0Ah
rol		edx, cl
mov		ebx, esi
nop
nop
sub		edx, [ebp+var_8]
nop
add		edx, 24641436h
nop
mov		eax, edx
nop
mov		ecx, esi
ror		eax, cl
nop
xor		eax, esi
sub		ebx, eax
xor		ebx, esi
sub		ebx, edi
sub		esi, ebx
nop
mov		[ebp+var_C], esi
nop
mov		edx, ebx
mov		esi, edi
neg		edx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
mov		eax, ebx
mov		edi, [ebp+var_C]
mov		[ebp+var_14], esi
mov		esi, edi
nop
mov		ecx, edx
ror		esi, cl
nop
mov		edi, esi
nop
neg		edi
nop
nop
mov		edx, edi
mov		ecx, edx
rol		eax, cl
nop
nop
mov		ebx, eax
nop
mov		ecx, edx
mov		edx, [ebp+var_8]
xor		edx, 0D49CA892h
rol		ebx, cl
neg		edx
nop
rol		edx, 5
sub		edx, 12918DEAh
xor		edx, ebx
rol		edx, 1
xor		edi, 45AAC9E2h
xor		edx, 0B715BF9h
mov		eax, 0ED9EAA55h
sub		eax, [ebp+var_14]
mov		esi, edx
sub		eax, ebx
sub		eax, edi
neg		edi
nop
nop
nop
nop
mov		ecx, eax
ror		esi, cl
nop
mov		edx, eax
xor		esi, ebx
not		ebx
sub		esi, 6A48C8B4h
mov		[ebp+var_C], ebx
nop
nop
nop
nop
mov		ecx, esi
not		esi
ror		edx, cl
nop
nop
nop
mov		eax, [ebp+var_C]
nop
mov		ebx, edi
neg		edx
nop
mov		ecx, eax
add		eax, edx
ror		ebx, cl
nop
nop
mov		[ebp+var_C], eax
nop
sub		[ebp+var_C], 5F3E2C37h
mov		eax, edx
nop
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
nop
mov		edx, esi
nop
mov		ecx, ebx
xor		ebx, 0E29562E9h
ror		edx, cl
nop
mov		esi, eax
mov		edi, edx
mov		[ebp+var_8], edx
nop
neg		edi
nop
nop
mov		ecx, edi
rol		esi, cl
nop
nop
ror		esi, 0Ah
xor		esi, 37605905h
mov		eax, esi
nop
mov		ecx, edi
rol		eax, cl
mov		edi, [ebp+var_8]
nop
ror		eax, 0Ch
add		edi, 4C8A2CA9h
mov		esi, ebx
sub		esi, eax
nop
lea		edx, [edi+ebx]
nop
mov		ebx, [ebp+var_C]
nop
mov		eax, ebx
not		edi
nop
neg		edx
mov		ecx, esi
neg		edx
ror		edx, 0Bh
ror		eax, cl
nop
nop
nop
sub		eax, edi
nop
ror		edi, 9
xor		eax, 0A6BBC756h
not		edi
add		esi, eax
mov		[ebp+var_8], edi
mov		ebx, edx
mov		edi, eax
xor		esi, 4040ACCAh
nop
not		esi
mov		ecx, edx
mov		[ebp+var_14], esi
rol		edi, cl
nop
mov		eax, [ebp+var_8]
nop
nop
nop
nop
mov		ecx, eax
xor		eax, 6B55FB9Bh
ror		ebx, cl
nop
sub		eax, ebx
sub		edi, ebx
rol		eax, 5
neg		ebx
sub		eax, esi
ror		edi, 1
mov		edx, eax
mov		[ebp+var_8], eax
nop
mov		esi, edi
neg		edx
nop
nop
mov		ecx, edx
ror		esi, cl
nop
nop
mov		edi, ebx
nop
mov		ecx, edx
ror		edi, cl
nop
mov		ebx, esi
nop
nop
nop
nop
mov		ecx, edi
ror		ebx, cl
add		edi, 0C8818087h
mov		ecx, [ebp+var_8]
nop
ror		ecx, 7
mov		eax, 17A2439h
sub		eax, [ebp+var_14]
ror		ebx, 5
not		eax
add		ecx, ebx
ror		edi, 0Ch
mov		[ebp+var_8], ecx
mov		edx, eax
ror		edi, 4
sub		edi, ebx
xor		ebx, ecx
rol		edi, 1
ror		edi, 7
nop
mov		[ebp+var_4], ebx
nop
mov		esi, [ebp+var_4]
nop
nop
mov		ecx, edi
rol		edx, cl
nop
nop
nop
add		edx, ebx
nop
add		edx, edi
mov		eax, edi
xor		edx, ebx
mov		ebx, edx
nop
mov		ecx, esi
rol		esi, 0Eh
ror		ebx, cl
nop
mov		[ebp+var_4], esi
mov		edx, [ebp+var_8]
nop
nop
nop
nop
mov		ecx, edx
xor		edx, ebx
rol		eax, cl
neg		ebx
mov		ecx, ebx
mov		[ebp+var_8], edx
neg		ecx
mov		[ebp+var_14], ebx
mov		esi, ecx
mov		[ebp+var_10], ecx
nop
nop
mov		ebx, [ebp+var_8]
nop
mov		edi, ebx
nop
nop
mov		ecx, esi
xor		eax, 722E76B6h
rol		edi, cl
not		eax
mov		ecx, [ebp+var_4]
nop
xor		edi, ecx
mov		ebx, eax
nop
nop
nop
mov		ecx, [ebp+var_4]
ror		ebx, cl
nop
nop
mov		eax, [ebp+var_4]
add		ebx, 42A78FFDh
nop
mov		ecx, esi
nop
rol		eax, cl
nop
add		ebx, [ebp+var_14]
nop
nop
xor		eax, 75CD8084h
nop
mov		esi, eax
nop
mov		ecx, edi
sub		edi, [ebp+var_10]
rol		esi, cl
mov		edx, edi
nop
nop
nop
not		esi
nop
mov		eax, 0C850EBCBh
nop
mov		ecx, ebx
add		ebx, esi
rol		edx, cl
xor		esi, 1C6EC209h
nop
neg		ebx
xor		ebx, esi
mov		edi, 700A7603h
sub		edi, [ebp+var_10]
sub		eax, ebx
not		edi
ror		esi, 8
mov		ebx, edi
add		esi, 101F6AC4h
mov		edi, eax
nop
nop
xor		esi, ebx
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
lea		eax, [edx-5374CA54h]
not		eax
nop
sub		eax, ebx
nop
sub		eax, edi
nop
ror		eax, 0Ah
sub		ebx, 2CCF15D6h
mov		edx, eax
nop
mov		ecx, edi
not		edi
ror		edx, cl
nop
nop
nop
not		edx
nop
neg		edx
mov		eax, edx
xor		eax, esi
mov		esi, 17D24246h
sub		esi, eax
mov		eax, edx
sub		esi, edx
nop
mov		ecx, ebx
ror		esi, 0Fh
xor		ebx, 7DB94926h
ror		eax, cl
not		ebx
nop
mov		edx, edi
rol		eax, 2
nop
nop
nop
nop
mov		ecx, eax
add		eax, 6836F849h
ror		edx, cl
xor		eax, ebx
nop
not		ebx
mov		edi, 91D230ACh
sub		edi, esi
mov		esi, edx
not		edi
add		edi, 435A2315h
ror		edi, 0Ch
xor		eax, edi
rol		edi, 1
xor		eax, 4A4EDACBh
add		ebx, edi
nop
nop
nop
nop
mov		ecx, eax
ror		esi, cl
nop
mov		edx, eax
nop
nop
nop
nop
mov		ecx, esi
not		esi
ror		edx, cl
nop
ror		esi, 0Ch
sub		ebx, edx
add		edi, edx
rol		edx, 0Eh
xor		ebx, 0F02B8DCFh
nop
mov		[ebp+var_C], ebx
nop
mov		[ebp+var_14], edx
nop
mov		ebx, esi
nop
mov		ecx, edx
lea		edx, [edi+7C3F463Eh]
mov		edi, [ebp+var_C]
mov		eax, edi
ror		ebx, cl
nop
mov		esi, [ebp+var_14]
xor		edx, esi
xor		esi, 2E3C01D4h
not		esi
nop
nop
nop
nop
mov		ecx, esi
ror		eax, cl
nop
add		eax, 6DE7BF97h
sub		esi, ebx
sub		ebx, edx
not		esi
nop
mov		[ebp+var_14], ebx
nop
not		eax
nop
mov		ebx, eax
nop
mov		edi, edx
mov		ecx, esi
not		esi
rol		esi, 9
rol		ebx, cl
not		esi
nop
xor		esi, 19BF9301h
nop
mov		eax, esi
nop
nop
nop
mov		ecx, ebx
xor		ebx, 17E217BEh
ror		edi, cl
nop
nop
mov		[ebp+var_10], ebx
nop
nop
nop
neg		edi
mov		ecx, ebx
ror		edi, 6
not		edi
rol		eax, cl
nop
mov		esi, 9CB5D977h
sub		esi, [ebp+var_14]
mov		edx, eax
sub		edi, esi
nop
mov		ebx, edi
nop
nop
nop
mov		ecx, edi
rol		edx, cl
nop
nop
nop
mov		eax, [ebp+var_10]
nop
nop
xor		eax, esi
mov		ecx, esi
neg		edx
mov		[ebp+var_C], edx
ror		ebx, cl
nop
mov		edx, ebx
sub		edx, eax
mov		eax, ebx
xor		eax, esi
ror		ebx, 0Ch
ror		eax, 3
nop
nop
mov		esi, eax
nop
not		ebx
nop
mov		ecx, edx
ror		esi, cl
nop
mov		eax, [ebp+var_C]
add		esi, ebx
nop
mov		edi, edx
nop
neg		ebx
nop
not		esi
nop
mov		ecx, eax
ror		eax, 0Dh
rol		edi, cl
xor		ebx, eax
nop
ror		eax, 2
xor		eax, 0E76D5CC4h
rol		edi, 1
ror		edi, 5
inc		edi
sub		eax, edi
add		eax, esi
sub		esi, edi
sub		eax, edi
mov		[ebp+var_C], eax
mov		eax, ebx
mov		edx, [ebp+var_C]
neg		eax
nop
nop
nop
mov		ecx, ebx
nop
rol		edx, cl
nop
mov		ebx, esi
nop
nop
nop
nop
mov		ecx, edx
ror		ebx, cl
nop
mov		esi, eax
neg		ebx
nop
nop
nop
nop
mov		ecx, ebx
rol		ebx, 6
ror		esi, cl
nop
mov		[ebp+var_10], ebx
neg		esi
lea		ebx, [edx+5EC9AC24h]
nop
ror		ebx, 1
nop
mov		eax, edi
nop
mov		edx, ebx
nop
neg		edx
mov		ecx, esi
ror		eax, cl
nop
mov		edi, esi
mov		[ebp+var_8], eax
nop
nop
nop
nop
mov		ecx, edx
rol		edi, cl
nop
mov		esi, [ebp+var_10]
nop
nop
neg		edi
nop
mov		ecx, edx
rol		esi, cl
add		edi, 37CAE456h
nop
mov		eax, [ebp+var_8]
sub		esi, ebx
mov		edx, eax
sub		ebx, eax
neg		edx
xor		ebx, 5583971Eh
nop
mov		[ebp+var_C], ebx
nop
xor		esi, 0D094DEE9h
nop
mov		ecx, edx
ror		[ebp+var_C], cl
nop
nop
mov		ebx, edi
mov		eax, [ebp+var_8]
nop
mov		ecx, edx
ror		ebx, cl
nop
ror		eax, 8
mov		edi, [ebp+var_C]
not		ebx
add		ebx, esi
mov		edx, eax
add		esi, edi
nop
nop
neg		esi
nop
xor		esi, ebx
nop
add		esi, 65D1EBCEh
mov		ecx, ebx
neg		edi
xor		edi, 0E462180Eh
rol		edx, cl
nop
nop
rol		edi, 0Dh
nop
rol		edx, 10h
nop
neg		edx
mov		eax, ebx
ror		edx, 3
nop
not		edx
mov		ecx, esi
mov		[ebp+var_C], edx
xor		esi, 29774BDDh
ror		eax, cl
mov		edx, 0E1DEADA1h
nop
sub		edx, edi
mov		ebx, [ebp+var_C]
not		edx
sub		esi, ebx
nop
sub		esi, 32856596h
nop
rol		esi, 0Ah
nop
mov		[ebp+var_14], esi
mov		esi, eax
nop
mov		ecx, ebx
add		ebx, [ebp+var_14]
mov		edi, 0C353E827h
rol		esi, cl
nop
nop
sub		edi, [ebp+var_14]
nop
nop
mov		eax, edx
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		edx, esi
nop
mov		[ebp+var_4], eax
nop
nop
nop
mov		ecx, eax
rol		edx, cl
mov		ecx, [ebp+var_4]
nop
xor		ebx, edx
xor		ecx, 0A43B8891h
ror		ecx, 5
mov		eax, ebx
xor		eax, edx
add		ebx, edi
neg		eax
mov		[ebp+var_C], ebx
xor		edi, eax
mov		esi, 2
add		ecx, edi
lea		edx, [edi+5D8EC168h]
lea		ebx, [ecx+eax]
rol		edx, 3
ror		edx, 0Bh
neg		edx
rol		ebx, 8
add		ebx, ecx
ror		edx, 0Ah
not		ecx
neg		ebx
sub		esi, ecx
add		edx, ecx
sub		esi, [ebp+var_C]
not		ecx
rol		edx, 0Fh
not		esi
xor		edx, 0C81CD2AAh
xor		ebx, 0C0578C7Ch
sub		esi, edx
add		edx, 65FA3B6Ah
not		esi
mov		eax, edx
sub		esi, ecx
sub		ecx, edx
mov		[ebp+var_4], ecx
sub		esi, 6CA6120Eh
nop
mov		[ebp+var_14], esi
nop
nop
nop
mov		ecx, esi
ror		eax, cl
nop
mov		edx, [ebp+var_4]
nop
mov		edi, eax
nop
nop
nop
mov		ecx, edx
ror		edi, cl
nop
nop
mov		esi, ebx
nop
xor		edx, 0FC7EDF5Ah
nop
mov		[ebp+var_4], edx
nop
neg		edx
nop
mov		ecx, edi
not		edi
ror		esi, cl
nop
nop
nop
sub		edi, esi
neg		esi
mov		ebx, esi
nop
mov		ecx, edx
rol		ebx, cl
nop
nop
mov		esi, edi
nop
mov		ecx, edx
rol		esi, cl
mov		ecx, [ebp+var_4]
nop
mov		edi, [ebp+var_14]
inc		esi
add		edi, 67BE7044h
ror		ebx, 3
xor		ecx, edi
ror		edi, 4
ror		ecx, 0Bh
neg		ecx
lea		eax, [edi+edi]
ror		edi, 0Dh
xor		ecx, edi
sub		esi, eax
xor		ecx, 5F4E2BD6h
not		esi
neg		ecx
mov		eax, ebx
mov		[ebp+var_4], ecx
xor		eax, esi
neg		edi
mov		esi, edi
lea		edx, [ecx+4B2D4A58h]
add		edx, eax
nop
nop
nop
nop
mov		ecx, edx
ror		esi, cl
mov		ecx, [ebp+var_4]
nop
xor		ecx, edx
neg		ecx
rol		ecx, 10h
mov		[ebp+var_4], ecx
lea		eax, [esi+ebx]
neg		eax
mov		ebx, edx
nop
nop
nop
nop
mov		ecx, eax
rol		ebx, cl
mov		ecx, esi
neg		ecx
nop
mov		[ebp+var_C], ecx
nop
mov		edi, eax
nop
mov		ecx, esi
ror		edi, cl
nop
mov		esi, [ebp+var_C]
mov		eax, [ebp+var_4]
nop
sub		eax, ebx
rol		esi, 9
add		ebx, eax
mov		[ebp+var_14], edi
nop
mov		[ebp+var_C], esi
nop
lea		edx, [eax+245EA7BAh]
mov		eax, 37860E2Dh
sub		eax, edi
rol		edx, 0Fh
add		edx, eax
mov		eax, edx
nop
mov		ecx, edi
mov		edi, ebx
rol		eax, cl
nop
xor		eax, esi
xor		eax, 38818564h
add		eax, ebx
nop
nop
nop
nop
mov		ecx, eax
rol		edi, cl
nop
mov		ebx, [ebp+var_14]
neg		edi
xor		ebx, 0E775C8D5h
xor		edi, eax
mov		edx, ebx
nop
nop
nop
lea		esi, [eax+edi]
nop
mov		eax, [ebp+var_C]
neg		esi
xor		esi, eax
mov		ecx, edi
not		esi
ror		edx, cl
xor		eax, esi
nop
mov		[ebp+var_C], eax
sub		eax, edx
mov		edx, edi
lea		ebx, [eax-60EC1E90h]
mov		eax, [ebp+var_C]
xor		eax, edi
add		ebx, edi
mov		ecx, eax
neg		ecx
mov		[ebp+var_14], ecx
nop
nop
mov		ecx, eax
rol		edx, cl
lea		eax, [esi+ebx]
not		eax
nop
add		eax, ebx
nop
nop
mov		esi, eax
nop
nop
mov		ecx, ebx
mov		edi, [ebp+var_14]
ror		esi, cl
not		ebx
nop
ror		ebx, 0Bh
mov		[ebp+var_8], esi
mov		eax, ebx
mov		esi, edi
xor		esi, edx
mov		edx, [ebp+var_8]
inc		esi
rol		edx, 0Dh
nop
xor		edi, esi
nop
neg		edx
nop
mov		[ebp+var_8], edx
nop
mov		ecx, esi
xor		esi, edi
rol		eax, cl
not		edi
nop
mov		[ebp+var_14], esi
mov		ebx, [ebp+var_14]
add		esi, eax
nop
rol		ebx, 0Dh
nop
xor		edi, 78B4FADAh
nop
mov		eax, edi
nop
neg		esi
mov		ecx, edx
mov		edx, 0EB30F183h
ror		eax, cl
nop
nop
nop
nop
sub		edx, eax
sub		edx, [ebp+var_8]
mov		eax, esi
nop
mov		edi, ebx
mov		ecx, ebx
sub		edi, edx
sub		edi, 61AFF898h
ror		eax, cl
mov		ecx, [ebp+var_8]
nop
sub		eax, ecx
rol		ecx, 10h
not		eax
sub		ecx, eax
rol		ecx, 0Ah
lea		esi, [eax-49EBB132h]
mov		eax, 14AB1268h
rol		esi, 8
sub		eax, esi
add		ecx, eax
not		ecx
mov		[ebp+var_8], ecx
nop
mov		edx, [ebp+var_8]
nop
nop
mov		eax, edx
nop
mov		ecx, edi
rol		eax, cl
nop
nop
mov		edx, 5B56DDEBh
sub		edx, ebx
nop
nop
mov		ebx, eax
nop
xor		edx, edi
mov		ecx, esi
sub		edi, edx
sub		edi, 5112B4Ah
ror		ebx, cl
not		edi
nop
add		edi, 6F84895Ah
sub		ebx, edx
mov		[ebp+var_14], edi
rol		ebx, 8
sub		edx, 7C064605h
dec		ebx
inc		esi
sub		ebx, edi
xor		esi, 0FAC50489h
xor		ebx, edx
mov		edi, edx
nop
neg		esi
nop
rol		esi, 10h
nop
nop
mov		ecx, ebx
ror		edi, cl
nop
not		edi
add		esi, edi
sub		ebx, edi
neg		esi
mov		[ebp+var_C], ebx
mov		ecx, [ebp+var_C]
add		edi, esi
neg		esi
mov		[ebp+var_8], ecx
xor		esi, ebx
xor		ebx, [ebp+var_14]
sub		esi, 198A656Ch
xor		ebx, 0D1170428h
mov		eax, esi
neg		ebx
neg		eax
ror		ebx, 0Bh
mov		edx, eax
mov		[ebp+var_10], eax
nop
nop
nop
nop
mov		ecx, edx
ror		[ebp+var_C], cl
nop
mov		ecx, [ebp+var_C]
sub		ecx, esi
xor		ecx, esi
mov		esi, edi
mov		[ebp+var_8], ecx
nop
mov		eax, [ebp+var_10]
nop
mov		ecx, edx
ror		esi, cl
nop
ror		eax, 2
xor		esi, [ebp+var_8]
not		eax
xor		esi, 8A5A9CE9h
rol		eax, 3
neg		esi
add		eax, esi
mov		edi, esi
mov		[ebp+var_10], eax
neg		edi
mov		edx, ebx
nop
nop
rol		edi, 0Fh
nop
mov		ecx, esi
rol		edx, cl
nop
nop
mov		ebx, [ebp+var_8]
rol		edx, 3
dec		ebx
mov		[ebp+var_4], edx
mov		edx, ebx
neg		edx
nop
nop
nop
mov		ecx, ebx
rol		eax, cl
mov		ebx, edi
nop
mov		esi, 0B5EF17F3h
sub		esi, eax
mov		eax, edx
nop
nop
nop
nop
mov		ecx, esi
xor		esi, edx
ror		ebx, cl
nop
mov		edi, esi
nop
nop
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
mov		edx, [ebp+var_4]
sub		ebx, eax
xor		eax, edx
inc		ebx
mov		[ebp+var_10], eax
sub		edx, esi
nop
nop
mov		[ebp+var_4], edx
nop
nop
mov		ecx, ebx
add		ebx, edx
ror		edi, cl
nop
nop
nop
neg		edi
mov		esi, ebx
neg		esi
mov		edx, edi
nop
nop
mov		ecx, esi
ror		edx, cl
mov		ecx, [ebp+var_4]
nop
xor		ecx, [ebp+var_10]
not		edx
mov		[ebp+var_4], ecx
mov		edi, edx
nop
xor		ebx, 0D01E75AFh
nop
mov		ecx, esi
ror		edi, cl
mov		esi, ebx
nop
nop
mov		edx, [ebp+var_10]
nop
nop
not		edx
nop
mov		ecx, [ebp+var_4]
rol		esi, cl
nop
mov		ebx, edx
sub		edi, esi
neg		ebx
nop
mov		[ebp+var_C], ebx
nop
mov		eax, edi
nop
mov		ecx, edx
rol		eax, cl
mov		ecx, [ebp+var_4]
nop
lea		edx, [ecx+eax]
lea		eax, [ecx-2B37FDE4h]
not		edx
xor		eax, ebx
nop
sub		eax, edx
lea		ebx, [esi+1]
mov		esi, [ebp+var_C]
nop
nop
ror		ebx, 0Eh
mov		edi, eax
xor		esi, ebx
nop
not		ebx
mov		ecx, edx
rol		edi, cl
nop
mov		eax, 1FC3A37Eh
add		edi, edx
sub		eax, edx
xor		edi, 0C1D504B7h
mov		edx, eax
nop
add		ebx, edi
nop
not		ebx
xor		esi, ebx
nop
nop
mov		ecx, edi
rol		edi, 7
add		edi, esi
ror		edx, cl
xor		esi, 0D2D2A20Bh
ror		ebx, 7
nop
rol		ebx, 0Dh
not		esi
ror		edx, 0Ah
sub		esi, edi
neg		ebx
mov		[ebp+var_C], esi
xor		edi, esi
mov		eax, [ebp+var_C]
xor		ebx, eax
lea		esi, [edx-6DC3EE98h]
add		esi, edi
xor		ebx, esi
xor		eax, edi
mov		edi, ebx
add		eax, esi
mov		edx, eax
neg		edx
nop
nop
nop
mov		ecx, eax
ror		edi, cl
nop
nop
nop
mov		ebx, [ebp+var_C]
nop
neg		ebx
xor		ebx, edx
mov		eax, ebx
nop
mov		ecx, edx
add		edx, esi
add		esi, 61AE24FDh
ror		eax, cl
xor		esi, 7F6E7D08h
nop
add		esi, edi
neg		edx
sub		edx, esi
not		edi
not		esi
rol		edx, 0Dh
add		edi, 36373EF5h
ror		esi, 4
sub		esi, 0D8528FEh
rol		esi, 0Ch
xor		edx, esi
lea		ebx, [edi+edi]
add		edx, 5E9EE6Bh
sub		ebx, eax
nop
nop
not		ebx
nop
ror		ebx, 0Eh
add		ebx, edi
mov		eax, edi
nop
mov		ecx, edx
rol		ebx, 5
add		ebx, edi
rol		eax, cl
xor		ebx, esi
nop
xor		eax, ebx
not		esi
sub		esi, 3C872EDAh
add		eax, ebx
not		esi
sub		ebx, 3D790E75h
nop
xor		edx, ebx
nop
mov		edi, edx
nop
xor		eax, 670C64C0h
nop
neg		eax
mov		ecx, esi
mov		[ebp+var_8], eax
ror		edi, cl
nop
nop
nop
neg		edi
xor		esi, edi
nop
mov		eax, esi
nop
mov		edx, ebx
mov		ecx, [ebp+var_8]
not		edi
ror		eax, cl
nop
mov		[ebp+var_4], eax
mov		esi, eax
nop
neg		esi
nop
nop
mov		ecx, esi
ror		edx, cl
nop
nop
mov		eax, edi
mov		ebx, edx
nop
mov		ecx, esi
mov		esi, [ebp+var_4]
rol		ebx, cl
sub		esi, 4EDE8030h
nop
nop
nop
nop
nop
mov		ecx, esi
xor		esi, 84E4A57Dh
rol		eax, cl
not		esi
nop
nop
mov		edi, [ebp+var_8]
nop
nop
rol		edi, 9
mov		edx, eax
not		edi
nop
sub		edi, 60AB462Bh
mov		ecx, ebx
mov		[ebp+var_8], edi
rol		edx, cl
nop
mov		eax, 0BAF72C1h
sub		eax, edi
sub		edx, edi
add		ebx, eax
mov		eax, esi
nop
mov		esi, edx
nop
nop
nop
mov		ecx, eax
xor		eax, 8C72DA4Dh
rol		esi, cl
add		eax, 5D1A5D8Bh
nop
rol		eax, 0Fh
nop
nop
mov		edx, [ebp+var_8]
xor		esi, edi
nop
mov		edi, ebx
nop
not		eax
mov		ecx, edx
sub		esi, eax
rol		edi, cl
nop
neg		eax
mov		[ebp+var_4], eax
nop
nop
mov		eax, esi
nop
add		edx, 52020CAAh
nop
mov		ecx, edi
mov		[ebp+var_8], edx
rol		eax, cl
mov		edx, edi
nop
mov		esi, [ebp+var_4]
sub		eax, esi
nop
add		esi, eax
nop
rol		esi, 6
nop
neg		esi
nop
mov		ecx, eax
rol		edx, cl
nop
nop
nop
nop
not		edx
mov		eax, edx
nop
mov		ecx, esi
xor		esi, 0B5219AF4h
ror		eax, cl
mov		edi, esi
nop
nop
mov		edx, [ebp+var_8]
nop
add		eax, edx
nop
mov		ebx, eax
rol		edx, 1
nop
xor		edi, edx
mov		ecx, esi
xor		edi, 72DDAD1Fh
rol		esi, 9
ror		ebx, cl
nop
ror		edi, 1
mov		eax, [ebp+var_4]
not		ebx
ror		eax, 9
xor		ebx, edx
neg		eax
mov		edx, esi
ror		eax, 8
neg		ebx
sub		eax, 27EF9D87h
add		edi, 37A21928h
nop
xor		edi, ebx
nop
nop
nop
mov		ecx, eax
rol		edx, cl
mov		ecx, ebx
sub		ecx, eax
nop
mov		eax, 4C08B324h
neg		ecx
sub		eax, edi
not		edx
add		ebx, eax
xor		ecx, edi
sub		ecx, ebx
mov		eax, ebx
xor		eax, edx
mov		esi, 17AE9DC3h
xor		eax, 325935BFh
sub		esi, ebx
mov		ebx, ecx
neg		eax
xor		eax, edi
not		ebx
add		eax, 26188275h
rol		ebx, 10h
not		eax
xor		eax, edi
add		eax, esi
rol		esi, 2
rol		eax, 0Bh
lea		edx, [ebx-5965ADA0h]
add		edx, edi
mov		[ebp+var_C], eax
nop
ror		ebx, 0Eh
nop
rol		esi, 0Eh
nop
mov		eax, edx
nop
mov		edi, 0FDD2ADAEh
mov		ecx, [ebp+var_C]
rol		eax, cl
nop
mov		edx, [ebp+var_C]
sub		edi, eax
add		esi, edx
add		ebx, edi
neg		esi
sub		edx, ebx
mov		eax, esi
nop
mov		[ebp+var_C], edx
nop
sub		edi, ebx
nop
rol		ebx, 0Ah
nop
add		ebx, 53858Bh
mov		ecx, edx
not		edi
ror		eax, cl
nop
mov		esi, ebx
not		eax
nop
mov		edx, eax
nop
nop
nop
mov		ecx, eax
ror		esi, cl
nop
nop
nop
mov		ebx, [ebp+var_C]
nop
nop
mov		ecx, edi
rol		esi, 1
ror		edx, cl
add		edi, esi
nop
ror		ebx, 4
not		edx
nop
xor		edi, 99EDC038h
add		ebx, esi
sub		edx, esi
nop
nop
mov		eax, edx
nop
mov		ecx, esi
rol		eax, cl
lea		ecx, [ebx-1]
nop
not		ecx
lea		edx, [ebx+esi]
mov		[ebp+var_8], ecx
neg		edx
sub		edi, edx
rol		edx, 6
lea		ebx, [eax-525A9655h]
ror		edx, 0Ch
neg		edx
not		ebx
sub		ebx, ecx
not		edi
nop
mov		esi, edi
nop
nop
nop
mov		ecx, edx
not		edx
ror		esi, cl
nop
nop
rol		edx, 4
nop
xor		edx, 3A07691Ah
add		edx, ebx
nop
mov		eax, edx
dec		esi
nop
not		esi
mov		ecx, ebx
xor		ebx, 362D7B27h
mov		[ebp+var_14], ebx
mov		edi, [ebp+var_14]
neg		ebx
ror		eax, cl
nop
nop
mov		[ebp+var_10], ebx
nop
mov		edx, [ebp+var_10]
mov		ebx, eax
nop
mov		ecx, edi
rol		ebx, cl
mov		ecx, [ebp+var_8]
nop
rol		ecx, 3
mov		eax, ebx
xor		ecx, esi
sub		eax, esi
add		ecx, edi
mov		esi, eax
mov		[ebp+var_8], ecx
not		ebx
nop
nop
nop
mov		ecx, [ebp+var_8]
ror		esi, cl
mov		ecx, [ebp+var_8]
nop
add		esi, 10EDE164h
add		ecx, edi
add		esi, 0E43EAF70h
xor		ecx, 3F0EEFDEh
xor		esi, edx
ror		ebx, 3
rol		ebx, 0Fh
mov		eax, 0FFFFFFFFh
sub		eax, ecx
sub		esi, ebx
not		ecx
ror		ebx, 8
add		edx, eax
xor		esi, 0CAB58098h
add		ecx, esi
mov		edi, ebx
mov		[ebp+var_8], ecx
neg		edi
mov		eax, [ebp+var_8]
nop
nop
ror		esi, 3
nop
add		edx, 10006872h
mov		ecx, ebx
nop
rol		eax, cl
mov		ecx, edx
neg		ecx
mov		[ebp+var_10], edx
mov		[ebp+var_C], ecx
mov		edx, esi
nop
nop
nop
mov		ecx, [ebp+var_10]
mov		[ebp+var_14], eax
rol		edx, cl
nop
mov		esi, eax
nop
mov		ebx, edx
neg		esi
nop
nop
mov		ecx, esi
ror		ebx, cl
nop
nop
mov		eax, [ebp+var_14]
ror		ebx, 4
xor		edi, ebx
mov		edx, edi
nop
mov		ecx, esi
rol		edx, cl
nop
nop
nop
nop
mov		edi, edx
nop
mov		ecx, ebx
xor		ebx, 0D922836Ch
ror		edi, cl
nop
mov		[ebp+var_14], ebx
mov		edx, [ebp+var_C]
sub		eax, edi
nop
mov		[ebp+var_10], edi
nop
mov		esi, eax
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
mov		[ebp+var_8], esi
nop
nop
mov		ebx, edx
nop
nop
nop
mov		ecx, esi
mov		esi, edi
mov		edi, [ebp+var_14]
ror		ebx, cl
neg		esi
nop
mov		edx, edi
nop
nop
mov		ecx, esi
ror		edx, cl
nop
nop
add		edx, 69FA7D63h
mov		edi, edx
nop
mov		ecx, esi
mov		esi, [ebp+var_10]
ror		edi, cl
not		esi
xor		esi, [ebp+var_8]
nop
xor		edi, esi
mov		edx, ebx
nop
nop
nop
nop
mov		ecx, edi
ror		edx, cl
nop
nop
nop
nop
mov		ebx, edi
nop
mov		eax, edx
mov		ecx, esi
rol		ebx, cl
nop
sub		ebx, esi
sub		esi, ebx
mov		[ebp+var_C], ebx
nop
nop
nop
nop
mov		ecx, esi
ror		eax, cl
mov		ecx, [ebp+var_8]
nop
ror		ecx, 9
mov		edi, eax
xor		ecx, esi
add		esi, ebx
not		ecx
not		esi
mov		[ebp+var_8], ecx
mov		edx, esi
nop
neg		edx
nop
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
nop
not		edi
nop
nop
add		esi, 2BB9D098h
nop
not		esi
mov		ecx, edx
ror		[ebp+var_C], cl
nop
nop
mov		ebx, edi
nop
mov		ecx, edx
ror		ebx, cl
mov		eax, [ebp+var_8]
nop
mov		edi, [ebp+var_C]
sub		eax, 35AE0B72h
not		edi
ror		ebx, 9
nop
mov		edx, eax
nop
sub		ebx, edi
nop
not		ebx
nop
mov		ecx, edi
rol		edi, 1
rol		edx, cl
nop
nop
nop
nop
mov		eax, esi
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		esi, 1
mov		[ebp+var_14], eax
add		eax, eax
sub		esi, eax
mov		eax, edi
sub		esi, ebx
mov		ebx, [ebp+var_14]
nop
mov		[ebp+var_10], esi
nop
nop
nop
mov		ecx, esi
mov		esi, edx
ror		eax, cl
nop
nop
nop
nop
mov		edi, eax
nop
mov		ecx, ebx
rol		esi, cl
nop
add		esi, ebx
neg		esi
nop
nop
nop
nop
mov		ecx, esi
sub		esi, 49B67452h
rol		edi, cl
xor		ebx, esi
nop
ror		ebx, 9
not		edi
neg		esi
sub		ebx, edi
xor		edi, esi
neg		ebx
xor		esi, 7B2FA32Ah
mov		edx, ebx
add		esi, 5F6895DFh
neg		edi
nop
rol		edi, 0Eh
nop
ror		edi, 7
nop
mov		eax, 0F21B7581h
sub		eax, [ebp+var_10]
nop
mov		ecx, esi
mov		[ebp+var_14], eax
ror		edx, cl
add		eax, esi
nop
neg		eax
not		edx
sub		edx, eax
neg		eax
add		edi, eax
mov		ebx, eax
nop
mov		esi, edi
nop
nop
nop
mov		ecx, edi
rol		ebx, cl
nop
nop
xor		edx, ebx
nop
mov		eax, edx
nop
nop
mov		ecx, ebx
add		ebx, 5FD58243h
rol		esi, cl
nop
mov		[ebp+var_C], ebx
nop
mov		edi, esi
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
mov		edx, ebx
mov		[ebp+var_10], eax
neg		edx
nop
nop
nop
nop
mov		ecx, edx
ror		edi, cl
nop
nop
mov		esi, [ebp+var_14]
not		esi
not		edi
mov		ebx, esi
ror		edi, 0Fh
nop
mov		ecx, edx
rol		ebx, cl
nop
mov		esi, [ebp+var_10]
nop
mov		[ebp+var_14], ebx
nop
mov		edx, [ebp+var_C]
nop
mov		eax, edx
add		edi, 0EF391DC1h
nop
mov		ecx, esi
rol		esi, 1
rol		eax, cl
nop
mov		edx, esi
add		eax, 6CFF2076h
neg		edx
rol		eax, 0Ch
nop
nop
xor		edi, eax
mov		ebx, eax
mov		[ebp+var_10], edi
nop
mov		ecx, esi
mov		esi, edx
rol		ebx, cl
nop
mov		eax, [ebp+var_14]
add		eax, 0AAD6B3C0h
ror		ebx, 0Dh
rol		ebx, 4
not		eax
add		eax, 0B3C8E83Eh
nop
nop
add		eax, ebx
nop
add		edi, eax
nop
nop
mov		ecx, ebx
nop
ror		esi, cl
nop
nop
mov		edx, edi
mov		[ebp+var_C], esi
neg		edx
nop
mov		ecx, edx
rol		[ebp+var_C], cl
nop
nop
mov		eax, ebx
mov		esi, [ebp+var_C]
nop
neg		esi
mov		ecx, edx
xor		esi, ebx
mov		edx, [ebp+var_10]
ror		eax, cl
nop
nop
nop
ror		eax, 1
nop
mov		[ebp+var_C], eax
mov		eax, edi
nop
mov		ecx, edx
ror		eax, cl
nop
mov		edi, 336D9208h
sub		edi, edx
sub		eax, 3449C802h
nop
mov		ebx, eax
nop
nop
nop
mov		ecx, edi
mov		edx, esi
sub		edi, esi
rol		ebx, cl
not		edi
mov		ecx, [ebp+var_C]
nop
ror		ecx, 4
mov		eax, 793C81Fh
mov		[ebp+var_C], ecx
sub		eax, edi
nop
nop
nop
nop
mov		ecx, ebx
rol		ebx, 0Ah
rol		edx, cl
add		ebx, eax
nop
add		edx, 35170580h
xor		edx, 30295D99h
add		edx, edi
neg		edi
xor		ebx, edx
mov		[ebp+var_14], edi
mov		eax, [ebp+var_14]
sub		ebx, edx
nop
not		edx
nop
mov		edi, edx
nop
nop
mov		ecx, eax
ror		edi, cl
nop
mov		edx, [ebp+var_C]
nop
rol		edi, 0Fh
nop
mov		esi, edx
nop
sub		esi, ebx
mov		ebx, eax
nop
mov		ecx, edx
rol		ebx, cl
nop
lea		eax, [edx+0B3243F6h]
xor		ebx, 128DD0Bh
ror		eax, 0Dh
add		edi, ebx
mov		edx, eax
nop
sub		ebx, 562FE4C7h
nop
nop
nop
mov		ecx, edi
ror		edx, cl
nop
mov		eax, edi
nop
xor		esi, edx
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
xor		eax, ebx
sub		edx, eax
lea		edi, [esi+eax]
rol		edi, 7
mov		esi, edx
rol		eax, 0Dh
nop
ror		eax, 8
nop
ror		edi, 7
nop
add		eax, edi
nop
sub		edi, eax
mov		ecx, ebx
neg		eax
not		ebx
rol		esi, cl
xor		eax, ebx
nop
mov		[ebp+var_14], eax
ror		esi, 4
mov		edx, ebx
nop
nop
nop
nop
mov		ecx, esi
sub		esi, eax
ror		edx, cl
mov		eax, esi
nop
nop
mov		ebx, edx
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
mov		esi, edi
neg		esi
nop
inc		eax
nop
ror		eax, 0Bh
nop
xor		esi, 29B8C6D4h
mov		ecx, edi
rol		ebx, cl
nop
nop
nop
nop
mov		edx, eax
nop
mov		ecx, esi
sub		esi, 15CECFB4h
ror		edx, cl
sub		ebx, esi
nop
not		esi
mov		eax, [ebp+var_14]
add		eax, 64064E79h
xor		eax, edx
not		edx
not		eax
add		edx, 31351081h
not		eax
mov		edi, edx
nop
nop
nop
nop
mov		ecx, eax
rol		edi, cl
nop
mov		edx, eax
rol		edx, 0Eh
mov		eax, edi
not		edi
sub		eax, ebx
add		edx, eax
mov		eax, esi
xor		edx, ebx
not		ebx
nop
sub		ebx, edi
nop
add		ebx, 5D497D6Fh
nop
not		ebx
nop
mov		ecx, edx
not		edx
rol		eax, cl
nop
neg		eax
xor		eax, edi
add		edi, edx
mov		[ebp+var_8], eax
add		ebx, edi
sub		edi, 3C131D03h
rol		ebx, 0Ch
nop
mov		eax, ebx
nop
nop
nop
mov		ecx, edi
not		edi
rol		eax, cl
mov		ecx, [ebp+var_8]
nop
mov		[ebp+var_C], eax
sub		ecx, 39F7AC18h
mov		eax, edx
neg		edx
sub		eax, edi
mov		[ebp+var_10], edx
mov		esi, [ebp+var_10]
add		ecx, eax
mov		eax, [ebp+var_C]
not		edi
mov		[ebp+var_8], ecx
sub		edi, edx
nop
rol		eax, 0Bh
nop
ror		eax, 9
nop
mov		edx, edi
nop
mov		ecx, esi
xor		esi, 9B545F63h
ror		edx, cl
nop
mov		edi, [ebp+var_8]
xor		eax, edi
ror		edi, 3
add		eax, esi
add		edx, edi
mov		[ebp+var_C], eax
mov		eax, edi
ror		edx, 9
xor		eax, esi
neg		edx
neg		eax
nop
mov		esi, eax
nop
nop
nop
mov		ecx, edx
rol		esi, cl
nop
mov		eax, [ebp+var_C]
lea		ebx, [esi-69792241h]
rol		eax, 0Bh
add		ebx, edx
ror		eax, 0Dh
neg		edi
neg		eax
ror		ebx, 5
sub		esi, edi
ror		ebx, 9
xor		ebx, eax
rol		esi, 0Ah
xor		eax, ebx
not		esi
xor		esi, edi
rol		ebx, 4
sub		edi, eax
neg		ebx
mov		[ebp+var_8], edi
dec		esi
xor		esi, edi
nop
nop
mov		edi, esi
nop
nop
mov		ecx, ebx
ror		edi, cl
mov		ecx, [ebp+var_8]
nop
sub		eax, ecx
xor		eax, 530843B8h
sub		eax, 426C0E02h
rol		eax, 5
add		ebx, eax
add		edi, eax
add		ecx, ebx
ror		edi, 3
not		eax
mov		[ebp+var_8], ecx
add		edi, eax
xor		ebx, ecx
neg		eax
mov		esi, ecx
xor		eax, ecx
mov		edx, edi
mov		[ebp+var_C], eax
neg		edx
nop
nop
nop
nop
mov		ecx, edx
ror		esi, cl
nop
nop
mov		eax, ebx
nop
add		edi, esi
mov		ecx, edx
neg		edi
rol		eax, cl
nop
nop
nop
mov		ebx, [ebp+var_C]
nop
mov		edx, ebx
not		eax
nop
dec		eax
mov		ecx, edi
xor		eax, edi
not		eax
ror		edx, cl
nop
ror		edx, 8
ror		esi, 9
add		esi, edx
rol		eax, 0Bh
nop
rol		esi, 6
nop
rol		edi, 5
xor		eax, edi
nop
mov		[ebp+var_8], eax
neg		edi
mov		eax, esi
nop
mov		ecx, edx
rol		eax, cl
nop
nop
nop
nop
mov		esi, eax
nop
mov		ecx, edi
rol		esi, cl
nop
nop
nop
mov		eax, edx
nop
nop
mov		ecx, [ebp+var_8]
rol		eax, cl
nop
mov		edx, edi
add		eax, esi
xor		esi, edi
xor		edx, eax
ror		edi, 6
not		edx
mov		[ebp+var_14], esi
rol		edx, 5
nop
nop
not		edx
nop
mov		ebx, edx
nop
mov		ecx, edi
rol		ebx, cl
nop
mov		edx, edi
xor		ebx, esi
nop
mov		esi, ebx
nop
neg		esi
nop
nop
mov		ecx, esi
ror		edx, cl
nop
nop
nop
mov		edi, [ebp+var_8]
nop
mov		ecx, esi
mov		esi, [ebp+var_14]
ror		edi, cl
sub		esi, edx
nop
mov		eax, edi
neg		eax
nop
mov		[ebp+var_C], eax
lea		edx, [edx+esi*2]
nop
not		edx
mov		eax, esi
nop
not		ebx
sub		ebx, edi
rol		edx, 0Bh
mov		ecx, edi
dec		ebx
not		edx
rol		eax, cl
nop
mov		esi, edx
xor		ebx, eax
mov		[ebp+var_10], eax
mov		eax, ebx
neg		eax
nop
mov		edi, eax
nop
nop
mov		ecx, ebx
mov		ebx, [ebp+var_C]
rol		esi, cl
nop
mov		edx, [ebp+var_10]
xor		edx, ebx
ror		ebx, 5
nop
xor		edx, esi
nop
not		edx
nop
mov		[ebp+var_10], edx
nop
mov		ecx, ebx
xor		ebx, esi
ror		edi, cl
sub		ebx, 388F00D1h
nop
mov		[ebp+var_C], ebx
not		edi
sub		edi, ebx
lea		ebx, [esi+321B6AF5h]
mov		esi, [ebp+var_10]
mov		eax, esi
ror		ebx, 0Eh
xor		ebx, edx
ror		edi, 2
mov		edx, [ebp+var_C]
neg		edx
nop
nop
nop
mov		ecx, [ebp+var_C]
rol		eax, cl
nop
nop
nop
sub		eax, 2EC8610Fh
nop
mov		esi, eax
nop
mov		ecx, ebx
xor		ebx, [ebp+var_C]
rol		esi, cl
nop
mov		[ebp+var_14], ebx
mov		eax, edx
xor		esi, 20789CEDh
neg		eax
add		edi, esi
nop
mov		[ebp+var_8], edi
nop
nop
mov		ecx, edx
rol		edi, cl
nop
nop
nop
mov		edx, edi
nop
mov		edi, eax
nop
neg		edx
mov		ecx, ebx
mov		ebx, esi
rol		edi, cl
nop
nop
nop
nop
nop
mov		ecx, edx
ror		edx, 8
rol		ebx, cl
mov		ecx, [ebp+var_14]
nop
add		ecx, 8AB1F406h
not		ecx
mov		eax, ecx
sub		eax, ebx
neg		ebx
rol		ebx, 0Dh
add		edi, eax
ror		ebx, 0Eh
xor		ebx, ecx
rol		edi, 1
not		ebx
rol		edi, 6
xor		edx, ebx
ror		edi, 0Bh
add		ebx, 547684AFh
mov		[ebp+var_8], edx
mov		eax, ebx
sub		ebx, edi
sub		eax, ecx
nop
nop
mov		edx, edi
nop
nop
mov		ecx, [ebp+var_8]
ror		edx, cl
nop
mov		edi, [ebp+var_8]
add		eax, edx
xor		ebx, edx
xor		edi, eax
mov		esi, ebx
add		eax, edx
ror		edi, 0Bh
ror		eax, 0Bh
add		edi, edx
not		eax
neg		edi
nop
nop
nop
nop
mov		ecx, eax
not		eax
ror		esi, cl
nop
nop
nop
nop
mov		ebx, edx
nop
mov		ecx, edi
ror		ebx, cl
nop
xor		eax, ebx
rol		eax, 1
sub		esi, 33873496h
xor		ebx, esi
mov		[ebp+var_8], eax
lea		eax, [ebx+edi]
sub		ebx, esi
mov		edi, [ebp+var_8]
neg		eax
not		esi
mov		edx, eax
nop
neg		edi
nop
ror		edi, 5
nop
sub		edi, ebx
nop
mov		ecx, esi
mov		[ebp+var_8], edi
rol		edx, cl
not		esi
nop
nop
nop
mov		eax, edx
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
nop
nop
mov		edx, [ebp+var_8]
nop
mov		edi, eax
sub		ebx, edx
nop
mov		ecx, edx
ror		ebx, 0Fh
rol		edi, cl
sub		ebx, 2352257Eh
nop
xor		edx, edi
neg		edi
mov		[ebp+var_8], edx
nop
nop
mov		edx, esi
nop
nop
mov		ecx, edi
rol		edx, cl
nop
mov		esi, [ebp+var_8]
add		esi, edi
rol		edx, 6
not		esi
ror		edx, 3
add		edi, ebx
add		esi, ebx
not		ebx
mov		eax, edx
nop
nop
nop
nop
mov		ecx, ebx
ror		eax, cl
mov		ecx, 0A861FC41h
nop
not		eax
ror		eax, 8
xor		ebx, eax
xor		eax, 0E3373225h
sub		ecx, eax
xor		esi, edi
lea		eax, [ecx+ebx]
xor		edi, 0BDE25097h
add		esi, 1ED2A05Fh
not		edi
not		ecx
ror		esi, 8
rol		edi, 0Dh
not		eax
ror		esi, 8
xor		eax, 486F2E35h
ror		esi, 2
sub		eax, 44AA2789h
ror		edi, 4
mov		edx, eax
sub		edi, 32B280DAh
mov		[ebp+var_8], esi
add		ecx, edi
xor		edi, ecx
mov		[ebp+var_14], ecx
nop
mov		[ebp+var_C], edi
nop
neg		edi
nop
nop
mov		ecx, esi
nop
ror		edx, cl
nop
nop
nop
xor		edx, 9DA9C2A7h
mov		[ebp+var_10], edx
mov		edx, [ebp+var_8]
mov		eax, edx
nop
mov		ecx, edi
ror		eax, cl
nop
nop
mov		edx, eax
nop
mov		ecx, edi
rol		edx, cl
nop
nop
mov		eax, [ebp+var_C]
mov		esi, edx
mov		ebx, eax
sub		ebx, [ebp+var_14]
nop
not		ebx
mov		ecx, edi
ror		esi, cl
nop
mov		edx, [ebp+var_10]
add		eax, esi
sub		esi, ebx
xor		ebx, eax
mov		[ebp+var_C], eax
mov		edi, [ebp+var_C]
add		ebx, edx
sub		esi, eax
not		ebx
mov		eax, ebx
add		esi, 4297F644h
neg		eax
rol		esi, 0Eh
nop
nop
neg		edx
nop
mov		ecx, ebx
nop
ror		edi, cl
rol		edx, 10h
nop
xor		edx, esi
lea		ebx, [eax+edi]
rol		edx, 6
sub		esi, eax
sub		edx, 76FFF12Dh
xor		edx, 0B3AE8465h
nop
nop
xor		ebx, 0F3E3C604h
nop
mov		eax, ebx
xor		eax, esi
mov		esi, edx
nop
xor		eax, 4C18969Dh
mov		ecx, edi
mov		[ebp+var_14], eax
ror		esi, cl
nop
mov		edx, edi
mov		[ebp+var_C], esi
mov		esi, eax
nop
neg		esi
nop
nop
mov		ecx, esi
rol		edx, cl
nop
nop
xor		[ebp+var_C], edx
mov		edi, edx
nop
mov		ecx, esi
ror		edi, cl
nop
mov		edx, [ebp+var_C]
neg		edx
mov		eax, edi
nop
nop
nop
nop
mov		ecx, edx
ror		edx, 2
ror		eax, cl
nop
mov		[ebp+var_C], edx
mov		edi, [ebp+var_14]
mov		esi, eax
not		edi
sub		edi, edx
xor		edi, edx
lea		edx, [ebx-1]
nop
ror		edx, 0Eh
nop
sub		edx, 67FD5D30h
nop
nop
mov		ecx, edi
rol		esi, cl
nop
nop
nop
nop
mov		eax, edi
nop
not		esi
mov		ecx, edx
add		esi, edi
ror		eax, cl
nop
nop
mov		edi, [ebp+var_C]
xor		edx, edi
nop
nop
ror		edi, 0Ah
mov		ebx, eax
ror		edi, 6
nop
mov		ecx, esi
ror		edi, 0Dh
rol		ebx, cl
nop
rol		edi, 8
xor		ebx, 265F7A2Ah
mov		eax, edx
nop
add		edi, 6F89E8CBh
nop
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		edx, edi
ror		eax, 8
nop
add		ebx, eax
nop
nop
nop
mov		ecx, eax
add		eax, 951FDEACh
ror		edx, cl
xor		eax, 0C7AE854Eh
nop
mov		edi, 0B1C2016h
sub		edi, eax
add		edx, ebx
sub		edi, esi
mov		esi, eax
nop
nop
nop
nop
mov		ecx, edi
add		edi, 0DFC66BE7h
ror		esi, cl
nop
nop
rol		edi, 3
nop
mov		eax, esi
sub		eax, edx
nop
mov		edx, eax
not		edi
nop
mov		ecx, ebx
ror		edx, cl
nop
lea		eax, [edx+edx]
sub		esi, eax
mov		eax, edx
sub		esi, ebx
not		ebx
nop
mov		[ebp+var_14], ebx
nop
not		esi
nop
xor		esi, 7EAAD53Dh
nop
sub		esi, ebx
mov		ecx, ebx
ror		eax, cl
nop
sub		eax, 2
ror		edi, 4
nop
nop
nop
ror		edi, 2
nop
ror		esi, 0Bh
nop
not		edi
mov		ecx, eax
mov		[ebp+var_14], esi
ror		ebx, cl
nop
nop
nop
nop
mov		edx, eax
nop
add		ebx, 0D442FFEh
mov		ecx, edi
ror		edx, cl
nop
nop
nop
mov		eax, [ebp+var_14]
nop
mov		esi, edi
neg		edx
nop
mov		ecx, eax
rol		esi, cl
mov		ecx, 65D10683h
sub		ecx, ebx
nop
xor		ecx, esi
add		eax, esi
mov		[ebp+var_C], ecx
neg		eax
ror		eax, 0Dh
nop
nop
mov		ebx, esi
nop
lea		edi, [eax+edx]
mov		edx, eax
nop
xor		edi, esi
mov		ecx, esi
ror		edi, 6
ror		edi, 1
rol		edx, cl
nop
mov		eax, [ebp+var_C]
nop
ror		eax, 6
nop
add		eax, 6CBECA04h
nop
rol		eax, 0Eh
nop
mov		ecx, edx
mov		[ebp+var_C], eax
rol		ebx, cl
xor		edx, 62C85325h
nop
rol		edx, 0Eh
xor		ebx, 47E4416h
rol		edx, 0Fh
rol		ebx, 0Ch
mov		eax, 35C28D3Dh
sub		eax, ebx
mov		esi, edi
lea		eax, [edx+eax*2]
nop
nop
nop
nop
mov		ecx, eax
mov		edx, eax
rol		esi, cl
nop
mov		edi, [ebp+var_C]
nop
mov		[ebp+var_14], esi
nop
nop
nop
mov		ecx, edi
not		edi
rol		edx, cl
nop
mov		[ebp+var_C], edi
mov		eax, esi
ror		edx, 0Dh
sub		eax, edi
mov		edi, esi
mov		esi, [ebp+var_C]
add		edx, eax
xor		edi, ebx
add		esi, 9A98C60Fh
mov		ebx, [ebp+var_14]
rol		edi, 0Bh
ror		esi, 8
not		edi
sub		edi, edx
add		esi, ebx
inc		edx
neg		esi
mov		eax, edx
nop
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
nop
ror		eax, 0Dh
mov		edx, eax
nop
mov		ecx, edi
ror		edi, 2
rol		edx, cl
nop
mov		eax, 17704F02h
sub		eax, ebx
rol		edx, 9
sub		eax, esi
mov		[ebp+var_14], edx
xor		eax, 912CBC04h
mov		edx, edi
nop
nop
nop
nop
mov		ecx, eax
not		eax
rol		edx, cl
mov		ebx, eax
nop
mov		edi, edx
lea		edx, [esi+728763B0h]
xor		edi, 5C8D0BF9h
ror		edx, 5
nop
add		edx, edi
nop
nop
nop
mov		ecx, edi
rol		ebx, cl
not		edi
mov		esi, [ebp+var_14]
nop
sub		ebx, edx
ror		edi, 2
xor		edi, edx
mov		[ebp+var_8], ebx
mov		eax, 0D3A83740h
neg		edi
sub		eax, ebx
add		esi, eax
mov		eax, edx
neg		eax
mov		[ebp+var_4], esi
nop
mov		[ebp+var_C], eax
nop
nop
add		edi, eax
mov		ecx, edx
mov		[ebp+var_10], edi
rol		esi, cl
nop
nop
mov		ecx, esi
nop
mov		[ebp+var_4], ecx
mov		esi, ecx
nop
nop
neg		esi
nop
mov		ecx, esi
rol		edi, cl
nop
nop
nop
mov		eax, [ebp+var_4]
mov		ecx, esi
add		eax, edi
neg		edi
add		[ebp+var_C], eax
nop
mov		esi, [ebp+var_C]
rol		ebx, cl
not		esi
nop
add		esi, 3A1BE919h
mov		eax, [ebp+var_4]
sub		eax, edi
add		edi, 5E4EDD3Ah
neg		eax
mov		edx, edi
nop
nop
nop
nop
mov		ecx, eax
xor		eax, 97E8FDFCh
rol		edx, cl
nop
nop
nop
nop
mov		edi, ebx
nop
mov		ecx, esi
ror		edi, cl
nop
mov		ebx, eax
add		edi, ebx
add		edi, edx
rol		edx, 1
sub		edx, 0B765B78h
not		edx
xor		edx, esi
not		edx
neg		ebx
xor		esi, edx
add		edi, 420D8BAAh
xor		edi, ebx
neg		edx
add		edi, edx
rol		ebx, 0Ah
nop
dec		esi
nop
mov		eax, edx
nop
neg		esi
nop
sub		ebx, 71B33813h
mov		[ebp+var_4], ebx
mov		ecx, edi
rol		esi, 8
ror		eax, cl
neg		esi
nop
mov		[ebp+var_C], esi
nop
mov		edx, eax
neg		ebx
rol		edi, 7
nop
nop
nop
mov		ecx, ebx
ror		edx, cl
nop
mov		eax, [ebp+var_C]
sub		edi, eax
neg		edx
not		eax
ror		eax, 6
add		edi, eax
mov		[ebp+var_C], edi
mov		edi, [ebp+var_4]
mov		ecx, [ebp+var_C]
sub		edi, edx
add		edi, eax
mov		eax, 0CD586CB1h
rol		edi, 4
sub		eax, edx
sub		ecx, edi
mov		edx, eax
add		edi, [ebp+var_4]
mov		[ebp+var_C], ecx
nop
nop
nop
mov		ecx, [ebp+var_C]
ror		edx, cl
nop
nop
mov		eax, [ebp+var_C]
mov		[ebp+var_8], eax
mov		esi, edx
nop
mov		ecx, ebx
nop
ror		eax, cl
nop
nop
mov		ebx, eax
nop
xor		ebx, 4F06D769h
nop
mov		ecx, edi
ror		ebx, 1
ror		esi, cl
mov		ecx, [ebp+var_4]
ror		ebx, 2
nop
xor		ecx, 463E3037h
lea		eax, [ecx+edi]
add		ecx, esi
mov		[ebp+var_4], ecx
neg		eax
rol		eax, 7
ror		esi, 6
not		eax
rol		esi, 5
add		eax, esi
sub		ebx, esi
mov		edx, eax
xor		ebx, 74206E86h
sub		ebx, 2A733EA0h
nop
nop
nop
nop
mov		ecx, ebx
rol		ebx, 0Bh
rol		edx, cl
neg		ebx
nop
mov		eax, esi
nop
nop
nop
nop
mov		ecx, edx
not		edx
ror		eax, cl
nop
nop
nop
mov		esi, [ebp+var_4]
not		eax
add		eax, 1FA1BA41h
nop
rol		eax, 0Ah
sub		esi, ebx
xor		eax, ebx
xor		esi, ebx
xor		eax, edx
dec		esi
ror		edx, 5
sub		edx, eax
mov		edi, edx
nop
mov		ecx, ebx
ror		ebx, 7
ror		edi, cl
nop
nop
nop
sub		edi, eax
nop
not		eax
neg		edi
mov		edx, eax
xor		edi, eax
nop
mov		ecx, ebx
rol		edx, cl
nop
mov		eax, 4AA89C43h
sub		eax, esi
not		edx
add		ebx, eax
xor		esi, 0C0808139h
xor		ebx, esi
mov		[ebp+var_4], esi
nop
mov		eax, edx
nop
nop
nop
mov		ecx, ebx
not		edi
rol		eax, cl
xor		edi, 0B0718F69h
nop
neg		edi
xor		ebx, eax
mov		esi, edi
not		eax
ror		ebx, 6
ror		eax, 0Fh
dec		ebx
xor		eax, edi
mov		[ebp+var_8], ebx
mov		ecx, eax
neg		ecx
mov		[ebp+var_10], ecx
nop
nop
mov		ecx, eax
ror		esi, cl
nop
nop
nop
not		esi
nop
mov		edx, esi
mov		edi, ebx
nop
neg		edi
mov		ecx, edi
rol		edx, cl
nop
nop
mov		esi, [ebp+var_4]
not		esi
mov		ebx, edx
xor		esi, 276A1E45h
nop
not		esi
mov		ecx, edi
mov		edi, [ebp+var_10]
ror		esi, 9
add		esi, edx
ror		ebx, cl
neg		esi
nop
inc		esi
nop
nop
mov		eax, esi
nop
nop
mov		edx, [ebp+var_8]
mov		ecx, edi
sub		edx, esi
ror		edi, 4
not		edx
ror		eax, cl
add		edx, edi
nop
mov		[ebp+var_8], edx
ror		eax, 5
add		eax, 0A6DD06ABh
add		eax, edi
ror		edi, 0Dh
not		eax
mov		[ebp+var_10], edi
nop
mov		[ebp+var_C], eax
mov		esi, eax
nop
nop
neg		esi
nop
nop
mov		ecx, esi
ror		edi, cl
nop
nop
ror		[ebp+var_8], 0Ah
lea		eax, [ebx-5DB259C5h]
mov		edx, [ebp+var_C]
rol		eax, 0Ah
sub		edx, 433E5692h
rol		eax, 1
neg		eax
ror		eax, 4
not		eax
mov		ebx, eax
nop
mov		ecx, esi
ror		ebx, cl
mov		esi, edi
nop
nop
nop
nop
nop
mov		ecx, [ebp+var_8]
rol		esi, cl
nop
nop
nop
mov		edi, [ebp+var_8]
nop
sub		edi, 144F2051h
ror		esi, 8
mov		eax, edi
nop
mov		ecx, edx
rol		edx, 4
rol		eax, cl
lea		ecx, [ebx-3AA7CDAEh]
nop
xor		eax, ebx
add		edx, eax
xor		esi, eax
rol		edx, 6
neg		esi
add		eax, edx
mov		[ebp+var_C], edx
add		ecx, esi
neg		eax
mov		edi, ecx
mov		[ebp+var_8], ecx
mov		ebx, eax
neg		edi
lea		edx, [eax+ecx]
add		edx, esi
nop
neg		edx
nop
ror		edx, 0Ah
nop
nop
mov		ecx, edi
rol		ebx, cl
nop
nop
lea		eax, [edx+1]
not		ebx
not		eax
ror		ebx, 1
mov		edx, eax
mov		[ebp+var_14], ebx
nop
mov		ecx, edi
ror		edx, cl
nop
mov		eax, [ebp+var_C]
xor		edx, ebx
neg		edx
xor		eax, ebx
mov		[ebp+var_10], edx
xor		eax, 0B7FABA2Ah
nop
mov		edx, eax
mov		ebx, 0FFFFFFFFh
nop
mov		ecx, edi
rol		edx, cl
nop
nop
mov		edi, [ebp+var_8]
nop
nop
ror		edx, 0Dh
sub		ebx, [ebp+var_14]
mov		eax, edx
nop
mov		ecx, [ebp+var_10]
ror		edi, 0Fh
rol		eax, cl
sub		edi, 39CAFB69h
nop
nop
nop
neg		eax
nop
mov		esi, eax
nop
mov		ecx, edi
not		edi
rol		esi, cl
nop
mov		[ebp+var_8], edi
mov		eax, [ebp+var_10]
mov		edx, esi
not		eax
neg		edx
add		eax, 4AB9C5C7h
nop
nop
sub		ebx, eax
mov		edi, eax
nop
xor		edx, ebx
mov		ecx, esi
rol		edx, 2
ror		edi, cl
mov		esi, [ebp+var_8]
nop
lea		eax, [ebx+ebx]
sub		esi, edx
sub		edi, eax
add		esi, 3F55AFDFh
inc		edi
mov		eax, ebx
nop
nop
nop
nop
mov		ecx, edi
rol		eax, cl
mov		ecx, [ebp+var_8]
nop
sub		eax, ecx
not		ecx
mov		[ebp+var_8], ecx
mov		ebx, eax
sub		ebx, edi
nop
nop
xor		ebx, esi
neg		esi
nop
mov		edi, esi
nop
mov		ecx, eax
ror		edi, cl
nop
mov		edx, ebx
mov		esi, [ebp+var_8]
sub		edx, eax
neg		edi
mov		eax, esi
nop
add		edx, 7A432629h
nop
ror		edx, 5
nop
sub		edx, ebx
nop
sub		ebx, edi
mov		ecx, edi
ror		eax, cl
nop
mov		esi, edx
mov		[ebp+var_C], eax
neg		esi
nop
ror		esi, 4
nop
nop
mov		ecx, edx
rol		eax, cl
nop
mov		ecx, eax
mov		eax, 6BF5D342h
sub		eax, edi
mov		edi, eax
lea		eax, [ebx+78FC4CAEh]
sub		edi, edx
not		eax
sub		edi, ecx
mov		edx, eax
rol		edi, 0Ch
sub		ecx, edi
sub		edi, ecx
mov		[ebp+var_C], ecx
nop
nop
nop
nop
mov		ecx, edi
ror		edx, cl
nop
lea		eax, [esi+edx*2]
mov		esi, [ebp+var_C]
sub		edi, esi
sub		edx, esi
sub		esi, edi
neg		eax
xor		eax, edi
sub		edx, esi
not		edi
ror		edx, 5
xor		edi, esi
mov		ebx, eax
nop
nop
nop
nop
mov		ecx, edi
ror		ebx, cl
nop
nop
mov		[ebp+var_8], ebx
nop
mov		ebx, edi
nop
nop
mov		ecx, [ebp+var_8]
rol		ebx, cl
nop
mov		edi, [ebp+var_8]
add		esi, edi
not		edx
add		edi, esi
nop
nop
nop
lea		eax, [esi-3BC229BEh]
xor		eax, edx
sub		edx, 67E7D481h
mov		[ebp+var_14], edx
mov		esi, [ebp+var_14]
lea		edx, [eax-4AE9399Ch]
mov		eax, esi
nop
xor		edx, edi
mov		ecx, edi
add		edx, ebx
neg		edx
rol		eax, cl
neg		ebx
nop
mov		ecx, edi
sub		ecx, eax
ror		edi, 8
mov		[ebp+var_4], ecx
mov		eax, edx
sub		eax, ecx
mov		esi, edx
nop
add		edi, eax
nop
mov		[ebp+var_8], edi
nop
mov		edi, ebx
mov		ecx, [ebp+var_4]
not		[ebp+var_4]
ror		esi, cl
nop
nop
nop
nop
nop
mov		ecx, esi
rol		edi, cl
nop
mov		ebx, [ebp+var_8]
not		edi
nop
mov		edx, edi
nop
neg		edx
nop
nop
mov		ecx, edx
rol		ebx, cl
nop
mov		eax, esi
nop
nop
mov		ecx, edx
ror		eax, cl
nop
mov		esi, edi
ror		eax, 0Bh
sub		eax, 52E79933h
ror		eax, 1
mov		[ebp+var_10], eax
mov		eax, [ebp+var_4]
nop
nop
nop
nop
mov		ecx, eax
not		eax
ror		esi, cl
nop
nop
mov		[ebp+var_4], eax
mov		edx, eax
nop
mov		eax, ebx
neg		edx
nop
nop
mov		ecx, edx
ror		eax, cl
nop
nop
mov		[ebp+var_14], edx
mov		ebx, eax
nop
mov		ecx, edx
rol		ebx, cl
mov		edx, esi
nop
nop
nop
nop
nop
mov		ecx, ebx
add		ebx, [ebp+var_4]
rol		edx, cl
nop
nop
mov		[ebp+var_C], ebx
mov		esi, [ebp+var_10]
not		edx
mov		ebx, [ebp+var_14]
mov		eax, esi
nop
mov		ecx, ebx
ror		eax, cl
mov		ecx, [ebp+var_C]
nop
lea		esi, [ecx-1]
add		esi, eax
mov		eax, [ebp+var_4]
add		ecx, eax
rol		esi, 10h
mov		[ebp+var_C], ecx
nop
mov		edi, edx
nop
mov		ecx, ebx
mov		ebx, [ebp+var_C]
sub		eax, ebx
ror		edi, cl
neg		ebx
rol		eax, 7
nop
nop
mov		[ebp+var_4], eax
nop
xor		esi, ebx
nop
not		edi
add		edi, ebx
mov		eax, esi
nop
xor		ebx, 75086072h
mov		ecx, [ebp+var_4]
ror		ebx, 3
ror		eax, cl
xor		ebx, edi
nop
nop
nop
mov		edx, eax
nop
nop
mov		ecx, ebx
ror		edx, cl
nop
ror		edi, 1
mov		esi, ebx
mov		eax, [ebp+var_4]
not		edi
nop
ror		eax, 3
nop
ror		eax, 7
nop
add		edx, 1F8F3EDDh
nop
mov		ecx, edi
ror		edx, 0Ah
rol		esi, cl
nop
nop
nop
nop
mov		ebx, edi
nop
mov		ecx, edx
ror		ebx, cl
nop
mov		edi, eax
sub		esi, edi
mov		eax, ebx
neg		edi
nop
nop
sub		eax, edi
nop
add		edx, eax
mov		eax, edx
not		edi
nop
mov		ecx, esi
ror		eax, cl
nop
xor		esi, eax
nop
nop
add		esi, edi
nop
mov		edx, esi
nop
add		edi, ebx
mov		ecx, eax
ror		ebx, 4
mov		[ebp+var_4], edi
rol		edx, cl
mov		edi, eax
nop
nop
mov		esi, [ebp+var_4]
nop
nop
add		esi, edx
nop
neg		edx
mov		ecx, ebx
rol		ebx, 6
xor		ebx, esi
rol		edi, cl
nop
nop
nop
nop
mov		eax, edx
nop
mov		ecx, esi
rol		eax, cl
nop
add		esi, eax
xor		edi, esi
sub		esi, ebx
nop
mov		[ebp+var_4], esi
nop
ror		edi, 0Eh
nop
not		eax
mov		edx, eax
sub		edi, 5E448DC6h
nop
mov		ecx, esi
sub		esi, ebx
ror		edx, cl
add		esi, 5C5B4311h
nop
rol		esi, 2
mov		eax, [ebp+var_4]
neg		edx
add		eax, edx
not		esi
add		esi, edx
not		edx
xor		esi, edi
mov		[ebp+var_10], edx
sub		edi, edx
mov		ebx, [ebp+var_10]
nop
mov		edx, eax
nop
nop
nop
mov		ecx, esi
not		esi
rol		edx, cl
nop
nop
nop
nop
ror		edx, 7
mov		eax, edi
sub		edx, 51C94B87h
nop
mov		ecx, esi
rol		edx, 7
ror		eax, cl
nop
rol		edx, 10h
nop
mov		edi, esi
nop
xor		edx, 262BA3B8h
nop
nop
mov		ecx, eax
add		eax, ebx
ror		edi, cl
nop
nop
nop
nop
mov		esi, edx
nop
mov		ecx, ebx
mov		ebx, eax
ror		esi, cl
nop
nop
nop
nop
ror		esi, 9
nop
xor		esi, edi
mov		ecx, edi
ror		ebx, cl
nop
not		ebx
mov		eax, [ebp+var_10]
sub		esi, edi
not		eax
rol		esi, 3
rol		eax, 0Ah
not		esi
rol		eax, 2
nop
add		eax, ebx
nop
nop
rol		ebx, 0Eh
mov		edx, eax
xor		edi, esi
nop
sub		ebx, edi
mov		ecx, esi
ror		edx, cl
nop
add		esi, edx
sub		edi, edx
add		edx, ebx
not		edi
add		edi, ebx
nop
nop
mov		eax, edi
nop
neg		ebx
nop
mov		ecx, esi
rol		ebx, 10h
ror		eax, cl
dec		esi
nop
mov		[ebp+var_14], ebx
sub		eax, edx
not		esi
sub		eax, ebx
sub		eax, 3D9C0898h
nop
mov		[ebp+var_10], eax
mov		ebx, eax
nop
neg		ebx
mov		eax, edx
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		[ebp+var_C], ebx
mov		edx, [ebp+var_14]
neg		eax
nop
mov		ebx, eax
nop
nop
nop
mov		ecx, edx
ror		ebx, cl
nop
nop
nop
mov		eax, [ebp+var_10]
nop
add		eax, edx
ror		ebx, 5
neg		eax
mov		edx, eax
nop
mov		ecx, esi
add		esi, 61DC0A8h
rol		edx, cl
nop
sub		edx, 281FFCC2h
xor		ebx, edx
nop
mov		edi, [ebp+var_10]
mov		eax, esi
nop
xor		edx, edi
mov		ecx, [ebp+var_C]
ror		eax, cl
nop
rol		ebx, 8
sub		edi, ebx
rol		eax, 5
mov		ecx, ebx
mov		esi, edx
neg		ecx
add		eax, edi
mov		[ebp+var_C], ecx
nop
neg		eax
xor		eax, [ebp+var_C]
nop
mov		ecx, ebx
rol		esi, cl
mov		ebx, eax
nop
not		esi
xor		esi, edi
not		edi
nop
nop
nop
nop
mov		ecx, edi
ror		ebx, cl
nop
lea		eax, [edi+esi]
xor		eax, ebx
nop
nop
mov		edx, eax
nop
nop
mov		ecx, ebx
rol		ebx, 2
ror		edx, cl
nop
nop
nop
mov		eax, edx
nop
nop
mov		ecx, [ebp+var_C]
ror		eax, cl
lea		ecx, [esi+ebx]
nop
rol		ecx, 0Ch
mov		edx, [ebp+var_C]
neg		ecx
ror		edx, 0Eh
not		eax
sub		ebx, edx
mov		[ebp+var_8], ecx
add		edx, ecx
not		eax
nop
mov		[ebp+var_C], edx
nop
xor		eax, 0B3BECCD0h
nop
mov		edi, eax
nop
mov		ecx, ebx
rol		edi, cl
nop
xor		ebx, 0B3BC38EDh
mov		[ebp+var_14], ebx
nop
mov		esi, edx
nop
neg		esi
not		edi
nop
nop
nop
mov		ecx, esi
ror		ebx, cl
nop
nop
mov		edx, edi
nop
neg		ebx
mov		ecx, esi
rol		edx, cl
nop
nop
nop
mov		edi, [ebp+var_C]
sub		edx, ebx
nop
sub		edi, edx
mov		esi, edx
not		edi
nop
mov		eax, edi
mov		ecx, ebx
ror		esi, cl
nop
sub		esi, 50AC3605h
add		ebx, esi
ror		esi, 0Dh
nop
nop
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		edi, ebx
nop
nop
nop
nop
mov		ecx, eax
rol		edi, cl
nop
mov		ebx, [ebp+var_8]
rol		ebx, 4
add		edi, 0B42A1BFh
ror		ebx, 6
not		edi
add		edi, 18B6B5B4h
not		ebx
sub		ebx, edi
mov		[ebp+var_10], edi
not		[ebp+var_10]
sub		ebx, 6D222499h
nop
nop
lea		edx, [eax+edi]
nop
mov		edi, esi
nop
not		edx
mov		ecx, ebx
ror		edx, 0Ah
mov		[ebp+var_14], edx
ror		edi, cl
not		ebx
nop
sub		ebx, edx
mov		esi, edx
neg		esi
nop
nop
mov		eax, edi
nop
mov		ecx, esi
rol		eax, cl
nop
nop
add		eax, 2F3E5226h
add		eax, ebx
rol		ebx, 3
mov		edx, ebx
nop
mov		ecx, esi
mov		esi, [ebp+var_10]
sub		eax, esi
rol		edx, cl
xor		eax, esi
nop
xor		eax, 874DEB1Bh
rol		edx, 2
mov		ebx, eax
sub		edx, 74F6C8DEh
nop
nop
nop
nop
mov		ecx, edx
rol		ebx, cl
nop
mov		eax, [ebp+var_14]
xor		eax, esi
not		ebx
add		eax, 65DB28D0h
sub		ebx, 61C2469Bh
sub		edx, eax
nop
nop
rol		eax, 3
nop
not		edx
sub		edx, 1E79E61Ah
mov		edi, eax
nop
add		esi, edx
mov		ecx, ebx
mov		[ebp+var_C], edx
add		ebx, esi
ror		edi, cl
xor		ebx, 0F25B718Fh
nop
rol		esi, 0Ch
xor		edi, edx
mov		[ebp+var_4], esi
nop
mov		edx, ebx
neg		edx
nop
nop
nop
mov		ecx, edx
rol		esi, cl
nop
mov		ecx, esi
mov		esi, edi
rol		ecx, 7
xor		ecx, edi
mov		[ebp+var_4], ecx
nop
nop
mov		ecx, edx
mov		edx, [ebp+var_C]
rol		esi, cl
nop
rol		esi, 4
sub		edx, [ebp+var_4]
not		edx
rol		edx, 5
mov		eax, esi
xor		edx, [ebp+var_4]
neg		eax
neg		edx
rol		ebx, 8
xor		edx, esi
nop
nop
mov		edi, edx
nop
mov		ecx, esi
mov		esi, [ebp+var_4]
rol		edi, cl
sub		esi, ebx
nop
not		esi
mov		edx, eax
not		edi
nop
nop
nop
nop
mov		ecx, esi
sub		esi, 718A7E47h
ror		edx, cl
sub		edi, esi
nop
add		edi, 1D56A9FBh
mov		eax, [ebp+var_4]
sub		edx, esi
rol		edi, 3
ror		eax, 0Bh
not		edi
neg		eax
mov		ebx, edi
rol		eax, 9
neg		ebx
rol		eax, 0Dh
mov		[ebp+var_4], eax
nop
nop
rol		ebx, 4
mov		eax, edx
nop
mov		ecx, edi
rol		eax, cl
mov		edi, esi
nop
mov		edx, [ebp+var_4]
nop
not		eax
nop
nop
nop
mov		ecx, edx
rol		edx, 1
rol		edi, cl
nop
mov		[ebp+var_4], edx
nop
nop
nop
mov		edx, eax
not		edi
nop
mov		ecx, [ebp+var_4]
ror		edi, 0Eh
ror		edi, 1
rol		edx, cl
sub		edi, ebx
rol		ebx, 0Ah
nop
xor		edx, ebx
add		ebx, 61E28FECh
mov		[ebp+var_C], edx
mov		eax, [ebp+var_4]
nop
nop
add		edi, [ebp+var_C]
nop
mov		[ebp+var_14], ebx
mov		ebx, edx
mov		[ebp+var_10], edi
mov		edx, eax
neg		ebx
nop
mov		ecx, ebx
ror		edx, cl
nop
nop
ror		edx, 0Ch
mov		eax, edx
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
mov		edx, eax
nop
mov		ecx, ebx
ror		edx, cl
nop
mov		eax, [ebp+var_14]
nop
mov		edi, eax
nop
nop
nop
mov		ecx, edx
ror		edi, cl
mov		ecx, [ebp+var_C]
nop
mov		eax, [ebp+var_10]
add		ecx, 0A71F0030h
xor		edi, 0FF0CD18Bh
add		edi, eax
add		eax, ecx
nop
ror		eax, 0Ch
mov		esi, edx
mov		[ebp+var_14], eax
nop
mov		ecx, ebx
ror		esi, cl
mov		ecx, [ebp+var_C]
nop
sub		esi, edi
xor		ecx, 0E107906Ah
nop
mov		[ebp+var_8], esi
mov		esi, ecx
mov		[ebp+var_C], ecx
nop
neg		esi
mov		edx, edi
nop
nop
mov		ecx, esi
ror		edx, cl
nop
mov		eax, [ebp+var_14]
nop
mov		edi, edx
nop
mov		ecx, esi
mov		esi, [ebp+var_8]
ror		edi, cl
nop
nop
nop
sub		esi, edi
mov		ebx, edi
nop
nop
mov		ecx, eax
rol		ebx, cl
nop
nop
nop
nop
mov		edi, eax
nop
mov		ecx, esi
rol		edi, cl
nop
mov		eax, [ebp+var_C]
xor		esi, edi
add		eax, 67784609h
xor		eax, 45F50B23h
add		edi, 376B9843h
sub		esi, eax
add		eax, ebx
mov		[ebp+var_C], eax
mov		edx, eax
neg		edx
mov		[ebp+var_8], esi
nop
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
sub		ebx, esi
mov		[ebp+var_8], edi
mov		[ebp+var_10], ebx
nop
mov		ecx, edx
ror		ebx, cl
nop
nop
lea		eax, [esi-2B31CA0Ch]
nop
mov		ecx, edx
mov		edx, [ebp+var_C]
ror		edi, cl
sub		edx, ebx
nop
neg		ebx
mov		ecx, edi
sub		edx, ebx
dec		ecx
ror		ecx, 3
add		eax, ecx
neg		ecx
rol		eax, 0Dh
xor		edx, eax
ror		ecx, 2
sub		edx, ebx
mov		[ebp+var_14], eax
add		ecx, ebx
mov		[ebp+var_C], edx
mov		esi, eax
mov		[ebp+var_8], ecx
nop
neg		esi
nop
mov		edx, ebx
nop
mov		ecx, esi
ror		edx, cl
nop
mov		eax, [ebp+var_8]
nop
mov		edi, edx
nop
mov		ecx, esi
ror		edi, cl
nop
neg		eax
nop
mov		edx, edi
nop
mov		[ebp+var_10], eax
nop
nop
mov		ecx, eax
rol		edx, cl
nop
mov		[ebp+var_4], eax
mov		eax, [ebp+var_14]
nop
nop
mov		edi, [ebp+var_C]
ror		eax, 0Ah
nop
mov		esi, eax
nop
mov		ecx, edx
ror		esi, cl
nop
nop
mov		ebx, [ebp+var_10]
sub		esi, [ebp+var_8]
lea		eax, [edx+esi]
add		edi, eax
mov		eax, edi
sub		eax, edx
mov		edx, edi
nop
mov		ecx, [ebp+var_4]
ror		edx, cl
nop
lea		edi, [eax+9D69CB7h]
sub		edx, 2A1613CAh
xor		ebx, edx
mov		ecx, edx
xor		edi, ebx
xor		ebx, 86F17251h
rol		ebx, 8
lea		eax, [edx-1C335BBCh]
add		eax, esi
xor		ebx, eax
xor		ecx, eax
ror		ebx, 2
sub		ecx, edx
ror		ebx, 4
mov		eax, edi
dec		ecx
sub		eax, edx
xor		ebx, ecx
not		edi
xor		ecx, eax
rol		ebx, 0Bh
neg		eax
add		ebx, 0E269C3Bh
mov		edx, eax
sub		edx, ecx
mov		ecx, ebx
sub		ecx, eax
neg		ebx
add		ecx, 24DF700Eh
add		edi, edx
add		ecx, ebx
not		edi
ror		ebx, 0Dh
xor		edi, 0E3489381h
add		ebx, 5685D538h
mov		[ebp+var_10], ebx
xor		ebx, ecx
mov		eax, [ebp+var_10]
not		ebx
lea		esi, [eax-5509A58Fh]
rol		eax, 3
sub		edi, eax
add		esi, edx
xor		edi, 2239D3DAh
xor		ebx, esi
not		edi
not		eax
nop
add		eax, edi
nop
nop
mov		edx, eax
nop
not		esi
mov		ecx, edi
neg		ebx
ror		ebx, 5
rol		edx, cl
neg		ebx
nop
mov		[ebp+var_14], ebx
nop
mov		eax, edi
nop
nop
nop
mov		ecx, edx
ror		edx, 5
ror		eax, cl
add		edx, esi
nop
neg		esi
nop
mov		edi, esi
nop
neg		eax
nop
nop
mov		ecx, edx
rol		edi, cl
nop
add		edi, ebx
lea		ebx, [edx+eax]
mov		eax, [ebp+var_14]
not		ebx
mov		[ebp+var_10], edi
nop
nop
rol		edx, 0Ch
nop
mov		edi, edx
nop
add		eax, 0F8D56DEBh
mov		ecx, ebx
xor		eax, ebx
ror		eax, 0Fh
rol		edi, cl
mov		esi, eax
nop
mov		edx, [ebp+var_10]
xor		edi, edx
nop
nop
nop
nop
mov		ecx, edi
xor		edi, 0B1D20548h
ror		esi, cl
nop
mov		eax, esi
rol		esi, 8
sub		eax, edi
add		eax, edx
not		edx
add		ebx, eax
add		edx, edi
add		esi, ebx
mov		[ebp+var_10], edx
not		esi
add		edi, 2AA632E4h
xor		esi, ebx
add		esi, 4F31FAA1h
xor		esi, 0F9D7BB54h
mov		edx, edi
neg		edx
mov		eax, esi
nop
nop
nop
mov		ecx, edi
ror		eax, cl
lea		edi, [ebx+0EA86CEAh]
nop
not		edi
mov		esi, [ebp+var_10]
not		eax
mov		[ebp+var_C], eax
nop
nop
mov		eax, edx
nop
neg		esi
nop
mov		ecx, edi
rol		eax, cl
nop
nop
nop
sub		eax, esi
nop
mov		ebx, eax
nop
not		esi
mov		ecx, [ebp+var_C]
mov		edx, esi
rol		ebx, cl
nop
ror		ebx, 2
nop
mov		[ebp+var_14], ebx
nop
nop
nop
mov		ecx, ebx
mov		ebx, [ebp+var_C]
rol		edx, cl
sub		ebx, 86A6381h
nop
mov		eax, ebx
nop
mov		esi, 9D287DE1h
nop
sub		esi, edi
nop
mov		edi, 58D18C3Dh
nop
sub		edi, esi
mov		ecx, edx
rol		eax, cl
nop
mov		ebx, esi
rol		eax, 0Fh
sub		edi, eax
nop
mov		eax, edi
nop
xor		eax, edx
nop
xor		eax, 0DE81B16h
nop
mov		ecx, edi
rol		ebx, cl
mov		ecx, [ebp+var_14]
nop
xor		ecx, 54D07748h
mov		esi, edi
sub		esi, ecx
ror		esi, 9
add		eax, 1B982BAAh
xor		esi, edi
add		eax, ebx
add		esi, ebx
mov		edx, edi
nop
not		eax
nop
mov		[ebp+var_14], eax
nop
mov		eax, ebx
nop
mov		ecx, esi
rol		edx, cl
nop
xor		edx, ebx
nop
nop
nop
nop
mov		ecx, edx
add		edx, esi
rol		eax, cl
neg		edx
nop
rol		edx, 0Dh
mov		ebx, [ebp+var_14]
not		eax
rol		eax, 0Dh
nop
nop
neg		eax
xor		esi, eax
nop
add		eax, ebx
mov		[ebp+var_10], esi
xor		eax, 73E6C810h
mov		esi, eax
nop
mov		ecx, edx
sub		edx, 50BD74E1h
rol		esi, cl
nop
mov		eax, [ebp+var_10]
xor		ebx, esi
mov		[ebp+var_10], edx
nop
rol		esi, 1
nop
mov		edi, eax
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
nop
mov		edx, ebx
nop
nop
nop
mov		ecx, [ebp+var_10]
ror		edx, cl
nop
nop
nop
nop
mov		eax, edx
nop
mov		ebx, 0DD6C4CDCh
mov		ecx, edi
sub		ebx, esi
ror		eax, cl
nop
neg		eax
mov		esi, edi
xor		eax, ebx
nop
add		eax, 8660EA63h
nop
nop
nop
mov		ecx, ebx
rol		esi, cl
nop
xor		eax, esi
nop
nop
mov		edx, eax
nop
sub		ebx, esi
nop
mov		ecx, esi
ror		ebx, 0Ah
rol		edx, cl
nop
mov		eax, ebx
sub		eax, edx
nop
add		esi, eax
nop
nop
mov		edi, esi
nop
mov		eax, 6CA30627h
sub		eax, [ebp+var_10]
mov		ecx, edx
xor		eax, esi
ror		edi, cl
xor		eax, 0F1D11768h
nop
not		eax
mov		[ebp+var_C], edi
mov		esi, ebx
mov		edi, ebx
mov		[ebp+var_14], eax
xor		edi, edx
mov		edx, eax
xor		edi, 29742902h
neg		edx
nop
nop
nop
nop
mov		ecx, edi
sub		edi, [ebp+var_C]
rol		esi, cl
xor		edi, eax
nop
nop
mov		ebx, edi
nop
nop
sub		esi, 4DFAE4DFh
mov		ecx, edx
ror		ebx, cl
nop
mov		eax, [ebp+var_C]
nop
mov		edi, esi
nop
mov		ecx, edx
mov		edx, [ebp+var_14]
rol		edi, cl
not		edx
nop
add		edx, ebx
sub		eax, edi
neg		edx
not		ebx
xor		eax, 54706F15h
mov		[ebp+var_C], eax
nop
nop
mov		eax, ebx
nop
not		edi
nop
sub		edi, edx
mov		ecx, edx
xor		edi, 0D7D1D1C7h
rol		edx, 8
rol		eax, cl
nop
mov		ebx, [ebp+var_C]
xor		eax, 922C3400h
not		ebx
xor		ebx, eax
lea		esi, [edx+56CEA083h]
nop
mov		edx, edi
nop
neg		ebx
nop
add		esi, eax
nop
mov		ecx, eax
ror		edx, cl
nop
nop
nop
nop
mov		edi, eax
nop
xor		edx, eax
mov		ecx, ebx
sub		edx, esi
not		ebx
rol		edi, cl
add		ebx, 1F5E89DDh
nop
xor		ebx, 0DEA1630Ah
rol		edi, 4
add		esi, edi
rol		ebx, 10h
nop
mov		eax, esi
nop
nop
nop
mov		ecx, edi
add		edi, 56FDE97Fh
ror		eax, cl
sub		ebx, edi
nop
mov		[ebp+var_8], edi
mov		esi, 0FFFFFFFFh
sub		esi, eax
sub		eax, edi
not		eax
sub		esi, edx
xor		ebx, eax
rol		esi, 7
mov		edi, 4DE2181Eh
add		ebx, 3FDF470Ah
sub		edi, eax
xor		esi, eax
mov		eax, [ebp+var_8]
xor		ebx, edi
sub		ebx, 6F47B142h
sub		eax, esi
nop
sub		esi, 4F5EEE93h
nop
mov		edx, esi
nop
neg		edi
nop
mov		ecx, ebx
rol		eax, 8
sub		eax, edi
rol		edx, cl
nop
ror		eax, 0Ch
ror		edx, 4
mov		esi, edi
nop
mov		[ebp+var_8], eax
nop
nop
nop
mov		ecx, edx
ror		esi, cl
nop
mov		edi, [ebp+var_8]
xor		esi, ebx
xor		ebx, 4D081F6h
mov		eax, ebx
neg		esi
sub		eax, edx
neg		ebx
sub		eax, edi
xor		ebx, 79819DC0h
mov		edx, ebx
xor		esi, 6FCA63F1h
sub		edx, eax
add		edi, esi
nop
mov		[ebp+var_8], edi
nop
mov		eax, ebx
nop
not		esi
nop
mov		ecx, edx
xor		edx, edi
ror		eax, cl
nop
nop
mov		edi, esi
nop
nop
nop
mov		ecx, [ebp+var_8]
mov		[ebp+var_14], eax
ror		edi, cl
nop
mov		esi, [ebp+var_8]
xor		esi, edx
neg		edi
xor		edi, eax
nop
nop
rol		edi, 0Bh
nop
not		edx
mov		eax, edx
sub		edi, edx
nop
mov		ecx, esi
ror		eax, cl
nop
nop
nop
nop
mov		ebx, eax
nop
mov		ecx, edi
rol		ebx, cl
nop
xor		edi, ebx
rol		edi, 0Eh
ror		esi, 0Fh
not		ebx
xor		esi, 0AE920623h
nop
mov		[ebp+var_8], esi
nop
mov		[ebp+var_10], ebx
mov		edx, ebx
mov		esi, edi
neg		edx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
mov		edi, [ebp+var_8]
mov		eax, edi
nop
mov		ecx, edx
mov		edx, [ebp+var_14]
ror		eax, cl
add		edx, ebx
nop
nop
mov		edi, [ebp+var_10]
nop
nop
xor		edi, eax
mov		ebx, edx
ror		eax, 2
nop
add		edi, 7B0FA548h
mov		ecx, esi
mov		[ebp+var_10], edi
neg		eax
rol		ebx, cl
nop
nop
nop
nop
mov		edx, esi
nop
not		ebx
xor		ebx, esi
mov		ecx, edi
rol		edx, cl
nop
nop
nop
nop
nop
nop
mov		ecx, eax
ror		edi, cl
nop
sub		edx, edi
xor		edi, 0F23B4DA8h
sub		eax, edx
neg		edi
mov		[ebp+var_C], eax
mov		eax, 3ED35E72h
mov		ecx, [ebp+var_C]
sub		eax, ebx
add		ecx, eax
mov		ebx, eax
sub		ebx, edx
mov		edx, 1
sub		ebx, ecx
sub		edx, eax
add		ebx, edi
not		edi
mov		esi, ebx
mov		eax, edi
sub		esi, ecx
nop
nop
nop
nop
mov		ecx, esi
ror		eax, cl
nop
mov		edi, edx
add		eax, esi
xor		ebx, eax
neg		eax
nop
mov		[ebp+var_C], eax
nop
nop
nop
mov		ecx, eax
rol		edi, cl
nop
nop
nop
nop
mov		eax, edi
sub		eax, esi
mov		esi, [ebp+var_C]
mov		edx, eax
rol		esi, 0Eh
nop
mov		ecx, ebx
not		ebx
ror		edx, cl
nop
nop
nop
nop
mov		eax, edx
nop
mov		ecx, esi
xor		esi, 96B00986h
rol		eax, cl
nop
nop
mov		[ebp+var_C], esi
sub		ebx, eax
nop
nop
xor		ebx, esi
rol		ebx, 10h
mov		[ebp+var_14], ebx
mov		ebx, edi
nop
mov		ecx, esi
mov		esi, [ebp+var_14]
rol		ebx, cl
nop
mov		edi, [ebp+var_C]
sub		ebx, 4521BA41h
rol		edi, 0Fh
sub		eax, ebx
nop
nop
mov		edx, eax
nop
add		esi, eax
nop
add		edi, esi
mov		ecx, ebx
ror		edx, cl
nop
nop
nop
nop
rol		edx, 0Fh
mov		eax, esi
nop
mov		ecx, edi
ror		eax, cl
nop
sub		ebx, edx
sub		edi, eax
mov		[ebp+var_14], ebx
neg		edx
mov		[ebp+var_C], edi
mov		edi, edx
mov		esi, eax
neg		edi
nop
nop
nop
mov		ecx, edx
ror		esi, cl
nop
mov		eax, [ebp+var_C]
add		eax, ebx
nop
nop
neg		eax
nop
xor		ebx, esi
mov		edx, eax
xor		ebx, edi
nop
mov		ecx, esi
rol		edx, cl
nop
nop
nop
mov		eax, [ebp+var_14]
nop
mov		esi, edx
xor		eax, 0AA506506h
nop
mov		ecx, ebx
xor		ebx, eax
rol		esi, cl
not		eax
nop
lea		edx, [edi+67711730h]
xor		esi, edi
add		esi, edi
mov		edi, eax
add		edx, esi
not		esi
nop
rol		edx, 5
nop
sub		ebx, edx
nop
neg		edx
nop
not		ebx
mov		ecx, esi
rol		edx, 0Ah
ror		esi, 0Eh
rol		edi, cl
nop
nop
nop
ror		edi, 4
nop
mov		[ebp+var_14], edi
mov		eax, 0C07B8D0Fh
mov		edi, ebx
sub		eax, ebx
nop
add		esi, eax
mov		ecx, edx
ror		edi, cl
nop
mov		ebx, [ebp+var_14]
lea		eax, [edi+edx]
ror		eax, 0Ch
rol		ebx, 0Bh
not		ebx
nop
sub		ebx, eax
nop
nop
add		eax, 2181D4FFh
not		eax
neg		esi
rol		eax, 9
not		ebx
mov		edx, eax
nop
mov		ecx, edi
add		edi, 5E9E07E8h
rol		edx, cl
nop
rol		edi, 2
mov		eax, esi
nop
nop
dec		edi
nop
nop
mov		ecx, edx
not		edx
ror		eax, cl
add		edx, 35F2D686h
nop
nop
nop
rol		eax, 6
nop
mov		esi, edx
nop
mov		ecx, ebx
ror		ebx, 0Ch
ror		esi, cl
not		ebx
nop
mov		edx, edi
not		esi
xor		esi, eax
ror		eax, 4
sub		edx, eax
sub		esi, ebx
ror		edx, 0Eh
xor		ebx, 0E2B4E20h
add		edx, 39A5DF71h
mov		eax, ebx
nop
not		esi
nop
not		esi
nop
mov		[ebp+var_C], esi
nop
mov		ecx, edx
rol		eax, cl
nop
nop
nop
nop
ror		eax, 8
mov		esi, eax
mov		ebx, 5673ED4Bh
nop
sub		ebx, edx
mov		ecx, [ebp+var_C]
ror		esi, cl
nop
mov		eax, edi
nop
nop
nop
nop
mov		ecx, esi
mov		edx, esi
rol		eax, cl
nop
nop
nop
nop
nop
mov		ecx, eax
add		eax, ebx
ror		edx, cl
neg		eax
nop
mov		esi, eax
nop
nop
nop
nop
mov		ecx, edx
ror		esi, cl
nop
mov		eax, edx
nop
nop
nop
nop
mov		ecx, esi
sub		esi, ebx
rol		eax, cl
neg		ebx
nop
mov		edx, [ebp+var_C]
xor		ebx, edx
add		eax, esi
neg		ebx
rol		edx, 8
nop
neg		esi
nop
xor		esi, eax
nop
rol		eax, 5
mov		edi, eax
nop
mov		ecx, ebx
rol		ebx, 1
ror		edi, cl
nop
nop
nop
nop
sub		edx, edi
mov		eax, esi
nop
mov		ecx, ebx
xor		ebx, edx
ror		eax, cl
add		edx, 7B0D8291h
nop
mov		[ebp+var_C], edx
nop
mov		edx, ebx
nop
nop
nop
mov		ecx, [ebp+var_C]
rol		eax, 7
ror		edx, cl
not		eax
nop
mov		ebx, [ebp+var_C]
not		ebx
nop
nop
nop
mov		esi, eax
add		edi, 0E0ACA314h
nop
mov		ecx, ebx
ror		ebx, 0Ch
ror		esi, cl
nop
mov		eax, edx
not		esi
ror		esi, 8
neg		esi
add		ebx, esi
neg		esi
nop
nop
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
nop
xor		eax, 7DCF3BFDh
xor		edi, eax
mov		edx, eax
nop
not		edi
mov		ecx, esi
xor		edi, esi
sub		edi, esi
rol		edx, cl
sub		esi, 2AE5F51Dh
nop
lea		eax, [ebx-1]
xor		edx, ebx
add		eax, edi
neg		edx
xor		eax, esi
nop
rol		eax, 0Dh
nop
xor		edi, 0FE584748h
nop
mov		ebx, eax
nop
sub		esi, edi
mov		ecx, edx
xor		esi, edi
ror		ebx, cl
nop
nop
nop
lea		eax, [edi+edx]
nop
ror		eax, 3
not		ebx
mov		edx, eax
xor		ebx, esi
nop
add		ebx, eax
mov		ecx, edi
ror		esi, 0Fh
add		ebx, edi
ror		edx, cl
not		edi
nop
sub		ebx, edi
add		edx, esi
not		edi
not		edx
xor		edx, edi
not		edi
nop
sub		edx, 71D28D8Bh
nop
nop
rol		ebx, 6
xor		ebx, edi
mov		eax, edx
nop
sub		ebx, edi
mov		ecx, edi
mov		[ebp+var_C], ebx
neg		esi
ror		eax, cl
mov		ecx, edi
nop
rol		edi, 4
sub		ecx, eax
rol		edi, 7
mov		eax, [ebp+var_C]
inc		ecx
sub		eax, edi
ror		esi, 0Dh
xor		eax, 86E0ACCDh
sub		esi, 4323332Dh
ror		eax, 0Dh
mov		ebx, esi
sub		ebx, edi
neg		eax
add		ebx, ecx
mov		[ebp+var_C], eax
nop
rol		edi, 0Bh
nop
mov		eax, esi
nop
not		edi
nop
mov		ecx, ebx
not		ebx
rol		eax, cl
add		ebx, 366F101Ah
nop
nop
nop
mov		edx, eax
nop
nop
mov		ecx, ebx
not		ebx
ror		edx, cl
xor		ebx, 0C41F00F6h
nop
mov		[ebp+var_8], ebx
mov		eax, [ebp+var_C]
neg		edx
add		edi, eax
add		eax, edx
sub		edx, eax
not		edi
mov		esi, edx
rol		eax, 0Bh
neg		esi
rol		eax, 5
mov		[ebp+var_14], edi
nop
nop
mov		[ebp+var_C], eax
nop
nop
mov		ecx, edx
mov		edx, [ebp+var_C]
mov		ebx, edx
rol		edi, cl
neg		ebx
nop
mov		[ebp+var_10], esi
mov		eax, [ebp+var_8]
mov		[ebp+var_14], edi
nop
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
nop
nop
nop
mov		[ebp+var_4], eax
nop
mov		ecx, edi
ror		eax, cl
nop
mov		ecx, eax
nop
mov		[ebp+var_4], ecx
mov		edi, ecx
nop
nop
neg		edi
nop
mov		ecx, edi
rol		esi, cl
nop
mov		ecx, [ebp+var_14]
sub		esi, ecx
xor		esi, [ebp+var_4]
mov		[ebp+var_8], ecx
nop
nop
mov		ecx, ebx
nop
ror		[ebp+var_8], cl
nop
nop
mov		edx, esi
nop
mov		ecx, edi
rol		edx, cl
mov		eax, [ebp+var_4]
nop
mov		esi, [ebp+var_8]
mov		edi, edx
nop
sub		eax, esi
nop
ror		eax, 0Ch
nop
mov		ebx, eax
nop
mov		ecx, esi
not		esi
rol		edi, cl
nop
add		edi, 1A5DCB02h
xor		esi, edi
not		edi
nop
nop
nop
nop
mov		ecx, esi
xor		esi, 0AED8112Ah
rol		ebx, cl
nop
nop
mov		[ebp+var_8], esi
mov		eax, [ebp+var_C]
nop
rol		eax, 0Ch
xor		ebx, esi
add		eax, 45AF348Bh
nop
add		eax, edi
mov		esi, edi
not		eax
nop
mov		ecx, [ebp+var_8]
mov		edx, eax
rol		esi, cl
nop
mov		edi, [ebp+var_8]
nop
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
mov		eax, ebx
neg		eax
nop
nop
nop
mov		ecx, ebx
mov		ebx, [ebp+var_8]
rol		edi, cl
lea		ecx, [edx+1]
nop
not		ecx
neg		edi
mov		[ebp+var_10], ecx
sub		edi, esi
mov		edx, eax
add		esi, edi
mov		ebx, 0FFFFFFFFh
not		edi
ror		esi, 0Eh
add		edi, ecx
nop
nop
nop
nop
mov		ecx, edi
not		edi
rol		edx, cl
xor		edi, 12979BC5h
mov		ecx, [ebp+var_10]
nop
inc		edi
mov		eax, 0D39F7CAh
sub		eax, esi
sub		ebx, edx
add		ecx, eax
add		esi, edi
sub		edi, ecx
xor		ebx, ecx
mov		eax, ecx
ror		edi, 9
sub		eax, edi
mov		edx, 0ECF8C67h
xor		eax, ebx
sub		edx, esi
neg		ebx
mov		[ebp+var_14], edx
add		ecx, ebx
mov		edi, eax
mov		[ebp+var_10], ecx
mov		esi, edx
nop
nop
nop
neg		esi
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
nop
mov		eax, ebx
nop
mov		ecx, esi
rol		eax, cl
nop
nop
xor		edi, eax
mov		[ebp+var_C], eax
mov		eax, [ebp+var_10]
add		eax, edi
not		edi
neg		eax
not		eax
mov		[ebp+var_10], eax
mov		eax, edi
nop
mov		ecx, esi
ror		eax, cl
mov		esi, [ebp+var_14]
nop
mov		ebx, eax
mov		edx, esi
neg		ebx
nop
nop
nop
mov		ecx, eax
ror		edx, cl
nop
mov		esi, [ebp+var_10]
nop
mov		eax, edx
nop
nop
nop
mov		ecx, esi
dec		esi
rol		eax, cl
mov		ecx, 0FFFFFFFFh
sub		ecx, [ebp+var_C]
nop
xor		ecx, 15778432h
add		eax, 807E486h
not		ecx
mov		[ebp+var_14], eax
add		eax, ebx
mov		[ebp+var_10], ecx
nop
mov		edi, ecx
add		eax, esi
nop
mov		esi, ebx
neg		edi
nop
nop
mov		ecx, edi
rol		esi, cl
nop
nop
mov		ebx, eax
nop
mov		ecx, edi
ror		ebx, cl
nop
nop
nop
mov		eax, [ebp+var_14]
not		ebx
nop
xor		ebx, esi
mov		ecx, edi
ror		eax, cl
mov		ecx, [ebp+var_10]
nop
xor		ecx, esi
sub		ebx, 489F06C7h
mov		[ebp+var_10], ecx
lea		edi, [esi+ecx]
not		edi
mov		[ebp+var_8], edi
mov		edx, edi
neg		edx
mov		ecx, edi
mov		[ebp+var_14], ecx
mov		esi, ebx
nop
mov		ecx, edx
ror		esi, cl
mov		ecx, 0FA414039h
sub		ecx, eax
mov		[ebp+var_C], edx
mov		eax, [ebp+var_10]
nop
sub		ecx, eax
rol		eax, 1
rol		ecx, 9
xor		eax, edi
ror		ecx, 1
add		eax, 5A2E66D0h
neg		ecx
mov		edi, eax
mov		[ebp+var_10], ecx
nop
nop
nop
nop
mov		ecx, esi
rol		esi, 0Ch
ror		edi, cl
mov		edx, esi
nop
nop
nop
mov		ebx, edi
mov		ecx, [ebp+var_C]
nop
ror		edx, cl
neg		ebx
nop
nop
not		edx
mov		esi, ebx
mov		eax, edx
ror		ebx, 7
nop
mov		ecx, esi
rol		eax, cl
nop
nop
mov		edx, eax
nop
mov		ecx, [ebp+var_C]
ror		edx, cl
nop
mov		edi, [ebp+var_8]
nop
mov		[ebp+var_14], edx
mov		edx, [ebp+var_10]
mov		eax, edx
nop
mov		ecx, esi
ror		eax, cl
nop
mov		edx, [ebp+var_14]
sub		eax, edi
ror		edx, 7
add		edi, eax
add		ebx, edi
ror		edi, 0Ah
xor		edx, ebx
not		edi
xor		edx, 0DEE77381h
lea		esi, [eax+2388CDABh]
xor		edi, edx
ror		esi, 0Dh
rol		edx, 6
ror		edi, 0Ch
neg		esi
xor		esi, edx
lea		eax, [edi+ebx]
ror		edx, 0Dh
not		eax
rol		edx, 0Dh
sub		edi, 60071449h
xor		eax, edi
rol		edx, 9
not		edi
not		esi
sub		edx, edi
rol		esi, 10h
sub		esi, edx
mov		ebx, eax
nop
nop
nop
nop
mov		ecx, esi
ror		ebx, cl
nop
nop
nop
nop
nop
nop
neg		ebx
mov		ecx, edi
ror		edi, 6
xor		edi, esi
rol		edx, cl
xor		edi, ebx
nop
add		edi, ebx
rol		edx, 9
mov		eax, esi
add		edx, 0D417394h
add		edx, esi
sub		ebx, edx
sub		edx, edi
add		edx, 0ADA3BE1h
sub		ebx, 25B25636h
rol		edx, 9
not		ebx
nop
not		edi
nop
nop
nop
mov		ecx, edx
ror		eax, cl
nop
mov		esi, ebx
sub		esi, eax
mov		eax, 0FFFFFFFFh
sub		eax, edx
sub		ebx, esi
xor		eax, 0EA7479A0h
mov		[ebp+var_8], ebx
mov		edx, ebx
sub		edx, eax
mov		eax, edi
sub		edx, edi
add		edx, 303A1479h
nop
nop
nop
nop
mov		ecx, edx
ror		eax, cl
nop
nop
nop
mov		edi, [ebp+var_8]
nop
mov		ebx, esi
nop
add		edx, eax
mov		ecx, edi
neg		edx
xor		edx, edi
ror		ebx, cl
sub		edi, 71612511h
nop
add		edx, edi
mov		esi, eax
not		edi
neg		ebx
nop
mov		[ebp+var_8], edi
nop
not		[ebp+var_8]
nop
xor		ebx, edi
nop
neg		edx
mov		ecx, edi
ror		edx, 0Dh
add		ebx, 764CE808h
ror		esi, cl
not		edx
mov		ecx, ebx
nop
neg		ecx
ror		esi, 0Bh
mov		[ebp+var_10], ecx
mov		edi, edx
nop
nop
mov		ecx, ebx
rol		edi, cl
mov		ebx, esi
nop
nop
nop
mov		edx, edi
nop
neg		esi
nop
mov		ecx, esi
ror		edx, cl
nop
mov		eax, [ebp+var_8]
nop
mov		edi, edx
nop
mov		ecx, esi
ror		edi, cl
nop
neg		edi
sub		ebx, edi
xor		edi, eax
add		eax, ebx
mov		[ebp+var_8], eax
mov		eax, [ebp+var_10]
rol		eax, 4
xor		ebx, eax
sub		edi, eax
xor		ebx, 625D96EFh
mov		edx, edi
nop
nop
nop
nop
mov		ecx, ebx
add		ebx, eax
ror		edx, cl
mov		esi, ebx
nop
nop
nop
nop
nop
mov		ecx, eax
rol		esi, cl
nop
rol		esi, 0Dh
sub		edx, esi
add		esi, eax
xor		edx, eax
nop
nop
xor		eax, 0CABBD70Dh
xor		edx, eax
nop
add		eax, 0B96334F6h
mov		edi, edx
nop
xor		eax, esi
mov		ecx, esi
ror		edi, cl
nop
mov		edx, [ebp+var_8]
add		edi, eax
nop
nop
nop
lea		ebx, [edx+101A4359h]
add		ebx, eax
mov		eax, edx
nop
mov		ecx, edi
rol		eax, cl
nop
nop
nop
nop
mov		edx, 487A573Ah
sub		edx, eax
mov		eax, esi
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		esi, eax
neg		esi
xor		esi, 0C66E1ABAh
nop
nop
nop
lea		eax, [esi+edx]
add		ebx, eax
mov		eax, 6219F2F5h
sub		eax, ebx
mov		[ebp+var_14], ebx
mov		ebx, edx
add		edi, eax
nop
mov		eax, 1
mov		ecx, esi
sub		eax, esi
add		esi, 7925E772h
rol		ebx, cl
nop
nop
mov		[ebp+var_C], esi
mov		edx, [ebp+var_14]
nop
add		edx, eax
nop
mov		eax, 0FFAC50EFh
sub		eax, edi
mov		edi, edx
not		eax
ror		eax, 0Ch
xor		eax, esi
nop
mov		[ebp+var_14], eax
mov		ecx, esi
mov		esi, eax
rol		edi, cl
nop
nop
nop
mov		edx, [ebp+var_C]
neg		esi
nop
not		edi
mov		ecx, esi
rol		edx, cl
nop
nop
mov		[ebp+var_10], edi
xor		edi, ebx
mov		eax, [ebp+var_10]
mov		ebx, edx
nop
sub		edi, 359FEC82h
ror		edi, 0Ch
mov		ecx, esi
rol		ebx, cl
mov		ecx, edi
xor		ecx, [ebp+var_14]
not		edi
sub		ecx, eax
nop
sub		ecx, edi
xor		ebx, 7611F7D9h
sub		eax, ecx
mov		[ebp+var_14], ecx
not		edi
rol		ebx, 10h
mov		edx, eax
nop
nop
nop
nop
mov		ecx, edi
rol		edx, cl
nop
nop
nop
nop
lea		eax, [edx+edi]
not		edx
not		eax
mov		esi, eax
nop
mov		ecx, ebx
not		ebx
rol		esi, cl
mov		edi, ebx
nop
nop
nop
add		esi, edx
nop
nop
mov		ecx, edx
rol		edx, 5
ror		edi, cl
mov		eax, edx
nop
mov		ebx, [ebp+var_14]
nop
nop
nop
nop
mov		ecx, edi
rol		eax, cl
nop
rol		eax, 6
sub		eax, edi
xor		edi, esi
nop
mov		edx, esi
nop
not		ebx
nop
xor		ebx, edi
nop
mov		ecx, eax
rol		edi, 8
rol		edx, cl
nop
mov		[ebp+var_14], edi
nop
mov		esi, edi
xor		esi, eax
nop
mov		eax, [ebp+var_14]
xor		esi, ebx
nop
ror		esi, 9
mov		edi, 0FFFFFFFEh
sub		edi, ebx
mov		ebx, eax
nop
mov		ecx, edx
rol		edi, 0Ah
ror		ebx, cl
add		edx, esi
nop
ror		edx, 3
mov		eax, esi
nop
nop
inc		ebx
nop
add		edx, edi
nop
xor		ebx, 0F0E2972Fh
sub		ebx, edi
ror		edx, 0Fh
mov		ecx, edi
neg		edx
not		edx
rol		eax, cl
nop
nop
nop
mov		esi, eax
nop
xor		esi, edi
mov		eax, edi
xor		edx, esi
nop
mov		ecx, ebx
ror		esi, 0Ch
not		esi
ror		edx, 2
xor		ebx, esi
xor		ebx, 0DABDE2ACh
rol		eax, cl
sub		esi, 1D5DC2D7h
nop
mov		[ebp+var_C], esi
not		eax
mov		esi, ebx
nop
neg		esi
nop
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
mov		ebx, eax
not		ebx
not		ebx
nop
mov		eax, edx
nop
mov		edi, esi
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
xor		eax, [ebp+var_C]
neg		eax
mov		edx, eax
neg		edx
nop
nop
nop
mov		ecx, eax
ror		edi, cl
nop
mov		esi, [ebp+var_C]
add		edi, eax
ror		esi, 5
add		edi, ebx
mov		eax, edx
not		ebx
add		ebx, edi
add		esi, ebx
nop
mov		[ebp+var_C], esi
nop
xor		edi, esi
nop
mov		[ebp+var_14], edi
nop
mov		ecx, esi
ror		eax, cl
nop
nop
mov		[ebp+var_10], eax
mov		edi, eax
nop
neg		edi
mov		eax, ebx
nop
nop
mov		ecx, edi
ror		eax, cl
nop
nop
neg		eax
nop
nop
mov		edx, eax
nop
mov		ecx, [ebp+var_14]
ror		edx, cl
nop
nop
mov		eax, [ebp+var_C]
mov		ebx, eax
nop
mov		ecx, edi
rol		ebx, cl
nop
mov		esi, [ebp+var_10]
nop
mov		eax, edx
nop
mov		ecx, edi
rol		eax, cl
nop
ror		eax, 0Ch
mov		edi, eax
neg		edi
nop
nop
ror		ebx, 0Ah
mov		edx, esi
ror		edi, 0Eh
nop
sub		edi, 589176AEh
mov		ecx, eax
rol		edx, cl
nop
lea		esi, [ebx+289CC11Fh]
mov		ebx, [ebp+var_14]
add		esi, edi
rol		edx, 9
nop
nop
mov		eax, edx
nop
add		edi, esi
nop
mov		ecx, esi
add		esi, 7F73D52Fh
rol		eax, cl
nop
mov		[ebp+var_C], esi
xor		eax, ebx
ror		ebx, 0Eh
not		eax
sub		ebx, eax
add		eax, 69B142DBh
xor		ebx, edi
mov		edx, eax
nop
nop
nop
nop
mov		ecx, ebx
rol		edx, cl
nop
lea		eax, [ebx-36B137C3h]
ror		eax, 7
add		edx, ebx
add		eax, 160E6ACh
mov		ebx, edi
mov		esi, eax
neg		esi
nop
nop
nop
mov		ecx, eax
rol		ebx, cl
mov		eax, esi
nop
xor		eax, edx
mov		edi, [ebp+var_C]
neg		eax
nop
mov		edx, eax
nop
add		ebx, edi
nop
xor		esi, ebx
nop
add		esi, ebx
mov		ecx, edi
ror		edx, cl
nop
nop
nop
xor		edi, edx
nop
mov		[ebp+var_C], edi
mov		edi, edx
nop
mov		ecx, ebx
ror		edi, cl
nop
mov		edx, [ebp+var_C]
xor		edi, esi
nop
ror		edi, 0Dh
nop
sub		esi, 2DC722CFh
nop
mov		eax, esi
nop
sub		ebx, edi
mov		ecx, edx
xor		ebx, edi
xor		edx, 0D2D79A4Ah
ror		eax, cl
neg		edx
nop
mov		[ebp+var_C], edx
xor		eax, 0FAAED6F3h
sub		ebx, 5FD92AF4h
inc		eax
not		ebx
xor		edi, eax
mov		[ebp+var_14], ebx
nop
mov		edx, eax
nop
nop
nop
mov		ecx, edi
not		edi
rol		edx, cl
nop
mov		eax, [ebp+var_C]
xor		edi, eax
rol		edx, 4
sub		edi, edx
mov		ebx, eax
xor		ebx, [ebp+var_14]
xor		edx, edi
ror		edi, 0Dh
not		edx
rol		ebx, 7
sub		ebx, edi
rol		edi, 10h
mov		esi, edi
sub		esi, eax
mov		eax, edx
nop
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
add		eax, edi
not		edi
add		ebx, edi
mov		[ebp+var_8], eax
nop
mov		edx, edi
nop
sub		esi, ebx
nop
nop
mov		ecx, ebx
rol		edx, cl
nop
nop
nop
mov		edi, [ebp+var_8]
nop
mov		eax, esi
xor		edx, esi
nop
mov		ecx, edi
rol		eax, cl
nop
rol		edx, 6
not		eax
sub		edi, ebx
ror		eax, 0Bh
ror		edi, 6
add		edi, eax
rol		ebx, 5
sub		eax, edx
mov		[ebp+var_8], edi
sub		edx, edi
mov		[ebp+var_10], ebx
mov		edi, eax
mov		[ebp+var_14], edx
mov		ebx, edx
nop
nop
neg		ebx
nop
mov		ecx, ebx
ror		edi, cl
nop
mov		eax, [ebp+var_8]
sub		eax, [ebp+var_14]
neg		edi
add		eax, [ebp+var_10]
xor		eax, edi
mov		[ebp+var_8], eax
mov		eax, 0F3A93256h
sub		eax, [ebp+var_10]
mov		ecx, [ebp+var_8]
xor		eax, edi
xor		ecx, [ebp+var_14]
xor		ecx, eax
ror		eax, 7
mov		[ebp+var_8], ecx
mov		esi, eax
nop
nop
mov		ecx, ebx
rol		esi, cl
nop
nop
mov		eax, edi
nop
mov		ecx, ebx
mov		ebx, [ebp+var_14]
rol		eax, cl
sub		ebx, esi
nop
mov		edi, [ebp+var_8]
xor		eax, ebx
ror		edi, 6
add		esi, eax
nop
nop
mov		edx, esi
nop
xor		edi, eax
nop
neg		edi
mov		ecx, eax
rol		edx, cl
nop
nop
nop
sub		edx, eax
nop
rol		eax, 7
mov		[ebp+var_4], eax
mov		eax, edx
nop
mov		ecx, edi
ror		eax, cl
nop
add		edi, eax
mov		edx, edi
xor		edx, eax
mov		esi, [ebp+var_4]
not		ebx
sub		edx, esi
rol		edi, 0Dh
rol		edx, 10h
xor		ebx, 93018179h
xor		edx, 56A00155h
sub		ebx, 1D0F3C64h
neg		edx
not		ebx
xor		edx, esi
nop
nop
xor		edx, 829CADD0h
nop
sub		esi, 15B81784h
lea		edx, [ebx+edx]
add		ebx, edi
mov		eax, ebx
rol		edx, 1
nop
add		edx, esi
sub		esi, edx
mov		ecx, edi
rol		edi, 2
rol		eax, cl
not		edx
xor		esi, edx
rol		edi, 7
nop
mov		[ebp+var_4], esi
add		eax, edx
nop
nop
mov		esi, eax
nop
mov		ebx, edx
nop
add		edi, 45159FCh
mov		ecx, edx
not		edi
rol		esi, cl
nop
mov		eax, [ebp+var_4]
nop
not		esi
nop
xor		esi, eax
nop
nop
mov		ecx, eax
rol		ebx, cl
nop
nop
nop
nop
mov		edx, edi
nop
sub		eax, ebx
mov		ecx, esi
mov		[ebp+var_4], eax
add		ebx, eax
rol		edx, cl
nop
add		edx, eax
mov		eax, edx
mov		edi, edx
sub		eax, ebx
rol		ebx, 2
add		esi, eax
mov		[ebp+var_14], ebx
xor		[ebp+var_4], esi
nop
ror		esi, 5
nop
neg		esi
nop
nop
mov		eax, 0FFFFFFFFh
sub		eax, ebx
mov		ecx, ebx
ror		edi, cl
nop
xor		edi, 318B3412h
sub		edi, esi
add		esi, 14B1C856h
add		edi, eax
mov		ebx, esi
mov		eax, [ebp+var_4]
nop
nop
not		eax
nop
ror		eax, 3
nop
mov		edx, edi
mov		ecx, edi
ror		ebx, cl
nop
sub		eax, ebx
mov		[ebp+var_4], eax
mov		esi, eax
sub		ebx, [ebp+var_4]
nop
nop
mov		[ebp+var_C], ebx
nop
neg		esi
mov		ecx, esi
ror		edx, cl
nop
nop
mov		edi, [ebp+var_14]
mov		ebx, edx
ror		edi, 1
nop
xor		edi, 790B28A5h
mov		ecx, esi
neg		edi
mov		esi, [ebp+var_C]
ror		ebx, cl
mov		ecx, [ebp+var_4]
nop
xor		ebx, 0B0ACD2D7h
ror		ecx, 1
lea		eax, [esi+esi]
sub		ebx, eax
mov		eax, 2E72F4DBh
sub		eax, edi
add		esi, ebx
add		ecx, eax
ror		edi, 0Bh
ror		ebx, 0Bh
sub		ebx, 2C3B5F81h
ror		esi, 0Fh
ror		esi, 0Fh
lea		eax, [edi+1]
add		esi, 6E2770D5h
add		eax, ecx
neg		ecx
mov		[ebp+var_4], ecx
mov		edx, eax
nop
nop
nop
nop
mov		ecx, ebx
xor		ebx, 3DC13E24h
ror		edx, cl
nop
mov		[ebp+var_14], ebx
mov		eax, [ebp+var_4]
xor		edx, eax
xor		esi, edx
add		edx, eax
sub		esi, 533716Dh
rol		eax, 10h
nop
nop
mov		[ebp+var_C], esi
nop
mov		edi, eax
nop
mov		ebx, esi
mov		ecx, edx
neg		ebx
rol		edi, cl
nop
nop
nop
mov		eax, [ebp+var_14]
mov		esi, eax
nop
mov		ecx, [ebp+var_C]
rol		esi, cl
nop
lea		eax, [edx-7B134D89h]
xor		eax, edi
nop
add		eax, [ebp+var_C]
nop
nop
mov		edx, eax
nop
sub		edi, 251204D2h
mov		ecx, esi
not		esi
rol		edx, cl
nop
rol		edx, 4
add		esi, edx
not		edx
mov		[ebp+var_14], edx
xor		ebx, esi
sub		edx, edi
sub		ebx, edi
mov		edi, [ebp+var_14]
add		edx, 184DFEFAh
lea		eax, [esi+1]
mov		esi, edx
rol		eax, 9
nop
nop
nop
nop
mov		ecx, eax
add		eax, 1C80C330h
ror		esi, cl
add		eax, ebx
nop
nop
nop
mov		edx, eax
nop
nop
mov		ecx, edi
ror		edx, cl
nop
mov		eax, edx
xor		eax, ebx
mov		ebx, esi
ror		eax, 4
xor		edx, eax
nop
nop
nop
nop
mov		ecx, edx
rol		ebx, cl
nop
add		edi, 0E63A88FFh
sub		edx, ebx
nop
nop
not		edi
nop
xor		edi, eax
mov		esi, edx
ror		edi, 0Ah
nop
neg		ebx
mov		ecx, eax
ror		edi, 2
ror		edi, 0Bh
rol		esi, cl
neg		edi
nop
add		eax, edi
xor		eax, ebx
rol		esi, 1
mov		edx, eax
nop
nop
neg		edi
nop
nop
mov		ecx, ebx
rol		edx, cl
nop
xor		edx, 6EA3676Dh
not		edx
mov		[ebp+var_10], edx
lea		eax, [edx+edi]
sub		edi, 1191C1E7h
add		ebx, eax
add		esi, ebx
mov		[ebp+var_14], ebx
nop
nop
nop
nop
nop
mov		ecx, esi
add		esi, edx
ror		ebx, cl
nop
mov		[ebp+var_14], esi
nop
mov		esi, edi
nop
mov		edx, ebx
neg		edx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
mov		edi, [ebp+var_14]
mov		[ebp+var_8], edi
mov		eax, esi
nop
mov		ecx, edx
nop
ror		edi, cl
mov		edx, edi
mov		edi, [ebp+var_10]
xor		edx, 0F2B55817h
nop
nop
nop
nop
mov		ecx, edx
ror		eax, cl
nop
sub		edi, ebx
sub		ebx, 3103B73Eh
not		edi
mov		esi, ebx
sub		edi, edx
sub		edx, ebx
nop
sub		edi, 497EAB9h
nop
neg		edi
nop
nop
mov		ecx, edx
add		edx, 4F5D15D3h
rol		esi, cl
nop
nop
mov		[ebp+var_8], edx
nop
mov		ebx, [ebp+var_8]
nop
mov		[ebp+var_C], esi
mov		esi, edi
mov		[ebp+var_8], ebx
nop
mov		ecx, eax
ror		esi, cl
mov		ecx, [ebp+var_C]
nop
mov		edi, ecx
not		esi
xor		esi, 0D5819F98h
sub		edi, eax
xor		esi, ecx
not		edi
add		ecx, edx
nop
mov		[ebp+var_C], ecx
mov		edx, ecx
sub		edi, [ebp+var_C]
nop
neg		edx
nop
nop
mov		ecx, edx
rol		ebx, cl
nop
mov		ecx, ebx
mov		ebx, esi
ror		ecx, 4
mov		[ebp+var_8], ecx
nop
nop
mov		eax, edi
mov		ecx, edx
mov		edx, [ebp+var_8]
rol		ebx, cl
nop
mov		esi, [ebp+var_C]
neg		ebx
xor		ebx, esi
ror		esi, 0Ah
xor		esi, edx
not		ebx
nop
mov		[ebp+var_C], esi
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
sub		ebx, eax
rol		eax, 0Eh
add		ebx, 7C64B022h
nop
nop
nop
mov		esi, eax
nop
mov		ecx, ebx
rol		esi, cl
nop
nop
nop
sub		ebx, esi
mov		[ebp+var_10], esi
nop
mov		edi, ebx
nop
mov		esi, 4FD006EAh
sub		esi, [ebp+var_C]
mov		ecx, edx
ror		edi, cl
lea		ecx, [edx+30B790EDh]
nop
xor		ecx, 3380C2C1h
not		edi
add		edi, edx
mov		edx, [ebp+var_10]
xor		esi, edi
rol		esi, 6
neg		esi
lea		eax, [ecx+edx]
mov		ebx, esi
sub		edi, eax
sub		ecx, esi
mov		eax, esi
xor		eax, edi
rol		edi, 9
xor		edx, eax
add		edx, ecx
mov		[ebp+var_10], edx
lea		eax, [ecx+edi]
neg		eax
mov		[ebp+var_4], eax
mov		edx, eax
neg		edx
nop
nop
nop
mov		ecx, edx
ror		ebx, cl
nop
nop
mov		[ebp+var_C], ebx
mov		ebx, edi
mov		esi, [ebp+var_C]
nop
mov		ecx, edx
mov		edx, [ebp+var_10]
nop
rol		ebx, cl
nop
nop
nop
mov		edi, [ebp+var_4]
nop
nop
add		edi, 3F89210h
mov		ecx, esi
sub		ebx, 2AE002DDh
add		esi, edi
ror		edx, cl
neg		edi
nop
mov		[ebp+var_4], edi
add		edx, 0EC69A6A7h
mov		[ebp+var_C], esi
mov		edi, esi
add		edx, ebx
neg		edi
nop
nop
mov		esi, ebx
nop
nop
mov		ecx, edi
rol		esi, cl
nop
nop
nop
mov		ebx, edx
nop
not		esi
nop
mov		ecx, [ebp+var_4]
rol		ebx, cl
nop
nop
mov		edx, esi
nop
not		ebx
mov		ecx, edi
rol		ebx, 9
mov		edi, [ebp+var_C]
rol		edx, cl
nop
xor		ebx, [ebp+var_C]
mov		esi, [ebp+var_4]
not		edx
sub		esi, edi
mov		eax, edx
xor		esi, 847EFEE8h
xor		ebx, 1F0398AFh
rol		esi, 1
nop
nop
nop
nop
mov		ecx, esi
not		esi
ror		eax, cl
nop
nop
mov		[ebp+var_4], esi
mov		edx, [ebp+var_4]
nop
nop
mov		esi, eax
nop
mov		ecx, edx
ror		esi, cl
nop
lea		eax, [edi+2FD2B483h]
lea		edi, [ebx-6BCAD664h]
add		edx, esi
ror		edi, 0Eh
add		eax, edx
rol		edi, 6
sub		edx, esi
sub		edi, 37BC8C2Ah
mov		[ebp+var_4], edx
rol		edi, 1
mov		edx, 25962BD9h
not		edi
xor		edi, eax
add		eax, esi
xor		edi, esi
sub		edx, eax
xor		esi, edi
xor		edx, esi
mov		ebx, esi
ror		edx, 1
rol		edx, 5
nop
nop
nop
nop
mov		ecx, edx
rol		ebx, cl
mov		eax, edi
nop
nop
nop
mov		esi, edx
nop
add		ebx, edi
nop
mov		ecx, edi
ror		esi, cl
nop
mov		edx, [ebp+var_4]
xor		esi, edx
xor		esi, ebx
nop
nop
nop
nop
mov		ecx, esi
ror		eax, cl
nop
nop
nop
nop
mov		edi, eax
nop
mov		ecx, ebx
rol		edi, cl
nop
mov		eax, esi
sub		eax, edx
add		edx, edi
add		ebx, eax
xor		esi, edx
nop
mov		eax, esi
nop
nop
nop
mov		ecx, edx
not		edx
ror		eax, cl
nop
mov		[ebp+var_10], eax
mov		eax, 993DC121h
sub		eax, edi
not		edi
add		ebx, eax
nop
xor		edx, ebx
mov		[ebp+var_14], ebx
mov		[ebp+var_4], edx
nop
mov		esi, [ebp+var_4]
mov		edx, edi
nop
mov		ebx, esi
nop
neg		edx
mov		ecx, edx
ror		ebx, cl
mov		ecx, [ebp+var_10]
nop
mov		esi, [ebp+var_14]
neg		ecx
xor		ecx, esi
add		ecx, esi
mov		[ebp+var_10], ecx
nop
mov		eax, esi
nop
mov		ecx, edx
rol		eax, cl
nop
rol		edi, 0Fh
sub		eax, 9ECF093h
mov		[ebp+var_8], eax
mov		eax, [ebp+var_10]
mov		ecx, [ebp+var_8]
xor		eax, edi
xor		edi, 4FA02BD9h
lea		esi, [edi+ecx*2]
xor		eax, esi
neg		esi
xor		eax, 29EFE831h
nop
nop
mov		edx, eax
nop
nop
mov		ecx, esi
rol		edx, cl
nop
mov		eax, [ebp+var_8]
sub		eax, esi
mov		edi, edx
add		ebx, eax
ror		esi, 0Eh
neg		edi
mov		eax, ebx
nop
nop
nop
mov		ecx, edx
ror		eax, cl
lea		edx, [esi-69D1349Ch]
mov		ecx, [ebp+var_8]
nop
mov		ebx, eax
rol		ebx, 1
lea		eax, [ebx+edi]
rol		edi, 0Fh
add		ecx, eax
mov		eax, edi
add		edx, ecx
neg		ecx
xor		ecx, edi
sub		ebx, edx
sub		ecx, ebx
not		edx
add		edx, ebx
add		ecx, edx
mov		[ebp+var_8], ecx
nop
nop
nop
nop
lea		ecx, [ebx-1]
sub		ebx, 30DABE36h
rol		eax, cl
sub		edx, ebx
nop
nop
mov		edi, [ebp+var_8]
neg		eax
nop
mov		esi, eax
nop
neg		edi
nop
not		edx
mov		ecx, ebx
rol		edi, 9
not		ebx
rol		esi, cl
nop
mov		eax, 53B9A988h
sub		eax, ebx
sub		ebx, 18D0B45Ah
add		edi, eax
mov		eax, 1
sub		eax, ebx
xor		edx, 0BCB85FCBh
not		ebx
not		edx
ror		ebx, 2
add		esi, eax
ror		ebx, 8
xor		edi, 0FF968995h
mov		eax, 0CEA5195Fh
sub		edi, edx
xor		esi, 66416ADEh
sub		edx, edi
add		edi, ebx
xor		ebx, edi
not		edx
sub		eax, edx
rol		edi, 5
add		edi, ebx
mov		[ebp+var_C], ebx
mov		ebx, eax
nop
nop
add		esi, edx
nop
not		esi
nop
mov		ecx, edi
ror		esi, 8
ror		ebx, cl
nop
mov		eax, [ebp+var_C]
add		edi, eax
xor		ebx, 3AFF3201h
add		eax, edi
sub		ebx, 59EDF4F5h
mov		[ebp+var_C], eax
nop
nop
mov		eax, esi
sub		eax, edi
nop
xor		eax, ebx
mov		edx, eax
nop
mov		ecx, ebx
ror		edx, cl
nop
mov		eax, [ebp+var_C]
sub		ebx, edx
mov		edi, eax
xor		edi, esi
not		ebx
xor		edi, edx
mov		esi, eax
neg		edx
not		edi
rol		edx, 3
not		edx
sub		edx, eax
nop
sub		ebx, edx
nop
nop
nop
mov		ecx, edx
rol		esi, cl
nop
xor		esi, 1FAEECE6h
add		edx, esi
mov		eax, esi
mov		[ebp+var_14], edx
mov		edx, ebx
neg		edx
nop
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
mov		ebx, 0A979E49Eh
mov		esi, edx
rol		edx, 9
sub		esi, eax
sub		ebx, edx
lea		eax, [edi-624E856Bh]
nop
xor		eax, [ebp+var_14]
nop
nop
mov		edx, eax
nop
mov		ecx, esi
rol		edx, cl
nop
mov		eax, esi
nop
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
nop
mov		[ebp+var_10], eax
mov		edi, eax
nop
mov		eax, edx
neg		edi
nop
nop
mov		ecx, edi
rol		eax, cl
nop
nop
mov		edx, ebx
nop
mov		ecx, edi
rol		edx, cl
nop
nop
mov		[ebp+var_C], eax
mov		ebx, [ebp+var_10]
sub		edx, 694AA206h
mov		esi, [ebp+var_C]
mov		eax, edx
nop
not		ebx
mov		ecx, edi
sub		esi, 41CD0F2Bh
rol		eax, cl
nop
mov		edx, [ebp+var_14]
nop
nop
nop
lea		eax, [eax+ebx*2]
ror		ebx, 0Fh
mov		edi, eax
nop
mov		ecx, edx
rol		edi, cl
nop
mov		eax, esi
sub		eax, edx
not		edi
mov		edx, eax
xor		ebx, eax
sub		edx, esi
xor		edi, 255DB50Bh
xor		edx, ebx
add		eax, edi
not		edx
rol		edx, 2
sub		edi, edx
xor		edi, 0EE7FB717h
nop
rol		ebx, 0Bh
nop
not		ebx
nop
xor		ebx, eax
nop
not		edx
nop
add		edx, ebx
mov		ecx, edi
ror		eax, cl
nop
mov		ecx, eax
mov		eax, ecx
xor		ecx, 5EDE2ED2h
sub		eax, ebx
add		edi, eax
mov		esi, eax
sub		esi, edx
xor		edi, eax
add		esi, edi
ror		eax, 0Dh
xor		esi, 2A93EA6Dh
rol		eax, 10h
rol		esi, 1
mov		edx, 0C33D50D7h
sub		edx, eax
neg		esi
xor		esi, edi
xor		edx, edi
sub		ecx, edx
not		esi
sub		ecx, edi
rol		edx, 0Ch
mov		[ebp+var_8], ecx
mov		eax, esi
neg		eax
nop
mov		ebx, edx
nop
sub		edi, edx
nop
mov		ecx, esi
mov		esi, [ebp+var_8]
ror		ebx, cl
xor		esi, 180F7D44h
add		esi, eax
nop
neg		esi
mov		edx, eax
ror		esi, 8
add		ebx, 4B77FB1h
nop
mov		[ebp+var_8], esi
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
lea		eax, [edi+0EAF50F8h]
lea		edi, [esi-371DD850h]
xor		eax, 6C0A22E4h
add		edi, eax
mov		esi, edx
ror		edi, 0Ah
mov		eax, 0A095CA0Dh
not		edi
nop
nop
nop
nop
mov		ecx, edi
ror		esi, cl
nop
sub		eax, esi
add		[ebp+var_8], eax
sub		edi, esi
not		edi
mov		edx, esi
nop
neg		ebx
nop
xor		ebx, 0B879AFE5h
nop
nop
mov		ecx, edi
ror		edx, cl
nop
mov		esi, [ebp+var_8]
not		edx
add		edx, esi
add		ebx, edx
sub		edx, esi
neg		ebx
mov		eax, edx
ror		ebx, 9
xor		ebx, esi
not		esi
nop
mov		[ebp+var_8], esi
nop
not		ebx
nop
xor		ebx, 6D30A38Fh
nop
mov		ecx, esi
mov		esi, ebx
rol		eax, cl
nop
mov		[ebp+var_10], ebx
mov		edx, eax
neg		esi
nop
mov		[ebp+var_C], esi
nop
mov		ecx, esi
rol		edx, cl
nop
lea		eax, [edi+50A2CDE4h]
nop
mov		[ebp+var_14], edx
mov		ebx, edx
xor		eax, 0C4649818h
mov		edx, eax
nop
neg		ebx
nop
nop
mov		ecx, ebx
ror		edx, cl
nop
nop
mov		eax, edx
nop
mov		ecx, esi
ror		eax, cl
mov		ecx, 1FF861C7h
nop
mov		edx, [ebp+var_C]
sub		ecx, edx
xor		edx, [ebp+var_14]
sub		ecx, eax
not		edx
xor		ecx, 0F655BF1h
mov		eax, edx
add		ecx, [ebp+var_14]
not		ecx
add		ecx, edx
mov		[ebp+var_10], ecx
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
mov		edx, [ebp+var_8]
mov		esi, edx
mov		edi, eax
nop
mov		ecx, ebx
mov		ebx, [ebp+var_10]
ror		esi, cl
not		ebx
nop
nop
mov		edx, [ebp+var_14]
nop
nop
add		edx, 0ABE90BFAh
nop
add		edx, eax
mov		ecx, ebx
xor		esi, 49E385DBh
ror		ebx, 0Ch
rol		edi, cl
not		esi
nop
mov		[ebp+var_10], ebx
neg		esi
xor		edi, 78CA2549h
not		edi
xor		esi, 0D61AE509h
sub		ebx, esi
neg		edx
xor		ebx, edx
nop
nop
mov		esi, 0D550220Ch
nop
sub		esi, edx
mov		edx, [ebp+var_10]
xor		ebx, 0F8697611h
mov		eax, edx
ror		esi, 0Ch
nop
not		ebx
mov		ecx, edi
rol		ebx, 4
sub		ebx, edi
rol		eax, cl
nop
nop
nop
nop
mov		edx, 0C42748EDh
sub		edx, eax
mov		eax, edi
nop
xor		edx, ebx
mov		ecx, esi
mov		[ebp+var_C], edx
add		ebx, esi
rol		eax, cl
sub		esi, edx
nop
nop
nop
mov		edi, eax
nop
mov		eax, esi
nop
not		edi
mov		ecx, edx
add		edi, ebx
inc		ebx
ror		eax, cl
xor		edi, edx
nop
nop
mov		esi, ebx
nop
mov		edx, 0D78ED07Ch
nop
sub		edx, eax
nop
mov		ecx, edi
mov		eax, [ebp+var_C]
rol		esi, cl
not		eax
nop
xor		eax, edi
rol		esi, 1
not		edi
xor		edx, esi
not		eax
neg		esi
mov		[ebp+var_C], eax
sub		edx, edi
rol		esi, 7
rol		esi, 9
xor		edx, eax
xor		esi, edi
neg		edx
rol		esi, 9
mov		ebx, edx
sub		esi, eax
ror		edi, 4
nop
nop
nop
nop
mov		ecx, esi
not		esi
rol		ebx, cl
nop
nop
mov		eax, edi
nop
nop
nop
not		ebx
mov		ecx, [ebp+var_C]
add		esi, ebx
mov		[ebp+var_10], esi
rol		eax, cl
mov		esi, ebx
nop
neg		esi
mov		edi, [ebp+var_C]
mov		[ebp+var_14], eax
not		edi
ror		edi, 0Bh
nop
nop
mov		edx, edi
nop
nop
mov		ecx, esi
rol		edx, cl
nop
nop
mov		edi, edx
nop
mov		ecx, esi
rol		edi, cl
mov		ecx, [ebp+var_14]
nop
xor		edi, ecx
lea		eax, [ecx+ebx]
mov		ebx, [ebp+var_10]
not		ebx
neg		eax
xor		ebx, edi
mov		[ebp+var_14], eax
sub		ebx, ecx
sub		eax, ebx
mov		edx, 72956E59h
add		edi, eax
sub		edx, ecx
dec		ebx
rol		edx, 0Ah
not		ebx
mov		eax, 532644C4h
sub		eax, ebx
not		edx
sub		eax, edi
mov		edi, [ebp+var_14]
sub		edi, ebx
rol		eax, 9
sub		edi, 601D9724h
sub		ebx, edx
not		edi
not		ebx
nop
mov		esi, edi
sub		esi, eax
nop
nop
mov		eax, edx
nop
sub		ebx, 78962067h
mov		ecx, edi
xor		esi, 0D2CEE3B8h
not		edi
ror		eax, cl
neg		esi
nop
nop
rol		eax, 8
nop
rol		eax, 6
nop
add		eax, 40BEFD4Ah
mov		edx, esi
ror		eax, 8
mov		[ebp+var_14], eax
mov		eax, ebx
nop
mov		ecx, edi
rol		eax, cl
nop
nop
nop
mov		ebx, eax
nop
add		ebx, edi
nop
mov		ecx, [ebp+var_14]
rol		edx, cl
nop
nop
nop
mov		esi, [ebp+var_14]
add		edx, 589447B7h
nop
xor		esi, ebx
lea		eax, [edi+edx]
neg		edx
mov		edi, edx
rol		eax, 7
nop
add		eax, ebx
mov		ecx, ebx
neg		eax
xor		ebx, eax
ror		edi, cl
add		eax, ebx
nop
sub		edi, esi
add		edi, 4AA79EBh
neg		ebx
nop
nop
mov		edx, esi
nop
nop
mov		ecx, edi
rol		edx, cl
mov		ecx, ebx
sub		ecx, eax
nop
mov		[ebp+var_C], ecx
neg		edx
nop
mov		[ebp+var_14], edx
nop
mov		edx, ebx
nop
nop
mov		ecx, [ebp+var_14]
ror		edx, cl
nop
mov		ebx, [ebp+var_C]
not		ebx
mov		eax, edx
nop
mov		esi, ebx
nop
sub		esi, edi
mov		edi, [ebp+var_14]
nop
nop
xor		edi, edx
mov		ecx, ebx
rol		ebx, 5
ror		eax, cl
nop
nop
nop
nop
mov		edx, eax
nop
mov		ecx, esi
xor		esi, ebx
ror		edx, cl
sub		ebx, 7DF5AAEBh
add		esi, 212A5605h
mov		[ebp+var_C], ebx
nop
mov		ebx, esi
nop
nop
nop
mov		eax, edx
nop
mov		ecx, edi
rol		ebx, cl
nop
xor		ebx, 9818E2EDh
nop
nop
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
mov		edx, [ebp+var_C]
mov		esi, eax
mov		[ebp+var_10], eax
sub		edx, edi
nop
neg		esi
mov		edi, ebx
nop
sub		edx, ebx
nop
mov		ecx, esi
rol		edi, cl
nop
mov		ebx, edx
nop
nop
nop
nop
mov		ecx, edi
ror		ebx, cl
nop
nop
mov		eax, [ebp+var_10]
mov		[ebp+var_14], ebx
mov		ebx, [ebp+var_C]
mov		edx, ebx
nop
mov		ecx, esi
mov		esi, [ebp+var_14]
rol		edx, cl
nop
ror		eax, 2
add		edx, esi
ror		eax, 1
rol		edx, 0Ch
ror		esi, 9
mov		ebx, edx
rol		esi, 2
xor		ebx, edi
xor		esi, edx
mov		[ebp+var_10], eax
mov		edi, [ebp+var_10]
neg		esi
sub		ebx, edx
ror		esi, 0Eh
sub		esi, 5AC0BB03h
rol		ebx, 5
nop
add		eax, 29F0AAC8h
nop
add		eax, edx
nop
mov		edx, edi
nop
sub		ebx, 3A152E4Ch
mov		ecx, esi
xor		ebx, 4E815803h
rol		ebx, 0Eh
rol		edx, cl
xor		eax, ebx
nop
mov		[ebp+var_8], ebx
neg		edx
mov		edi, esi
nop
nop
nop
nop
mov		ecx, edx
not		edx
ror		edi, cl
nop
mov		[ebp+var_C], edx
mov		[ebp+var_14], edi
add		edx, 6C6EA2EDh
nop
neg		edi
nop
nop
add		eax, edx
nop
mov		ecx, edi
rol		[ebp+var_8], cl
nop
mov		ebx, [ebp+var_8]
nop
nop
nop
mov		edx, eax
nop
mov		ecx, ebx
ror		ebx, 0Ch
ror		edx, cl
nop
nop
rol		ebx, 7
nop
nop
mov		ecx, edi
rol		edx, cl
nop
mov		edi, edx
nop
mov		edx, [ebp+var_C]
nop
nop
mov		eax, edx
nop
inc		edi
mov		ecx, ebx
rol		edi, 10h
xor		edi, edx
ror		eax, cl
nop
mov		edx, [ebp+var_14]
add		ebx, edx
add		eax, edi
xor		edx, ebx
ror		edi, 7
add		edi, ebx
add		edx, 78E45927h
sub		ebx, 59BF4B9Fh
rol		edx, 2
xor		eax, ebx
mov		[ebp+var_8], ebx
nop
mov		esi, eax
nop
neg		edx
nop
nop
mov		ecx, edi
ror		esi, cl
nop
nop
nop
mov		eax, [ebp+var_8]
xor		edi, esi
sub		esi, ebx
nop
xor		esi, ebx
mov		ebx, edx
nop
mov		ecx, eax
not		eax
ror		ebx, cl
nop
nop
nop
nop
mov		edx, eax
nop
xor		ebx, 0F374F90Ah
mov		ecx, edi
add		ebx, 6D0A32EAh
ror		ebx, 2
ror		edx, cl
nop
add		edx, esi
rol		esi, 0Ch
add		edi, edx
add		edx, 1B37E80Ah
add		esi, edx
xor		esi, ebx
rol		edx, 10h
mov		[ebp+var_C], edx
mov		eax, esi
sub		eax, edi
mov		edx, 9FF8510Dh
add		esi, eax
sub		edx, eax
mov		eax, [ebp+var_C]
sub		edx, esi
sub		edx, eax
mov		[ebp+var_14], esi
mov		esi, eax
mov		edi, edx
nop
neg		esi
nop
nop
mov		ecx, esi
ror		edi, cl
nop
nop
nop
mov		edx, [ebp+var_14]
sub		edi, 138E8038h
add		ebx, edi
nop
rol		edi, 1
mov		ecx, esi
rol		edx, cl
mov		esi, ebx
nop
neg		esi
mov		eax, edi
nop
nop
neg		edx
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
mov		edi, [ebp+var_C]
sub		eax, edx
add		eax, ebx
ror		edi, 0Ah
mov		ebx, eax
nop
nop
mov		ecx, esi
rol		ebx, cl
nop
mov		eax, 0FFFFFFFFh
sub		eax, edx
add		esi, ebx
xor		eax, ebx
mov		edx, esi
xor		eax, edi
ror		ebx, 6
not		edi
ror		edi, 0Eh
ror		edi, 5
sub		edi, esi
sub		edi, ebx
not		ebx
add		eax, ebx
mov		[ebp+var_C], edi
mov		[ebp+var_14], eax
neg		edi
nop
nop
nop
nop
mov		ecx, edi
ror		edx, cl
nop
not		edx
nop
add		edx, ebx
not		ebx
mov		esi, edx
nop
mov		ecx, edi
ror		esi, cl
nop
nop
mov		edi, [ebp+var_14]
nop
ror		edi, 0Eh
nop
xor		edi, 5C7F1144h
mov		edx, [ebp+var_C]
dec		esi
mov		eax, esi
rol		edi, 0Ah
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
nop
ror		eax, 0Fh
mov		esi, ebx
not		eax
nop
lea		ecx, [edx+0AAEABAEh]
rol		esi, cl
nop
lea		ebx, [edx+693E0997h]
xor		esi, edi
ror		ebx, 8
rol		edi, 2
not		ebx
rol		esi, 0Eh
add		eax, edi
rol		esi, 0Dh
xor		ebx, edi
nop
mov		edx, edi
nop
neg		eax
nop
neg		ebx
nop
mov		ecx, esi
mov		[ebp+var_8], ebx
rol		edx, cl
mov		ebx, eax
nop
neg		ebx
mov		[ebp+var_14], ebx
nop
mov		edi, esi
nop
nop
mov		ecx, eax
ror		edi, cl
mov		eax, edx
nop
nop
nop
nop
nop
mov		ecx, edi
ror		eax, cl
nop
nop
nop
nop
mov		edx, eax
nop
mov		esi, [ebp+var_8]
mov		ecx, ebx
not		edi
rol		edx, cl
nop
nop
nop
nop
mov		ebx, edx
nop
mov		eax, esi
mov		ecx, esi
ror		ebx, cl
nop
mov		edx, [ebp+var_14]
xor		edi, edx
xor		ebx, 218CD3B0h
sub		eax, edi
add		ebx, esi
xor		eax, 0BECCFE93h
nop
sub		eax, 7300E7B7h
nop
nop
mov		[ebp+var_14], eax
mov		eax, edx
not		esi
nop
mov		edi, esi
mov		ecx, ebx
mov		[ebp+var_8], esi
nop
ror		eax, cl
neg		edi
nop
nop
not		eax
mov		[ebp+var_C], eax
mov		edx, 0FFFFFFFEh
mov		eax, ebx
nop
mov		ecx, edi
rol		eax, cl
mov		ecx, [ebp+var_8]
nop
lea		ebx, [ecx-709DAA5Fh]
add		ebx, eax
lea		eax, [ecx+ecx]
sub		edx, eax
sub		[ebp+var_8], ebx
mov		eax, [ebp+var_14]
nop
mov		esi, [ebp+var_C]
add		eax, edx
mov		edx, eax
nop
mov		ecx, edi
rol		edx, cl
nop
nop
mov		[ebp+var_10], edx
mov		edi, edx
nop
mov		edx, esi
neg		edi
nop
nop
mov		ecx, edi
ror		edx, cl
nop
mov		esi, ebx
nop
nop
nop
nop
mov		ecx, edx
rol		edx, 1
ror		esi, cl
nop
nop
mov		ebx, [ebp+var_8]
nop
neg		esi
mov		ecx, edi
ror		ebx, cl
nop
nop
mov		eax, edx
nop
not		ebx
mov		ecx, edi
rol		eax, cl
nop
mov		edx, [ebp+var_10]
nop
mov		[ebp+var_8], eax
nop
mov		eax, esi
nop
nop
mov		ecx, [ebp+var_8]
rol		eax, cl
nop
nop
nop
nop
xor		edx, eax
mov		edi, eax
nop
mov		ecx, ebx
rol		edi, cl
mov		ecx, [ebp+var_8]
nop
not		ecx
add		edi, edx
xor		ecx, ebx
xor		edx, 0C625231Fh
ror		ecx, 0Ah
mov		eax, 31A98CD3h
rol		ecx, 0Eh
sub		eax, ebx
rol		ecx, 0Ch
sub		edx, ecx
mov		[ebp+var_8], ecx
mov		esi, edx
mov		[ebp+var_10], edx
mov		ebx, [ebp+var_10]
neg		esi
xor		[ebp+var_8], ebx
mov		edx, eax
nop
nop
nop
mov		ecx, ebx
mov		ebx, [ebp+var_8]
rol		edx, cl
not		ebx
nop
rol		ebx, 0Fh
nop
mov		eax, edx
nop
xor		esi, ebx
nop
add		ebx, 1A87D58Bh
nop
mov		ecx, edi
ror		eax, cl
nop
xor		eax, ebx
not		ebx
xor		eax, edi
add		edi, 5D692BE3h
neg		esi
not		edi
dec		eax
sub		edi, ebx
mov		[ebp+var_8], eax
sub		edi, esi
not		esi
rol		edi, 4
xor		esi, edi
rol		edi, 9
neg		edi
nop
add		ebx, edi
nop
lea		eax, [esi+eax*2]
nop
mov		esi, eax
nop
mov		ecx, edi
rol		esi, cl
nop
add		esi, ebx
dec		ebx
add		esi, ebx
not		ebx
add		edi, ebx
neg		esi
add		esi, edi
rol		ebx, 7
neg		ebx
mov		edx, edi
xor		ebx, esi
neg		esi
nop
add		ebx, esi
nop
nop
nop
mov		ecx, esi
rol		edx, cl
mov		ecx, esi
nop
sub		ecx, ebx
mov		edi, [ebp+var_8]
add		edx, ebx
not		edi
sub		ecx, edx
ror		edi, 0Bh
mov		eax, ecx
sub		edi, esi
ror		edi, 7
xor		edi, esi
sub		edx, edi
xor		edi, esi
sub		eax, edi
add		edi, 82FDFCBh
add		esi, eax
lea		ebx, [edx+4F3E2788h]
mov		edx, esi
add		ebx, esi
lea		eax, [ecx+ebx]
neg		ebx
not		eax
nop
nop
nop
nop
mov		ecx, eax
ror		edx, cl
nop
lea		esi, [eax+edi]
lea		eax, [edi+edi]
inc		edx
sub		ebx, eax
not		esi
xor		edi, ebx
mov		[ebp+var_8], edi
nop
mov		edi, edx
nop
nop
nop
mov		ecx, esi
ror		edi, cl
nop
mov		edx, [ebp+var_8]
xor		esi, edx
add		edi, edx
neg		esi
sub		ebx, edi
mov		eax, esi
nop
nop
add		ebx, 5E4EEF80h
nop
sub		edi, edx
nop
not		edi
mov		ecx, edx
ror		edi, 5
ror		edi, 9
rol		eax, cl
sub		edx, edi
nop
mov		[ebp+var_8], edx
nop
mov		esi, eax
nop
nop
nop
mov		ecx, ebx
rol		esi, cl
nop
nop
nop
xor		esi, ebx
nop
sub		ebx, edi
add		esi, ebx
neg		ebx
xor		ebx, 0FC4490F3h
neg		esi
mov		edx, ebx
mov		eax, esi
nop
sub		eax, edi
mov		ecx, [ebp+var_8]
ror		edx, cl
mov		ecx, [ebp+var_8]
nop
sub		esi, edx
mov		ebx, esi
lea		edi, [ecx+0E3AEF83h]
add		edi, eax
sub		ecx, edi
add		edi, ecx
mov		[ebp+var_8], ecx
nop
mov		eax, edi
nop
sub		eax, edx
add		[ebp+var_8], eax
nop
mov		eax, [ebp+var_8]
nop
mov		ecx, edx
ror		ebx, cl
nop
nop
nop
nop
mov		esi, edx
nop
mov		ecx, eax
ror		edi, 6
rol		ebx, 6
ror		esi, cl
nop
ror		ebx, 0Dh
neg		esi
add		eax, esi
add		edi, esi
neg		eax
rol		edi, 10h
add		ebx, eax
mov		[ebp+var_14], eax
add		esi, 406D8191h
mov		edx, edi
mov		[ebp+var_10], esi
mov		esi, eax
nop
neg		esi
nop
nop
mov		ecx, esi
ror		edx, cl
nop
nop
mov		eax, ebx
add		edx, [ebp+var_14]
not		edx
mov		edi, edx
nop
mov		ecx, esi
ror		edi, cl
mov		esi, [ebp+var_10]
nop
nop
nop
nop
nop
mov		ecx, edi
sub		edi, esi
ror		eax, cl
neg		esi
nop
mov		[ebp+var_10], esi
mov		ebx, [ebp+var_14]
mov		edx, eax
nop
rol		ebx, 8
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
mov		eax, ebx
neg		eax
add		edx, 466F09ECh
nop
mov		[ebp+var_8], eax
nop
nop
nop
xor		edx, edi
mov		ecx, ebx
rol		esi, cl
nop
nop
nop
nop
mov		eax, edi
nop
add		esi, ebx
mov		ecx, edx
rol		eax, cl
nop
mov		ebx, [ebp+var_8]
add		edx, eax
sub		eax, ebx
add		edx, 0C5151C49h
add		edx, eax
mov		edi, edx
xor		edi, eax
lea		eax, [esi+ebx]
rol		eax, 4
mov		esi, edx
nop
mov		[ebp+var_14], eax
nop
inc		ebx
nop
not		edi
nop
mov		ecx, eax
ror		edi, 0Ch
rol		esi, cl
not		edi
nop
mov		eax, edi
nop
nop
nop
xor		esi, ebx
nop
not		esi
mov		ecx, ebx
mov		edx, esi
rol		eax, cl
nop
mov		edi, [ebp+var_14]
xor		edi, eax
sub		eax, ebx
ror		ebx, 5
not		ebx
nop
mov		[ebp+var_8], ebx
nop
nop
nop
mov		ecx, ebx
mov		ebx, eax
ror		edx, cl
nop
nop
nop
nop
nop
mov		ecx, edx
rol		ebx, cl
mov		ecx, [ebp+var_8]
nop
neg		ebx
mov		eax, 80ED66Bh
sub		eax, ebx
not		ecx
add		edi, eax
sub		edx, edi
neg		edi
sub		edx, ebx
xor		ebx, 73B7708Dh
xor		edx, edi
mov		eax, ebx
sub		edx, ecx
not		ecx
xor		edi, edx
neg		edx
xor		edx, ecx
sub		eax, edx
xor		ebx, edx
rol		edx, 0Eh
add		ecx, eax
mov		esi, edx
xor		esi, edi
xor		edx, ecx
xor		esi, 0A1801D31h
neg		ecx
mov		eax, edx
sub		ebx, ecx
mov		[ebp+var_8], ecx
nop
mov		edi, 154D915Eh
nop
sub		edi, ebx
nop
nop
mov		ecx, esi
not		esi
rol		eax, cl
nop
mov		edx, ebx
sub		edx, eax
mov		eax, [ebp+var_8]
add		edx, eax
sub		eax, edx
sub		edx, edi
mov		[ebp+var_8], eax
xor		edx, esi
lea		eax, [edi+esi]
mov		ebx, edx
neg		eax
ror		edi, 3
nop
nop
nop
nop
mov		ecx, eax
ror		ebx, cl
nop
mov		edx, 0EFC6F96Bh
sub		edx, eax
sub		ebx, edi
mov		eax, [ebp+var_8]
rol		eax, 10h
rol		eax, 0Bh
add		eax, 1F2FF54Eh
rol		edx, 0Ch
not		eax
xor		edi, edx
ror		eax, 7
xor		ebx, eax
ror		edx, 0Eh
sub		eax, 65881635h
not		edx
nop
xor		edi, edx
nop
mov		esi, edi
nop
xor		ebx, 0D4CA7878h
nop
not		ebx
mov		ecx, eax
xor		ebx, edx
rol		esi, cl
nop
xor		esi, eax
not		eax
add		eax, edx
ror		esi, 7
not		edx
add		eax, edx
mov		[ebp+var_8], eax
mov		eax, 1670FBB9h
sub		eax, edx
mov		edx, [ebp+var_8]
xor		ebx, eax
add		eax, edx
sub		edx, eax
xor		edx, eax
sub		edx, ebx
add		edx, eax
rol		esi, 0Eh
sub		esi, 657A66C8h
xor		esi, ebx
add		esi, eax
add		eax, ebx
not		esi
neg		eax
sub		edx, esi
not		ebx
xor		ebx, eax
not		esi
mov		edi, esi
mov		[ebp+var_10], ebx
mov		ebx, eax
neg		edi
nop
nop
nop
mov		ecx, esi
mov		esi, [ebp+var_10]
ror		ebx, cl
neg		esi
nop
nop
nop
mov		eax, edx
nop
add		ebx, edi
nop
mov		ecx, esi
rol		ebx, 9
rol		eax, cl
nop
sub		edi, eax
mov		edx, eax
nop
xor		esi, edi
nop
mov		[ebp+var_10], esi
nop
nop
mov		ecx, edi
ror		edx, cl
nop
nop
nop
add		ebx, edx
nop
nop
nop
mov		ecx, edx
xor		edx, 8DAD2D8h
rol		esi, cl
nop
mov		eax, edx
sub		esi, ebx
ror		ebx, 3
not		esi
mov		[ebp+var_14], ebx
xor		esi, edx
not		esi
nop
nop
nop
nop
mov		ecx, esi
ror		eax, cl
mov		ecx, [ebp+var_14]
nop
add		eax, ebx
lea		ebx, [edi-65F17FAFh]
add		ebx, esi
neg		eax
not		ebx
xor		ebx, ecx
not		ecx
xor		eax, ebx
rol		esi, 0Eh
mov		edx, ecx
not		ebx
sub		edx, esi
ror		ebx, 6
mov		esi, edx
not		ebx
rol		esi, 0Eh
lea		edi, [eax-6896C5D5h]
ror		ebx, 9
not		edi
add		esi, ebx
not		ebx
not		esi
add		ebx, edi
ror		esi, 7
lea		edx, [esi+ecx]
nop
add		edx, eax
nop
not		edx
nop
xor		esi, edx
ror		edx, 0Fh
mov		eax, edx
ror		esi, 0Dh
nop
mov		ecx, ebx
ror		esi, 9
ror		eax, cl
nop
nop
mov		[ebp+var_C], esi
mov		esi, eax
nop
nop
mov		edx, 7BCD6469h
nop
mov		ecx, [ebp+var_C]
ror		esi, cl
nop
mov		eax, [ebp+var_C]
sub		eax, edi
rol		esi, 2
add		eax, ebx
add		edi, 9E4E535Fh
mov		ebx, [ebp+var_C]
not		esi
rol		edi, 6
inc		ebx
rol		eax, 1
sub		edi, 68B3524Ah
sub		eax, esi
xor		edi, 15267C5Ch
rol		edi, 5
nop
add		edi, eax
nop
not		eax
nop
sub		edx, eax
mov		[ebp+var_10], eax
sub		edx, esi
xor		edx, 0B4AACE39h
rol		edx, 7
mov		eax, edx
nop
mov		ecx, ebx
rol		eax, cl
nop
lea		edx, [ebx+609B29D5h]
add		edx, eax
mov		eax, [ebp+var_10]
rol		eax, 0Fh
not		edx
xor		eax, 8CB362D1h
mov		[ebp+var_10], eax
sub		eax, edx
ror		edi, 4
add		ebx, eax
nop
nop
mov		esi, ebx
nop
nop
mov		ecx, edx
xor		edx, 87C4FDE2h
rol		esi, cl
mov		eax, edx
nop
mov		ebx, [ebp+var_10]
inc		ebx
nop
sub		esi, ebx
nop
ror		esi, 9
nop
rol		esi, 7
nop
mov		ecx, ebx
rol		eax, cl
nop
mov		edx, 5D96427Eh
sub		edx, edi
xor		edx, 0A80EA2FEh
xor		esi, edx
sub		edx, eax
mov		edi, esi
nop
nop
nop
nop
mov		ecx, edx
ror		edi, cl
nop
lea		esi, [eax+717C33A7h]
ror		esi, 0Ah
neg		edi
neg		esi
not		edi
mov		eax, esi
nop
sub		eax, edx
nop
inc		eax
nop
mov		edx, eax
add		edi, 35FABB9h
nop
mov		ecx, esi
not		esi
ror		edx, cl
add		esi, ebx
nop
nop
nop
mov		eax, ebx
nop
not		edx
nop
mov		ecx, edi
ror		eax, cl
nop
mov		[ebp+var_10], eax
lea		eax, [edi+edx]
mov		edi, [ebp+var_10]
xor		eax, esi
rol		esi, 1
nop
xor		esi, eax
add		eax, 1E0D73CDh
rol		esi, 1
nop
nop
mov		ebx, eax
nop
add		esi, edx
mov		ecx, edi
rol		edx, 0Ch
not		edi
rol		ebx, cl
neg		esi
nop
mov		eax, edx
sub		edi, ebx
xor		ebx, 0AA87D83h
nop
mov		[ebp+var_10], edi
nop
nop
nop
mov		ecx, edi
rol		eax, cl
nop
mov		edx, esi
mov		edi, eax
nop
neg		edx
nop
nop
mov		[ebp+var_14], edx
mov		ecx, edx
ror		edi, cl
nop
nop
mov		eax, [ebp+var_10]
rol		eax, 9
add		eax, ebx
xor		ebx, edi
mov		[ebp+var_8], eax
nop
mov		ecx, edx
ror		[ebp+var_8], cl
nop
nop
mov		eax, ebx
mov		esi, [ebp+var_14]
nop
mov		ecx, edx
ror		eax, cl
mov		edx, 0FFFFFFFFh
mov		ecx, [ebp+var_8]
nop
sub		eax, edi
xor		edi, ecx
ror		ecx, 8
add		eax, 680A272Ah
sub		ecx, 6D89B201h
sub		edx, eax
xor		esi, ecx
sub		edi, edx
not		ecx
add		edx, 62A32F0Dh
mov		[ebp+var_8], ecx
xor		edi, edx
mov		eax, [ebp+var_8]
nop
nop
mov		ebx, edi
nop
neg		edx
nop
mov		ecx, esi
not		esi
ror		ebx, cl
nop
ror		esi, 6
sub		ebx, edx
sub		ebx, eax
sub		esi, ebx
mov		edi, esi
nop
nop
nop
nop
mov		ecx, ebx
ror		ebx, 0Fh
rol		edi, cl
nop
nop
nop
nop
mov		esi, edx
nop
mov		ecx, eax
rol		esi, cl
nop
nop
nop
nop
nop
nop
mov		ecx, edi
ror		esi, 1
ror		eax, cl
nop
ror		esi, 5
not		eax
xor		esi, edi
sub		eax, ebx
rol		edi, 2
sub		eax, 1F05EA24h
add		esi, 4FB3280Ah
mov		ecx, eax
mov		edx, esi
neg		ecx
mov		[ebp+var_14], ecx
nop
nop
mov		ecx, eax
rol		edx, cl
nop
mov		esi, 0FFFFFFFFh
xor		edi, edx
sub		esi, ebx
xor		esi, edx
xor		edi, eax
add		esi, eax
sub		edi, 4D18AA04h
mov		eax, 9AC35B33h
nop
nop
sub		eax, edi
add		edx, eax
nop
mov		ebx, edx
lea		eax, [esi-5BF540E5h]
nop
mov		ecx, esi
ror		ebx, cl
nop
nop
nop
mov		edx, edi
nop
nop
mov		ecx, [ebp+var_14]
ror		edx, cl
nop
nop
nop
xor		eax, edx
mov		[ebp+var_C], edx
nop
mov		edx, eax
nop
mov		ecx, ebx
rol		edx, cl
nop
mov		eax, [ebp+var_14]
neg		edx
add		ebx, edx
mov		edi, edx
nop
nop
nop
nop
mov		ecx, ebx
not		ebx
rol		edi, cl
nop
mov		edx, ebx
sub		edi, eax
add		edi, 51FBE825h
not		edi
nop
nop
nop
nop
mov		ecx, edi
ror		edx, cl
nop
mov		ebx, edx
mov		edx, [ebp+var_C]
not		edx
add		eax, ebx
add		edx, 1A167604h
neg		eax
xor		edx, 0E3F249B5h
mov		esi, eax
add		edx, 6D6C6D6Ch
xor		edi, ebx
nop
mov		[ebp+var_C], edx
nop
nop
nop
mov		ecx, edx
ror		esi, cl
nop
mov		eax, edi
nop
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
mov		edx, eax
xor		esi, eax
nop
not		esi
nop
mov		ecx, ebx
rol		edx, cl
nop
mov		eax, [ebp+var_C]
add		ebx, eax
xor		edx, esi
xor		eax, 3A829AE6h
not		esi
add		eax, 74022575h
rol		eax, 0Eh
mov		[ebp+var_C], eax
sub		eax, ebx
add		edx, eax
ror		esi, 3
not		esi
lea		eax, [esi+edx*2]
not		edx
nop
mov		edi, eax
nop
mov		esi, edx
nop
nop
mov		ecx, edx
rol		edi, cl
nop
nop
xor		ebx, edi
nop
mov		eax, edi
nop
sub		eax, ebx
nop
mov		ecx, edi
rol		esi, cl
nop
mov		edx, [ebp+var_C]
add		edx, 9547EFCCh
neg		esi
add		edx, edi
xor		edi, eax
add		esi, edi
mov		[ebp+var_14], edi
xor		edx, 0EB3F452Bh
mov		ebx, edi
sub		ebx, eax
not		edx
sub		edx, esi
nop
xor		edx, esi
nop
nop
sub		edx, ebx
not		edx
rol		ebx, 5
mov		eax, edx
inc		ebx
nop
mov		ecx, edi
rol		eax, cl
nop
mov		edx, [ebp+var_14]
sub		eax, esi
xor		edx, ebx
ror		eax, 7
neg		esi
neg		eax
neg		ebx
xor		eax, edi
mov		edi, esi
nop
nop
nop
nop
mov		ecx, eax
ror		eax, 5
ror		edi, cl
add		eax, edx
nop
neg		eax
nop
mov		esi, eax
nop
nop
nop
mov		ecx, edi
rol		esi, cl
nop
xor		ebx, esi
lea		eax, [edx+esi]
neg		eax
add		esi, ebx
not		edi
nop
not		ebx
add		ebx, esi
nop
xor		ebx, esi
nop
mov		edx, ebx
add		edi, 668B01A0h
nop
not		edi
mov		ecx, esi
ror		edi, 2
rol		edx, cl
nop
mov		ebx, 5E4C05A3h
sub		ebx, eax
mov		eax, edx
sub		eax, ebx
not		edx
add		esi, eax
ror		edx, 9
xor		edx, esi
add		ebx, 1EAB3738h
not		esi
mov		[ebp+var_10], ebx
xor		edx, 22DE69FAh
mov		eax, esi
sub		ebx, edi
sub		edx, 0FFD962Ch
sub		eax, edx
add		esi, 0E9BB6C37h
sub		eax, ebx
not		esi
mov		edx, esi
mov		[ebp+var_14], eax
mov		edi, eax
ror		ebx, 7
nop
neg		edi
nop
nop
mov		ecx, edi
ror		edx, cl
nop
mov		eax, [ebp+var_14]
nop
mov		esi, edx
nop
mov		ecx, edi
rol		esi, cl
nop
mov		edx, [ebp+var_10]
xor		ebx, esi
not		edx
rol		edx, 3
neg		esi
sub		edx, eax
ror		ebx, 0Dh
not		eax
neg		ebx
nop
mov		edi, ebx
nop
xor		esi, 5FB2C108h
nop
sub		esi, 69921793h
nop
xor		esi, eax
mov		ecx, eax
sub		esi, 1E45FCD6h
not		edx
ror		edi, cl
not		eax
nop
rol		esi, 2
mov		[ebp+var_14], esi
mov		esi, eax
ror		edx, 0Ch
nop
add		edx, 12661A77h
nop
not		edx
nop
rol		edx, 10h
nop
mov		ecx, edi
mov		[ebp+var_10], edx
rol		esi, cl
mov		edx, [ebp+var_14]
nop
mov		ebx, [ebp+var_10]
neg		esi
nop
ror		edi, 7
nop
mov		eax, edx
nop
sub		edi, 70D63A24h
nop
mov		ecx, esi
rol		edi, 9
rol		eax, cl
nop
nop
nop
nop
add		esi, eax
mov		edx, esi
neg		eax
nop
mov		ecx, edi
not		edi
rol		edx, cl
xor		edi, 0F654CF23h
nop
mov		[ebp+var_14], edi
mov		esi, eax
nop
nop
add		edx, ebx
nop
nop
mov		ecx, ebx
rol		esi, cl
nop
nop
nop
nop
nop
nop
mov		ecx, edx
ror		edi, cl
nop
lea		eax, [ebx+1]
xor		edi, edx
xor		eax, 0C845B681h
inc		edx
not		eax
xor		edx, 68D676CFh
mov		ebx, eax
sub		edi, edx
nop
nop
nop
nop
mov		ecx, edi
ror		ebx, cl
nop
lea		eax, [esi-1]
not		eax
nop
nop
mov		esi, eax
nop
nop
mov		ecx, ebx
rol		esi, cl
lea		ecx, [edx-78E0D2BAh]
sub		ecx, ebx
nop
sub		ecx, esi
lea		eax, [edx-45F0477Fh]
sub		ecx, edi
xor		ecx, ebx
not		ebx
neg		ecx
rol		ebx, 0Ch
xor		eax, ecx
mov		[ebp+var_14], ecx
sub		esi, eax
mov		edi, eax
add		esi, ecx
ror		esi, 0Bh
nop
nop
nop
nop
mov		ecx, esi
rol		esi, 3
rol		edi, cl
inc		esi
nop
nop
nop
mov		eax, esi
nop
xor		edi, 325DA414h
nop
mov		ecx, ebx
xor		ebx, edi
ror		eax, cl
sub		edi, 4BEA5019h
nop
ror		ebx, 3
mov		edx, eax
mov		[ebp+var_10], eax
neg		edx
nop
mov		esi, ebx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
mov		eax, [ebp+var_14]
nop
mov		ebx, edi
rol		eax, 4
nop
mov		ecx, edx
ror		ebx, cl
mov		edx, esi
nop
ror		ebx, 0Eh
nop
nop
nop
nop
mov		ecx, ebx
rol		edx, cl
mov		ecx, 46068485h
sub		ecx, eax
nop
not		ecx
neg		edx
xor		ecx, 0FB812284h
add		ecx, edx
mov		edi, [ebp+var_10]
not		edx
mov		[ebp+var_C], ecx
xor		edx, 0A3813145h
xor		ebx, edx
xor		edi, 6A13A175h
xor		ebx, ecx
mov		esi, edi
sub		ebx, ecx
nop
nop
add		ebx, 5AAA6A6Bh
mov		eax, ebx
xor		eax, edx
sub		esi, eax
mov		eax, edi
nop
mov		ecx, [ebp+var_C]
ror		eax, cl
nop
mov		edi, [ebp+var_C]
xor		esi, edi
xor		ebx, edi
dec		ebx
rol		esi, 3
add		ebx, eax
rol		esi, 9
not		eax
not		edi
mov		edx, eax
nop
nop
neg		ebx
nop
nop
mov		ecx, edi
add		edi, esi
ror		edx, cl
nop
mov		eax, esi
nop
nop
nop
nop
mov		ecx, edx
not		edx
ror		eax, cl
xor		edx, edi
nop
nop
xor		eax, edx
nop
ror		eax, 2
nop
mov		[ebp+var_8], eax
sub		eax, edi
add		eax, edx
not		eax
mov		edx, eax
nop
mov		ecx, edi
rol		edx, cl
nop
xor		ebx, edx
mov		esi, edx
xor		ebx, 0E7FDB1EFh
neg		ebx
nop
nop
nop
nop
mov		ecx, ebx
rol		esi, cl
nop
add		esi, edi
add		ebx, edi
mov		eax, [ebp+var_8]
ror		eax, 1
xor		eax, ebx
xor		edi, eax
not		eax
mov		[ebp+var_C], edi
mov		edi, ebx
mov		edx, [ebp+var_C]
neg		edi
mov		[ebp+var_8], eax
mov		eax, edx
nop
nop
rol		edi, 5
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		edx, [ebp+var_8]
mov		ebx, edx
sub		edx, edi
sub		ebx, esi
mov		[ebp+var_8], edx
mov		edx, eax
ror		ebx, 0Ch
neg		edx
sub		ebx, 2DDA0E08h
nop
mov		esi, edi
nop
nop
mov		ecx, eax
rol		esi, cl
mov		eax, edx
nop
nop
mov		edi, [ebp+var_8]
nop
nop
sub		edi, ebx
nop
xor		esi, 95EF3437h
mov		ecx, ebx
neg		esi
xor		ebx, edi
rol		eax, cl
add		ebx, esi
nop
ror		ebx, 8
mov		edx, esi
add		edi, 73A3CF27h
sub		edx, eax
ror		esi, 0Ah
sub		esi, 38606878h
mov		eax, edi
sub		eax, esi
add		ebx, 7FE0C670h
add		edx, eax
xor		edi, edx
ror		edx, 0Ch
rol		edi, 0Ch
sub		edx, edi
mov		[ebp+var_8], edi
xor		ebx, edi
xor		esi, edi
add		esi, ebx
mov		[ebp+var_14], ebx
nop
mov		ebx, esi
nop
nop
nop
mov		ecx, edx
add		edx, edi
ror		ebx, cl
nop
neg		edx
mov		esi, edx
mov		eax, 92DD5CA4h
sub		eax, [ebp+var_14]
xor		ebx, 0B62F46B4h
mov		edi, eax
neg		edi
nop
nop
nop
mov		ecx, eax
ror		esi, cl
nop
nop
nop
mov		edx, [ebp+var_8]
nop
mov		eax, esi
rol		edx, 6
nop
mov		ecx, ebx
ror		ebx, 0Fh
rol		eax, cl
nop
mov		[ebp+var_14], ebx
add		eax, edx
rol		edx, 2
add		edx, 431CBB20h
not		eax
add		edx, edi
mov		[ebp+var_10], eax
not		edx
not		edi
mov		ebx, edx
mov		esi, edi
nop
neg		ebx
nop
mov		eax, ebx
nop
mov		ecx, eax
rol		esi, cl
nop
nop
mov		edi, [ebp+var_14]
nop
add		esi, 6D201CCh
mov		ecx, eax
mov		[ebp+var_8], esi
nop
ror		edi, cl
nop
mov		eax, [ebp+var_10]
mov		edx, eax
not		edi
nop
neg		edx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
mov		ecx, esi
neg		ecx
xor		edi, ecx
xor		ecx, 0A03D1FB0h
ror		ecx, 0Eh
neg		edi
mov		[ebp+var_8], ecx
mov		esi, edi
nop
nop
mov		ecx, edx
ror		esi, cl
nop
nop
sub		esi, 753BA4FAh
not		esi
nop
mov		eax, ebx
nop
mov		edx, esi
nop
mov		ecx, [ebp+var_8]
rol		eax, cl
nop
mov		ebx, [ebp+var_8]
not		eax
not		ebx
xor		eax, 9A43B4F9h
rol		ebx, 2
mov		edi, eax
add		ebx, 17AB06Bh
neg		edi
nop
xor		ebx, 0AF395E27h
nop
rol		ebx, 8
nop
not		ebx
mov		ecx, eax
ror		edi, 0Ch
mov		eax, [ebp+var_10]
rol		edx, cl
dec		eax
not		eax
nop
ror		eax, 0Eh
add		edx, ebx
neg		eax
add		ebx, 75045E05h
rol		eax, 10h
add		edx, 3A406948h
ror		eax, 2
nop
nop
mov		[ebp+var_8], ebx
mov		esi, [ebp+var_8]
nop
not		eax
xor		eax, ebx
mov		ebx, edx
nop
mov		ecx, esi
mov		[ebp+var_C], eax
ror		ebx, cl
add		esi, eax
nop
nop
nop
mov		eax, edi
nop
nop
mov		ecx, [ebp+var_C]
rol		eax, cl
nop
mov		edi, [ebp+var_C]
add		eax, ebx
not		edi
xor		eax, esi
mov		[ebp+var_C], edi
ror		esi, 0Dh
not		eax
sub		esi, ebx
neg		eax
nop
mov		edx, eax
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
xor		edx, ebx
add		edx, edi
nop
mov		[ebp+var_14], edx
nop
inc		edx
nop
add		esi, edx
mov		edx, edi
neg		edx
mov		edi, ebx
nop
mov		ecx, edx
rol		edi, cl
nop
nop
mov		eax, 0ADF86F2h
sub		eax, edi
mov		ebx, esi
nop
add		edi, 0BDEF6026h
mov		ecx, edx
not		edi
mov		edx, [ebp+var_14]
ror		ebx, cl
mov		ecx, [ebp+var_C]
nop
sub		ebx, 4A58D1FDh
rol		ecx, 4
sub		eax, ebx
ror		ecx, 4
add		edx, eax
mov		[ebp+var_C], ecx
add		ebx, edx
add		edx, 7BEA9054h
xor		edi, edx
rol		edx, 0Ah
xor		edi, 101C273Dh
mov		esi, edx
mov		eax, edi
add		edi, 3AD2CA82h
sub		eax, edx
sub		eax, ebx
add		eax, 6EB68760h
nop
nop
nop
nop
mov		ecx, eax
ror		esi, cl
nop
mov		edx, [ebp+var_C]
xor		eax, edx
add		eax, esi
add		edx, eax
mov		[ebp+var_14], eax
mov		ebx, [ebp+var_14]
nop
nop
mov		eax, edx
nop
nop
mov		ecx, ebx
rol		eax, cl
mov		ecx, edi
nop
neg		ecx
sub		ebx, eax
mov		[ebp+var_8], ecx
xor		eax, ebx
nop
mov		edx, eax
nop
mov		ecx, edi
mov		edi, [ebp+var_8]
ror		edx, cl
nop
nop
nop
rol		edx, 0Ah
nop
mov		eax, esi
nop
mov		ecx, edi
ror		edi, 8
rol		eax, cl
xor		edi, edx
nop
mov		[ebp+var_8], edi
ror		eax, 3
ror		edx, 0Ch
lea		edi, [ebx+edi*2]
xor		edx, 0B708DDEFh
add		edx, [ebp+var_8]
mov		ebx, eax
neg		ebx
mov		[ebp+var_14], edi
neg		edx
ror		[ebp+var_8], 3
nop
nop
ror		ebx, 0Ah
mov		esi, edx
nop
mov		ecx, eax
ror		esi, cl
nop
nop
nop
not		esi
mov		edx, edi
add		esi, 28BF137Bh
nop
mov		edi, esi
neg		edx
nop
mov		ecx, edx
rol		edi, cl
nop
mov		eax, [ebp+var_14]
nop
mov		esi, ebx
nop
mov		ecx, edx
rol		esi, cl
nop
nop
nop
nop
mov		[ebp+var_C], esi
mov		ebx, eax
nop
mov		ecx, edi
add		edi, esi
ror		ebx, cl
nop
mov		eax, edi
nop
mov		esi, ebx
nop
neg		esi
nop
nop
mov		ecx, esi
rol		eax, cl
mov		ecx, [ebp+var_C]
nop
not		ecx
mov		edi, eax
add		ecx, 29C747F4h
mov		[ebp+var_C], ecx
nop
nop
mov		ecx, esi
rol		edi, cl
not		ebx
nop
nop
mov		eax, [ebp+var_C]
xor		edi, eax
nop
xor		eax, 0C6D59D10h
mov		[ebp+var_C], eax
sub		edi, 348B0DCFh
mov		eax, [ebp+var_8]
nop
mov		ecx, esi
ror		eax, cl
nop
nop
nop
nop
mov		edx, eax
nop
mov		ecx, edi
ror		edx, cl
nop
mov		eax, [ebp+var_C]
sub		ebx, edx
mov		[ebp+var_10], edx
mov		[ebp+var_14], ebx
xor		ebx, edi
xor		ebx, 0B59FB53Dh
mov		edi, eax
neg		ebx
nop
mov		esi, ebx
nop
neg		esi
nop
nop
mov		ecx, esi
rol		edi, cl
mov		ecx, [ebp+var_10]
nop
mov		eax, [ebp+var_14]
not		ecx
add		eax, edi
ror		ecx, 4
neg		eax
ror		edi, 5
sub		ecx, eax
mov		[ebp+var_C], eax
mov		[ebp+var_10], ecx
nop
nop
mov		edx, edi
mov		ecx, esi
nop
rol		eax, cl
mov		esi, eax
lea		eax, [ebx-47F3E4A0h]
mov		ebx, [ebp+var_10]
xor		eax, edi
neg		ebx
ror		esi, 0Bh
nop
ror		esi, 6
nop
neg		esi
nop
xor		esi, 38A8D1FDh
nop
mov		ecx, ebx
ror		edx, cl
nop
mov		edi, edx
xor		edx, eax
neg		edx
ror		edx, 4
xor		edx, esi
rol		esi, 0Fh
lea		eax, [edi+675F05F0h]
mov		[ebp+var_C], esi
nop
xor		ebx, 0C3BCB585h
add		eax, ebx
nop
mov		ebx, [ebp+var_C]
not		eax
xor		eax, edi
nop
xor		eax, edx
not		eax
xor		edi, eax
mov		esi, eax
nop
not		edi
mov		ecx, edx
ror		esi, cl
nop
nop
nop
lea		eax, [edi+edx]
nop
neg		eax
mov		edx, ebx
xor		edx, eax
neg		edi
mov		eax, esi
add		edx, edi
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
nop
mov		esi, 5278066Bh
sub		esi, eax
mov		eax, edx
nop
mov		ecx, edi
ror		edi, 0Eh
rol		eax, cl
not		edi
nop
xor		eax, esi
not		esi
nop
mov		edx, eax
nop
nop
nop
mov		ecx, esi
not		esi
rol		edx, cl
add		esi, 3D23AD64h
nop
xor		esi, ebx
sub		edx, 488F68C8h
lea		eax, [edi-19C0C441h]
add		eax, edx
mov		ecx, ebx
xor		ecx, edx
rol		ebx, 4
mov		edx, esi
neg		ecx
xor		edx, eax
not		edx
add		edx, esi
not		esi
mov		eax, edx
xor		esi, ebx
xor		eax, ecx
nop
ror		eax, 1
dec		esi
mov		[ebp+var_10], esi
nop
mov		esi, eax
nop
mov		edi, ebx
nop
sub		edi, edx
mov		ecx, ebx
not		edi
rol		esi, cl
nop
nop
nop
nop
lea		eax, [ebx+21A9944Bh]
xor		eax, 66A8C009h
not		esi
mov		ebx, eax
nop
mov		ecx, edi
not		edi
ror		ebx, cl
nop
mov		eax, [ebp+var_10]
add		esi, ebx
ror		eax, 4
not		esi
sub		eax, 5B9E9C19h
sub		edi, esi
neg		ebx
add		edi, eax
xor		eax, 2C349B03h
mov		[ebp+var_10], eax
mov		edx, eax
nop
mov		[ebp+var_C], edi
mov		edi, esi
neg		edx
nop
nop
mov		ecx, edx
ror		edi, cl
nop
nop
mov		esi, ebx
nop
mov		ecx, edx
mov		edx, [ebp+var_C]
ror		esi, cl
nop
nop
nop
xor		esi, edx
mov		ebx, [ebp+var_10]
rol		esi, 1
nop
ror		esi, 2
mov		eax, esi
rol		ebx, 0Bh
nop
mov		ecx, edx
mov		edx, edi
rol		eax, cl
nop
mov		esi, [ebp+var_C]
nop
xor		ebx, esi
nop
add		esi, ebx
nop
not		ebx
nop
mov		ecx, eax
ror		edx, cl
nop
xor		eax, edx
sub		edx, esi
xor		edx, eax
nop
nop
mov		edi, ebx
nop
neg		edx
nop
neg		esi
mov		ecx, eax
ror		eax, 9
sub		eax, 34C6BCFh
rol		edi, cl
nop
nop
nop
nop
mov		ebx, eax
nop
xor		edi, 74641FDEh
mov		ecx, edx
not		edi
rol		ebx, cl
nop
mov		eax, 0FFFFFFFFh
xor		ebx, esi
sub		eax, edx
add		esi, eax
sub		ebx, 41489D8Dh
add		edi, ebx
mov		[ebp+var_C], esi
sub		edx, edi
nop
nop
mov		eax, edx
nop
neg		ebx
nop
mov		ecx, edi
ror		ebx, 0Ah
ror		eax, cl
neg		ebx
nop
mov		edx, edi
mov		esi, eax
neg		esi
nop
nop
nop
mov		ecx, eax
ror		edx, cl
nop
mov		edi, esi
rol		edx, 6
neg		edi
nop
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
mov		esi, edx
nop
nop
ror		esi, 7
nop
mov		edx, ebx
nop
mov		eax, 78080F25h
mov		ecx, edi
sub		eax, esi
add		[ebp+var_C], eax
rol		edx, cl
nop
sub		edx, 229BE543h
rol		esi, 8
nop
nop
rol		esi, 0Dh
nop
mov		eax, 8E2A5561h
sub		eax, edi
add		esi, eax
mov		eax, edi
nop
mov		ecx, edx
rol		esi, 7
ror		eax, cl
not		esi
nop
mov		[ebp+var_4], eax
mov		eax, [ebp+var_C]
not		eax
mov		edi, [ebp+var_4]
ror		eax, 0Ch
sub		edi, 25F1EACCh
xor		eax, edx
not		edx
xor		eax, 3A4ED6DFh
sub		edx, 4B574D29h
add		esi, edx
rol		edx, 6
xor		esi, eax
mov		[ebp+var_14], edx
mov		ebx, [ebp+var_14]
add		eax, esi
not		eax
nop
nop
mov		edx, eax
nop
xor		esi, 0AA72F0F6h
nop
mov		ecx, ebx
xor		ebx, edi
rol		edx, cl
nop
nop
nop
lea		eax, [edi-2196CBD9h]
nop
add		eax, esi
neg		edx
not		eax
xor		edi, 0C8D76B8Bh
mov		[ebp+var_8], eax
mov		esi, edi
mov		eax, edx
mov		[ebp+var_4], edi
nop
neg		esi
mov		ecx, ebx
rol		eax, cl
nop
nop
ror		eax, 3
nop
xor		eax, edi
nop
neg		eax
xor		eax, 23F1E51Fh
mov		edi, eax
nop
mov		ecx, esi
rol		edi, cl
mov		ecx, [ebp+var_8]
nop
lea		eax, [ecx+ebx]
neg		ecx
xor		ecx, edi
not		eax
mov		[ebp+var_8], ecx
mov		ebx, eax
nop
nop
mov		edx, edi
mov		ecx, esi
mov		esi, [ebp+var_8]
ror		ebx, cl
nop
nop
nop
nop
mov		eax, [ebp+var_4]
nop
xor		eax, esi
mov		ecx, esi
sub		eax, ebx
ror		edx, cl
nop
mov		edi, esi
not		edx
mov		esi, ebx
nop
add		edi, ebx
nop
xor		edi, 4FFEF67Bh
nop
sub		edi, 3AF0C739h
nop
mov		ecx, edx
mov		[ebp+var_8], edi
ror		esi, cl
nop
add		esi, 63CEF8A2h
add		eax, esi
ror		esi, 6
mov		[ebp+var_4], eax
nop
nop
mov		eax, 86FB9C8Dh
sub		eax, edx
nop
rol		eax, 0Eh
mov		edx, esi
inc		eax
mov		ebx, eax
nop
mov		ecx, esi
ror		ebx, cl
nop
nop
nop
nop
add		ebx, 790BB57Eh
nop
mov		eax, edi
xor		eax, [ebp+var_4]
mov		ecx, edi
mov		edi, 1A78B885h
rol		edx, cl
sub		edi, eax
mov		ecx, [ebp+var_8]
nop
lea		eax, [ebx+edx]
ror		edx, 0Dh
sub		ecx, eax
rol		edx, 0Fh
mov		eax, 591D0179h
mov		[ebp+var_8], ecx
sub		eax, ecx
sub		edx, 61462132h
add		ebx, eax
ror		edx, 3
mov		eax, ecx
mov		[ebp+var_14], edx
neg		eax
mov		[ebp+var_10], eax
mov		esi, eax
nop
nop
mov		eax, ebx
nop
nop
mov		ecx, esi
rol		eax, cl
nop
nop
dec		eax
ror		eax, 8
mov		ebx, eax
nop
mov		ecx, esi
ror		ebx, cl
nop
mov		edx, [ebp+var_14]
nop
mov		eax, edi
add		ebx, 1CB3397Bh
nop
not		ebx
mov		ecx, esi
ror		eax, cl
nop
mov		edi, [ebp+var_10]
xor		eax, edx
xor		edx, 1B2AD32Fh
add		eax, ebx
add		edx, 0D1A2FCBh
xor		edx, [ebp+var_8]
not		ebx
xor		ebx, 9FB98AB7h
sub		ebx, [ebp+var_8]
add		eax, ebx
nop
nop
mov		esi, eax
nop
nop
mov		ecx, ebx
ror		esi, cl
nop
mov		eax, edx
not		esi
nop
nop
nop
nop
mov		ecx, esi
not		esi
rol		eax, cl
add		esi, ebx
nop
nop
nop
neg		eax
nop
neg		eax
mov		edx, eax
nop
mov		ecx, esi
add		esi, ebx
rol		edx, cl
not		esi
nop
nop
nop
neg		edx
nop
nop
sub		ebx, 53EA2D8Bh
nop
neg		edx
mov		ecx, esi
xor		edx, ebx
rol		edi, cl
xor		ebx, edx
nop
rol		esi, 0Dh
not		ebx
nop
nop
sub		ebx, edx
nop
rol		ebx, 0Bh
mov		eax, ebx
add		edi, 0F7262D3Ah
nop
add		edi, edx
mov		ecx, edx
mov		[ebp+var_14], edi
rol		eax, cl
mov		ecx, edi
nop
xor		edi, esi
sub		ecx, eax
rol		edi, 6
sub		ecx, 4A564854h
mov		ebx, edx
mov		[ebp+var_C], ecx
not		edi
sub		[ebp+var_C], edi
nop
nop
not		edi
nop
nop
mov		ecx, esi
ror		ebx, cl
nop
mov		edx, edi
xor		ebx, 0AFE230ADh
neg		ebx
nop
mov		esi, ebx
nop
neg		esi
nop
nop
not		ebx
mov		ecx, esi
rol		ebx, 0Dh
rol		edx, cl
nop
nop
mov		edi, edx
nop
mov		ecx, esi
mov		esi, [ebp+var_C]
rol		edi, cl
neg		esi
nop
ror		esi, 7
mov		edx, [ebp+var_14]
neg		esi
sub		edx, esi
nop
nop
mov		eax, edx
nop
nop
mov		ecx, esi
rol		eax, cl
nop
mov		edx, ebx
nop
nop
nop
nop
mov		ecx, eax
rol		edx, cl
lea		ecx, [eax+edi]
nop
xor		ecx, eax
rol		eax, 9
sub		ecx, 0A0D6ED7h
add		esi, ecx
not		ecx
mov		[ebp+var_14], ecx
sub		edx, esi
nop
mov		[ebp+var_C], esi
mov		ebx, [ebp+var_C]
nop
nop
mov		esi, eax
nop
mov		ecx, ebx
ror		esi, cl
nop
mov		eax, ebx
xor		esi, edx
rol		edx, 8
nop
nop
nop
nop
mov		ecx, esi
ror		esi, 0Eh
rol		eax, cl
nop
neg		eax
xor		eax, 74531614h
sub		eax, 2BBE5CC6h
xor		edx, eax
add		eax, 69EE61B2h
mov		[ebp+var_10], edx
mov		ebx, edx
mov		ecx, [ebp+var_10]
neg		ebx
mov		[ebp+var_C], eax
mov		[ebp+var_10], ecx
mov		eax, esi
nop
mov		edx, ebx
mov		ecx, edx
ror		eax, cl
nop
nop
mov		edi, eax
mov		esi, ebx
nop
mov		ecx, edx
mov		edx, [ebp+var_14]
rol		edi, cl
nop
mov		eax, edx
nop
nop
nop
nop
mov		ecx, edi
rol		eax, cl
nop
mov		edx, [ebp+var_C]
sub		eax, edx
rol		eax, 9
nop
nop
nop
nop
mov		ecx, eax
ror		esi, cl
nop
nop
nop
nop
mov		ebx, edi
nop
mov		ecx, edx
rol		ebx, cl
nop
lea		edi, [edx+esi]
sub		ebx, eax
not		edi
add		eax, ebx
nop
nop
not		eax
nop
mov		edx, eax
nop
not		ebx
mov		ecx, edi
xor		ebx, edi
add		esi, 76C339A6h
rol		edx, cl
xor		esi, edi
nop
xor		ebx, 53A01FA2h
xor		esi, edx
add		ebx, esi
lea		eax, [edx+4D3A1EFEh]
add		eax, ebx
xor		ebx, 759FE31Fh
xor		eax, edi
sub		ebx, 61ECCAA7h
not		eax
nop
nop
mov		edx, eax
nop
xor		esi, eax
nop
not		edi
xor		edi, 957049A4h
mov		ecx, ebx
mov		[ebp+var_14], edi
ror		edx, cl
sub		ebx, edi
nop
nop
nop
neg		edx
nop
mov		eax, ebx
nop
mov		ecx, edi
rol		eax, cl
lea		edi, [edx+1]
nop
xor		edi, 1C5B63A8h
mov		ebx, [ebp+var_14]
neg		eax
sub		edi, ebx
mov		edx, eax
sub		edi, 325C7411h
xor		edi, 5BF6C4A2h
nop
nop
nop
nop
mov		ecx, edi
rol		edx, cl
nop
mov		eax, ebx
sub		eax, edx
dec		eax
add		eax, esi
mov		esi, 0FFFFFFFFh
not		eax
mov		[ebp+var_14], eax
sub		esi, ebx
rol		edi, 0Ah
mov		ebx, eax
rol		esi, 5
sub		ebx, edx
rol		edi, 6
xor		ebx, 0B64FE0BEh
xor		edi, eax
nop
neg		esi
nop
mov		eax, esi
nop
neg		edi
nop
mov		ecx, ebx
xor		ebx, edi
ror		eax, cl
nop
nop
nop
nop
mov		edx, eax
nop
mov		esi, 0F87D6E03h
mov		ecx, ebx
sub		esi, [ebp+var_14]
rol		esi, 5
ror		edx, cl
sub		ebx, edi
nop
nop
nop
mov		eax, edi
nop
not		edx
nop
mov		ecx, ebx
rol		ebx, 0Dh
rol		eax, cl
nop
mov		edi, edx
add		eax, edi
neg		edi
rol		eax, 1
nop
xor		ebx, eax
nop
nop
neg		eax
mov		edx, eax
not		ebx
nop
add		esi, edi
mov		ecx, edi
not		esi
add		edi, ebx
rol		edx, cl
not		esi
nop
ror		ebx, 0Eh
imul		eax, edi, -2
add		ebx, edi
rol		edx, 4
nop
nop
add		esi, edi
nop
add		edx, eax
add		ebx, edx
mov		[ebp+var_14], ebx
mov		ebx, edx
nop
mov		ecx, edi
ror		ebx, cl
nop
mov		eax, [ebp+var_14]
mov		edx, esi
ror		edi, 2
mov		[ebp+var_8], edi
mov		edi, eax
neg		edi
nop
nop
nop
mov		ecx, eax
rol		edx, cl
nop
mov		esi, ebx
xor		edx, eax
mov		eax, [ebp+var_8]
sub		edx, eax
ror		eax, 0Eh
neg		edx
mov		[ebp+var_8], eax
ror		edx, 0Fh
add		edx, 266A58D8h
mov		[ebp+var_C], edx
mov		edx, eax
nop
neg		edx
nop
nop
mov		ecx, edx
ror		esi, cl
nop
nop
nop
nop
sub		esi, 534E34D6h
mov		ecx, edx
nop
mov		ebx, [ebp+var_C]
ror		edi, cl
mov		edx, edi
mov		edi, [ebp+var_8]
neg		edx
mov		eax, edi
xor		edx, esi
add		esi, ebx
nop
mov		[ebp+var_14], esi
nop
neg		ebx
nop
mov		[ebp+var_C], ebx
nop
neg		edx
mov		ecx, esi
nop
nop
rol		eax, cl
nop
nop
sub		eax, ebx
neg		ebx
mov		[ebp+var_8], eax
mov		eax, [ebp+var_14]
mov		edi, eax
nop
mov		ecx, ebx
ror		edi, cl
nop
mov		eax, [ebp+var_8]
rol		edi, 3
sub		edi, eax
not		eax
nop
mov		[ebp+var_8], eax
nop
mov		eax, edx
nop
nop
mov		ecx, edi
rol		eax, cl
nop
nop
mov		edx, edi
nop
sub		eax, 771BB33Ch
mov		ecx, ebx
not		eax
ror		edx, cl
mov		ebx, [ebp+var_8]
nop
mov		edi, [ebp+var_C]
xor		edx, eax
xor		edx, edi
xor		edi, ebx
add		edx, ebx
mov		esi, edi
sub		esi, eax
ror		ebx, 8
add		ebx, esi
nop
nop
nop
nop
neg		ebx
nop
mov		ecx, esi
rol		ebx, 7
ror		edx, cl
nop
nop
mov		[ebp+var_8], ebx
nop
mov		ebx, esi
nop
nop
mov		ecx, edi
ror		edi, 0Eh
mov		[ebp+var_C], edi
rol		ebx, cl
nop
nop
ror		ebx, 8
nop
nop
nop
nop
mov		ecx, ebx
not		ebx
ror		edi, cl
nop
mov		esi, [ebp+var_8]
sub		edi, 2D2576A3h
add		edx, esi
xor		esi, 877B5C80h
nop
nop
mov		eax, esi
nop
neg		edx
nop
mov		ecx, edi
ror		edx, 0Dh
ror		eax, cl
mov		ecx, 58F0E5AAh
nop
xor		eax, edi
sub		ecx, eax
mov		eax, ebx
rol		ebx, 8
xor		ecx, 0DB80FDD6h
not		ebx
sub		eax, edx
sub		ebx, ecx
rol		ebx, 0Ah
sub		ebx, edi
sub		edi, eax
add		eax, 7879322Fh
mov		esi, edi
sub		esi, ecx
mov		[ebp+var_4], eax
sub		edi, eax
sub		esi, 75897528h
add		eax, edi
not		esi
sub		esi, [ebp+var_4]
sub		ebx, eax
add		edi, ebx
ror		esi, 5
dec		esi
ror		ebx, 3
xor		esi, edi
neg		ebx
xor		esi, 5A58227Dh
nop
nop
mov		[ebp+var_8], esi
nop
mov		edx, ebx
nop
neg		edx
add		ebx, 0FD840FBh
mov		ecx, edx
rol		esi, cl
nop
mov		ecx, esi
mov		esi, [ebp+var_4]
ror		esi, 0Ch
xor		esi, edi
mov		[ebp+var_8], ecx
not		esi
sub		esi, ecx
nop
not		esi
mov		[ebp+var_4], esi
mov		esi, edi
nop
mov		ecx, edx
ror		esi, cl
nop
mov		edi, [ebp+var_8]
sub		esi, [ebp+var_4]
mov		eax, edi
sub		eax, [ebp+var_4]
not		edi
add		eax, esi
sub		edi, 2DE28A3Eh
add		eax, ebx
mov		[ebp+var_8], edi
nop
not		esi
mov		edx, eax
nop
nop
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
nop
mov		eax, [ebp+var_4]
neg		eax
mov		edi, edx
nop
mov		ecx, eax
mov		[ebp+var_14], eax
rol		edi, cl
mov		eax, esi
nop
nop
nop
mov		ecx, [ebp+var_14]
rol		eax, cl
mov		edx, edi
nop
nop
nop
not		eax
nop
mov		esi, eax
nop
mov		ecx, [ebp+var_8]
rol		esi, cl
nop
mov		eax, 7854E9B1h
add		esi, 136EE64Dh
nop
nop
nop
nop
mov		ecx, esi
ror		edx, cl
nop
nop
mov		ebx, esi
mov		edi, [ebp+var_4]
sub		eax, edx
nop
not		edi
mov		ecx, [ebp+var_14]
ror		ebx, cl
nop
rol		edi, 1
mov		esi, [ebp+var_8]
xor		ebx, edi
sub		eax, esi
xor		edi, 378D5EBAh
add		esi, edi
not		eax
sub		eax, esi
not		ebx
add		ebx, edi
rol		esi, 10h
mov		edx, eax
ror		esi, 4
nop
nop
nop
nop
mov		ecx, ebx
rol		ebx, 0Ah
rol		edx, cl
nop
nop
nop
nop
mov		eax, edx
nop
mov		ecx, edi
add		edi, esi
ror		eax, cl
nop
nop
mov		[ebp+var_4], edi
nop
dec		eax
nop
not		eax
mov		edi, eax
nop
mov		ecx, ebx
rol		ebx, 0Dh
rol		edi, cl
mov		ecx, 0A2716206h
nop
sub		ecx, esi
neg		edi
xor		ecx, ebx
mov		edx, [ebp+var_4]
mov		eax, ecx
sub		eax, edx
rol		ebx, 3
add		ebx, eax
rol		ecx, 0Ah
sub		edi, edx
mov		eax, 0A97A8B80h
sub		eax, ebx
ror		edi, 9
add		edi, eax
lea		esi, [edx+1]
neg		ebx
xor		esi, 0F89B7291h
xor		ebx, 0C5B39C7Fh
ror		esi, 0Fh
neg		ebx
xor		ebx, 24BC6A66h
mov		eax, ebx
not		ebx
sub		eax, ecx
xor		esi, eax
add		eax, 4364266Bh
sub		edi, eax
sub		ebx, esi
add		ebx, edi
xor		ebx, 81099A87h
add		eax, ebx
mov		[ebp+var_10], ebx
mov		edx, [ebp+var_10]
neg		eax
mov		ebx, eax
mov		[ebp+var_4], edx
neg		ebx
xor		edi, ebx
nop
nop
ror		edi, 8
nop
not		edi
mov		ecx, eax
ror		ebx, 0Bh
nop
inc		ebx
ror		edx, cl
nop
nop
mov		eax, edx
nop
mov		edx, esi
nop
sub		eax, edi
mov		ecx, edi
xor		eax, 0F40C5D60h
not		edi
ror		edx, cl
nop
mov		esi, edi
nop
nop
nop
nop
mov		ecx, edx
ror		esi, cl
nop
mov		edi, eax
add		esi, edi
mov		eax, 7E3F80A6h
neg		esi
sub		eax, ebx
ror		esi, 0Bh
lea		ecx, [edi+2F0B8C89h]
add		esi, eax
add		ecx, edx
ror		esi, 0Ch
xor		ecx, ebx
xor		edi, ebx
sub		ebx, ecx
mov		edx, esi
rol		ebx, 4
xor		edx, ecx
ror		esi, 0Bh
xor		ebx, ecx
xor		esi, 0EEC95B99h
not		edx
neg		esi
sub		ebx, edx
ror		esi, 9
xor		esi, 0E2FFFE6Ah
rol		ebx, 6
sub		edi, 6421537Fh
neg		ebx
mov		eax, edi
mov		[ebp+var_10], ebx
neg		eax
mov		[ebp+var_4], edi
mov		ebx, eax
mov		[ebp+var_14], eax
mov		eax, esi
nop
nop
nop
neg		edx
mov		ecx, ebx
rol		eax, cl
nop
nop
mov		esi, [ebp+var_4]
mov		[ebp+var_C], eax
mov		eax, edx
nop
mov		ecx, ebx
rol		eax, cl
mov		ecx, [ebp+var_C]
nop
sub		eax, [ebp+var_10]
mov		edx, ecx
xor		edx, [ebp+var_10]
sub		edx, ecx
ror		eax, 0Ch
add		edx, esi
sub		esi, eax
mov		eax, [ebp+var_14]
add		ecx, edx
sub		esi, 4CC817D7h
mov		[ebp+var_C], ecx
ror		esi, 0Bh
nop
mov		[ebp+var_4], esi
ror		edx, 3
mov		esi, edx
nop
mov		ecx, ebx
rol		esi, cl
mov		ebx, eax
mov		ecx, [ebp+var_4]
nop
not		ecx
neg		esi
xor		ecx, eax
nop
rol		ecx, 9
not		esi
neg		ecx
neg		ebx
rol		ecx, 3
nop
sub		esi, ecx
mov		[ebp+var_4], ecx
mov		edi, ebx
mov		eax, esi
nop
nop
mov		ecx, edi
rol		eax, cl
mov		ecx, [ebp+var_4]
nop
neg		ecx
mov		esi, eax
mov		[ebp+var_4], ecx
nop
nop
nop
mov		ecx, [ebp+var_4]
ror		esi, cl
nop
nop
mov		eax, [ebp+var_C]
ror		eax, 9
neg		esi
not		eax
rol		esi, 0Dh
xor		[ebp+var_4], esi
ror		eax, 5
add		eax, [ebp+var_14]
ror		eax, 0Ah
ror		eax, 3
mov		[ebp+var_C], eax
nop
mov		ecx, edi
nop
ror		eax, cl
nop
nop
nop
nop
lea		edx, [esi-1]
mov		esi, [ebp+var_4]
not		eax
xor		eax, 9F011D42h
not		edx
mov		edi, eax
neg		esi
nop
mov		ecx, ebx
rol		edi, cl
nop
lea		eax, [esi+edx*2]
add		ebx, eax
rol		esi, 7
nop
mov		[ebp+var_4], esi
nop
mov		eax, edi
nop
xor		eax, ebx
mov		ebx, edx
add		eax, edx
nop
mov		ecx, edi
rol		ebx, cl
nop
mov		edx, esi
neg		edx
mov		esi, edi
nop
nop
nop
mov		ecx, [ebp+var_4]
rol		esi, cl
mov		ecx, [ebp+var_4]
nop
add		ecx, 522CB819h
add		eax, ecx
nop
nop
mov		edi, eax
nop
nop
mov		ecx, edx
rol		edi, cl
nop
xor		edi, 68526D07h
rol		edx, 0Fh
mov		eax, esi
sub		ebx, eax
nop
nop
mov		esi, ebx
nop
xor		eax, 3CB4E1CCh
nop
mov		ecx, edx
add		edx, 0A7666B0h
ror		esi, cl
nop
mov		ebx, eax
nop
add		edx, esi
nop
nop
nop
mov		ecx, esi
rol		esi, 9
rol		ebx, cl
neg		esi
nop
mov		eax, 0FFFFFFFFh
sub		eax, edx
ror		ebx, 1
add		edi, eax
sub		ebx, 1EF83897h
nop
mov		eax, esi
nop
not		edx
nop
xor		edx, edi
nop
mov		ecx, edi
rol		edx, 0Eh
rol		eax, cl
xor		edi, ebx
nop
add		ebx, eax
add		eax, edx
mov		[ebp+var_14], ebx
nop
mov		esi, [ebp+var_14]
nop
nop
mov		ebx, 371FB2AAh
sub		ebx, edi
neg		esi
sub		ebx, edx
neg		edx
mov		edi, edx
sub		ebx, 2A3B900h
nop
mov		ecx, eax
ror		eax, 4
ror		edi, cl
nop
rol		eax, 0Ah
not		edi
not		eax
nop
mov		[ebp+var_C], edi
mov		edx, [ebp+var_C]
nop
nop
mov		edi, esi
nop
mov		ecx, edx
rol		edi, cl
nop
xor		edx, edi
rol		edi, 1
mov		[ebp+var_C], edx
mov		esi, eax
nop
nop
nop
nop
mov		ecx, edi
not		edi
rol		esi, cl
nop
nop
nop
nop
mov		eax, ebx
nop
sub		esi, 7BAB808Fh
mov		ecx, edi
mov		edx, esi
not		edi
rol		eax, cl
nop
nop
mov		[ebp+var_14], edi
nop
nop
nop
not		eax
mov		ecx, edi
sub		eax, 3E83F95Bh
mov		edi, eax
ror		edx, cl
nop
mov		esi, [ebp+var_C]
nop
nop
nop
nop
mov		ecx, edx
add		edx, [ebp+var_14]
rol		edi, cl
nop
nop
nop
nop
mov		eax, edx
nop
not		edi
mov		ecx, esi
sub		esi, edi
mov		[ebp+var_C], esi
ror		eax, cl
mov		esi, 0A9AC0164h
nop
sub		esi, [ebp+var_14]
not		eax
xor		esi, 6032392Dh
ror		eax, 5
neg		eax
sub		edi, eax
mov		edx, eax
ror		edi, 3
nop
nop
nop
nop
mov		ecx, edi
rol		edx, cl
nop
mov		eax, edi
nop
add		esi, edx
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
mov		[ebp+var_10], eax
mov		eax, esi
sub		eax, [ebp+var_C]
neg		esi
ror		eax, 0Ch
add		eax, edx
add		edx, 14BB6A22h
add		eax, edx
mov		[ebp+var_14], edx
nop
mov		ebx, eax
nop
nop
nop
mov		ecx, edx
mov		edx, esi
ror		ebx, cl
nop
nop
mov		edi, ebx
nop
neg		edi
nop
nop
mov		ecx, edi
rol		edx, cl
nop
mov		esi, [ebp+var_14]
xor		edx, 13B521F5h
mov		[ebp+var_8], esi
nop
nop
nop
nop
mov		ecx, edx
rol		[ebp+var_8], cl
nop
nop
mov		esi, [ebp+var_10]
mov		[ebp+var_C], esi
nop
mov		ecx, edi
rol		esi, cl
nop
mov		ecx, esi
mov		esi, edx
rol		ecx, 0Ah
neg		ecx
ror		ecx, 0Ch
neg		ecx
mov		[ebp+var_C], ecx
nop
nop
lea		eax, [ebx+59B977D5h]
mov		ebx, [ebp+var_8]
mov		ecx, edi
mov		edi, [ebp+var_C]
xor		eax, ebx
ror		esi, cl
nop
rol		eax, 0Ch
mov		edx, ebx
xor		esi, 65692DB8h
sub		edx, eax
sub		esi, edi
mov		eax, edx
mov		[ebp+var_C], esi
neg		eax
nop
nop
nop
mov		ecx, edx
nop
rol		esi, cl
mov		edx, esi
sub		edx, 1C9589A5h
ror		ebx, 0Bh
nop
mov		esi, eax
nop
neg		ebx
nop
ror		ebx, 0Eh
nop
mov		ecx, edx
xor		edx, ebx
ror		esi, cl
nop
mov		[ebp+var_C], edx
mov		[ebp+var_8], esi
nop
nop
mov		esi, edi
nop
mov		edx, ebx
nop
neg		esi
mov		ecx, esi
ror		edx, cl
nop
mov		eax, [ebp+var_8]
nop
mov		ebx, edx
not		eax
nop
mov		ecx, esi
rol		ebx, cl
nop
mov		edx, [ebp+var_C]
xor		eax, ebx
add		edi, ebx
mov		[ebp+var_8], eax
nop
nop
mov		eax, edi
nop
xor		edx, ebx
nop
mov		ecx, ebx
not		ebx
rol		eax, cl
xor		edx, ebx
nop
xor		ebx, edx
mov		edi, [ebp+var_8]
mov		esi, eax
ror		edi, 0Dh
ror		edi, 6
nop
nop
nop
nop
mov		ecx, edi
add		edi, ebx
rol		esi, cl
nop
nop
mov		[ebp+var_8], edi
nop
nop
mov		eax, edx
not		esi
nop
mov		ecx, ebx
not		ebx
ror		eax, cl
nop
nop
mov		[ebp+var_10], ebx
nop
nop
mov		edx, [ebp+var_10]
mov		ebx, eax
nop
mov		ecx, edx
sub		edx, esi
ror		ebx, cl
xor		edx, edi
nop
not		esi
sub		ebx, edi
sub		edx, ebx
mov		[ebp+var_C], ebx
xor		esi, edx
mov		[ebp+var_10], edx
mov		edi, esi
nop
mov		edx, ebx
nop
neg		edx
nop
nop
mov		ecx, edx
rol		edi, cl
nop
nop
mov		esi, [ebp+var_10]
nop
nop
add		edi, 4066C1ACh
xor		edi, ebx
mov		ebx, esi
nop
mov		ecx, [ebp+var_8]
rol		ebx, cl
nop
nop
nop
mov		esi, [ebp+var_8]
nop
mov		ecx, edx
ror		esi, cl
nop
rol		ebx, 9
nop
mov		[ebp+var_14], esi
nop
mov		[ebp+var_10], ebx
nop
mov		esi, edi
nop
nop
mov		ecx, [ebp+var_14]
mov		edx, ebx
nop
rol		esi, cl
neg		edx
nop
mov		edi, [ebp+var_C]
nop
add		edi, esi
xor		esi, 0B9CE84A3h
mov		ebx, edi
not		esi
nop
mov		ecx, edx
rol		ebx, cl
nop
nop
mov		edi, esi
nop
mov		ecx, edx
rol		edi, cl
nop
nop
nop
nop
mov		eax, [ebp+var_10]
mov		edx, eax
nop
mov		ecx, ebx
mov		esi, [ebp+var_14]
rol		edx, cl
dec		esi
nop
mov		eax, esi
not		edx
ror		edx, 3
mov		[ebp+var_8], edx
mov		edx, edi
neg		edx
nop
nop
nop
mov		ecx, edi
ror		eax, cl
nop
mov		esi, [ebp+var_8]
neg		eax
mov		ecx, esi
sub		ecx, ebx
ror		eax, 2
xor		eax, edx
sub		esi, edi
mov		ebx, ecx
ror		esi, 0Ah
rol		esi, 6
sub		edx, esi
mov		[ebp+var_8], esi
xor		edx, esi
sub		eax, edx
add		edx, 14DED9CFh
xor		ebx, eax
rol		edx, 0Fh
xor		ebx, 0D9387D83h
add		ebx, eax
xor		eax, edx
add		eax, ebx
not		edx
rol		eax, 4
nop
nop
mov		esi, eax
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
nop
nop
mov		eax, edx
nop
mov		ecx, ebx
rol		ebx, 6
ror		eax, cl
mov		edi, ebx
nop
ror		eax, 1
add		eax, esi
mov		[ebp+var_10], eax
mov		eax, [ebp+var_8]
mov		edx, eax
nop
neg		edx
nop
nop
mov		ecx, edx
rol		edi, cl
nop
nop
nop
nop
mov		eax, [ebp+var_8]
mov		ecx, edx
rol		esi, cl
nop
mov		ebx, [ebp+var_10]
mov		edx, esi
add		eax, 669353A4h
rol		ebx, 0Ch
sub		edi, eax
nop
nop
add		eax, ebx
nop
mov		esi, eax
nop
add		edx, 624A01AFh
rol		edx, 0Ah
mov		ecx, ebx
ror		ebx, 7
ror		esi, cl
add		edx, edi
nop
nop
nop
neg		edi
nop
sub		esi, edi
xor		esi, ebx
mov		eax, edi
nop
neg		esi
mov		ecx, edx
sub		ebx, 1A8AE567h
rol		eax, cl
nop
nop
nop
xor		esi, eax
nop
sub		eax, esi
xor		esi, ebx
add		edx, eax
not		eax
mov		edi, eax
mov		[ebp+var_C], edx
nop
mov		ecx, ebx
not		ebx
ror		edi, cl
nop
nop
mov		[ebp+var_10], ebx
nop
nop
xor		esi, edi
nop
mov		edx, esi
mov		[ebp+var_8], edi
nop
mov		ecx, [ebp+var_C]
rol		edx, cl
nop
mov		esi, [ebp+var_C]
add		edx, 6124E547h
ror		edx, 0Dh
not		edx
sub		esi, edx
nop
nop
nop
nop
mov		ecx, esi
rol		ebx, cl
nop
sub		ebx, 50C19F90h
add		esi, edi
nop
mov		[ebp+var_C], esi
mov		edi, esi
nop
mov		esi, edx
nop
nop
neg		edi
add		ebx, 8B39FFF1h
mov		ecx, edi
not		ebx
ror		esi, cl
nop
nop
mov		eax, 610C0126h
neg		esi
mov		edx, esi
nop
mov		ecx, edi
rol		edx, cl
nop
mov		edi, [ebp+var_C]
nop
nop
sub		eax, edx
nop
add		edi, eax
mov		eax, [ebp+var_8]
add		edx, 1E84C91Dh
not		edx
not		eax
mov		esi, edx
rol		eax, 0Bh
nop
add		eax, edi
mov		ecx, ebx
mov		[ebp+var_8], eax
rol		esi, cl
nop
nop
nop
nop
mov		edx, edi
nop
not		esi
mov		ecx, eax
xor		ebx, esi
mov		eax, ebx
ror		edx, cl
nop
nop
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
mov		ebx, esi
nop
mov		edi, eax
nop
nop
nop
mov		ecx, eax
rol		ebx, cl
nop
mov		esi, [ebp+var_8]
rol		esi, 10h
nop
add		esi, edx
mov		[ebp+var_10], ebx
nop
neg		esi
nop
mov		[ebp+var_8], esi
nop
sub		edx, ebx
mov		ecx, ebx
neg		esi
rol		edi, cl
nop
nop
neg		edi
nop
xor		edx, edi
nop
mov		[ebp+var_14], edx
mov		edx, edi
nop
mov		ecx, esi
rol		edx, cl
nop
mov		eax, [ebp+var_14]
nop
mov		ebx, edx
nop
mov		ecx, esi
ror		ebx, cl
mov		esi, [ebp+var_8]
nop
mov		edx, [ebp+var_10]
add		esi, eax
ror		edx, 9
mov		edi, esi
xor		edx, 0C0A5AB6Eh
not		edx
sub		edx, eax
add		edx, ebx
xor		ebx, 0D78C933Dh
nop
nop
nop
nop
mov		ecx, edx
not		edx
rol		edi, cl
nop
neg		edi
lea		esi, [edi+eax]
mov		eax, 7FF9F95Dh
xor		esi, edx
sub		eax, esi
rol		esi, 9
not		esi
add		edx, eax
add		esi, 3B6B3310h
mov		[ebp+var_10], edx
nop
xor		esi, ebx
neg		esi
rol		ebx, 3
xor		esi, 873D306Bh
not		ebx
nop
nop
nop
nop
mov		ecx, esi
ror		esi, 1
ror		edx, cl
nop
nop
nop
nop
mov		eax, esi
nop
mov		ecx, ebx
not		ebx
rol		eax, cl
nop
mov		[ebp+var_14], ebx
mov		ecx, eax
sub		ecx, edx
xor		edi, 275274A7h
not		edi
add		ebx, eax
ror		edi, 0Eh
xor		edi, 0A37EA88Ah
lea		edx, [edi+77050D81h]
add		edx, ecx
not		ecx
rol		ecx, 5
xor		ebx, edx
xor		edx, ecx
mov		[ebp+var_10], ecx
mov		esi, ecx
xor		edx, ebx
xor		esi, [ebp+var_14]
sub		esi, ecx
ror		edx, 1
not		esi
mov		edi, edx
nop
sub		ebx, esi
nop
not		ebx
nop
nop
mov		ecx, esi
xor		esi, 0EB14ADF1h
ror		edi, cl
add		esi, ebx
mov		ecx, [ebp+var_10]
nop
add		ecx, 71078E70h
not		edi
mov		eax, ecx
rol		ecx, 0Ch
xor		eax, esi
rol		ecx, 0Bh
xor		ebx, eax
mov		[ebp+var_10], ecx
add		esi, ebx
xor		esi, edi
sub		edi, 3B0C9CB8h
sub		esi, ebx
mov		eax, edi
nop
lea		edx, [ebx+0C32A692h]
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
mov		edi, [ebp+var_10]
xor		edx, edi
xor		esi, edi
rol		edx, 6
add		edi, 1E037436h
sub		edx, eax
not		eax
sub		eax, esi
ror		edx, 4
rol		esi, 0Fh
neg		eax
add		edx, esi
mov		ebx, eax
neg		edx
nop
nop
nop
nop
mov		ecx, edx
rol		ebx, cl
nop
sub		esi, ebx
rol		ebx, 0Fh
xor		ebx, edx
rol		ebx, 0Bh
sub		edx, 5624BA33h
mov		eax, edi
xor		eax, edx
add		esi, edx
sub		eax, edi
mov		[ebp+var_14], esi
mov		edx, [ebp+var_14]
add		eax, esi
nop
mov		esi, edi
nop
sub		eax, ebx
nop
nop
mov		ecx, ebx
rol		ebx, 1
rol		esi, cl
nop
mov		edi, eax
add		edx, esi
neg		edx
nop
xor		ebx, edx
nop
not		ebx
nop
sub		ebx, edx
nop
mov		ecx, edx
ror		edx, 0Fh
rol		edi, cl
nop
mov		[ebp+var_14], ebx
not		edi
lea		ebx, [esi+6BC662C7h]
add		edi, 0D657662h
mov		eax, edx
nop
add		ebx, edi
nop
nop
nop
mov		ecx, edi
ror		eax, cl
nop
mov		edx, [ebp+var_14]
not		eax
add		edi, eax
mov		[ebp+var_10], eax
nop
mov		esi, edi
nop
nop
nop
mov		ecx, eax
mov		eax, edx
ror		esi, cl
nop
nop
nop
nop
sub		esi, 57D46354h
nop
xor		esi, ebx
mov		ecx, ebx
not		esi
add		esi, 6CBA2C23h
ror		eax, cl
nop
add		eax, 7F7DD024h
add		ebx, eax
lea		edx, [eax+1]
mov		eax, [ebp+var_10]
not		eax
xor		edx, 0D3D00643h
add		esi, eax
neg		eax
rol		ebx, 4
sub		ebx, edx
mov		[ebp+var_10], eax
nop
mov		eax, ebx
nop
inc		edx
nop
xor		edx, 0EFDD2758h
nop
mov		ecx, esi
rol		eax, cl
nop
mov		ebx, [ebp+var_10]
sub		esi, ebx
neg		eax
ror		esi, 7
xor		ebx, 8C0AC1D9h
xor		esi, 0AB343230h
mov		[ebp+var_14], eax
nop
mov		eax, edx
nop
nop
nop
mov		ecx, esi
ror		esi, 0Ah
ror		eax, cl
nop
nop
nop
rol		eax, 10h
nop
mov		edi, eax
nop
mov		ecx, ebx
not		ebx
ror		edi, cl
mov		edx, ebx
nop
mov		eax, [ebp+var_14]
xor		esi, eax
neg		edi
mov		[ebp+var_C], esi
mov		esi, eax
nop
neg		esi
nop
nop
mov		ecx, esi
ror		edx, cl
nop
nop
mov		ebx, [ebp+var_C]
nop
not		edx
mov		ecx, esi
rol		ebx, cl
nop
nop
mov		eax, edx
nop
mov		ecx, esi
ror		eax, cl
mov		esi, 0EA39AFE1h
nop
mov		edx, eax
lea		eax, [edi+1]
xor		edx, 99507C4h
xor		eax, 88B56807h
nop
sub		esi, eax
mov		eax, [ebp+var_14]
nop
nop
mov		edi, eax
nop
mov		ecx, edx
xor		edx, 7829C0F8h
ror		edi, cl
add		edx, esi
nop
neg		esi
nop
mov		eax, ebx
nop
add		edi, ebx
nop
neg		edx
nop
mov		ecx, esi
mov		[ebp+var_C], edx
ror		eax, cl
mov		edx, esi
nop
mov		ebx, edi
nop
nop
nop
nop
mov		ecx, eax
ror		edx, cl
nop
mov		esi, eax
nop
nop
nop
nop
mov		ecx, edx
sub		edx, eax
rol		ebx, cl
not		edx
nop
sub		ebx, 5DD25ADBh
nop
nop
nop
nop
mov		ecx, ebx
ror		esi, cl
nop
mov		eax, edx
xor		eax, [ebp+var_C]
rol		esi, 9
xor		eax, 0E06E96DDh
not		esi
mov		edi, eax
add		edx, esi
sub		ebx, esi
not		edx
nop
nop
nop
nop
mov		ecx, edx
add		edx, 2186AADDh
rol		edi, cl
nop
lea		eax, [esi+48D2E30Dh]
xor		edi, edx
mov		esi, edx
nop
add		eax, ebx
nop
not		eax
nop
nop
mov		ecx, edi
ror		esi, cl
nop
xor		edi, ebx
lea		edx, [ebx-690E9AA6h]
sub		esi, edi
nop
nop
mov		[ebp+var_C], esi
nop
mov		esi, eax
nop
mov		ecx, ebx
rol		esi, cl
nop
mov		eax, [ebp+var_C]
add		esi, edi
neg		eax
not		edi
add		edx, esi
xor		eax, edi
not		edx
mov		ebx, eax
mov		eax, edi
nop
nop
nop
nop
mov		ecx, ebx
not		ebx
ror		eax, cl
nop
nop
ror		ebx, 0Eh
nop
nop
mov		edi, eax
not		ebx
nop
mov		ecx, edx
mov		[ebp+var_C], ebx
rol		edi, cl
nop
nop
nop
nop
mov		eax, edx
nop
neg		edi
mov		ecx, esi
not		edi
rol		eax, cl
nop
nop
nop
add		eax, esi
nop
mov		edx, eax
xor		esi, ebx
nop
mov		ecx, edi
mov		[ebp+var_14], esi
rol		edx, cl
nop
nop
nop
nop
nop
nop
neg		edx
mov		ecx, esi
mov		esi, edx
neg		esi
rol		ebx, cl
nop
nop
dec		ebx
nop
mov		eax, [ebp+var_14]
rol		edi, 5
not		ebx
rol		edi, 4
mov		[ebp+var_C], eax
neg		edi
nop
xor		edi, esi
mov		ecx, edx
nop
ror		eax, cl
mov		edx, eax
not		edx
lea		ecx, [edi+78A50CFCh]
add		ecx, ebx
neg		edx
rol		ebx, 6
sub		ebx, ecx
lea		eax, [ebx+edx]
neg		edx
add		esi, eax
rol		ebx, 6
sub		ecx, esi
ror		ebx, 5
sub		esi, ebx
mov		[ebp+var_C], edx
xor		esi, 0AAE8F1D9h
mov		edi, edx
mov		[ebp+var_10], esi
sub		ebx, 40FF27F6h
nop
mov		[ebp+var_14], ebx
mov		ebx, edx
nop
mov		edx, [ebp+var_14]
sub		ebx, ecx
mov		eax, edx
nop
nop
neg		edi
mov		ecx, edi
rol		eax, cl
nop
mov		esi, [ebp+var_10]
nop
mov		edx, 18EB98C9h
sub		edx, eax
mov		eax, edx
nop
mov		ecx, edi
ror		eax, cl
nop
mov		edx, esi
nop
nop
nop
nop
mov		ecx, eax
rol		edx, cl
nop
mov		esi, ebx
neg		edx
rol		edx, 8
not		edx
nop
nop
nop
nop
mov		ecx, edx
rol		esi, cl
mov		ecx, [ebp+var_C]
nop
mov		edi, esi
rol		ecx, 0Bh
sub		edi, eax
rol		edi, 1
rol		ecx, 6
xor		ecx, esi
rol		edx, 7
sub		ecx, 776CAF0Bh
rol		edi, 6
mov		eax, 59572078h
not		edi
sub		eax, edx
rol		edi, 10h
rol		eax, 0Bh
mov		edx, edi
xor		eax, ecx
sub		ecx, esi
rol		esi, 2
mov		[ebp+var_14], eax
lea		ebx, [esi+358A8739h]
xor		esi, 0C5E4A3F8h
add		ebx, ecx
add		esi, eax
nop
xor		ebx, esi
nop
rol		ebx, 10h
nop
mov		eax, esi
nop
mov		ecx, edi
rol		eax, cl
nop
nop
sub		ebx, eax
nop
nop
nop
mov		ecx, eax
ror		edx, cl
nop
mov		edi, [ebp+var_14]
xor		ebx, edx
xor		edi, eax
add		eax, 1CB31F93h
xor		edx, 0B520AC22h
add		eax, ebx
rol		edx, 6
xor		edx, eax
sub		ebx, eax
add		eax, edx
not		edi
add		edx, eax
not		ebx
lea		esi, [edx+eax]
mov		eax, edi
neg		eax
not		esi
sub		edx, esi
mov		[ebp+var_C], eax
nop
add		ebx, esi
nop
mov		eax, edx
nop
xor		esi, 28E367Ah
mov		ecx, edi
ror		eax, cl
nop
mov		edx, ebx
neg		eax
xor		eax, 0C533602Fh
nop
nop
nop
nop
mov		ecx, eax
ror		edx, cl
nop
lea		ebx, [eax+esi]
xor		ebx, esi
sub		ebx, edi
xor		esi, ebx
neg		edx
nop
mov		[ebp+var_14], esi
nop
mov		eax, edx
nop
xor		ebx, 0D1FBCE81h
nop
mov		edi, ebx
mov		ecx, esi
neg		edi
ror		eax, cl
nop
nop
nop
mov		esi, eax
nop
nop
nop
nop
mov		ecx, [ebp+var_C]
rol		ebx, 0Ah
ror		esi, cl
nop
nop
mov		eax, esi
nop
mov		ecx, edi
ror		eax, cl
mov		ecx, [ebp+var_C]
nop
mov		esi, [ebp+var_14]
rol		ecx, 0Bh
ror		ecx, 2
xor		ecx, 3AB12470h
mov		[ebp+var_4], eax
sub		ecx, eax
mov		eax, esi
mov		[ebp+var_C], ecx
nop
nop
mov		ecx, edi
ror		eax, cl
nop
mov		esi, [ebp+var_4]
not		eax
rol		eax, 0Ah
sub		esi, eax
sub		esi, 5FF85F72h
xor		esi, 0EC4BCFBFh
xor		ebx, esi
mov		[ebp+var_4], esi
mov		edx, esi
not		ebx
sub		edx, eax
mov		eax, [ebp+var_C]
nop
sub		ebx, edx
nop
mov		edi, ebx
nop
nop
mov		ecx, eax
add		eax, edx
rol		edi, cl
not		eax
nop
rol		eax, 10h
nop
mov		esi, eax
nop
nop
nop
mov		ecx, [ebp+var_4]
ror		esi, cl
nop
xor		edi, 4CEB0C0Fh
neg		esi
inc		edi
not		edi
nop
nop
mov		eax, edi
xor		eax, edx
nop
ror		eax, 4
mov		ebx, edi
nop
mov		ecx, esi
rol		eax, 0Ch
xor		eax, esi
ror		ebx, cl
rol		eax, 2
not		esi
not		eax
mov		edx, esi
nop
mov		[ebp+var_14], eax
nop
nop
nop
mov		edi, [ebp+var_14]
nop
not		edi
mov		ecx, eax
mov		eax, [ebp+var_4]
add		eax, 23608479h
rol		edx, cl
nop
ror		eax, 3
nop
xor		eax, ebx
ror		edx, 0Fh
xor		eax, 753AB8F2h
mov		[ebp+var_8], edx
nop
xor		ebx, 7D3F4811h
add		ebx, eax
nop
add		eax, ebx
not		ebx
not		eax
ror		eax, 0Eh
mov		edx, eax
nop
mov		ecx, edi
rol		edx, cl
nop
nop
nop
mov		eax, [ebp+var_8]
nop
neg		edx
neg		eax
mov		esi, edx
ror		eax, 3
nop
add		eax, edx
mov		ecx, ebx
mov		[ebp+var_8], eax
rol		esi, cl
nop
nop
nop
nop
mov		edx, ebx
nop
neg		esi
mov		ecx, eax
ror		edx, cl
nop
xor		eax, edi
mov		ecx, [ebp+var_8]
xor		eax, esi
mov		[ebp+var_C], edx
xor		ecx, eax
lea		ebx, [edx+esi]
xor		ebx, ecx
mov		[ebp+var_8], ecx
not		eax
ror		ebx, 0Fh
sub		eax, 481C4B0h
mov		edi, edx
neg		edi
nop
mov		esi, eax
nop
nop
mov		ecx, edi
ror		esi, cl
nop
mov		edx, [ebp+var_C]
nop
mov		eax, [ebp+var_8]
xor		ebx, esi
add		eax, [ebp+var_C]
rol		eax, 0Ah
mov		[ebp+var_10], ebx
sub		ebx, eax
nop
nop
mov		ecx, edi
ror		esi, cl
nop
mov		ecx, [ebp+var_10]
mov		edi, esi
xor		edi, ebx
sub		edx, ecx
sub		ebx, ecx
add		edi, 4DE80BBDh
ror		edi, 0Eh
not		edx
sub		edi, 323773ADh
xor		edx, 8FA92B07h
mov		eax, ebx
add		edx, 13095F66h
xor		eax, ecx
mov		[ebp+var_C], edx
xor		edi, edx
neg		eax
xor		edi, 3E1434B1h
mov		edx, 58067EA4h
add		edi, eax
sub		edx, ebx
mov		esi, edi
mov		ebx, eax
neg		esi
nop
nop
nop
mov		ecx, edi
ror		ebx, cl
mov		edi, edx
nop
mov		eax, 9E29C149h
neg		ebx
sub		ebx, esi
xor		esi, edx
nop
xor		esi, ebx
nop
sub		eax, esi
nop
nop
mov		ecx, ebx
ror		edi, cl
nop
xor		edi, 0D02DB488h
sub		[ebp+var_C], 4767A21Dh
xor		ebx, 7BB1FE1Bh
mov		edx, eax
nop
sub		edi, 1C2555ABh
nop
nop
nop
mov		ecx, ebx
xor		ebx, edi
ror		edx, cl
nop
mov		[ebp+var_10], ebx
mov		eax, [ebp+var_C]
mov		esi, edx
mov		ebx, eax
neg		esi
nop
nop
nop
mov		ecx, edx
ror		ebx, cl
mov		edx, [ebp+var_10]
nop
xor		ebx, edi
mov		eax, esi
xor		ebx, 96420850h
sub		ebx, edx
not		edx
add		ebx, edi
not		edi
sub		edx, ebx
xor		edi, ebx
add		edx, 58FB2F10h
nop
mov		[ebp+var_10], edx
nop
xor		edi, edx
nop
not		edi
nop
xor		edi, 409D5C25h
mov		ecx, edx
rol		eax, cl
nop
nop
nop
add		eax, ebx
nop
xor		ebx, edx
sub		eax, 3FEBB01Ch
mov		edx, eax
nop
mov		ecx, edi
ror		edx, cl
nop
lea		eax, [ebx+edx]
neg		ebx
add		edi, eax
xor		ebx, edx
nop
mov		[ebp+var_14], edi
mov		esi, [ebp+var_14]
nop
nop
add		edx, 5EBC44C2h
mov		edi, edx
nop
mov		ecx, esi
lea		eax, [ebx+esi]
rol		edi, cl
mov		ecx, [ebp+var_10]
nop
inc		ecx
add		ecx, eax
mov		eax, 1
rol		ecx, 6
sub		eax, edi
add		ebx, 0F7AE0270h
add		ecx, eax
ror		ebx, 9
mov		[ebp+var_14], ecx
mov		eax, edi
sub		eax, esi
add		edi, ebx
xor		eax, ecx
rol		ebx, 4
mov		[ebp+var_C], eax
nop
nop
mov		esi, ebx
neg		esi
nop
nop
mov		ecx, esi
rol		[ebp+var_C], cl
nop
nop
mov		eax, edi
nop
mov		ecx, esi
rol		eax, cl
nop
nop
mov		edi, eax
nop
mov		ecx, esi
mov		esi, [ebp+var_C]
ror		edi, cl
nop
nop
nop
nop
mov		[ebp+var_10], edi
mov		eax, ebx
nop
mov		ecx, esi
ror		esi, 7
ror		eax, cl
mov		edx, esi
nop
xor		eax, 3BFBB285h
mov		ebx, eax
neg		ebx
nop
ror		ebx, 7
nop
nop
mov		ecx, eax
rol		edx, cl
nop
sub		edx, eax
mov		eax, edi
xor		eax, [ebp+var_14]
sub		edx, edi
not		eax
nop
nop
mov		edi, eax
nop
nop
mov		ecx, edx
rol		edi, cl
nop
lea		eax, [edx-0CB40D7Dh]
ror		eax, 0Bh
add		ebx, eax
rol		eax, 0Ah
nop
mov		esi, eax
nop
nop
nop
mov		ecx, ebx
rol		edi, 8
rol		esi, cl
xor		ebx, 36C92AE4h
nop
mov		[ebp+var_14], ebx
mov		ebx, [ebp+var_10]
rol		esi, 0Ah
xor		ebx, 0C3FBD063h
xor		edi, esi
mov		[ebp+var_4], ebx
xor		edi, 257C01Eh
nop
mov		edx, edi
nop
neg		edx
nop
nop
mov		ecx, edx
ror		[ebp+var_4], cl
nop
nop
mov		ebx, 0DDAE8FCh
nop
sub		ebx, esi
mov		esi, [ebp+var_14]
nop
mov		ecx, edx
ror		esi, cl
nop
mov		eax, [ebp+var_4]
rol		esi, 2
add		eax, 343DB0A9h
add		esi, ebx
add		eax, edi
mov		edi, [ebp+var_4]
neg		esi
neg		esi
not		eax
xor		esi, ebx
not		edi
ror		ebx, 0Eh
not		esi
not		ebx
mov		ecx, ebx
sub		ebx, edi
sub		ecx, eax
not		ebx
rol		ecx, 8
lea		eax, [esi-1F800438h]
sub		ecx, esi
ror		eax, 9
dec		ecx
rol		eax, 8
sub		edi, ebx
mov		[ebp+var_C], ecx
nop
mov		[ebp+var_14], ebx
nop
add		eax, 2AD4AAD4h
nop
mov		edx, eax
nop
mov		ecx, edi
not		edi
ror		edx, cl
mov		ebx, edi
nop
mov		[ebp+var_4], edi
mov		eax, [ebp+var_14]
nop
neg		ebx
mov		esi, edx
nop
nop
mov		ecx, ebx
rol		esi, cl
nop
mov		edx, [ebp+var_C]
nop
nop
xor		eax, 3C19639Fh
nop
rol		eax, 0Ah
nop
add		eax, 0E55FCEA9h
add		eax, esi
mov		ecx, esi
ror		edx, cl
mov		ecx, 75CB4E8h
sub		ecx, esi
nop
mov		[ebp+var_14], ecx
mov		esi, eax
nop
sub		edx, 744FE5C2h
nop
mov		edi, edx
mov		ecx, ebx
mov		ebx, [ebp+var_14]
ror		esi, cl
mov		ecx, [ebp+var_4]
nop
rol		ecx, 0Ah
mov		eax, 0C47DBB5Fh
sub		eax, ebx
not		esi
add		ecx, eax
not		esi
mov		[ebp+var_4], ecx
mov		eax, ebx
nop
nop
nop
mov		ecx, [ebp+var_4]
rol		edi, cl
nop
nop
nop
xor		edi, [ebp+var_4]
nop
mov		edx, esi
nop
mov		ecx, ebx
ror		edx, cl
nop
nop
nop
nop
rol		edx, 0Ah
nop
mov		ecx, edi
xor		edi, 0EA2944E4h
ror		eax, cl
nop
mov		ebx, eax
mov		eax, edi
xor		ebx, edx
rol		edx, 8
nop
rol		ebx, 5
nop
xor		ebx, edx
nop
nop
mov		ecx, edx
ror		eax, cl
mov		ecx, [ebp+var_4]
nop
xor		ecx, 7BD8C92Ch
add		ecx, edx
neg		ecx
xor		ecx, edx
xor		ecx, 0F033F6A2h
sub		edx, ebx
mov		edi, eax
sub		edi, ecx
not		eax
xor		ebx, eax
mov		esi, edx
add		eax, edx
rol		ebx, 5
xor		eax, 4B934372h
add		ebx, 18E4B229h
nop
ror		ebx, 0Eh
nop
sub		edi, 482D37B9h
nop
mov		[ebp+var_8], edi
nop
xor		edi, eax
mov		ecx, eax
sub		ebx, 511E16ECh
not		ebx
rol		esi, cl
nop
nop
nop
sub		edi, esi
nop
xor		esi, [ebp+var_8]
sub		edi, 0E3A735Bh
mov		edx, esi
not		edi
nop
add		edi, esi
mov		ecx, ebx
ror		edx, cl
nop
mov		esi, [ebp+var_8]
rol		esi, 0Fh
rol		esi, 4
xor		esi, edi
lea		eax, [ebx+edx]
mov		[ebp+var_8], esi
sub		edi, eax
rol		ebx, 0Ch
nop
mov		eax, edx
nop
not		ebx
nop
nop
mov		ecx, esi
mov		esi, ebx
rol		eax, cl
not		ebx
nop
xor		eax, edi
neg		edi
nop
mov		edx, edi
nop
xor		esi, eax
nop
not		esi
nop
add		ebx, esi
mov		ecx, eax
mov		eax, ebx
ror		edx, cl
nop
sub		edx, 26001486h
nop
nop
nop
nop
mov		ecx, edx
ror		eax, cl
mov		edi, [ebp+var_8]
nop
add		edx, eax
sub		esi, edi
xor		esi, 831661D4h
xor		edx, 4206DC41h
neg		esi
sub		eax, 1E5B81DAh
xor		esi, edx
sub		edi, eax
add		esi, edx
neg		edi
xor		esi, eax
mov		[ebp+var_8], edi
rol		esi, 0Fh
lea		ebx, [edx+4FF8A06Eh]
xor		esi, 8FA7AA4Ch
add		eax, 3BA44CE8h
nop
mov		edx, eax
nop
not		ebx
nop
mov		[ebp+var_4], ebx
nop
mov		ecx, esi
sub		esi, 5F3905E0h
rol		edx, cl
nop
nop
nop
nop
nop
mov		[ebp+var_10], edx
nop
mov		edx, esi
nop
mov		ecx, ebx
mov		ebx, edi
rol		edx, cl
neg		ebx
nop
nop
not		edx
mov		edi, ebx
mov		esi, edx
nop
mov		ecx, edi
rol		esi, cl
mov		ecx, [ebp+var_4]
nop
sub		esi, [ebp+var_8]
not		ecx
not		esi
add		[ebp+var_10], esi
xor		ecx, esi
mov		[ebp+var_4], ecx
not		esi
nop
mov		edx, esi
mov		eax, [ebp+var_10]
nop
not		eax
mov		ecx, edi
add		eax, 6552FB05h
rol		edx, cl
nop
not		edx
xor		eax, edx
neg		edx
xor		ebx, eax
xor		edx, ebx
xor		ebx, eax
nop
mov		[ebp+var_14], edx
add		eax, 6A57D2AFh
mov		[ebp+var_C], ebx
nop
nop
mov		edi, [ebp+var_C]
mov		ebx, eax
mov		esi, 31F12799h
nop
mov		ecx, edx
sub		esi, [ebp+var_4]
ror		ebx, cl
nop
nop
mov		edx, ebx
nop
neg		edx
nop
nop
mov		ecx, edx
ror		edi, cl
nop
nop
mov		eax, esi
nop
sub		edi, ebx
mov		ecx, edx
mov		edx, edi
ror		eax, cl
nop
neg		eax
nop
nop
nop
nop
mov		ecx, eax
add		eax, 43A9E6F2h
ror		edx, cl
nop
mov		[ebp+var_10], eax
mov		eax, [ebp+var_14]
rol		edx, 6
xor		ebx, edx
add		eax, edx
neg		eax
mov		ecx, ebx
neg		ecx
mov		edi, eax
mov		[ebp+var_14], ecx
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
mov		ebx, [ebp+var_10]
nop
mov		eax, edx
nop
mov		esi, ebx
nop
nop
mov		ecx, edi
sub		edi, 2508E19Eh
rol		eax, cl
sub		esi, edi
nop
nop
nop
mov		edx, eax
nop
xor		ebx, esi
nop
mov		ecx, edi
ror		edx, cl
nop
add		edx, [ebp+var_14]
mov		edi, edx
neg		edi
nop
nop
mov		eax, ebx
nop
mov		ecx, edx
mov		edx, edi
ror		eax, cl
nop
mov		ebx, esi
xor		edx, eax
nop
nop
add		edx, edi
nop
neg		edx
nop
mov		ecx, eax
mov		eax, [ebp+var_14]
rol		ebx, cl
inc		eax
nop
nop
nop
mov		esi, edi
nop
nop
mov		ecx, edx
xor		edx, 9E55FD8Dh
rol		esi, cl
nop
mov		edi, ebx
nop
rol		edi, 0Dh
nop
rol		edi, 0Ch
nop
mov		ebx, edx
nop
neg		edi
mov		ecx, esi
xor		eax, edi
ror		edi, 0Dh
rol		ebx, cl
sub		eax, 64F4B2C7h
nop
sub		edi, eax
sub		ebx, 26B5C566h
ror		edi, 5
add		esi, ebx
nop
nop
sub		ebx, edi
nop
sub		ebx, 7A8DF9D5h
mov		edx, esi
not		ebx
nop
xor		ebx, edi
mov		ecx, edi
ror		ebx, 6
not		ebx
ror		edx, cl
nop
nop
nop
nop
mov		esi, eax
nop
add		edx, eax
mov		ecx, ebx
neg		edx
rol		edx, 8
ror		esi, cl
nop
mov		[ebp+var_8], esi
sub		esi, edx
add		edi, esi
sub		edx, 2B939AAEh
mov		[ebp+var_10], edi
mov		esi, edx
mov		[ebp+var_C], edx
mov		edi, ebx
nop
neg		esi
nop
nop
mov		ecx, esi
rol		edi, cl
mov		ecx, [ebp+var_8]
nop
mov		ebx, [ebp+var_10]
mov		eax, edi
sub		eax, ebx
not		edi
add		ecx, eax
ror		ebx, 8
mov		eax, [ebp+var_C]
add		edi, 7FE44739h
xor		ecx, edi
mov		[ebp+var_8], ecx
nop
mov		edx, ebx
nop
mov		ecx, esi
rol		edx, cl
mov		ecx, [ebp+var_8]
nop
sub		edi, ecx
rol		edx, 4
sub		ecx, eax
neg		edi
xor		ecx, 6C53E93Eh
not		eax
rol		eax, 4
not		ecx
mov		[ebp+var_8], ecx
mov		ebx, eax
neg		ebx
mov		esi, edi
nop
nop
nop
mov		ecx, eax
ror		esi, cl
nop
rol		esi, 9
dec		esi
mov		eax, esi
sub		eax, [ebp+var_8]
add		edx, eax
mov		eax, [ebp+var_8]
xor		ebx, edx
sub		eax, 5519EFC5h
rol		ebx, 6
xor		edx, esi
sub		ebx, eax
inc		edx
xor		eax, 0E9A3F9B6h
rol		ebx, 8
ror		eax, 0Eh
mov		edi, edx
add		ebx, eax
nop
nop
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
mov		[ebp+var_4], edi
mov		edi, esi
neg		edi
nop
nop
mov		edx, ebx
ror		eax, 0Ah
nop
mov		ecx, esi
rol		edi, 7
rol		edx, cl
nop
xor		edx, 41D188E8h
add		eax, edx
nop
mov		[ebp+var_8], eax
mov		ebx, [ebp+var_8]
nop
nop
mov		eax, edx
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
mov		esi, eax
nop
nop
mov		ecx, edi
ror		edi, 8
rol		esi, cl
neg		edi
nop
add		ebx, edi
mov		eax, [ebp+var_4]
add		eax, 30864B83h
rol		esi, 2
mov		[ebp+var_4], eax
ror		esi, 0Dh
rol		esi, 0Fh
not		esi
rol		ebx, 3
sub		eax, esi
mov		edx, esi
add		edi, eax
mov		eax, [ebp+var_4]
nop
xor		eax, 9264F911h
sub		eax, ebx
nop
nop
mov		[ebp+var_4], eax
nop
mov		ecx, edi
ror		edi, 8
sub		edi, eax
rol		edx, cl
xor		edi, eax
nop
xor		ebx, edi
add		edx, 0DE5C54Fh
lea		eax, [edi-5CF4C3BDh]
xor		eax, ebx
rol		ebx, 0Bh
add		eax, 0C948418h
xor		edx, eax
dec		eax
xor		ebx, edx
sub		ebx, 43771A0h
xor		ebx, 0FF060280h
add		eax, ebx
ror		ebx, 0Eh
xor		eax, 3A8633Dh
inc		eax
add		eax, ebx
add		ebx, 6CDEB045h
mov		[ebp+var_14], ebx
mov		ebx, eax
neg		ebx
nop
nop
mov		esi, edx
ror		ebx, 0Dh
nop
mov		ecx, eax
mov		eax, [ebp+var_14]
rol		esi, cl
mov		ecx, [ebp+var_4]
nop
not		ecx
xor		esi, eax
sub		ecx, 0B9E35FBh
xor		ecx, eax
not		eax
add		ecx, esi
add		eax, 73124474h
neg		ecx
lea		edi, [esi+14F8273Eh]
add		ebx, ecx
mov		edx, eax
neg		ebx
not		ecx
mov		[ebp+var_4], ecx
nop
mov		esi, [ebp+var_4]
nop
nop
mov		ecx, esi
ror		ebx, 6
xor		ebx, 3259CB39h
not		esi
add		edi, ebx
sub		esi, 32393F4h
rol		edi, 0Eh
xor		edi, eax
ror		edx, cl
nop
not		edi
xor		edx, ebx
ror		edi, 6
add		edx, 5FC80BB0h
not		edi
sub		ebx, edx
mov		eax, 11C87A24h
sub		ebx, esi
sub		eax, edx
add		ebx, 63856DD1h
sub		eax, edi
ror		ebx, 0Dh
not		edi
rol		ebx, 0Bh
not		edx
rol		ebx, 8
add		ebx, eax
ror		edi, 6
xor		edx, edi
lea		eax, [esi+7E936BFFh]
not		edi
add		ebx, 0E2E6D6F3h
not		edx
mov		[ebp+var_10], edi
add		ebx, edx
xor		eax, 5C7AE8BAh
nop
add		edx, eax
nop
mov		esi, edx
nop
xor		ebx, 90C2D3D5h
nop
add		ebx, eax
mov		ecx, edi
rol		esi, cl
nop
nop
nop
nop
mov		[ebp+var_14], esi
nop
nop
neg		eax
xor		eax, 5FEDAFFEh
mov		ecx, ebx
neg		eax
ror		edi, cl
not		ebx
nop
nop
nop
mov		esi, eax
nop
add		edi, 287C0CE9h
nop
mov		ecx, [ebp+var_14]
ror		esi, cl
nop
mov		eax, [ebp+var_14]
not		eax
xor		esi, ebx
nop
sub		ebx, esi
nop
mov		edx, ebx
nop
nop
mov		ecx, eax
rol		edx, cl
nop
nop
nop
nop
mov		[ebp+var_10], edx
mov		edx, edi
nop
mov		ecx, esi
xor		esi, 0F98CD349h
rol		edx, cl
mov		ecx, [ebp+var_10]
nop
rol		ecx, 1
lea		edi, [eax-1]
not		ecx
ror		edx, 0Ah
xor		edi, edx
mov		eax, 0E30A5180h
add		ecx, edi
sub		eax, esi
sub		edi, eax
not		ecx
add		edi, 4DDF393Fh
sub		edx, esi
not		edi
ror		edx, 0Eh
add		edi, 56DA3983h
ror		edi, 5
sub		eax, edi
sub		edi, ecx
add		eax, edi
not		edi
add		eax, ecx
mov		ebx, edi
neg		eax
neg		eax
lea		esi, [edi+edi]
sub		esi, edx
sub		esi, ecx
not		ecx
sub		ecx, 45A5F3D3h
mov		[ebp+var_10], ecx
nop
nop
nop
nop
mov		ecx, eax
rol		ebx, cl
nop
not		eax
mov		edi, [ebp+var_10]
neg		ebx
add		esi, edi
mov		[ebp+var_8], eax
mov		ecx, [ebp+var_8]
mov		eax, 964C6363h
sub		eax, ecx
rol		ebx, 1
add		ecx, esi
add		edi, eax
sub		ebx, ecx
mov		[ebp+var_8], ecx
nop
lea		eax, [esi-1]
nop
mov		edx, edi
nop
nop
mov		ecx, ebx
inc		ebx
rol		edx, cl
nop
rol		ebx, 5
add		edx, 742C536h
xor		eax, edx
mov		esi, edx
rol		eax, 0Eh
mov		edi, edx
sub		esi, eax
mov		eax, [ebp+var_8]
nop
ror		eax, 5
nop
xor		eax, 35DE01C4h
nop
sub		eax, esi
nop
mov		ecx, esi
sub		esi, ebx
rol		edi, cl
not		ebx
nop
sub		ebx, 6504EDF8h
not		edi
mov		edx, esi
add		edi, eax
xor		ebx, 0B6992C6h
xor		eax, 0A21CE9B1h
neg		ebx
nop
rol		ebx, 8
nop
nop
nop
mov		ecx, eax
xor		eax, 0F7264E2Eh
ror		edx, cl
nop
nop
mov		[ebp+var_8], eax
mov		esi, [ebp+var_8]
sub		edi, edx
xor		edi, ebx
nop
xor		ebx, 6B9A6FFEh
nop
mov		eax, ebx
xor		edx, 9AFD3C79h
nop
xor		edi, 93057BA1h
neg		edx
mov		ecx, esi
xor		edx, edi
not		edi
ror		eax, cl
nop
neg		edx
rol		edx, 0Fh
not		eax
sub		eax, edi
add		edx, 26EFAC41h
add		edi, edx
not		esi
add		eax, esi
rol		edx, 2
add		edx, edi
neg		esi
neg		edx
mov		[ebp+var_8], esi
nop
ror		edi, 8
nop
mov		[ebp+var_14], edi
nop
neg		eax
mov		ebx, esi
mov		esi, edx
nop
sub		ebx, eax
mov		eax, [ebp+var_8]
sub		ebx, edx
mov		ecx, eax
rol		esi, cl
nop
nop
lea		edi, [eax-1]
mov		eax, [ebp+var_14]
nop
nop
mov		edx, eax
nop
add		esi, 578A8524h
mov		ecx, ebx
add		edi, esi
ror		edx, cl
nop
nop
nop
nop
not		edx
mov		eax, edx
nop
mov		ecx, esi
rol		esi, 0Fh
rol		eax, cl
sub		esi, ebx
nop
mov		ecx, edi
xor		ecx, eax
ror		edi, 0Eh
not		ecx
mov		[ebp+var_10], edi
add		ecx, 0AF95D840h
nop
not		ebx
mov		[ebp+var_14], ecx
mov		edx, edi
nop
mov		edi, ebx
neg		edx
nop
nop
add		esi, 88632F20h
add		esi, ebx
mov		ecx, edx
rol		edi, cl
nop
nop
mov		ebx, esi
nop
mov		ecx, edx
ror		ebx, cl
mov		eax, [ebp+var_10]
nop
xor		eax, edi
mov		edx, [ebp+var_14]
add		ebx, eax
mov		[ebp+var_10], eax
sub		edi, 36734BE5h
nop
nop
mov		esi, edi
nop
mov		eax, ebx
nop
mov		ecx, ebx
ror		esi, cl
nop
nop
nop
nop
sub		esi, 2298459Bh
nop
mov		edi, esi
sub		edi, [ebp+var_10]
mov		ecx, edx
mov		[ebp+var_14], esi
ror		eax, cl
nop
sub		eax, 5022D44Bh
add		edx, eax
mov		esi, eax
xor		edx, eax
rol		edx, 0Dh
xor		edi, edx
neg		edx
nop
rol		edi, 0Fh
nop
mov		ebx, edx
nop
xor		edi, 5B0D1427h
nop
sub		edi, 3E4109D4h
mov		ecx, edx
rol		esi, cl
nop
nop
nop
not		esi
nop
xor		esi, edi
nop
mov		eax, esi
mov		ecx, [ebp+var_14]
xor		edi, 0E385CD7Eh
ror		ebx, cl
nop
mov		edx, [ebp+var_14]
add		edx, ebx
not		ebx
nop
nop
nop
nop
mov		ecx, edx
rol		eax, cl
nop
add		edx, eax
sub		eax, edi
rol		eax, 0Eh
xor		edi, 108B3171h
sub		eax, edx
neg		edi
xor		edx, eax
add		eax, 7AC2F231h
mov		[ebp+var_10], eax
ror		ebx, 0Ah
xor		ebx, edi
lea		ecx, [edx+3491FEB2h]
rol		ecx, 9
mov		edx, eax
dec		ecx
mov		[ebp+var_14], ebx
ror		ecx, 0Dh
neg		edx
add		ecx, eax
lea		esi, [edi+ebx*2]
mov		[ebp+var_C], ecx
nop
mov		edi, esi
nop
nop
mov		ecx, edx
rol		edi, cl
nop
nop
nop
nop
mov		esi, edi
mov		ecx, edx
rol		ebx, cl
nop
nop
mov		edx, ebx
nop
neg		edx
nop
nop
not		ebx
mov		ecx, edx
rol		esi, cl
nop
nop
mov		eax, ebx
mov		edi, [ebp+var_10]
mov		[ebp+var_14], esi
mov		esi, edi
nop
mov		ecx, edx
ror		esi, cl
nop
mov		edx, [ebp+var_C]
nop
nop
nop
mov		edi, esi
neg		edx
nop
mov		ecx, ebx
rol		edi, cl
nop
mov		esi, [ebp+var_14]
xor		edi, edx
not		esi
nop
add		edx, 2
nop
rol		edx, 0Dh
nop
nop
mov		ecx, edi
rol		edi, 0Eh
rol		eax, cl
nop
nop
nop
xor		esi, eax
nop
neg		eax
ror		eax, 7
mov		ebx, eax
nop
mov		ecx, edi
ror		ebx, cl
xor		edi, edx
nop
mov		[ebp+var_10], edi
mov		eax, [ebp+var_10]
neg		ebx
nop
rol		esi, 4
nop
rol		esi, 9
nop
rol		eax, 7
sub		edx, 4A1A67C2h
neg		eax
add		esi, edx
mov		edi, edx
nop
mov		ecx, ebx
sub		ebx, esi
rol		edi, cl
add		esi, eax
nop
not		esi
ror		edi, 7
neg		ebx
sub		esi, edi
mov		[ebp+var_14], ebx
not		edi
mov		edx, ebx
xor		eax, edi
neg		edx
mov		[ebp+var_10], eax
nop
xor		edi, 0D9D68F08h
nop
mov		ebx, esi
nop
nop
mov		ecx, edx
rol		ebx, cl
nop
mov		eax, [ebp+var_10]
nop
mov		esi, edi
mov		[ebp+var_C], ebx
nop
mov		ecx, edx
rol		esi, cl
nop
mov		edi, 0F27BF20h
sub		edi, [ebp+var_14]
xor		esi, edi
xor		eax, edi
nop
mov		[ebp+var_8], esi
nop
add		eax, edi
nop
mov		esi, eax
nop
mov		ecx, [ebp+var_8]
ror		esi, cl
nop
nop
mov		edx, esi
nop
neg		edx
nop
nop
mov		ecx, edx
ror		[ebp+var_C], cl
nop
nop
mov		ebx, edi
nop
mov		ecx, edx
ror		ebx, cl
mov		ecx, [ebp+var_8]
nop
mov		edx, [ebp+var_C]
xor		ebx, ecx
mov		eax, ecx
mov		edi, edx
sub		ecx, edx
xor		eax, esi
mov		esi, 50BFFEF8h
sub		esi, eax
sub		esi, ebx
rol		ebx, 0Ch
sub		ebx, ecx
sub		ecx, esi
not		ecx
rol		ecx, 0Fh
add		ebx, ecx
mov		eax, ecx
sub		eax, edx
neg		ecx
rol		ecx, 5
add		esi, eax
mov		[ebp+var_8], ecx
mov		eax, esi
nop
nop
nop
nop
mov		ecx, esi
rol		edi, cl
nop
mov		edx, [ebp+var_8]
add		edi, 3B1379AAh
xor		edx, ebx
ror		edi, 3
nop
mov		ebx, [ebp+var_8]
nop
sub		edx, edi
nop
nop
mov		ecx, edi
xor		edi, edx
ror		eax, cl
neg		edx
nop
neg		edi
not		eax
add		eax, 73084FBh
xor		eax, edi
xor		edi, edx
rol		eax, 10h
nop
inc		eax
nop
nop
mov		[ebp+var_14], eax
mov		eax, edx
nop
mov		ecx, edi
rol		eax, cl
nop
nop
mov		[ebp+var_4], eax
mov		esi, eax
nop
neg		esi
nop
nop
mov		ecx, esi
add		edi, eax
rol		ebx, cl
mov		eax, 7A5F6569h
nop
ror		ebx, 0Ch
mov		[ebp+var_8], ebx
rol		edi, 7
sub		eax, ebx
nop
add		edi, eax
mov		eax, [ebp+var_14]
mov		edx, eax
ror		edi, 2
nop
mov		ecx, esi
ror		edx, cl
nop
nop
neg		edx
rol		edx, 8
sub		edx, ebx
nop
mov		[ebp+var_C], edx
mov		ebx, edx
nop
mov		edx, [ebp+var_4]
neg		ebx
inc		edx
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
mov		eax, [ebp+var_8]
mov		ecx, edi
add		edx, ecx
add		eax, 0A945059Dh
add		eax, ecx
neg		ecx
ror		eax, 1
ror		ecx, 2
rol		eax, 0Dh
ror		ecx, 8
mov		edi, eax
mov		[ebp+var_10], ecx
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
mov		esi, [ebp+var_10]
nop
mov		eax, edx
neg		edi
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		edx, esi
xor		edx, [ebp+var_C]
not		esi
not		edx
rol		eax, 0Ch
not		eax
sub		eax, edx
ror		edx, 1
xor		edx, 79072083h
add		edx, 1C433901h
sub		esi, edx
lea		ebx, [edi+edx]
rol		edx, 4
xor		edx, esi
add		ebx, eax
neg		ebx
ror		edx, 0Bh
sub		edi, ebx
sub		esi, 454BFA32h
sub		edx, edi
add		ebx, edi
rol		edi, 0Fh
neg		edx
xor		edx, edi
mov		[ebp+var_14], edi
mov		[ebp+var_10], edx
sub		ebx, 61A8F734h
mov		edx, edi
neg		edx
nop
nop
mov		edi, esi
nop
nop
mov		ecx, edx
ror		edi, cl
nop
nop
mov		eax, 0F9D6AE60h
mov		esi, ebx
not		edi
nop
sub		eax, edi
mov		ecx, edx
rol		esi, cl
nop
mov		ebx, [ebp+var_10]
nop
ror		esi, 3
add		esi, eax
nop
mov		eax, [ebp+var_14]
nop
add		eax, ebx
mov		edx, esi
nop
neg		eax
mov		ecx, ebx
rol		edx, cl
lea		ecx, [ebx+9B0D3E3h]
add		ecx, edi
nop
xor		ebx, ecx
xor		edx, eax
xor		ecx, 222DBF1Bh
xor		edx, 22377BDCh
sub		ecx, ebx
rol		edx, 0Dh
not		edx
add		eax, 90558A52h
sub		ecx, edx
rol		eax, 0Eh
mov		[ebp+var_8], ecx
not		eax
add		eax, ebx
ror		[ebp+var_8], 6
not		ebx
ror		eax, 8
lea		esi, [ecx+edx]
ror		ebx, 5
not		esi
mov		edi, ebx
nop
sub		eax, edx
nop
mov		[ebp+var_14], eax
nop
mov		edx, eax
nop
neg		edx
mov		ecx, esi
not		esi
rol		edi, cl
nop
mov		ebx, esi
add		edi, eax
nop
nop
nop
mov		ecx, edx
ror		ebx, cl
nop
nop
mov		esi, edi
xor		ebx, [ebp+var_8]
nop
mov		ecx, edx
ror		esi, cl
nop
nop
nop
nop
not		esi
mov		eax, esi
mov		edi, ebx
nop
mov		ecx, ebx
rol		eax, cl
nop
mov		esi, [ebp+var_14]
sub		esi, ebx
sub		eax, ebx
xor		eax, [ebp+var_8]
nop
nop
mov		[ebp+var_10], eax
nop
mov		edx, eax
nop
nop
mov		ecx, esi
neg		edx
rol		esi, 7
rol		edi, cl
not		esi
nop
nop
mov		ebx, esi
nop
mov		ecx, edx
rol		ebx, cl
mov		ecx, [ebp+var_8]
nop
sub		edi, ecx
neg		ecx
mov		[ebp+var_8], ecx
mov		esi, ecx
nop
rol		edi, 9
nop
nop
mov		ecx, edx
ror		esi, cl
nop
rol		edi, 9
not		esi
add		edi, ebx
xor		esi, 0B802CAD3h
nop
nop
not		esi
nop
mov		eax, esi
nop
not		ebx
mov		ecx, edi
rol		eax, cl
nop
mov		esi, eax
lea		eax, [edi+6DE0C8A0h]
not		esi
add		eax, ebx
nop
mov		edx, eax
nop
nop
nop
mov		ecx, esi
not		esi
rol		edx, cl
nop
ror		esi, 9
mov		edi, [ebp+var_10]
nop
nop
add		edi, 0EA4FDAF9h
nop
xor		edi, 8A442870h
sub		edi, edx
mov		eax, 1
sub		eax, ebx
xor		edi, 50900145h
mov		ebx, edx
ror		edi, 7
nop
neg		edi
mov		ecx, esi
add		esi, eax
neg		eax
rol		ebx, cl
xor		eax, esi
nop
ror		ebx, 0Ch
rol		ebx, 0Dh
xor		eax, ebx
sub		ebx, esi
xor		esi, 0DC5B2BBh
ror		eax, 0Ch
nop
rol		eax, 3
nop
sub		esi, 7B2C4A86h
nop
mov		edx, esi
nop
xor		edi, eax
mov		ecx, ebx
ror		edx, cl
nop
lea		esi, [eax-12D86496h]
xor		edx, 5CAD250Fh
xor		esi, edx
sub		edx, ebx
xor		edi, edx
neg		esi
add		ebx, edi
xor		edx, ebx
neg		ebx
xor		edi, ebx
mov		[ebp+var_14], ebx
nop
mov		eax, edi
nop
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
nop
nop
mov		edi, [ebp+var_14]
nop
mov		ebx, eax
xor		esi, eax
nop
mov		ecx, edx
ror		ebx, cl
nop
nop
nop
nop
mov		eax, edx
nop
sub		edi, ebx
mov		ecx, esi
rol		eax, cl
nop
add		ebx, edi
nop
mov		[ebp+var_10], ebx
nop
add		esi, ebx
nop
rol		esi, 0Bh
mov		edx, eax
nop
mov		ecx, ebx
ror		edx, cl
nop
mov		eax, esi
sub		eax, edi
rol		esi, 0Bh
nop
mov		[ebp+var_14], eax
nop
mov		ebx, edx
nop
nop
mov		ecx, eax
mov		eax, esi
ror		ebx, cl
nop
mov		edx, [ebp+var_10]
rol		ebx, 0Dh
neg		ebx
mov		edi, ebx
mov		[ebp+var_C], ebx
neg		edi
nop
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		esi, [ebp+var_14]
xor		edx, esi
mov		ebx, eax
not		edx
add		esi, 20D12810h
nop
nop
nop
nop
mov		ecx, edx
add		edx, edi
rol		ebx, cl
xor		edi, esi
nop
not		edx
sub		ebx, [ebp+var_C]
xor		edx, ebx
nop
lea		eax, [edi+2DC60F37h]
nop
nop
mov		edi, 1481FA23h
sub		edi, esi
add		eax, ebx
mov		esi, edx
nop
mov		ecx, ebx
xor		ebx, edi
ror		esi, cl
nop
mov		edx, 0E0516D4Bh
sub		edx, eax
dec		esi
mov		eax, 0A93C7ADBh
sub		eax, ebx
mov		ebx, edi
nop
mov		edi, esi
nop
nop
nop
mov		ecx, ebx
not		ebx
rol		edi, cl
nop
ror		ebx, 2
xor		edi, edx
neg		ebx
sub		edi, 68F41DA8h
rol		ebx, 0Eh
nop
mov		[ebp+var_8], edi
mov		esi, [ebp+var_8]
nop
nop
mov		edi, eax
nop
inc		edx
mov		ecx, esi
xor		esi, ebx
rol		edi, cl
nop
mov		eax, ebx
sub		eax, edx
xor		ebx, 856BF50Ch
add		edi, eax
nop
nop
mov		eax, edx
nop
nop
mov		ecx, ebx
ror		eax, cl
nop
mov		edx, esi
nop
mov		esi, ebx
nop
neg		eax
nop
add		eax, 1CC54C6Fh
nop
xor		eax, edi
mov		ecx, edx
ror		edx, 7
xor		edx, edi
rol		esi, cl
mov		ecx, eax
nop
xor		eax, 64B1011Ah
xor		esi, edi
rol		eax, 0Ah
xor		edx, esi
add		eax, 1782D879h
not		esi
add		esi, edi
not		edi
sub		ecx, edi
sub		edx, edi
mov		[ebp+var_10], ecx
mov		[ebp+var_8], edx
add		edx, eax
nop
mov		eax, esi
nop
mov		ebx, edx
nop
nop
mov		ecx, edx
ror		eax, cl
nop
mov		esi, eax
neg		esi
nop
nop
nop
mov		[ebp+var_C], esi
mov		ecx, eax
rol		ebx, cl
mov		ecx, [ebp+var_8]
nop
add		ecx, 4A2BB9Bh
nop
mov		[ebp+var_8], ecx
mov		edi, ecx
mov		edx, ebx
nop
neg		edx
nop
nop
mov		ecx, edx
not		ebx
ror		edi, cl
nop
mov		ecx, [ebp+var_10]
neg		edi
xor		ecx, edi
sub		ecx, 347FE715h
ror		ecx, 0Bh
not		ecx
mov		[ebp+var_10], ecx
nop
nop
mov		eax, 1
mov		ecx, edx
nop
ror		esi, cl
mov		edx, esi
mov		esi, [ebp+var_10]
rol		edx, 0Dh
not		esi
rol		edx, 6
neg		edx
ror		esi, 4
sub		eax, edx
nop
add		edi, eax
nop
mov		[ebp+var_14], edi
nop
mov		edi, ebx
nop
mov		ecx, edx
not		edx
ror		edi, cl
nop
mov		[ebp+var_C], edx
nop
neg		edi
nop
ror		edi, 9
mov		ebx, esi
neg		edx
nop
nop
not		edi
mov		ecx, edx
rol		edi, 1
ror		ebx, cl
not		edi
nop
rol		edi, 3
mov		esi, [ebp+var_14]
add		ebx, 9DC65AFh
add		esi, ebx
mov		[ebp+var_10], ebx
mov		ebx, edi
nop
nop
neg		esi
mov		ecx, edx
rol		ebx, cl
nop
mov		edx, esi
mov		eax, ebx
neg		eax
nop
mov		edi, eax
mov		[ebp+var_14], eax
mov		eax, [ebp+var_C]
nop
nop
mov		ecx, edi
rol		edx, cl
nop
mov		esi, eax
nop
nop
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
mov		eax, edx
nop
mov		ecx, edi
rol		eax, cl
nop
nop
mov		[ebp+var_C], esi
mov		esi, [ebp+var_10]
mov		edx, eax
nop
mov		ecx, edi
ror		edx, cl
mov		ebx, [ebp+var_C]
nop
mov		eax, esi
nop
nop
nop
nop
mov		ecx, edx
not		edx
ror		eax, cl
nop
nop
nop
mov		esi, [ebp+var_14]
nop
mov		edi, esi
xor		eax, ebx
nop
mov		ecx, edx
ror		edi, cl
lea		ecx, [edx+ebx]
nop
neg		ecx
add		edi, ebx
mov		[ebp+var_C], ecx
add		eax, edi
dec		ebx
nop
mov		esi, eax
nop
xor		edi, ebx
nop
nop
mov		ecx, ebx
not		ebx
ror		esi, cl
nop
add		edi, esi
sub		edi, ebx
sub		edi, 578D0BD2h
not		edi
ror		edi, 1
add		esi, 1D87D9B9h
nop
mov		edx, ebx
nop
nop
nop
mov		ecx, edi
add		edi, esi
ror		edx, cl
not		edi
nop
rol		esi, 5
mov		ebx, [ebp+var_C]
xor		edi, edx
rol		edi, 1
xor		ebx, 0A8E194EFh
nop
mov		eax, edx
nop
not		ebx
nop
ror		ebx, 1
nop
not		ebx
mov		ecx, edi
rol		ebx, 3
not		esi
rol		eax, cl
xor		esi, 610E9E56h
nop
nop
add		edi, eax
nop
xor		eax, ebx
nop
sub		ebx, esi
mov		edx, 57A9C7F3h
mov		[ebp+var_C], ebx
sub		edx, esi
mov		ebx, edi
rol		edx, 0Ch
nop
mov		ecx, esi
ror		ebx, cl
mov		ecx, [ebp+var_C]
nop
lea		esi, [ecx+eax]
xor		esi, edx
add		edx, ebx
add		ecx, esi
not		ebx
mov		[ebp+var_C], ecx
xor		edx, ebx
nop
mov		edi, edx
nop
nop
nop
mov		ecx, ebx
ror		edi, cl
nop
add		edi, ebx
rol		ebx, 0Bh
neg		edi
not		ebx
add		edi, 2124588Fh
nop
add		edi, ebx
nop
mov		eax, edi
nop
xor		eax, esi
not		edi
mov		esi, [ebp+var_C]
xor		eax, 90060A39h
mov		edx, esi
xor		edi, ebx
nop
mov		ecx, ebx
not		ebx
add		edi, ebx
ror		edx, cl
nop
nop
mov		[ebp+var_C], edi
nop
nop
mov		esi, eax
dec		edx
nop
mov		ecx, edi
mov		edi, edx
rol		esi, cl
nop
nop
nop
nop
sub		esi, 61DAF822h
nop
not		esi
mov		ecx, ebx
rol		edi, cl
nop
mov		edx, [ebp+var_C]
not		edi
lea		eax, [edi+esi]
xor		esi, ebx
sub		edx, eax
rol		edi, 0Ch
mov		[ebp+var_C], edx
add		edi, esi
sub		edx, ebx
mov		eax, esi
sub		edx, edi
neg		edi
inc		edx
ror		edi, 2
nop
dec		edi
nop
mov		ebx, edi
nop
nop
mov		ecx, edx
ror		eax, cl
nop
mov		esi, [ebp+var_C]
add		eax, esi
add		esi, 3F154F15h
mov		[ebp+var_14], eax
nop
nop
mov		[ebp+var_C], esi
nop
mov		eax, edx
nop
mov		ecx, esi
rol		eax, cl
nop
neg		eax
mov		edx, eax
neg		edx
nop
nop
nop
mov		ecx, eax
rol		ebx, cl
nop
nop
nop
ror		ebx, 0Ch
nop
nop
mov		ecx, [ebp+var_14]
nop
rol		esi, cl
nop
rol		edx, 0Eh
xor		esi, ebx
mov		edi, edx
xor		ebx, esi
neg		esi
nop
mov		eax, ebx
nop
nop
nop
mov		ecx, esi
ror		esi, 1
rol		edi, cl
neg		esi
nop
nop
nop
nop
lea		edx, [esi+66BACD58h]
nop
mov		ecx, edi
rol		edx, 7
ror		eax, cl
nop
ror		edx, 6
mov		ebx, [ebp+var_14]
add		eax, 0ECE91BBBh
add		eax, esi
rol		edi, 9
add		ebx, 2E48D7BFh
xor		edx, 0B6B029D3h
rol		edx, 10h
not		ebx
xor		ebx, 0D63B346Ch
neg		edi
sub		ebx, eax
nop
nop
not		eax
nop
mov		[ebp+var_C], eax
mov		eax, edi
xor		ebx, 0DC1F2425h
nop
sub		ebx, edx
mov		ecx, edx
rol		eax, cl
nop
mov		edi, edx
xor		eax, edx
sub		eax, [ebp+var_C]
inc		eax
add		eax, edx
xor		eax, 2BAF1DCAh
not		eax
nop
sub		ebx, eax
nop
nop
nop
mov		ecx, eax
add		eax, 17DFA3Dh
ror		edi, cl
mov		esi, eax
nop
xor		ebx, edi
nop
nop
nop
nop
mov		ecx, ebx
ror		esi, cl
not		edi
mov		ecx, [ebp+var_C]
nop
neg		ecx
xor		edi, 661CD548h
rol		ecx, 0Bh
not		edi
xor		edi, ebx
mov		eax, 51FC1384h
sub		eax, edi
mov		edx, esi
add		ecx, eax
xor		ebx, 387D55A6h
mov		[ebp+var_C], ecx
sub		ebx, 2A92F014h
nop
nop
nop
nop
mov		ecx, edi
rol		edx, cl
nop
sub		edx, ebx
sub		edi, edx
mov		eax, edi
mov		[ebp+var_14], edi
xor		eax, ebx
mov		edi, edx
mov		ebx, [ebp+var_C]
sub		edi, eax
mov		eax, [ebp+var_14]
sub		ebx, edi
xor		edx, eax
ror		edi, 0Ch
nop
rol		edi, 8
nop
mov		esi, edx
nop
sub		edi, ebx
nop
xor		ebx, 11EE941h
mov		ecx, eax
mov		eax, ebx
ror		esi, cl
nop
nop
mov		[ebp+var_10], esi
nop
nop
nop
mov		ecx, esi
ror		eax, cl
nop
nop
nop
nop
mov		esi, eax
nop
mov		ecx, edi
rol		esi, cl
nop
mov		eax, [ebp+var_10]
mov		ebx, eax
mov		edx, esi
xor		ebx, edi
mov		edi, [ebp+var_14]
inc		edi
neg		ebx
not		edi
nop
add		edi, eax
nop
ror		eax, 0Ah
sub		eax, 25ABAE04h
nop
nop
mov		ecx, ebx
rol		ebx, 8
rol		edx, cl
nop
nop
nop
nop
mov		esi, eax
nop
mov		ecx, edi
rol		esi, cl
nop
xor		esi, edx
ror		esi, 5
lea		eax, [esi+edx]
ror		esi, 0Dh
add		edi, eax
xor		esi, ebx
mov		[ebp+var_10], edi
mov		eax, ebx
mov		edi, 0BBB7790Ah
sub		edi, edx
mov		edx, [ebp+var_10]
xor		edx, esi
not		esi
nop
sub		esi, 782713E2h
nop
xor		esi, edi
nop
not		edi
nop
mov		ecx, edx
rol		eax, cl
nop
mov		ebx, eax
mov		eax, esi
nop
nop
nop
nop
mov		ecx, ebx
rol		eax, cl
nop
nop
nop
neg		eax
mov		esi, edx
mov		edx, eax
rol		esi, 9
nop
ror		esi, 5
nop
not		esi
mov		ecx, edi
sub		ebx, esi
sub		edi, esi
ror		edx, cl
xor		ebx, esi
nop
neg		edi
neg		edx
ror		edi, 3
mov		eax, 9DEED944h
neg		edi
sub		eax, edx
add		esi, eax
mov		eax, edi
sub		ebx, esi
sub		eax, edx
lea		esi, [esi+edx*2]
rol		esi, 3
add		esi, edi
nop
nop
nop
mov		edx, edi
nop
not		ebx
mov		ecx, esi
inc		esi
rol		edx, cl
nop
mov		edi, ebx
add		eax, edx
not		edx
nop
xor		eax, 5AC374F0h
nop
neg		eax
nop
nop
mov		ecx, edx
rol		edi, cl
nop
mov		ebx, edx
sub		edi, eax
xor		eax, esi
neg		esi
nop
nop
nop
nop
mov		ecx, esi
add		esi, 7226E26Eh
sub		eax, esi
rol		ebx, cl
neg		esi
nop
nop
mov		[ebp+var_10], esi
mov		edx, [ebp+var_10]
nop
nop
ror		ebx, 1
mov		esi, eax
xor		ebx, edx
nop
mov		ecx, edx
rol		esi, cl
nop
mov		eax, 79C94B18h
rol		esi, 0Ch
sub		eax, edx
sub		eax, esi
not		esi
add		edi, eax
rol		esi, 10h
xor		esi, 42C0927h
mov		eax, ebx
add		esi, edi
neg		eax
xor		edx, esi
mov		[ebp+var_14], eax
mov		[ebp+var_10], edx
nop
lea		edx, [edi+1]
mov		edi, esi
rol		edx, 0Fh
nop
nop
mov		ecx, eax
rol		edi, cl
nop
nop
mov		esi, edx
nop
mov		ecx, eax
ror		esi, cl
rol		edi, 9
nop
mov		ebx, [ebp+var_14]
add		esi, 668E852Ch
mov		edx, [ebp+var_10]
sub		edi, ebx
sub		edx, esi
xor		ebx, 13C92282h
add		edi, ebx
mov		eax, edx
nop
neg		esi
nop
xor		ebx, 4C7AAC61h
nop
not		ebx
nop
mov		ecx, edi
rol		eax, cl
nop
neg		eax
xor		eax, esi
add		esi, 1DEA907Eh
mov		[ebp+var_14], eax
mov		edx, esi
nop
mov		[ebp+var_C], esi
nop
neg		edx
mov		esi, edi
nop
nop
mov		ecx, edx
ror		esi, cl
nop
nop
mov		eax, [ebp+var_C]
mov		[ebp+var_10], esi
mov		esi, ebx
nop
mov		ecx, edx
rol		esi, cl
mov		edx, [ebp+var_10]
nop
mov		ebx, [ebp+var_14]
mov		edi, esi
nop
nop
nop
nop
mov		ecx, ebx
rol		edi, cl
nop
xor		edi, edx
rol		edx, 3
sub		ebx, edi
not		edi
not		ebx
add		eax, edi
add		ebx, edx
neg		eax
rol		edx, 1
xor		edx, edi
ror		eax, 7
neg		edx
neg		eax
nop
mov		esi, eax
nop
xor		edi, ebx
nop
ror		ebx, 0Dh
nop
add		ebx, 6974F1D4h
mov		ecx, edx
not		ebx
rol		esi, cl
nop
add		edx, esi
neg		esi
mov		eax, edx
rol		esi, 4
nop
nop
nop
nop
mov		ecx, esi
rol		esi, 0Ch
ror		eax, cl
not		esi
nop
xor		edi, esi
mov		edx, eax
neg		edi
ror		edx, 3
dec		edi
sub		edx, ebx
ror		ebx, 0Bh
add		esi, ebx
not		edx
rol		ebx, 0Eh
nop
nop
rol		ebx, 7
nop
xor		ebx, esi
mov		eax, ebx
xor		edx, 0A89E30FDh
nop
not		edx
mov		ecx, esi
add		edx, edi
ror		edx, 0Ch
rol		eax, cl
nop
nop
rol		esi, 7
mov		ebx, eax
nop
nop
xor		ebx, 8DE2F2ABh
mov		eax, ebx
sub		eax, edi
add		eax, 452E8A3Ah
mov		edi, eax
nop
mov		ecx, edx
add		edx, 2328BF30h
ror		edi, cl
nop
mov		eax, 58023645h
xor		edi, edx
sub		eax, ebx
add		esi, eax
nop
nop
neg		edx
nop
rol		edx, 0Fh
mov		eax, esi
not		edx
nop
mov		ecx, edi
mov		[ebp+var_C], edx
ror		eax, cl
nop
nop
nop
mov		esi, [ebp+var_C]
nop
mov		edx, eax
nop
mov		ecx, esi
ror		edx, cl
nop
xor		ebx, esi
neg		edx
xor		ebx, edi
mov		eax, edi
add		esi, ebx
nop
nop
mov		[ebp+var_C], esi
nop
mov		esi, edx
nop
mov		ecx, ebx
dec		ebx
rol		esi, cl
nop
mov		[ebp+var_10], ebx
nop
nop
nop
nop
mov		ecx, esi
rol		eax, cl
nop
nop
nop
nop
mov		[ebp+var_14], eax
mov		eax, esi
mov		edi, 1
sub		edi, [ebp+var_C]
nop
mov		ecx, ebx
ror		edi, 1
rol		eax, cl
xor		edi, ebx
nop
nop
nop
mov		ebx, eax
nop
mov		edx, edi
nop
mov		ecx, edi
ror		ebx, cl
nop
nop
mov		esi, ebx
nop
neg		esi
nop
nop
xor		ebx, 0B5185008h
mov		ecx, esi
not		ebx
rol		edx, cl
nop
mov		edi, [ebp+var_14]
mov		ecx, edi
dec		edi
sub		ecx, [ebp+var_10]
mov		[ebp+var_10], ecx
nop
mov		eax, edx
nop
mov		ecx, esi
rol		eax, cl
nop
mov		edx, [ebp+var_10]
ror		edx, 4
nop
mov		[ebp+var_4], eax
nop
mov		eax, edi
nop
nop
mov		ecx, edx
ror		eax, cl
nop
mov		edi, ebx
nop
nop
nop
nop
mov		ecx, eax
rol		edi, cl
nop
mov		ebx, [ebp+var_4]
not		ebx
rol		ebx, 7
sub		ebx, edi
add		edi, eax
sub		eax, ebx
ror		ebx, 6
sub		edx, eax
add		eax, edi
rol		edx, 0Bh
neg		eax
add		edx, 3024AD80h
rol		edi, 0Fh
nop
mov		esi, eax
nop
sub		ebx, edx
nop
rol		ebx, 5
nop
mov		ecx, edx
rol		ebx, 0Ch
ror		esi, cl
nop
ror		ebx, 7
xor		esi, edi
mov		eax, 1
xor		edx, esi
sub		eax, esi
ror		edx, 7
nop
nop
add		edx, eax
nop
mov		[ebp+var_10], edx
nop
not		edi
nop
xor		edi, ebx
mov		ecx, esi
xor		edi, 6B311D02h
ror		edx, cl
nop
mov		eax, esi
sub		edx, 6FA20699h
nop
nop
nop
nop
mov		ecx, edx
add		edx, edi
rol		eax, cl
neg		edx
nop
nop
nop
xor		eax, 19F61C6Eh
nop
mov		esi, eax
nop
mov		ecx, edi
rol		esi, cl
nop
neg		esi
sub		ebx, 7F74DF97h
mov		[ebp+var_4], ebx
mov		eax, edx
nop
mov		ebx, esi
nop
xor		edi, 0AC037311h
nop
sub		ebx, edi
nop
mov		edi, 68D7CD69h
mov		ecx, [ebp+var_4]
rol		eax, cl
nop
sub		esi, eax
sub		edi, eax
lea		eax, [esi-21D76F12h]
mov		esi, [ebp+var_4]
xor		eax, 0AC490F54h
not		esi
mov		edx, eax
nop
nop
nop
nop
mov		ecx, esi
rol		edx, cl
nop
mov		eax, esi
add		eax, ebx
xor		edx, edi
xor		ebx, 80F2BE9Fh
mov		esi, edx
nop
not		eax
nop
nop
nop
mov		ecx, ebx
rol		ebx, 0Ah
ror		esi, cl
xor		edi, ebx
nop
xor		ebx, 1D62D2CDh
not		esi
add		esi, 598F35A8h
xor		eax, esi
lea		ecx, [edi+1DF9DCDAh]
neg		eax
xor		esi, edi
mov		[ebp+var_4], eax
add		ecx, ebx
mov		edi, [ebp+var_4]
nop
nop
mov		[ebp+var_C], ecx
nop
mov		edx, esi
neg		edx
nop
mov		ecx, edx
ror		edi, cl
nop
nop
mov		eax, ebx
nop
mov		ecx, edx
rol		eax, cl
nop
mov		ebx, [ebp+var_C]
xor		eax, 5A005831h
lea		edx, [ebx+esi]
neg		edx
rol		edx, 1
xor		edx, ebx
neg		edx
xor		edi, edx
add		edi, eax
rol		ebx, 0Ah
neg		edi
xor		edi, edx
add		ebx, 1141775Eh
rol		ebx, 1
mov		esi, edi
rol		ebx, 0Ch
not		eax
nop
mov		[ebp+var_8], eax
nop
mov		[ebp+var_C], ebx
nop
nop
mov		ecx, ebx
ror		esi, cl
nop
nop
nop
nop
mov		eax, edx
nop
neg		esi
mov		ecx, [ebp+var_8]
mov		ebx, esi
neg		ebx
rol		eax, cl
nop
nop
sub		eax, 15333B83h
nop
not		eax
mov		edx, eax
nop
mov		ecx, esi
mov		esi, [ebp+var_C]
ror		edx, cl
not		esi
nop
mov		eax, [ebp+var_8]
sub		esi, eax
sub		edx, ebx
rol		esi, 6
mov		edi, edx
add		esi, eax
add		eax, esi
add		esi, 1E74E1A5h
nop
mov		[ebp+var_C], esi
nop
nop
nop
lea		esi, [eax+27FCF71Bh]
mov		ecx, eax
not		esi
mov		eax, 1
sub		eax, [ebp+var_C]
rol		edi, cl
nop
xor		ebx, edi
add		edi, eax
neg		ebx
mov		[ebp+var_8], edi
not		ebx
nop
mov		edx, ebx
nop
neg		edx
nop
nop
mov		ecx, edx
rol		[ebp+var_8], cl
nop
nop
mov		edi, esi
nop
mov		ecx, edx
rol		edi, cl
nop
mov		esi, [ebp+var_C]
xor		edi, ebx
not		esi
sub		esi, ebx
rol		edi, 1
nop
sub		esi, 7EC47BAEh
nop
add		ebx, esi
nop
mov		eax, ebx
nop
mov		ecx, edi
rol		edi, 0Ah
ror		eax, cl
nop
mov		ebx, edi
sub		eax, 72CDF8B6h
nop
mov		edx, eax
nop
nop
nop
mov		ecx, eax
ror		ebx, cl
nop
nop
nop
nop
nop
mov		ecx, ebx
ror		ebx, 0Bh
rol		edx, cl
nop
mov		eax, [ebp+var_8]
lea		edi, [esi+eax]
add		eax, edx
xor		edi, 65873F3Ch
mov		[ebp+var_8], eax
sub		edi, 17588598h
mov		eax, edx
ror		edi, 2
mov		esi, 1D45CDC8h
nop
sub		esi, ebx
nop
nop
nop
mov		ecx, edi
rol		eax, cl
nop
nop
nop
nop
mov		edx, eax
nop
mov		ecx, ebx
ror		edx, cl
mov		ecx, [ebp+var_8]
nop
ror		edx, 0Ch
lea		eax, [edi+1]
add		edx, 1B095728h
xor		esi, ecx
mov		ebx, edx
not		eax
sub		ebx, ecx
not		ebx
add		ebx, ecx
not		ebx
nop
nop
nop
mov		edx, eax
mov		edi, 0FFBC221Dh
nop
mov		ecx, ebx
rol		edx, cl
nop
mov		eax, 0A62187B1h
sub		eax, esi
dec		edx
sub		edi, edx
ror		eax, 4
sub		edi, [ebp+var_8]
xor		eax, ebx
add		edx, 47DCD97h
nop
nop
mov		esi, edx
nop
xor		ebx, 8FDBBC72h
nop
sub		ebx, 1C0EF0B4h
mov		ecx, edi
rol		esi, cl
nop
nop
nop
nop
mov		edx, esi
mov		esi, eax
add		edx, 58591872h
nop
mov		ecx, ebx
rol		esi, cl
nop
nop
nop
nop
mov		eax, ebx
nop
mov		ecx, edx
ror		eax, cl
nop
mov		ebx, eax
xor		edi, ebx
xor		ebx, 2557FFE9h
sub		edx, edi
nop
nop
add		edi, edx
nop
mov		eax, edi
nop
neg		edx
mov		ecx, ebx
mov		[ebp+var_C], edx
xor		ebx, 2B4D3264h
rol		eax, cl
add		ebx, 3249206Dh
nop
nop
add		eax, edx
nop
nop
mov		edx, eax
nop
mov		ecx, esi
not		esi
ror		edx, cl
nop
mov		eax, [ebp+var_C]
rol		eax, 0Ah
nop
sub		esi, eax
nop
nop
mov		edi, esi
nop
mov		ecx, eax
not		eax
rol		edi, cl
xor		eax, 0FDE97793h
ror		eax, 4
lea		ecx, [ebx+2FD5AD25h]
dec		eax
add		ecx, edx
rol		eax, 7
nop
sub		eax, 12627DDDh
mov		[ebp+var_8], ecx
rol		eax, 0Ch
not		eax
rol		edi, 5
add		edi, ebx
mov		[ebp+var_C], eax
add		ebx, edi
nop
nop
mov		[ebp+var_10], ebx
nop
nop
nop
mov		edx, edi
neg		edx
mov		ecx, edx
ror		ebx, cl
nop
nop
nop
mov		esi, [ebp+var_C]
not		ebx
nop
mov		ecx, edx
ror		esi, cl
nop
rol		ebx, 0Fh
mov		eax, [ebp+var_8]
add		ebx, edi
lea		edx, [eax+edi]
not		eax
nop
mov		[ebp+var_8], eax
nop
mov		eax, esi
nop
mov		edi, ebx
nop
neg		edx
mov		ecx, [ebp+var_8]
rol		eax, cl
nop
rol		eax, 10h
nop
nop
nop
nop
mov		ecx, eax
rol		eax, 2
rol		edi, cl
mov		ecx, eax
nop
neg		ecx
mov		ebx, [ebp+var_8]
add		edi, ebx
mov		[ebp+var_14], ecx
sub		ebx, edi
nop
mov		esi, ebx
add		edi, ebx
nop
mov		ecx, eax
ror		esi, cl
nop
neg		edi
mov		ebx, [ebp+var_14]
add		edx, 897C2BA0h
ror		edi, 5
ror		edx, 0Bh
ror		ebx, 0Fh
mov		eax, edx
add		ebx, 74AF8E81h
rol		esi, 0Ch
xor		ebx, edi
ror		esi, 5
nop
add		edi, esi
nop
nop
nop
mov		ecx, ebx
add		ebx, 6A5A3A90h
ror		eax, cl
xor		edi, ebx
nop
ror		edi, 7
add		eax, 5217E701h
mov		edx, esi
add		eax, esi
neg		edi
nop
ror		edi, 9
nop
xor		edi, eax
nop
not		ebx
nop
mov		ecx, eax
rol		eax, 8
ror		edx, cl
nop
nop
nop
mov		esi, eax
nop
nop
neg		edx
ror		edx, 6
mov		ecx, ebx
neg		edx
rol		esi, cl
xor		edx, 7998EC88h
nop
add		edx, 49F90DFh
add		esi, edx
lea		eax, [ebx+1]
not		eax
sub		edx, 22D72DD3h
add		eax, 2665C0ABh
nop
add		esi, eax
nop
sub		eax, 0FAA502Fh
mov		[ebp+var_C], esi
mov		esi, eax
nop
add		edi, eax
nop
mov		ecx, edx
rol		edi, 0Eh
rol		esi, cl
nop
mov		eax, [ebp+var_C]
ror		eax, 5
not		eax
xor		eax, 0A71814BEh
neg		eax
sub		edx, eax
sub		eax, edi
not		eax
sub		edi, eax
neg		edx
neg		eax
ror		edi, 0Dh
rol		eax, 8
neg		edi
xor		esi, edi
ror		edx, 0Fh
neg		eax
ror		edi, 6
xor		eax, edi
xor		esi, 91AD5743h
neg		edx
neg		esi
xor		eax, edx
rol		esi, 0Fh
rol		eax, 6
mov		ebx, edi
add		eax, edi
sub		ebx, edx
neg		eax
not		ebx
sub		esi, ebx
mov		[ebp+var_C], eax
nop
ror		esi, 0Ah
nop
add		edi, ebx
nop
xor		esi, 0CE83B15Dh
not		esi
mov		eax, edi
nop
sub		esi, ebx
mov		ecx, [ebp+var_C]
inc		esi
mov		[ebp+var_14], esi
rol		eax, cl
mov		esi, ebx
nop
xor		eax, ebx
neg		ebx
sub		esi, eax
xor		ebx, 0F9C1735Ah
mov		eax, [ebp+var_14]
mov		edi, esi
mov		edx, eax
rol		ebx, 0Ch
nop
neg		edx
nop
nop
neg		ebx
mov		ecx, edx
ror		edi, cl
nop
mov		eax, [ebp+var_C]
nop
mov		esi, ebx
nop
mov		ecx, edx
ror		esi, cl
nop
xor		eax, esi
sub		esi, edi
neg		eax
nop
xor		eax, edi
nop
xor		eax, 8BBBFEBBh
nop
neg		eax
mov		edx, eax
nop
mov		ecx, esi
ror		edx, cl
nop
mov		[ebp+var_10], edx
mov		eax, esi
mov		ebx, edx
sub		eax, edi
neg		ebx
nop
mov		edx, eax
nop
nop
nop
mov		ecx, ebx
rol		edx, cl
nop
mov		eax, [ebp+var_14]
add		eax, 7276DDBBh
xor		eax, [ebp+var_10]
rol		eax, 0Bh
sub		eax, edx
add		edx, esi
add		esi, [ebp+var_10]
not		eax
mov		[ebp+var_C], esi
lea		esi, [eax+edx]
mov		edx, [ebp+var_C]
not		esi
nop
sub		eax, esi
nop
nop
nop
mov		ecx, esi
not		esi
rol		edx, cl
nop
sub		esi, [ebp+var_10]
mov		edi, eax
nop
mov		ecx, ebx
ror		edi, cl
nop
nop
rol		esi, 10h
nop
nop
mov		[ebp+var_C], edi
nop
mov		eax, esi
nop
lea		ebx, [edx+33F60D2Dh]
mov		ecx, edi
rol		ebx, 7
ror		eax, cl
nop
mov		esi, [ebp+var_10]
not		eax
mov		edi, eax
lea		esi, [edx+esi]
rol		esi, 6
xor		esi, eax
nop
nop
nop
nop
mov		ecx, esi
xor		esi, 0A7565899h
ror		edi, cl
mov		edx, esi
nop
nop
nop
nop
nop
mov		ecx, edi
rol		edx, cl
nop
nop
nop
nop
mov		eax, edi
nop
mov		ecx, ebx
ror		eax, cl
nop
sub		eax, 1E5C3E26h
mov		[ebp+var_14], eax
mov		eax, 0B4E3B060h
sub		eax, ebx
mov		ebx, [ebp+var_C]
not		ebx
mov		esi, eax
sub		esi, edx
mov		[ebp+var_C], ebx
nop
mov		edx, eax
nop
mov		edi, esi
nop
nop
mov		ecx, ebx
mov		ebx, [ebp+var_14]
ror		edx, cl
sub		ebx, 510978D5h
nop
mov		eax, 89AD87Ch
nop
nop
nop
nop
mov		ecx, edx
rol		edi, cl
nop
nop
nop
nop
ror		edi, 9
mov		esi, edx
dec		edi
nop
not		edi
mov		ecx, ebx
ror		esi, cl
mov		ecx, [ebp+var_C]
nop
sub		eax, ecx
add		ebx, eax
lea		eax, [ecx+1131BBE8h]
xor		eax, esi
sub		ebx, eax
not		eax
rol		eax, 0Bh
sub		edi, ebx
not		eax
xor		esi, eax
sub		eax, 6154AE42h
sub		ebx, eax
mov		[ebp+var_10], esi
xor		ebx, edi
nop
neg		ebx
nop
xor		ebx, 0ED9E9C6Eh
nop
mov		edx, ebx
nop
mov		ecx, eax
add		eax, 26241EDAh
ror		edx, cl
nop
lea		esi, [eax+edi]
mov		edi, edx
add		eax, edi
not		esi
neg		eax
ror		edi, 8
not		esi
xor		eax, edi
xor		esi, 47F609DDh
xor		eax, 9BB13FDCh
nop
nop
mov		ebx, eax
nop
nop
mov		ecx, esi
ror		ebx, cl
mov		ecx, [ebp+var_10]
nop
neg		ecx
rol		ebx, 10h
mov		eax, edi
add		ebx, 7C20EA3Bh
sub		eax, esi
ror		edi, 6
not		eax
xor		ebx, 35AE4023h
xor		ecx, ebx
xor		ebx, eax
lea		edx, [edi+1BCAB9E2h]
add		edx, eax
lea		eax, [ebx+ecx]
add		eax, edx
nop
sub		edx, ebx
nop
nop
ror		edx, 8
neg		eax
rol		edx, 0Fh
xor		edi, eax
xor		edx, 0E5C696D7h
add		eax, edi
mov		[ebp+var_8], eax
mov		eax, edx
nop
lea		ecx, [ebx-1]
sub		ebx, 2
ror		eax, cl
mov		ecx, [ebp+var_8]
nop
lea		esi, [edi+ecx]
not		ecx
xor		ecx, 3AAE9D47h
rol		esi, 9
mov		edi, ecx
xor		esi, ebx
ror		ecx, 2
xor		edi, eax
not		ebx
xor		edi, 5A288A71h
sub		esi, 0C719AA9h
lea		edx, [ecx+5E55698Fh]
add		ecx, esi
add		edx, ebx
mov		[ebp+var_8], ecx
xor		edx, edi
mov		ebx, esi
add		edx, edi
add		edi, ecx
nop
mov		eax, edx
nop
nop
nop
mov		ecx, edi
ror		ebx, cl
nop
mov		esi, [ebp+var_8]
nop
nop
nop
nop
mov		ecx, esi
not		esi
mov		[ebp+var_8], esi
rol		eax, cl
add		edi, esi
nop
nop
nop
mov		esi, eax
nop
not		edi
nop
mov		ecx, ebx
ror		ebx, 4
rol		esi, cl
nop
sub		esi, edi
rol		edi, 0Dh
add		esi, 19ACF86Fh
nop
nop
mov		[ebp+var_C], esi
nop
mov		edx, edi
nop
neg		edx
mov		ecx, edx
rol		esi, cl
nop
mov		ecx, esi
mov		esi, ebx
neg		ecx
mov		[ebp+var_C], ecx
nop
nop
mov		ecx, edx
rol		esi, cl
nop
nop
nop
mov		ebx, [ebp+var_8]
nop
mov		eax, esi
nop
dec		ebx
mov		ecx, [ebp+var_C]
ror		eax, cl
nop
mov		esi, edi
rol		eax, 6
mov		edx, eax
neg		edx
nop
nop
nop
mov		ecx, eax
ror		esi, cl
mov		eax, edx
nop
nop
nop
nop
nop
mov		ecx, esi
ror		eax, cl
nop
add		ebx, eax
mov		[ebp+var_14], eax
mov		eax, [ebp+var_C]
xor		eax, esi
mov		[ebp+var_10], ebx
add		eax, esi
nop
nop
nop
mov		edx, esi
nop
mov		ecx, eax
add		eax, 2BA55DBFh
ror		edx, cl
xor		eax, ebx
nop
not		edx
rol		edx, 3
xor		edx, eax
sub		eax, edx
mov		edi, edx
mov		esi, eax
neg		edi
nop
nop
rol		edi, 3
nop
mov		ecx, edx
ror		esi, cl
nop
mov		eax, [ebp+var_14]
rol		eax, 9
not		eax
ror		esi, 7
rol		eax, 2
xor		eax, ebx
mov		ebx, esi
nop
mov		edx, eax
nop
nop
nop
mov		ecx, eax
rol		ebx, cl
nop
nop
nop
nop
mov		esi, 2958A5EEh
sub		esi, [ebp+var_10]
nop
mov		ecx, edi
ror		edx, cl
nop
xor		ebx, edx
mov		[ebp+var_8], edx
mov		eax, edx
nop
xor		eax, edi
nop
nop
add		eax, 6706794Fh
xor		ebx, esi
mov		edx, eax
nop
dec		ebx
mov		ecx, [ebp+var_8]
xor		ebx, eax
ror		edx, cl
mov		ecx, ebx
neg		ecx
nop
mov		[ebp+var_10], ecx
nop
mov		edi, edx
nop
mov		ecx, ebx
mov		ebx, [ebp+var_8]
ror		edi, cl
nop
neg		edi
xor		ebx, edi
xor		ebx, 5D92EA3Dh
mov		[ebp+var_8], ebx
mov		edx, [ebp+var_10]
not		esi
nop
neg		edi
nop
sub		esi, edi
nop
rol		edi, 9
not		esi
add		edi, edx
mov		[ebp+var_14], esi
nop
mov		ecx, edx
nop
rol		esi, cl
nop
nop
ror		edx, 3
nop
rol		esi, 9
nop
xor		esi, 6214C7BAh
add		edi, esi
sub		edx, edi
mov		eax, edi
nop
xor		edx, esi
sub		edx, edi
mov		ecx, ebx
mov		[ebp+var_10], edx
xor		esi, 1B366A3Bh
sub		esi, edi
ror		eax, cl
nop
mov		ebx, esi
xor		[ebp+var_8], eax
mov		edx, eax
neg		edx
nop
xor		edx, 34A7A260h
nop
mov		edi, edx
nop
mov		ecx, eax
mov		eax, [ebp+var_8]
ror		ebx, cl
neg		eax
nop
xor		eax, 56A9C4FFh
mov		esi, [ebp+var_10]
not		eax
add		esi, ebx
not		ebx
sub		esi, ebx
not		ebx
sub		eax, esi
add		ebx, edx
nop
nop
nop
nop
mov		ecx, eax
rol		eax, 6
ror		edi, cl
xor		eax, esi
nop
neg		eax
nop
mov		[ebp+var_8], eax
nop
nop
nop
nop
mov		ecx, edi
ror		eax, cl
nop
xor		esi, edi
not		ebx
rol		edi, 0Ch
mov		edx, ebx
nop
add		esi, edi
nop
not		esi
nop
nop
mov		ecx, edi
xor		edi, 45796E17h
rol		edx, cl
not		edi
nop
sub		edi, esi
mov		ebx, eax
add		edx, esi
not		ebx
mov		eax, edi
nop
neg		esi
nop
nop
nop
mov		ecx, ebx
sub		ebx, edx
ror		eax, cl
mov		ecx, 0C4828FE1h
nop
sub		ecx, eax
mov		eax, ebx
sub		ebx, ecx
mov		[ebp+var_C], ecx
sub		eax, edx
add		eax, 9EF67362h
add		eax, ebx
lea		edi, [ecx-160E8339h]
xor		ebx, eax
xor		eax, esi
rol		eax, 3
xor		esi, 0BC7C8766h
add		edi, eax
xor		ebx, 24C25A6Ah
nop
mov		eax, esi
nop
nop
nop
mov		ecx, edi
add		edi, 32C4808Ah
ror		eax, cl
nop
mov		esi, [ebp+var_C]
sub		ebx, esi
ror		eax, 2
xor		ebx, esi
nop
neg		ebx
nop
rol		ebx, 8
nop
mov		edx, ebx
nop
mov		ecx, eax
rol		edx, cl
nop
mov		ebx, edx
add		ebx, edi
rol		edi, 0Ch
rol		edi, 0Eh
xor		ebx, esi
add		edi, 3AC974A6h
xor		ebx, 6AE7C515h
xor		esi, 0A4EA287Ch
not		edi
mov		[ebp+var_C], esi
lea		esi, [eax-322671DDh]
nop
mov		eax, [ebp+var_C]
nop
nop
add		esi, ebx
mov		edx, edi
ror		esi, 2
nop
not		esi
mov		ecx, ebx
add		ebx, eax
rol		eax, 3
ror		edx, cl
neg		ebx
nop
mov		[ebp+var_C], eax
mov		eax, 5735AB5Ch
sub		eax, edx
mov		edx, [ebp+var_C]
nop
mov		edi, eax
nop
nop
nop
mov		ecx, edx
ror		edi, cl
nop
lea		eax, [esi+ebx]
add		edx, eax
neg		edi
rol		edi, 9
not		ebx
xor		ebx, 42065978h
nop
nop
mov		[ebp+var_10], ebx
nop
xor		edx, ebx
mov		ebx, edi
sub		ebx, esi
mov		esi, edx
nop
mov		ecx, edi
rol		esi, cl
nop
nop
nop
nop
mov		edx, edi
nop
not		esi
mov		ecx, ebx
ror		edx, cl
mov		ecx, [ebp+var_18]
nop
mov		edi, [ebp+var_10]
add		edx, 20DB0F3Ah
sub		edi, ebx
rol		ebx, 7
add		esi, ebx
mov		eax, esi
sub		eax, edi
xor		eax, ebx
add		eax, 37C5EA71h
mov		[ecx], eax
nop
nop
mov		eax, edx
nop
nop
mov		ecx, ebx
ror		eax, cl
mov		ecx, [ebp+var_1C]
nop
add		eax, esi
mov		[ecx], eax
mov		eax, [ebp+arg_0]
mov		[eax], edi
mov		eax, [ebp+arg_4]
pop		edi
pop		esi
mov		[eax], ebx
pop		ebx
mov		esp, ebp
pop		ebp
retn
	};
};
