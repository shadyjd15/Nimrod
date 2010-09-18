/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY50547 TY50547;
typedef struct TY50551 TY50551;
typedef struct TY50529 TY50529;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50527 TY50527;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49005 TY49005;
typedef struct TNimObject TNimObject;
typedef struct TY50549 TY50549;
typedef struct TY50525 TY50525;
typedef struct TY50539 TY50539;
typedef struct TY47008 TY47008;
typedef struct TY10602 TY10602;
typedef struct TY8004 TY8004;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY49011 TY49011;
typedef struct TY42532 TY42532;
typedef struct TY50543 TY50543;
typedef struct TY54107 TY54107;
typedef struct TY50519 TY50519;
typedef struct TY38013 TY38013;
typedef struct TY54109 TY54109;
typedef TY50551* TY97027[40];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY50529 {
TNimType* m_type;
NI Counter;
TY50527* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY50539 {
NU8 K;
NU8 S;
NU8 Flags;
TY50551* T;
TY47008* R;
NI A;
};
struct TY50551 {
  TY49005 Sup;
NU8 Kind;
TY50549* Sons;
TY50525* N;
NU8 Flags;
NU8 Callconv;
TY50547* Owner;
TY50547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY50539 Loc;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
typedef N_STDCALL_PTR(void, TY8016) (TY8004* L_8018);
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY8004 {
void* Debuginfo;
NI32 Lockcount;
NI32 Recursioncount;
NI Owningthread;
NI Locksemaphore;
NI32 Reserved;
};
struct TY10988 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10990 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
TY8004 Cyclerootslock;
TY8004 Zctlock;
TY10988 Stat;
};
typedef N_STDCALL_PTR(void, TY8020) (TY8004* L_8022);
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY42532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY50547 {
  TY49005 Sup;
NU8 Kind;
NU8 Magic;
TY50551* Typ;
TY49011* Name;
TY42532 Info;
TY50547* Owner;
NU32 Flags;
TY50529 Tab;
TY50525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY50539 Loc;
TY50543* Annex;
};
struct TY50525 {
TY50551* Typ;
NimStringDesc* Comment;
TY42532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY50547* Sym;
} S4;
struct {TY49011* Ident;
} S5;
struct {TY50519* Sons;
} S6;
} KindU;
};
struct TY47008 {
  TNimObject Sup;
TY47008* Left;
TY47008* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
};
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
struct TY50543 {
  TY38013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY47008* Name;
TY50525* Path;
};
struct TY54107 {
NI Tos;
TY54109* Stack;
};
struct TY50527 {
  TGenericSeq Sup;
  TY50547* data[SEQ_DECL_SIZE];
};
struct TY50549 {
  TGenericSeq Sup;
  TY50551* data[SEQ_DECL_SIZE];
};
struct TY50519 {
  TGenericSeq Sup;
  TY50525* data[SEQ_DECL_SIZE];
};
struct TY54109 {
  TGenericSeq Sup;
  TY50529 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Registersystype_97005)(TY50551* T_97007);
