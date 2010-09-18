/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY50529 TY50529;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50527 TY50527;
typedef struct TY50547 TY50547;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY49011 TY49011;
typedef struct TY49005 TY49005;
typedef struct TNimObject TNimObject;
typedef struct TY50551 TY50551;
typedef struct TY42532 TY42532;
typedef struct TY50525 TY50525;
typedef struct TY50539 TY50539;
typedef struct TY47008 TY47008;
typedef struct TY50543 TY50543;
typedef struct TY10602 TY10602;
typedef struct TY8004 TY8004;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct TY54079 TY54079;
typedef struct TY46448 TY46448;
typedef struct TY46036 TY46036;
typedef struct TY50549 TY50549;
typedef struct TY50519 TY50519;
typedef struct TY38013 TY38013;
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY42532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY50539 {
NU8 K;
NU8 S;
NU8 Flags;
TY50551* T;
TY47008* R;
NI A;
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
struct TY54079 {
NI H;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
};
struct TY46448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY46448 TY46461[12];
typedef NimStringDesc* TY46457[2];
struct TY46036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY46036 TY46054[21];
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
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
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
N_NIMCALL(void, Definesymbol_58006)(NimStringDesc* Symbol_58008);
N_NIMCALL(TY49011*, Getident_49016)(NimStringDesc* Identifier_49018);
N_NIMCALL(TY50547*, Strtableget_54069)(TY50529* T_54071, TY49011* Name_54072);
N_NIMCALL(void*, newObj)(TNimType* Typ_12307, NI Size_12308);
N_NIMCALL(void, objectInit)(void* Dest_18262, TNimType* Typ_18263);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
N_NIMCALL(void, Strtableadd_54064)(TY50529* T_54067, TY50547* N_54068);
N_NIMCALL(void, Undefsymbol_58009)(NimStringDesc* Symbol_58011);
N_NIMCALL(NIM_BOOL, Isdefined_58012)(TY49011* Symbol_58014);
N_NIMCALL(void, Listsymbols_58015)(void);
N_NIMCALL(TY50547*, Inittabiter_54081)(TY54079* Ti_54084, TY50529* Tab_54085);
N_NIMCALL(void, Messageout_42550)(NimStringDesc* S_42552);
N_NIMCALL(TY50547*, Nextiter_54086)(TY54079* Ti_54089, TY50529* Tab_54090);
N_NIMCALL(NI, Countdefinedsymbols_58017)(void);
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, Initdefines_58002)(void);
N_NIMCALL(void, Initstrtable_50746)(TY50529* X_50749);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_18003);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17287);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_23546);
N_NIMCALL(void, Deinitdefines_58004)(void);
STRING_LITERAL(TMP58104, "-- List of currently defined symbols --", 39);
STRING_LITERAL(TMP58105, "-- End of list --", 17);
STRING_LITERAL(TMP58152, "nimrod", 6);
STRING_LITERAL(TMP58153, "x86", 3);
STRING_LITERAL(TMP58154, "itanium", 7);
STRING_LITERAL(TMP58155, "x8664", 5);
STRING_LITERAL(TMP58156, "msdos", 5);
STRING_LITERAL(TMP58157, "mswindows", 9);
STRING_LITERAL(TMP58158, "win32", 5);
STRING_LITERAL(TMP58159, "unix", 4);
STRING_LITERAL(TMP58160, "posix", 5);
STRING_LITERAL(TMP58161, "sunos", 5);
STRING_LITERAL(TMP58162, "bsd", 3);
STRING_LITERAL(TMP58163, "macintosh", 9);
STRING_LITERAL(TMP58164, "cpu", 3);
extern NIM_CONST TY46461 Cpu_46460;
extern NIM_CONST TY46457 Endiantostr_46456;
extern NIM_CONST TY46054 Os_46053;
TY50529 Gsymbols_58001;
extern TNimType* NTI50529; /* TStrTable */
extern TNimType* NTI50523; /* PSym */
extern TNimType* NTI50547; /* TSym */
extern TY8016 Dl_8015;
extern TY10990 Gch_11010;
extern TY8020 Dl_8019;
extern NU8 Targetcpu_46560;
extern NU8 Targetos_46562;
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
Result_11039 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11038))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
framePtr = framePtr->prev;
return Result_11039;
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
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819) {
TY10602* C_11820;
NI LOC4;
TY10602* C_11822;
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
if (!!((Src_11819 == NIM_NIL))) goto LA2;
C_11820 = 0;
F.line = 245;F.filename = "gc.nim";
C_11820 = Usrtocell_11036(Src_11819);
F.line = 246;F.filename = "gc.nim";
LOC4 = Atomicinc_3001(&(*C_11820).Refcount, 8);
LA2: ;
F.line = 247;F.filename = "gc.nim";
if (!!(((*Dest_11818) == NIM_NIL))) goto LA6;
C_11822 = 0;
F.line = 248;F.filename = "gc.nim";
C_11822 = Usrtocell_11036((*Dest_11818));
F.line = 249;F.filename = "gc.nim";
LOC9 = Atomicdec_3006(&(*C_11822).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11658(C_11822);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11818) = Src_11819;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Definesymbol_58006)(NimStringDesc* Symbol_58008) {
TY49011* I_58022;
TY50547* Sym_58023;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "DefineSymbol";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_58022 = 0;
F.line = 27;F.filename = "condsyms.nim";
I_58022 = Getident_49016(Symbol_58008);
Sym_58023 = 0;
F.line = 28;F.filename = "condsyms.nim";
Sym_58023 = Strtableget_54069(&Gsymbols_58001, I_58022);
F.line = 29;F.filename = "condsyms.nim";
if (!(Sym_58023 == NIM_NIL)) goto LA2;
F.line = 30;F.filename = "condsyms.nim";
Sym_58023 = (TY50547*) newObj(NTI50523, sizeof(TY50547));
objectInit(Sym_58023, NTI50547);
F.line = 31;F.filename = "condsyms.nim";
(*Sym_58023).Kind = ((NU8) 1);
F.line = 32;F.filename = "condsyms.nim";
asgnRefNoCycle((void**) &(*Sym_58023).Name, I_58022);
F.line = 33;F.filename = "condsyms.nim";
Strtableadd_54064(&Gsymbols_58001, Sym_58023);
LA2: ;
F.line = 34;F.filename = "condsyms.nim";
(*Sym_58023).Position = 1;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Undefsymbol_58009)(NimStringDesc* Symbol_58011) {
TY50547* Sym_58054;
TY49011* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "UndefSymbol";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Sym_58054 = 0;
F.line = 37;F.filename = "condsyms.nim";
LOC1 = 0;
LOC1 = Getident_49016(Symbol_58011);
Sym_58054 = Strtableget_54069(&Gsymbols_58001, LOC1);
F.line = 38;F.filename = "condsyms.nim";
if (!!((Sym_58054 == NIM_NIL))) goto LA3;
F.line = 38;F.filename = "condsyms.nim";
(*Sym_58054).Position = 0;
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(NIM_BOOL, Isdefined_58012)(TY49011* Symbol_58014) {
NIM_BOOL Result_58069;
TY50547* Sym_58070;
NIM_BOOL LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "isDefined";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_58069 = 0;
Sym_58070 = 0;
F.line = 41;F.filename = "condsyms.nim";
Sym_58070 = Strtableget_54069(&Gsymbols_58001, Symbol_58014);
F.line = 42;F.filename = "condsyms.nim";
LOC1 = !((Sym_58070 == NIM_NIL));
if (!(LOC1)) goto LA2;
LOC1 = ((*Sym_58070).Position == 1);
LA2: ;
Result_58069 = LOC1;
framePtr = framePtr->prev;
return Result_58069;
}
N_NIMCALL(void, Listsymbols_58015)(void) {
TY54079 It_58086;
TY50547* S_58088;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ListSymbols";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&It_58086, 0, sizeof(It_58086));
S_58088 = 0;
F.line = 46;F.filename = "condsyms.nim";
S_58088 = Inittabiter_54081(&It_58086, &Gsymbols_58001);
F.line = 47;F.filename = "condsyms.nim";
Messageout_42550(((NimStringDesc*) &TMP58104));
F.line = 48;F.filename = "condsyms.nim";
while (1) {
if (!!((S_58088 == NIM_NIL))) goto LA1;
F.line = 49;F.filename = "condsyms.nim";
if (!((*S_58088).Position == 1)) goto LA3;
F.line = 49;F.filename = "condsyms.nim";
Messageout_42550((*(*S_58088).Name).S);
LA3: ;
F.line = 50;F.filename = "condsyms.nim";
S_58088 = Nextiter_54086(&It_58086, &Gsymbols_58001);
} LA1: ;
F.line = 51;F.filename = "condsyms.nim";
Messageout_42550(((NimStringDesc*) &TMP58105));
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
N_NIMCALL(NI, Countdefinedsymbols_58017)(void) {
NI Result_58108;
TY54079 It_58109;
TY50547* S_58111;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "countDefinedSymbols";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_58108 = 0;
memset((void*)&It_58109, 0, sizeof(It_58109));
S_58111 = 0;
F.line = 55;F.filename = "condsyms.nim";
S_58111 = Inittabiter_54081(&It_58109, &Gsymbols_58001);
F.line = 56;F.filename = "condsyms.nim";
Result_58108 = 0;
F.line = 57;F.filename = "condsyms.nim";
while (1) {
if (!!((S_58111 == NIM_NIL))) goto LA1;
F.line = 58;F.filename = "condsyms.nim";
if (!((*S_58111).Position == 1)) goto LA3;
F.line = 58;F.filename = "condsyms.nim";
Result_58108 = addInt(Result_58108, 1);
LA3: ;
F.line = 59;F.filename = "condsyms.nim";
S_58111 = Nextiter_54086(&It_58109, &Gsymbols_58001);
} LA1: ;
framePtr = framePtr->prev;
return Result_58108;
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
memcpy(((NCSTRING) (&(*Dest_17392).data[((*Dest_17392).Sup.len)-0])), ((NCSTRING) ((*Src_17393).data)), ((NI32) ((NI32)((NI32)((*Src_17393).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17392).Sup.len += (*Src_17393).Sup.len;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Initdefines_58002)(void) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "InitDefines";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 62;F.filename = "condsyms.nim";
Initstrtable_50746(&Gsymbols_58001);
F.line = 63;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58152));
F.line = 66;F.filename = "condsyms.nim";
switch (Targetcpu_46560) {
case ((NU8) 1):
F.line = 67;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58153));
break;
case ((NU8) 7):
F.line = 68;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58154));
break;
case ((NU8) 8):
F.line = 69;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58155));
break;
default:
break;
}
F.line = 72;F.filename = "condsyms.nim";
switch (Targetos_46562) {
case ((NU8) 1):
F.line = 74;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58156));
break;
case ((NU8) 2):
F.line = 76;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58157));
F.line = 77;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58158));
break;
case ((NU8) 4):
case ((NU8) 5):
case ((NU8) 6):
case ((NU8) 8):
case ((NU8) 13):
case ((NU8) 14):
case ((NU8) 16):
case ((NU8) 12):
F.line = 80;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58159));
F.line = 81;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58160));
break;
case ((NU8) 7):
F.line = 83;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58161));
F.line = 84;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58159));
F.line = 85;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58160));
break;
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 11):
F.line = 87;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58159));
F.line = 88;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58162));
F.line = 89;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58160));
break;
case ((NU8) 18):
F.line = 91;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58163));
break;
case ((NU8) 19):
F.line = 93;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58163));
F.line = 94;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58159));
F.line = 95;F.filename = "condsyms.nim";
Definesymbol_58006(((NimStringDesc*) &TMP58160));
break;
default:
break;
}
F.line = 98;F.filename = "condsyms.nim";
LOC1 = 0;
if (Targetcpu_46560 < 1 || Targetcpu_46560 > 12) raiseIndexError();
LOC2 = 0;
LOC2 = nimIntToStr(Cpu_46460[(Targetcpu_46560)-1].Bit);
LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &TMP58164));
appendString(LOC1, LOC2);
Definesymbol_58006(LOC1);
F.line = 99;F.filename = "condsyms.nim";
if (Targetcpu_46560 < 1 || Targetcpu_46560 > 12) raiseIndexError();
LOC3 = 0;
LOC3 = nsuNormalize(Endiantostr_46456[(Cpu_46460[(Targetcpu_46560)-1].Endian)-0]);
Definesymbol_58006(LOC3);
F.line = 100;F.filename = "condsyms.nim";
if (Targetcpu_46560 < 1 || Targetcpu_46560 > 12) raiseIndexError();
Definesymbol_58006(Cpu_46460[(Targetcpu_46560)-1].Name);
F.line = 101;F.filename = "condsyms.nim";
if (Targetos_46562 < 1 || Targetos_46562 > 21) raiseIndexError();
Definesymbol_58006(Os_46053[(Targetos_46562)-1].Name);
framePtr = framePtr->prev;
}
N_NIMCALL(void, Deinitdefines_58004)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "DeinitDefines";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
N_NOINLINE(void, condsymsInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "condsyms";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Gsymbols_58001.m_type = NTI50529;
framePtr = framePtr->prev;
}

