/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY52011 TY52011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY52005 TY52005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef TY52011* TY52039[8192];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY52005 {
  TNimObject Sup;
NI Id;
};
struct TY52011 {
  TY52005 Sup;
NimStringDesc* S;
TY52011* Next;
NI H;
};
struct TY10402 {
NI Refcount;
TNimType* Typ;
};
struct TY10418 {
NI Len;
NI Cap;
TY10402** D;
};
struct TY10414 {
NI Counter;
NI Max;
TY10410* Head;
TY10410** Data;
};
struct TY10788 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10790 {
TY10418 Zct;
TY10418 Decstack;
TY10414 Cycleroots;
TY10418 Tempstack;
TY10788 Stat;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
N_NIMCALL(TY52011*, Getident_52023)(NCSTRING Identifier_52025, NI Length_52026, NI H_52027);
N_NIMCALL(NI, Cmpexact_52165)(NCSTRING A_52167, NCSTRING B_52168, NI Blen_52169);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(NI, Cmpignorestyle_52042)(NCSTRING A_52044, NCSTRING B_52045, NI Blen_52046);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1347);
N_NIMCALL(NI, Getnormalizedhash_42037)(NimStringDesc* S_42039);
N_NIMCALL(TY52011*, Getident_52016)(NimStringDesc* Identifier_52018);
TY52039 Buckets_52041;
NI Wordcounter_52233;
extern TY10790 Gch_10808;
extern TNimType* NTI52009; /* PIdent */
extern TNimType* NTI52011; /* TIdent */
N_NIMCALL(NI, Cmpexact_52165)(NCSTRING A_52167, NCSTRING B_52168, NI Blen_52169) {
NI Result_52170;
NIM_CHAR Aa_52171;
NIM_CHAR Bb_52172;
NI I_52173;
NI J_52174;
NIM_BOOL LOC3;
Result_52170 = 0;
Aa_52171 = 0;
Bb_52172 = 0;
I_52173 = 0;
J_52174 = 0;
I_52173 = 0;
J_52174 = 0;
Result_52170 = 1;
while (1) {
if (!(J_52174 < Blen_52169)) goto LA1;
Aa_52171 = A_52167[I_52173];
Bb_52172 = B_52168[J_52174];
Result_52170 = (NI64)(((NU8)(Aa_52171)) - ((NU8)(Bb_52172)));
LOC3 = !((Result_52170 == 0));
if (LOC3) goto LA4;
LOC3 = ((NU8)(Aa_52171) == (NU8)(0));
LA4: ;
if (!LOC3) goto LA5;
goto LA1;
LA5: ;
I_52173 += 1;
J_52174 += 1;
} LA1: ;
if (!(Result_52170 == 0)) goto LA8;
if (!!(((NU8)(A_52167[I_52173]) == (NU8)(0)))) goto LA11;
Result_52170 = 1;
LA11: ;
LA8: ;
return Result_52170;
}
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824) {
TY10402* Result_10825;
Result_10825 = 0;
Result_10825 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_10824))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
return Result_10825;
}
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458) {
Addzct_10811(&Gch_10808.Zct, C_11458);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617) {
TY10402* C_11618;
TY10402* C_11619;
if (!!((Src_11617 == NIM_NIL))) goto LA2;
C_11618 = 0;
C_11618 = Usrtocell_10822(Src_11617);
(*C_11618).Refcount = (NI64)((NU64)((*C_11618).Refcount) + (NU64)(8));
LA2: ;
if (!!(((*Dest_11616) == NIM_NIL))) goto LA5;
C_11619 = 0;
C_11619 = Usrtocell_10822((*Dest_11616));
(*C_11619).Refcount = (NI64)((NU64)((*C_11619).Refcount) - (NU64)(8));
if (!((NU64)((*C_11619).Refcount) < (NU64)(8))) goto LA8;
Rtladdzct_11456(C_11619);
LA8: ;
LA5: ;
(*Dest_11616) = Src_11617;
}
N_NIMCALL(NI, Cmpignorestyle_52042)(NCSTRING A_52044, NCSTRING B_52045, NI Blen_52046) {
NI Result_52047;
NIM_CHAR Aa_52048;
NIM_CHAR Bb_52049;
NI I_52050;
NI J_52051;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NIM_BOOL LOC15;
Result_52047 = 0;
Aa_52048 = 0;
Bb_52049 = 0;
I_52050 = 0;
J_52051 = 0;
I_52050 = 0;
J_52051 = 0;
Result_52047 = 1;
while (1) {
if (!(J_52051 < Blen_52046)) goto LA1;
while (1) {
if (!((NU8)(A_52044[I_52050]) == (NU8)(95))) goto LA2;
I_52050 += 1;
} LA2: ;
while (1) {
if (!((NU8)(B_52045[J_52051]) == (NU8)(95))) goto LA3;
J_52051 += 1;
} LA3: ;
Aa_52048 = A_52044[I_52050];
Bb_52049 = B_52045[J_52051];
LOC5 = ((NU8)(65) <= (NU8)(Aa_52048));
if (!(LOC5)) goto LA6;
LOC5 = ((NU8)(Aa_52048) <= (NU8)(90));
LA6: ;
if (!LOC5) goto LA7;
Aa_52048 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(Aa_52048)) + 32)))));
LA7: ;
LOC10 = ((NU8)(65) <= (NU8)(Bb_52049));
if (!(LOC10)) goto LA11;
LOC10 = ((NU8)(Bb_52049) <= (NU8)(90));
LA11: ;
if (!LOC10) goto LA12;
Bb_52049 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(Bb_52049)) + 32)))));
LA12: ;
Result_52047 = (NI64)(((NU8)(Aa_52048)) - ((NU8)(Bb_52049)));
LOC15 = !((Result_52047 == 0));
if (LOC15) goto LA16;
LOC15 = ((NU8)(Aa_52048) == (NU8)(0));
LA16: ;
if (!LOC15) goto LA17;
goto LA1;
LA17: ;
I_52050 += 1;
J_52051 += 1;
} LA1: ;
if (!(Result_52047 == 0)) goto LA20;
if (!!(((NU8)(A_52044[I_52050]) == (NU8)(0)))) goto LA23;
Result_52047 = 1;
LA23: ;
LA20: ;
return Result_52047;
}
N_NIMCALL(TY52011*, Getident_52023)(NCSTRING Identifier_52025, NI Length_52026, NI H_52027) {
TY52011* Result_52239;
NI Idx_52240;
NI Id_52241;
TY52011* Last_52242;
NI LOC3;
NI LOC9;
NI I_52310;
NI HEX3Atmp_52327;
NI Res_52329;
Result_52239 = 0;
Idx_52240 = 0;
Id_52241 = 0;
Last_52242 = 0;
Idx_52240 = (NI64)(H_52027 & 8191);
Result_52239 = Buckets_52041[(Idx_52240)-0];
Last_52242 = NIM_NIL;
Id_52241 = 0;
while (1) {
if (!!((Result_52239 == NIM_NIL))) goto LA1;
LOC3 = Cmpexact_52165((*Result_52239).S->data, Identifier_52025, Length_52026);
if (!(LOC3 == 0)) goto LA4;
if (!!((Last_52242 == NIM_NIL))) goto LA7;
asgnRefNoCycle((void**) &(*Last_52242).Next, (*Result_52239).Next);
asgnRefNoCycle((void**) &(*Result_52239).Next, Buckets_52041[(Idx_52240)-0]);
asgnRefNoCycle((void**) &Buckets_52041[(Idx_52240)-0], Result_52239);
LA7: ;
goto BeforeRet;
goto LA2;
LA4: ;
LOC9 = Cmpignorestyle_52042((*Result_52239).S->data, Identifier_52025, Length_52026);
if (!(LOC9 == 0)) goto LA10;
Id_52241 = (*Result_52239).Sup.Id;
goto LA2;
LA10: ;
LA2: ;
Last_52242 = Result_52239;
Result_52239 = (*Result_52239).Next;
} LA1: ;
Result_52239 = (TY52011*) newObj(NTI52009, sizeof(TY52011));
(*Result_52239).Sup.Sup.m_type = NTI52011;
(*Result_52239).H = H_52027;
asgnRefNoCycle((void**) &(*Result_52239).S, mnewString(Length_52026));
I_52310 = 0;
HEX3Atmp_52327 = 0;
HEX3Atmp_52327 = (NI64)((NI64)(Length_52026 + 0) - 1);
Res_52329 = 0;
Res_52329 = 0;
while (1) {
if (!(Res_52329 <= HEX3Atmp_52327)) goto LA12;
I_52310 = Res_52329;
(*Result_52239).S->data[I_52310] = Identifier_52025[(NI64)(I_52310 - 0)];
Res_52329 += 1;
} LA12: ;
asgnRefNoCycle((void**) &(*Result_52239).Next, Buckets_52041[(Idx_52240)-0]);
asgnRefNoCycle((void**) &Buckets_52041[(Idx_52240)-0], Result_52239);
if (!(Id_52241 == 0)) goto LA14;
Wordcounter_52233 += 1;
(*Result_52239).Sup.Id = ((NI64)-(Wordcounter_52233));
goto LA13;
LA14: ;
(*Result_52239).Sup.Id = Id_52241;
LA13: ;
BeforeRet: ;
return Result_52239;
}
N_NIMCALL(TY52011*, Getident_52019)(NimStringDesc* Identifier_52021, NI H_52022) {
TY52011* Result_52230;
Result_52230 = 0;
Result_52230 = Getident_52023(Identifier_52021->data, Identifier_52021->Sup.len, H_52022);
return Result_52230;
}
N_NIMCALL(TY52011*, Getident_52016)(NimStringDesc* Identifier_52018) {
TY52011* Result_52223;
NI LOC1;
Result_52223 = 0;
LOC1 = Getnormalizedhash_42037(Identifier_52018);
Result_52223 = Getident_52023(Identifier_52018->data, Identifier_52018->Sup.len, LOC1);
return Result_52223;
}
N_NIMCALL(NIM_BOOL, Identeq_52028)(TY52011* Id_52030, NimStringDesc* Name_52031) {
NIM_BOOL Result_52036;
TY52011* LOC1;
Result_52036 = 0;
LOC1 = Getident_52016(Name_52031);
Result_52036 = ((*Id_52030).Sup.Id == (*LOC1).Sup.Id);
return Result_52036;
}
N_NOINLINE(void, identsInit)(void) {
Wordcounter_52233 = 1;
}