static N_INLINE(void, asgnRef)(void** Dest_11814, void* Src_11815);
static N_INLINE(void, Incref_11802)(TY10602* C_11804);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11040)(TY10602* C_11042);
static N_INLINE(void, Rtladdcycleroot_11652)(TY10602* C_11654);
N_NOINLINE(void, Incl_10874)(TY10614* S_10877, TY10602* Cell_10878);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(void, Decref_11664)(TY10602* C_11666);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
N_NIMCALL(TY50551*, Newsystype_97044)(NU8 Kind_97046, NI Size_97047);
N_NIMCALL(TY50551*, Newtype_50706)(NU8 Kind_50708, TY50547* Owner_50709);
N_NIMCALL(TY50547*, Getsyssym_97024)(NimStringDesc* Name_97026);
N_NIMCALL(TY50547*, Strtableget_54069)(TY50529* T_54071, TY49011* Name_54072);
N_NIMCALL(TY49011*, Getident_49016)(NimStringDesc* Identifier_49018);
N_NIMCALL(void, Rawmessage_42553)(NU8 Msg_42555, NimStringDesc* Arg_42556);
N_NIMCALL(void, Loadstub_88070)(TY50547* S_88072);
N_NIMCALL(TY50551*, Systypefromname_97073)(NimStringDesc* Name_97075);
N_NIMCALL(TY50551*, Getsystype_97008)(NU8 Kind_97010);
N_NIMCALL(void, Internalerror_42571)(NimStringDesc* Errmsg_42573);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_18379, TNimType* Typ_18380);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17287);
N_NIMCALL(TY50547*, Getcompilerproc_97011)(NimStringDesc* Name_97013);
N_NIMCALL(TY49011*, Getident_49019)(NimStringDesc* Identifier_49021, NI H_49022);
N_NIMCALL(NI, Getnormalizedhash_39037)(NimStringDesc* S_39039);
N_NIMCALL(void, Strtableadd_54064)(TY50529* T_54067, TY50547* N_54068);
N_NIMCALL(void, Registercompilerproc_97014)(TY50547* S_97016);
N_NIMCALL(void, Initsystem_97017)(TY54107* Tab_97020);
N_NIMCALL(void, Finishsystem_97021)(TY50529* Tab_97023);
N_NIMCALL(void, Initstrtable_50746)(TY50529* X_50749);
STRING_LITERAL(TMP97184, "int", 3);
STRING_LITERAL(TMP97185, "int8", 4);
STRING_LITERAL(TMP97186, "int16", 5);
STRING_LITERAL(TMP97187, "int32", 5);
STRING_LITERAL(TMP97188, "int64", 5);
STRING_LITERAL(TMP97189, "float", 5);
STRING_LITERAL(TMP97190, "float32", 7);
STRING_LITERAL(TMP97191, "float64", 7);
STRING_LITERAL(TMP97192, "bool", 4);
STRING_LITERAL(TMP97193, "char", 4);
STRING_LITERAL(TMP97194, "string", 6);
STRING_LITERAL(TMP97195, "cstring", 7);
STRING_LITERAL(TMP97196, "pointer", 7);
STRING_LITERAL(TMP97197, "request for typekind: ", 22);
STRING_LITERAL(TMP97198, "wanted: ", 8);
STRING_LITERAL(TMP97199, " got: ", 6);
STRING_LITERAL(TMP97200, "type not found: ", 16);
TY50547* Systemmodule_97004;
TY97027 Gsystypes_97028;
TY50529 Compilerprocs_97029;
extern TNimType* NTI50529; /* TStrTable */
extern TY8016 Dl_8015;
extern TY10990 Gch_11010;
extern TY8020 Dl_8019;
extern NI Ptrsize_46572;
extern TNimType* NTI50162; /* TTypeKind */
extern TY50529 Rodcompilerprocs_88059;
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
static N_INLINE(NIM_BOOL, Canbecycleroot_11040)(TY10602* C_11042) {
NIM_BOOL Result_11043;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "canbeCycleRoot";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11043 = 0;
F.line = 103;F.filename = "gc.nim";
Result_11043 = !((((*(*C_11042).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
framePtr = framePtr->prev;
return Result_11043;
}
static N_INLINE(void, Rtladdcycleroot_11652)(TY10602* C_11654) {
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
Dl_8015(&Gch_11010.Cyclerootslock);
LA2: ;
F.line = 206;F.filename = "gc.nim";
Incl_10874(&Gch_11010.Cycleroots, C_11654);
F.line = 207;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 207;F.filename = "gc.nim";
Dl_8019(&Gch_11010.Cyclerootslock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Incref_11802)(TY10602* C_11804) {
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
LOC1 = Atomicinc_3001(&(*C_11804).Refcount, 8);
F.line = 227;F.filename = "gc.nim";
LOC3 = Canbecycleroot_11040(C_11804);
if (!LOC3) goto LA4;
F.line = 228;F.filename = "gc.nim";
Rtladdcycleroot_11652(C_11804);
LA4: ;
framePtr = framePtr->prev;
}
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038) {
TY10602* Result_11039;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "usrToCell";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11039 = 0;
F.line = 100;F.filename = "gc.nim";
Result_11039 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11038))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
framePtr = framePtr->prev;
return Result_11039;
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
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660) {
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
Dl_8015(&Gch_11010.Zctlock);
LA2: ;
F.line = 212;F.filename = "gc.nim";
Addzct_11025(&Gch_11010.Zct, C_11660);
F.line = 213;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 213;F.filename = "gc.nim";
Dl_8019(&Gch_11010.Zctlock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Decref_11664)(TY10602* C_11666) {
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
LOC2 = Atomicdec_3006(&(*C_11666).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
F.line = 221;F.filename = "gc.nim";
Rtladdzct_11658(C_11666);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11040(C_11666);
if (!LOC5) goto LA6;
F.line = 223;F.filename = "gc.nim";
Rtladdcycleroot_11652(C_11666);
goto LA1;
LA6: ;
LA1: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRef)(void** Dest_11814, void* Src_11815) {
TY10602* LOC4;
TY10602* LOC8;
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
if (!!((Src_11815 == NIM_NIL))) goto LA2;
F.line = 237;F.filename = "gc.nim";
LOC4 = Usrtocell_11036(Src_11815);
Incref_11802(LOC4);
LA2: ;
F.line = 238;F.filename = "gc.nim";
if (!!(((*Dest_11814) == NIM_NIL))) goto LA6;
F.line = 238;F.filename = "gc.nim";
LOC8 = Usrtocell_11036((*Dest_11814));
Decref_11664(LOC8);
LA6: ;
F.line = 239;F.filename = "gc.nim";
(*Dest_11814) = Src_11815;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Registersystype_97005)(TY50551* T_97007) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "registerSysType";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 32;F.filename = "magicsys.nim";
if (!(Gsystypes_97028[((*T_97007).Kind)-0] == NIM_NIL)) goto LA2;
F.line = 32;F.filename = "magicsys.nim";
asgnRef((void**) &Gsystypes_97028[((*T_97007).Kind)-0], T_97007);
LA2: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY50551*, Newsystype_97044)(NU8 Kind_97046, NI Size_97047) {
TY50551* Result_97048;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newSysType";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_97048 = 0;
F.line = 35;F.filename = "magicsys.nim";
Result_97048 = Newtype_50706(Kind_97046, Systemmodule_97004);
F.line = 36;F.filename = "magicsys.nim";
(*Result_97048).Size = ((NI64) (Size_97047));
F.line = 37;F.filename = "magicsys.nim";
(*Result_97048).Align = Size_97047;
framePtr = framePtr->prev;
return Result_97048;
}
N_NIMCALL(TY50547*, Getsyssym_97024)(NimStringDesc* Name_97026) {
TY50547* Result_97052;
TY49011* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getSysSym";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_97052 = 0;
F.line = 40;F.filename = "magicsys.nim";
LOC1 = 0;
LOC1 = Getident_49016(Name_97026);
Result_97052 = Strtableget_54069(&(*Systemmodule_97004).Tab, LOC1);
F.line = 41;F.filename = "magicsys.nim";
if (!(Result_97052 == NIM_NIL)) goto LA3;
F.line = 41;F.filename = "magicsys.nim";
Rawmessage_42553(((NU8) 61), Name_97026);
LA3: ;
F.line = 42;F.filename = "magicsys.nim";
if (!((*Result_97052).Kind == ((NU8) 20))) goto LA6;
F.line = 42;F.filename = "magicsys.nim";
Loadstub_88070(Result_97052);
LA6: ;
framePtr = framePtr->prev;
return Result_97052;
}
N_NIMCALL(TY50551*, Systypefromname_97073)(NimStringDesc* Name_97075) {
TY50551* Result_97076;
TY50547* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "sysTypeFromName";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_97076 = 0;
F.line = 45;F.filename = "magicsys.nim";
LOC1 = 0;
LOC1 = Getsyssym_97024(Name_97075);
Result_97076 = (*LOC1).Typ;
framePtr = framePtr->prev;
return Result_97076;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendString";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 150;F.filename = "sysstr.nim";
memcpy(((NCSTRING) (&(*Dest_17392).data[((*Dest_17392).Sup.len)-0])), ((NCSTRING) ((*Src_17393).data)), ((NI32) ((NI64)((NI64)((*Src_17393).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17392).Sup.len += (*Src_17393).Sup.len;
framePtr = framePtr->prev;
}
N_NIMCALL(TY50551*, Getsystype_97008)(NU8 Kind_97010) {
TY50551* Result_97080;
NimStringDesc* LOC4;
NimStringDesc* LOC8;
NimStringDesc* LOC12;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getSysType";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_97080 = 0;
F.line = 48;F.filename = "magicsys.nim";
Result_97080 = Gsystypes_97028[(Kind_97010)-0];
F.line = 49;F.filename = "magicsys.nim";
if (!(Result_97080 == NIM_NIL)) goto LA2;
F.line = 50;F.filename = "magicsys.nim";
switch (Kind_97010) {
case ((NU8) 31):
F.line = 51;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97184));
break;
case ((NU8) 32):
F.line = 52;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97185));
break;
case ((NU8) 33):
F.line = 53;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97186));
break;
case ((NU8) 34):
F.line = 54;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97187));
break;
case ((NU8) 35):
F.line = 55;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97188));
break;
case ((NU8) 36):
F.line = 56;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97189));
break;
case ((NU8) 37):
F.line = 57;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97190));
break;
case ((NU8) 38):
F.line = 58;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97191));
break;
case ((NU8) 1):
F.line = 59;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97192));
break;
case ((NU8) 2):
F.line = 60;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97193));
break;
case ((NU8) 28):
F.line = 61;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97194));
break;
case ((NU8) 29):
F.line = 62;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97195));
break;
case ((NU8) 26):
F.line = 63;F.filename = "magicsys.nim";
Result_97080 = Systypefromname_97073(((NimStringDesc*) &TMP97196));
break;
case ((NU8) 5):
F.line = 64;F.filename = "magicsys.nim";
Result_97080 = Newsystype_97044(((NU8) 5), Ptrsize_46572);
break;
default:
F.line = 65;F.filename = "magicsys.nim";
LOC4 = 0;
LOC4 = rawNewString(reprEnum(Kind_97010, NTI50162)->Sup.len + 22);
appendString(LOC4, ((NimStringDesc*) &TMP97197));
appendString(LOC4, reprEnum(Kind_97010, NTI50162));
Internalerror_42571(LOC4);
break;
}
F.line = 66;F.filename = "magicsys.nim";
asgnRef((void**) &Gsystypes_97028[(Kind_97010)-0], Result_97080);
LA2: ;
F.line = 67;F.filename = "magicsys.nim";
if (!!(((*Result_97080).Kind == Kind_97010))) goto LA6;
F.line = 68;F.filename = "magicsys.nim";
LOC8 = 0;
LOC8 = rawNewString(reprEnum(Kind_97010, NTI50162)->Sup.len + reprEnum((*Result_97080).Kind, NTI50162)->Sup.len + 14);
appendString(LOC8, ((NimStringDesc*) &TMP97198));
appendString(LOC8, reprEnum(Kind_97010, NTI50162));
appendString(LOC8, ((NimStringDesc*) &TMP97199));
appendString(LOC8, reprEnum((*Result_97080).Kind, NTI50162));
Internalerror_42571(LOC8);
LA6: ;
F.line = 69;F.filename = "magicsys.nim";
if (!(Result_97080 == NIM_NIL)) goto LA10;
F.line = 69;F.filename = "magicsys.nim";
LOC12 = 0;
LOC12 = rawNewString(reprEnum(Kind_97010, NTI50162)->Sup.len + 16);
appendString(LOC12, ((NimStringDesc*) &TMP97200));
appendString(LOC12, reprEnum(Kind_97010, NTI50162));
Internalerror_42571(LOC12);
LA10: ;
framePtr = framePtr->prev;
return Result_97080;
}
N_NIMCALL(TY50547*, Getcompilerproc_97011)(NimStringDesc* Name_97013) {
TY50547* Result_97204;
TY49011* Ident_97205;
NI LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getCompilerProc";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_97204 = 0;
Ident_97205 = 0;
F.line = 72;F.filename = "magicsys.nim";
LOC1 = Getnormalizedhash_39037(Name_97013);
Ident_97205 = Getident_49019(Name_97013, LOC1);
F.line = 73;F.filename = "magicsys.nim";
Result_97204 = Strtableget_54069(&Compilerprocs_97029, Ident_97205);
F.line = 74;F.filename = "magicsys.nim";
if (!(Result_97204 == NIM_NIL)) goto LA3;
F.line = 75;F.filename = "magicsys.nim";
Result_97204 = Strtableget_54069(&Rodcompilerprocs_88059, Ident_97205);
F.line = 76;F.filename = "magicsys.nim";
if (!!((Result_97204 == NIM_NIL))) goto LA6;
F.line = 77;F.filename = "magicsys.nim";
Strtableadd_54064(&Compilerprocs_97029, Result_97204);
F.line = 78;F.filename = "magicsys.nim";
if (!((*Result_97204).Kind == ((NU8) 20))) goto LA9;
F.line = 78;F.filename = "magicsys.nim";
Loadstub_88070(Result_97204);
LA9: ;
LA6: ;
LA3: ;
framePtr = framePtr->prev;
return Result_97204;
}
N_NIMCALL(void, Registercompilerproc_97014)(TY50547* S_97016) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "registerCompilerProc";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 81;F.filename = "magicsys.nim";
Strtableadd_54064(&Compilerprocs_97029, S_97016);
framePtr = framePtr->prev;
}
N_NIMCALL(void, Initsystem_97017)(TY54107* Tab_97020) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "InitSystem";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Finishsystem_97021)(TY50529* Tab_97023) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "FinishSystem";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
N_NOINLINE(void, magicsysInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "magicsys";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Compilerprocs_97029.m_type = NTI50529;
F.line = 86;F.filename = "magicsys.nim";
Initstrtable_50746(&Compilerprocs_97029);
framePtr = framePtr->prev;
}

