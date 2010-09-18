/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct TY42019 TY42019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY42013 TY42013;
typedef struct TNimObject TNimObject;
typedef struct TY10802 TY10802;
typedef struct TY11190 TY11190;
typedef struct TY10818 TY10818;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TY42015 TY42015;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY42019 {
TNimType* m_type;
TY42013* Head;
TY42013* Tail;
NI Counter;
};
struct TNimObject {
TNimType* m_type;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11188 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11190 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
NI Cyclerootslock;
NI Zctlock;
TY11188 Stat;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY42015 {
  TY42013 Sup;
NimStringDesc* Data;
};
typedef N_NIMCALL_PTR(NIM_BOOL, TY42021) (TY42013* Entry_42028, void* Closure_42029);
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
N_NIMCALL(void, Initlinkedlist_42031)(TY42019* List_42034);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12026, void* Src_12027);
N_NIMCALL(void, Append_42035)(TY42019* List_42038, TY42013* Entry_42039);
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, asgnRef)(void** Dest_12014, void* Src_12015);
static N_INLINE(void, Incref_12002)(TY10802* C_12004);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11240)(TY10802* C_11242);
static N_INLINE(void, Rtladdcycleroot_11852)(TY10802* C_11854);
N_NOINLINE(void, Incl_11074)(TY10814* S_11077, TY10802* Cell_11078);
static N_INLINE(TY10802*, Usrtocell_11236)(void* Usr_11238);
static N_INLINE(void, Decref_11864)(TY10802* C_11866);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11858)(TY10802* C_11860);
N_NOINLINE(void, Addzct_11225)(TY10818* S_11228, TY10802* C_11229);
N_NIMCALL(void, internalAssert)(NCSTRING File_5254, NI Line_5255, NIM_BOOL Cond_5256);
N_NIMCALL(TY42015*, Newstrentry_42130)(NimStringDesc* Data_42132);
N_NIMCALL(void*, newObj)(TNimType* Typ_12507, NI Size_12508);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12018, void* Src_12019);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17508);
N_NIMCALL(void, Appendstr_42061)(TY42019* List_42064, NimStringDesc* Data_42065);
N_NIMCALL(void, Prependstr_42071)(TY42019* List_42074, NimStringDesc* Data_42075);
N_NIMCALL(NIM_BOOL, Contains_42160)(TY42019* List_42162, NimStringDesc* Data_42163);
N_NIMCALL(void, chckObj)(TNimType* Obj_5575, TNimType* Subclass_5576);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17447, NimStringDesc* B_17448);
N_NIMCALL(NIM_BOOL, Includestr_42066)(TY42019* List_42069, NimStringDesc* Data_42070);
N_NIMCALL(void, Insertbefore_42050)(TY42019* List_42053, TY42013* Pos_42054, TY42013* Entry_42055);
N_NIMCALL(void, Prepend_42040)(TY42019* List_42043, TY42013* Entry_42044);
N_NIMCALL(void, Remove_42045)(TY42019* List_42048, TY42013* Entry_42049);
static N_INLINE(NI, subInt)(NI A_6003, NI B_6004);
N_NIMCALL(TY42013*, Find_42056)(TY42019* List_42058, TY42021 Fn_42059, void* Closure_42060);
extern TY11190 Gch_11210;
extern TNimType* NTI42017; /* PStrEntry */
extern TNimType* NTI42015; /* TStrEntry */
N_NIMCALL(void, Initlinkedlist_42031)(TY42019* List_42034) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "InitLinkedList";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 39;F.filename = "lists.nim";
(*List_42034).Counter = 0;
F.line = 40;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_42034).Head, NIM_NIL);
F.line = 41;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_42034).Tail, NIM_NIL);
framePtr = framePtr->prev;
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
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7408;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "atomicInc";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/systhread.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_7408 = 0;
F.line = 29;F.filename = "systhread.nim";
Result_7408 = __sync_add_and_fetch(Memloc_3004, X_3005);
framePtr = framePtr->prev;
return Result_7408;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11240)(TY10802* C_11242) {
NIM_BOOL Result_11243;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "canbeCycleRoot";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11243 = 0;
F.line = 103;F.filename = "gc.nim";
Result_11243 = !((((*(*C_11242).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
framePtr = framePtr->prev;
return Result_11243;
}
static N_INLINE(void, Rtladdcycleroot_11852)(TY10802* C_11854) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rtlAddCycleRoot";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 205;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA2;
F.line = 205;F.filename = "gc.nim";
pthread_mutex_lock(&Gch_11210.Cyclerootslock);
LA2: ;
F.line = 206;F.filename = "gc.nim";
Incl_11074(&Gch_11210.Cycleroots, C_11854);
F.line = 207;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 207;F.filename = "gc.nim";
pthread_mutex_unlock(&Gch_11210.Cyclerootslock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Incref_12002)(TY10802* C_12004) {
NI LOC1;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "incRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 226;F.filename = "gc.nim";
LOC1 = Atomicinc_3001(&(*C_12004).Refcount, 8);
F.line = 227;F.filename = "gc.nim";
LOC3 = Canbecycleroot_11240(C_12004);
if (!LOC3) goto LA4;
F.line = 228;F.filename = "gc.nim";
Rtladdcycleroot_11852(C_12004);
LA4: ;
framePtr = framePtr->prev;
}
static N_INLINE(TY10802*, Usrtocell_11236)(void* Usr_11238) {
TY10802* Result_11239;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "usrToCell";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11239 = 0;
F.line = 100;F.filename = "gc.nim";
Result_11239 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11238))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
framePtr = framePtr->prev;
return Result_11239;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7606;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "atomicDec";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/systhread.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_7606 = 0;
F.line = 37;F.filename = "systhread.nim";
Result_7606 = __sync_sub_and_fetch(Memloc_3009, X_3010);
framePtr = framePtr->prev;
return Result_7606;
}
static N_INLINE(void, Rtladdzct_11858)(TY10802* C_11860) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rtlAddZCT";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 211;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA2;
F.line = 211;F.filename = "gc.nim";
pthread_mutex_lock(&Gch_11210.Zctlock);
LA2: ;
F.line = 212;F.filename = "gc.nim";
Addzct_11225(&Gch_11210.Zct, C_11860);
F.line = 213;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 213;F.filename = "gc.nim";
pthread_mutex_unlock(&Gch_11210.Zctlock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Decref_11864)(TY10802* C_11866) {
NI LOC2;
NIM_BOOL LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "decRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 219;F.filename = "gc.nim";
F.line = 220;F.filename = "gc.nim";
LOC2 = Atomicdec_3006(&(*C_11866).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
F.line = 221;F.filename = "gc.nim";
Rtladdzct_11858(C_11866);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11240(C_11866);
if (!LOC5) goto LA6;
F.line = 223;F.filename = "gc.nim";
Rtladdcycleroot_11852(C_11866);
goto LA1;
LA6: ;
LA1: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRef)(void** Dest_12014, void* Src_12015) {
TY10802* LOC4;
TY10802* LOC8;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "asgnRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 235;F.filename = "gc.nim";
F.line = 237;F.filename = "gc.nim";
if (!!((Src_12015 == NIM_NIL))) goto LA2;
F.line = 237;F.filename = "gc.nim";
LOC4 = Usrtocell_11236(Src_12015);
Incref_12002(LOC4);
LA2: ;
F.line = 238;F.filename = "gc.nim";
if (!!(((*Dest_12014) == NIM_NIL))) goto LA6;
F.line = 238;F.filename = "gc.nim";
LOC8 = Usrtocell_11236((*Dest_12014));
Decref_11864(LOC8);
LA6: ;
F.line = 239;F.filename = "gc.nim";
(*Dest_12014) = Src_12015;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Append_42035)(TY42019* List_42038, TY42013* Entry_42039) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Append";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 44;F.filename = "lists.nim";
(*List_42038).Counter = addInt((*List_42038).Counter, 1);
F.line = 45;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_42039).Next, NIM_NIL);
F.line = 46;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_42039).Prev, (*List_42038).Tail);
F.line = 47;F.filename = "lists.nim";
if (!!(((*List_42038).Tail == NIM_NIL))) goto LA2;
F.line = 48;F.filename = "lists.nim";
internalAssert("rod/lists.nim", 48, ((*(*List_42038).Tail).Next == NIM_NIL));
F.line = 49;F.filename = "lists.nim";
asgnRef((void**) &(*(*List_42038).Tail).Next, Entry_42039);
LA2: ;
F.line = 50;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_42038).Tail, Entry_42039);
F.line = 51;F.filename = "lists.nim";
if (!((*List_42038).Head == NIM_NIL)) goto LA5;
F.line = 51;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_42038).Head, Entry_42039);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12018, void* Src_12019) {
TY10802* C_12020;
NI LOC4;
TY10802* C_12022;
NI LOC9;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "asgnRefNoCycle";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 244;F.filename = "gc.nim";
if (!!((Src_12019 == NIM_NIL))) goto LA2;
C_12020 = 0;
F.line = 245;F.filename = "gc.nim";
C_12020 = Usrtocell_11236(Src_12019);
F.line = 246;F.filename = "gc.nim";
LOC4 = Atomicinc_3001(&(*C_12020).Refcount, 8);
LA2: ;
F.line = 247;F.filename = "gc.nim";
if (!!(((*Dest_12018) == NIM_NIL))) goto LA6;
C_12022 = 0;
F.line = 248;F.filename = "gc.nim";
C_12022 = Usrtocell_11236((*Dest_12018));
F.line = 249;F.filename = "gc.nim";
LOC9 = Atomicdec_3006(&(*C_12022).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11858(C_12022);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_12018) = Src_12019;
framePtr = framePtr->prev;
}
N_NIMCALL(TY42015*, Newstrentry_42130)(NimStringDesc* Data_42132) {
TY42015* Result_42133;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newStrEntry";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_42133 = 0;
F.line = 54;F.filename = "lists.nim";
Result_42133 = (TY42015*) newObj(NTI42017, sizeof(TY42015));
(*Result_42133).Sup.Sup.m_type = NTI42015;
F.line = 55;F.filename = "lists.nim";
asgnRefNoCycle((void**) &(*Result_42133).Data, copyString(Data_42132));
framePtr = framePtr->prev;
return Result_42133;
}
N_NIMCALL(void, Appendstr_42061)(TY42019* List_42064, NimStringDesc* Data_42065) {
TY42015* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "AppendStr";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 58;F.filename = "lists.nim";
LOC1 = 0;
LOC1 = Newstrentry_42130(Data_42065);
Append_42035(List_42064, &LOC1->Sup);
framePtr = framePtr->prev;
}
N_NIMCALL(void, Prependstr_42071)(TY42019* List_42074, NimStringDesc* Data_42075) {
TY42015* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "PrependStr";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 61;F.filename = "lists.nim";
LOC1 = 0;
LOC1 = Newstrentry_42130(Data_42075);
Prepend_42040(List_42074, &LOC1->Sup);
framePtr = framePtr->prev;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17447, NimStringDesc* B_17448) {
NIM_BOOL Result_17449;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "eqStrings";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_17449 = 0;
F.line = 32;F.filename = "sysstr.nim";
if (!(A_17447 == B_17448)) goto LA2;
F.line = 32;F.filename = "sysstr.nim";
F.line = 32;F.filename = "sysstr.nim";
Result_17449 = NIM_TRUE;
goto BeforeRet;
LA2: ;
F.line = 33;F.filename = "sysstr.nim";
LOC5 = (A_17447 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_17448 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
F.line = 33;F.filename = "sysstr.nim";
F.line = 33;F.filename = "sysstr.nim";
Result_17449 = NIM_FALSE;
goto BeforeRet;
LA7: ;
F.line = 34;F.filename = "sysstr.nim";
F.line = 34;F.filename = "sysstr.nim";
LOC9 = ((*A_17447).Sup.len == (*B_17448).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_17447).data)), ((NCSTRING) ((*B_17448).data)), ((int) ((NI32)((*A_17447).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_17449 = LOC9;
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_17449;
}
N_NIMCALL(NIM_BOOL, Contains_42160)(TY42019* List_42162, NimStringDesc* Data_42163) {
NIM_BOOL Result_42164;
TY42013* It_42165;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Contains";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_42164 = 0;
It_42165 = 0;
F.line = 64;F.filename = "lists.nim";
It_42165 = (*List_42162).Head;
F.line = 65;F.filename = "lists.nim";
while (1) {
if (!!((It_42165 == NIM_NIL))) goto LA1;
F.line = 66;F.filename = "lists.nim";
if (It_42165) chckObj((*It_42165).Sup.m_type, NTI42015);
if (!eqStrings((*((TY42015*) (It_42165))).Data, Data_42163)) goto LA3;
F.line = 67;F.filename = "lists.nim";
F.line = 67;F.filename = "lists.nim";
Result_42164 = NIM_TRUE;
goto BeforeRet;
LA3: ;
F.line = 68;F.filename = "lists.nim";
It_42165 = (*It_42165).Next;
} LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_42164;
}
N_NIMCALL(NIM_BOOL, Includestr_42066)(TY42019* List_42069, NimStringDesc* Data_42070) {
NIM_BOOL Result_42183;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "IncludeStr";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_42183 = 0;
F.line = 71;F.filename = "lists.nim";
LOC2 = Contains_42160(&(*List_42069), Data_42070);
if (!LOC2) goto LA3;
F.line = 71;F.filename = "lists.nim";
F.line = 71;F.filename = "lists.nim";
Result_42183 = NIM_TRUE;
goto BeforeRet;
LA3: ;
F.line = 72;F.filename = "lists.nim";
Appendstr_42061(List_42069, Data_42070);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_42183;
}
N_NIMCALL(void, Insertbefore_42050)(TY42019* List_42053, TY42013* Pos_42054, TY42013* Entry_42055) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "InsertBefore";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 75;F.filename = "lists.nim";
internalAssert("rod/lists.nim", 75, !((Pos_42054 == NIM_NIL)));
F.line = 76;F.filename = "lists.nim";
if (!(Pos_42054 == (*List_42053).Head)) goto LA2;
F.line = 77;F.filename = "lists.nim";
Prepend_42040(List_42053, Entry_42055);
goto LA1;
LA2: ;
F.line = 79;F.filename = "lists.nim";
(*List_42053).Counter = addInt((*List_42053).Counter, 1);
F.line = 80;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_42055).Next, Pos_42054);
F.line = 81;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_42055).Prev, (*Pos_42054).Prev);
F.line = 82;F.filename = "lists.nim";
if (!!(((*Pos_42054).Prev == NIM_NIL))) goto LA5;
F.line = 82;F.filename = "lists.nim";
asgnRef((void**) &(*(*Pos_42054).Prev).Next, Entry_42055);
LA5: ;
F.line = 83;F.filename = "lists.nim";
asgnRef((void**) &(*Pos_42054).Prev, Entry_42055);
LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Prepend_42040)(TY42019* List_42043, TY42013* Entry_42044) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Prepend";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 86;F.filename = "lists.nim";
(*List_42043).Counter = addInt((*List_42043).Counter, 1);
F.line = 87;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_42044).Prev, NIM_NIL);
F.line = 88;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_42044).Next, (*List_42043).Head);
F.line = 89;F.filename = "lists.nim";
if (!!(((*List_42043).Head == NIM_NIL))) goto LA2;
F.line = 90;F.filename = "lists.nim";
internalAssert("rod/lists.nim", 90, ((*(*List_42043).Head).Prev == NIM_NIL));
F.line = 91;F.filename = "lists.nim";
asgnRef((void**) &(*(*List_42043).Head).Prev, Entry_42044);
LA2: ;
F.line = 92;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_42043).Head, Entry_42044);
F.line = 93;F.filename = "lists.nim";
if (!((*List_42043).Tail == NIM_NIL)) goto LA5;
F.line = 93;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_42043).Tail, Entry_42044);
LA5: ;
framePtr = framePtr->prev;
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
N_NIMCALL(void, Remove_42045)(TY42019* List_42048, TY42013* Entry_42049) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Remove";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 96;F.filename = "lists.nim";
(*List_42048).Counter = subInt((*List_42048).Counter, 1);
F.line = 97;F.filename = "lists.nim";
if (!(Entry_42049 == (*List_42048).Tail)) goto LA2;
F.line = 98;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_42048).Tail, (*Entry_42049).Prev);
LA2: ;
F.line = 99;F.filename = "lists.nim";
if (!(Entry_42049 == (*List_42048).Head)) goto LA5;
F.line = 100;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_42048).Head, (*Entry_42049).Next);
LA5: ;
F.line = 101;F.filename = "lists.nim";
if (!!(((*Entry_42049).Next == NIM_NIL))) goto LA8;
F.line = 101;F.filename = "lists.nim";
asgnRef((void**) &(*(*Entry_42049).Next).Prev, (*Entry_42049).Prev);
LA8: ;
F.line = 102;F.filename = "lists.nim";
if (!!(((*Entry_42049).Prev == NIM_NIL))) goto LA11;
F.line = 102;F.filename = "lists.nim";
asgnRef((void**) &(*(*Entry_42049).Prev).Next, (*Entry_42049).Next);
LA11: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY42013*, Find_42056)(TY42019* List_42058, TY42021 Fn_42059, void* Closure_42060) {
TY42013* Result_42347;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Find";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_42347 = 0;
F.line = 105;F.filename = "lists.nim";
Result_42347 = (*List_42058).Head;
F.line = 106;F.filename = "lists.nim";
while (1) {
if (!!((Result_42347 == NIM_NIL))) goto LA1;
F.line = 107;F.filename = "lists.nim";
LOC3 = Fn_42059(Result_42347, Closure_42060);
if (!LOC3) goto LA4;
F.line = 107;F.filename = "lists.nim";
goto BeforeRet;
LA4: ;
F.line = 108;F.filename = "lists.nim";
Result_42347 = (*Result_42347).Next;
} LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_42347;
}
N_NOINLINE(void, listsInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "lists";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

