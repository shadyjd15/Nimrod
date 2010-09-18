/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
static N_INLINE(NI, Conchash_63409)(NI H_63411, NI Val_63412);
static N_INLINE(NI, Finishhash_63414)(NI H_63416);
N_NIMCALL(NI, Hashdata_63418)(void* Data_63420, NI Size_63421);
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI A_6003, NI B_6004);
static N_INLINE(NI, Hash_63459)(void* X_63461);
static N_INLINE(NI, Hash_63463)(NI X_63465);
static N_INLINE(NI, Hash_63467)(NI64 X_63469);
static N_INLINE(NI, Hash_63471)(NIM_CHAR X_63473);
N_NIMCALL(NI, Hash_63480)(NimStringDesc* X_63482);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, Hashignorestyle_63521)(NimStringDesc* X_63523);
N_NIMCALL(NI, Hashignorecase_63577)(NimStringDesc* X_63579);
static N_INLINE(NI, Conchash_63409)(NI H_63411, NI Val_63412) {
NI Result_63413;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "concHash";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63413 = 0;
F.line = 22;F.filename = "hashes.nim";
Result_63413 = (NI32)((NU32)(H_63411) + (NU32)(Val_63412));
F.line = 23;F.filename = "hashes.nim";
Result_63413 = (NI32)((NU32)(Result_63413) + (NU32)((NI32)((NU32)(Result_63413) << (NU32)(10))));
F.line = 24;F.filename = "hashes.nim";
Result_63413 = (NI32)(Result_63413 ^ (NI32)((NU32)(Result_63413) >> (NU32)(6)));
framePtr = framePtr->prev;
return Result_63413;
}
static N_INLINE(NI, Finishhash_63414)(NI H_63416) {
NI Result_63417;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "finishHash";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63417 = 0;
F.line = 27;F.filename = "hashes.nim";
Result_63417 = (NI32)((NU32)(H_63416) + (NU32)((NI32)((NU32)(H_63416) << (NU32)(3))));
F.line = 28;F.filename = "hashes.nim";
Result_63417 = (NI32)(Result_63417 ^ (NI32)((NU32)(Result_63417) >> (NU32)(11)));
F.line = 29;F.filename = "hashes.nim";
Result_63417 = (NI32)((NU32)(Result_63417) + (NU32)((NI32)((NU32)(Result_63417) << (NU32)(15))));
framePtr = framePtr->prev;
return Result_63417;
}
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804) {
NI Result_5805;
NIM_BOOL LOC2;
Result_5805 = 0;
Result_5805 = (NI32)((NU32)(A_5803) + (NU32)(B_5804));
LOC2 = (0 <= (NI32)(Result_5805 ^ A_5803));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI32)(Result_5805 ^ B_5804));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5805;
}
static N_INLINE(NI, subInt)(NI A_6003, NI B_6004) {
NI Result_6005;
NIM_BOOL LOC2;
Result_6005 = 0;
Result_6005 = (NI32)((NU32)(A_6003) - (NU32)(B_6004));
LOC2 = (0 <= (NI32)(Result_6005 ^ A_6003));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI32)(Result_6005 ^ (NI32)((NU32) ~(B_6004))));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_6005;
}
N_NIMCALL(NI, Hashdata_63418)(void* Data_63420, NI Size_63421) {
NI Result_63422;
NI H_63423;
NCSTRING P_63424;
NI I_63425;
NI S_63426;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hashData";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63422 = 0;
H_63423 = 0;
P_63424 = 0;
I_63425 = 0;
S_63426 = 0;
F.line = 37;F.filename = "hashes.nim";
H_63423 = 0;
F.line = 38;F.filename = "hashes.nim";
P_63424 = ((NCSTRING) (Data_63420));
F.line = 39;F.filename = "hashes.nim";
I_63425 = 0;
F.line = 40;F.filename = "hashes.nim";
S_63426 = Size_63421;
F.line = 41;F.filename = "hashes.nim";
while (1) {
if (!(0 < S_63426)) goto LA1;
F.line = 42;F.filename = "hashes.nim";
H_63423 = Conchash_63409(H_63423, ((NU8)(P_63424[I_63425])));
F.line = 43;F.filename = "hashes.nim";
I_63425 = addInt(I_63425, 1);
F.line = 44;F.filename = "hashes.nim";
S_63426 = subInt(S_63426, 1);
} LA1: ;
F.line = 45;F.filename = "hashes.nim";
Result_63422 = Finishhash_63414(H_63423);
framePtr = framePtr->prev;
return Result_63422;
}
static N_INLINE(NI, Hash_63459)(void* X_63461) {
NI Result_63462;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hash";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63462 = 0;
F.line = 49;F.filename = "hashes.nim";
Result_63462 = (NI32)((NU32)(((NI) (X_63461))) >> (NU32)(3));
framePtr = framePtr->prev;
return Result_63462;
}
static N_INLINE(NI, Hash_63463)(NI X_63465) {
NI Result_63466;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hash";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63466 = 0;
F.line = 53;F.filename = "hashes.nim";
Result_63466 = X_63465;
framePtr = framePtr->prev;
return Result_63466;
}
static N_INLINE(NI, Hash_63467)(NI64 X_63469) {
NI Result_63470;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hash";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63470 = 0;
F.line = 57;F.filename = "hashes.nim";
Result_63470 = ((NI) (((NI32)(NU32)(NU64)(X_63469))));
framePtr = framePtr->prev;
return Result_63470;
}
static N_INLINE(NI, Hash_63471)(NIM_CHAR X_63473) {
NI Result_63474;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hash";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63474 = 0;
F.line = 61;F.filename = "hashes.nim";
Result_63474 = ((NU8)(X_63473));
framePtr = framePtr->prev;
return Result_63474;
}
N_NIMCALL(NI, Hash_63480)(NimStringDesc* X_63482) {
NI Result_63483;
NI H_63484;
NI I_63509;
NI HEX3Atmp_63516;
NI Res_63518;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hash";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63483 = 0;
H_63484 = 0;
F.line = 66;F.filename = "hashes.nim";
H_63484 = 0;
I_63509 = 0;
HEX3Atmp_63516 = 0;
F.line = 67;F.filename = "hashes.nim";
HEX3Atmp_63516 = subInt(X_63482->Sup.len, 1);
Res_63518 = 0;
F.line = 1021;F.filename = "system.nim";
Res_63518 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_63518 <= HEX3Atmp_63516)) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_63509 = Res_63518;
F.line = 68;F.filename = "hashes.nim";
if ((NU)(I_63509) > (NU)(X_63482->Sup.len)) raiseIndexError();
H_63484 = Conchash_63409(H_63484, ((NU8)(X_63482->data[I_63509])));
F.line = 1024;F.filename = "system.nim";
Res_63518 = addInt(Res_63518, 1);
} LA1: ;
F.line = 69;F.filename = "hashes.nim";
Result_63483 = Finishhash_63414(H_63484);
framePtr = framePtr->prev;
return Result_63483;
}
N_NIMCALL(NI, Hashignorestyle_63521)(NimStringDesc* X_63523) {
NI Result_63524;
NI H_63525;
NIM_CHAR C_63526;
NI I_63536;
NI HEX3Atmp_63572;
NI Res_63574;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hashIgnoreStyle";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63524 = 0;
H_63525 = 0;
C_63526 = 0;
F.line = 76;F.filename = "hashes.nim";
H_63525 = 0;
I_63536 = 0;
HEX3Atmp_63572 = 0;
F.line = 77;F.filename = "hashes.nim";
HEX3Atmp_63572 = subInt(X_63523->Sup.len, 1);
Res_63574 = 0;
F.line = 1021;F.filename = "system.nim";
Res_63574 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_63574 <= HEX3Atmp_63572)) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_63536 = Res_63574;
F.line = 78;F.filename = "hashes.nim";
if ((NU)(I_63536) > (NU)(X_63523->Sup.len)) raiseIndexError();
C_63526 = X_63523->data[I_63536];
F.line = 79;F.filename = "hashes.nim";
if (!((NU8)(C_63526) == (NU8)(95))) goto LA4;
F.line = 80;F.filename = "hashes.nim";
goto LA2;
LA4: ;
F.line = 81;F.filename = "hashes.nim";
if (!(((NU8)(C_63526)) >= ((NU8)(65)) && ((NU8)(C_63526)) <= ((NU8)(90)))) goto LA7;
F.line = 82;F.filename = "hashes.nim";
C_63526 = ((NIM_CHAR) (((NI) (addInt(((NU8)(C_63526)), 32)))));
LA7: ;
F.line = 83;F.filename = "hashes.nim";
H_63525 = Conchash_63409(H_63525, ((NU8)(C_63526)));
LA2: ;
F.line = 1024;F.filename = "system.nim";
Res_63574 = addInt(Res_63574, 1);
} LA1: ;
F.line = 84;F.filename = "hashes.nim";
Result_63524 = Finishhash_63414(H_63525);
framePtr = framePtr->prev;
return Result_63524;
}
N_NIMCALL(NI, Hashignorecase_63577)(NimStringDesc* X_63579) {
NI Result_63580;
NI H_63581;
NIM_CHAR C_63582;
NI I_63592;
NI HEX3Atmp_63626;
NI Res_63628;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hashIgnoreCase";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_63580 = 0;
H_63581 = 0;
C_63582 = 0;
F.line = 91;F.filename = "hashes.nim";
H_63581 = 0;
I_63592 = 0;
HEX3Atmp_63626 = 0;
F.line = 92;F.filename = "hashes.nim";
HEX3Atmp_63626 = subInt(X_63579->Sup.len, 1);
Res_63628 = 0;
F.line = 1021;F.filename = "system.nim";
Res_63628 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_63628 <= HEX3Atmp_63626)) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_63592 = Res_63628;
F.line = 93;F.filename = "hashes.nim";
if ((NU)(I_63592) > (NU)(X_63579->Sup.len)) raiseIndexError();
C_63582 = X_63579->data[I_63592];
F.line = 94;F.filename = "hashes.nim";
if (!(((NU8)(C_63582)) >= ((NU8)(65)) && ((NU8)(C_63582)) <= ((NU8)(90)))) goto LA3;
F.line = 95;F.filename = "hashes.nim";
C_63582 = ((NIM_CHAR) (((NI) (addInt(((NU8)(C_63582)), 32)))));
LA3: ;
F.line = 96;F.filename = "hashes.nim";
H_63581 = Conchash_63409(H_63581, ((NU8)(C_63582)));
F.line = 1024;F.filename = "system.nim";
Res_63628 = addInt(Res_63628, 1);
} LA1: ;
F.line = 97;F.filename = "hashes.nim";
Result_63580 = Finishhash_63414(H_63581);
framePtr = framePtr->prev;
return Result_63580;
}
N_NOINLINE(void, hashesInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hashes";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/hashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

