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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10802 TY10802;
typedef struct TY11190 TY11190;
typedef struct TY10818 TY10818;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TY44008 TY44008;
typedef struct TY4377 TY4377;
typedef struct TY37578 TY37578;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct TY42015 TY42015;
typedef struct TY44006 TY44006;
typedef struct TY44004 TY44004;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY37578 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
typedef NimStringDesc* TY45252[4];
typedef NimStringDesc* TY45272[3];
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TSafePoint {
TSafePoint* prev;
NI status;
E_Base* exc;
jmp_buf context;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY42015 {
  TY42013 Sup;
NimStringDesc* Data;
};
typedef NimStringDesc* TY45352[1];
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY44004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY44008 {
  TNimObject Sup;
NI Counter;
TY44006* Data;
NU8 Mode;
};
struct TY4377 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY44006 {
  TGenericSeq Sup;
  TY44004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12018, void* Src_12019);
static N_INLINE(TY10802*, Usrtocell_11236)(void* Usr_11238);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11858)(TY10802* C_11860);
N_NOINLINE(void, Addzct_11225)(TY10818* S_11228, TY10802* C_11229);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17508);
N_NIMCALL(void*, newSeq)(TNimType* Typ_13004, NI Len_13005);
N_NIMCALL(NIM_BOOL, Existsconfigvar_45129)(NimStringDesc* Key_45131);
N_NIMCALL(NIM_BOOL, Haskey_44033)(TY44008* T_44035, NimStringDesc* Key_44036);
N_NIMCALL(NimStringDesc*, Getconfigvar_45132)(NimStringDesc* Key_45134);
N_NIMCALL(NimStringDesc*, Get_44029)(TY44008* T_44031, NimStringDesc* Key_44032);
N_NIMCALL(void, Setconfigvar_45135)(NimStringDesc* Key_45137, NimStringDesc* Val_45138);
N_NIMCALL(void, Put_44024)(TY44008* T_44026, NimStringDesc* Key_44027, NimStringDesc* Val_44028);
N_NIMCALL(NimStringDesc*, Getoutfile_45142)(NimStringDesc* Filename_45144, NimStringDesc* Ext_45145);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38020, NimStringDesc* Ext_38021);
N_NIMCALL(void, Addimplicitmod_45139)(NimStringDesc* Filename_45141);
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_17803, NI Elemsize_17804, NI Newlen_17805);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, Getprefixdir_45106)(void);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_37577, TY37578* Result);
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void);
N_NIMCALL(NimStringDesc*, Shortendir_45197)(NimStringDesc* Dir_45199);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17592, NimStringDesc* Src_17593);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17609, NIM_CHAR C_17610);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17487);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_24769, NimStringDesc* Prefix_24770);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_45221)(NimStringDesc* Path_45223);
static N_INLINE(NI, subInt)(NI A_6003, NI B_6004);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
N_NIMCALL(NimStringDesc*, Togeneratedfile_45102)(NimStringDesc* Path_45104, NimStringDesc* Ext_45105);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_37487, NI Parts_37487Len0);
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_45098)(NimStringDesc* F_45100, NIM_BOOL Createsubdir_45101);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_4635);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_39603);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_12014, void* Src_12015);
static N_INLINE(void, Incref_12002)(TY10802* C_12004);
static N_INLINE(NIM_BOOL, Canbecycleroot_11240)(TY10802* C_11242);
static N_INLINE(void, Rtladdcycleroot_11852)(TY10802* C_11854);
N_NOINLINE(void, Incl_11074)(TY10814* S_11077, TY10802* Cell_11078);
static N_INLINE(void, Decref_11864)(TY10802* C_11866);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_37403, NimStringDesc* Tail_37404);
N_NIMCALL(NimStringDesc*, Rawfindfile_45293)(NimStringDesc* F_45295);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_36003);
N_NIMCALL(void, chckObj)(TNimType* Obj_5575, TNimType* Subclass_5576);
N_NIMCALL(NimStringDesc*, Findfile_45087)(NimStringDesc* F_45089);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_23448);
N_NIMCALL(NI, Binarystrsearch_45146)(NimStringDesc** X_45149, NI X_45149Len0, NimStringDesc* Y_45150);
static N_INLINE(NI, divInt)(NI A_6403, NI B_6404);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_23595, NimStringDesc* B_23596);
N_NIMCALL(TY44008*, Newstringtable_44019)(NimStringDesc** Keyvaluepairs_44022, NI Keyvaluepairs_44022Len0, NU8 Mode_44023);
N_NIMCALL(void, Writeln_45286)(FILE* F_45289, NimStringDesc* X_45290);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
NIM_CONST NU32 Checksoptions_45072 = IL64(4261609472);
STRING_LITERAL(TMP45086, "", 0);
STRING_LITERAL(TMP45254, "nimcache", 8);
STRING_LITERAL(TMP45292, "cannot create directory: ", 25);
STRING_LITERAL(TMP45353, "\012", 1);
NU32 Goptions_45075;
NU32 Gglobaloptions_45077;
NI8 Gexitcode_45078;
TY42019 Searchpaths_45079;
extern TNimType* NTI42019; /* TLinkedList */
NimStringDesc* Outfile_45080;
extern TY11190 Gch_11210;
NimStringDesc* Gindexfile_45081;
NU8 Gcmd_45082;
NI Gverbosity_45083;
NI Gnumberofprocessors_45084;
TY44008* Gconfigvars_45108;
NimStringDesc* Libpath_45109;
NimStringDesc* Projectpath_45110;
NIM_BOOL Gkeepcomments_45111;
TY4377* Gimplicitmods_45128;
extern TNimType* NTI4377; /* seq[string] */
extern TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
extern E_Base* Currexception_4632;
extern TNimType* NTI42015; /* TStrEntry */
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
N_NIMCALL(NIM_BOOL, Existsconfigvar_45129)(NimStringDesc* Key_45131) {
NIM_BOOL Result_45154;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "existsConfigVar";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45154 = 0;
F.line = 110;F.filename = "options.nim";
Result_45154 = Haskey_44033(Gconfigvars_45108, Key_45131);
framePtr = framePtr->prev;
return Result_45154;
}
N_NIMCALL(NimStringDesc*, Getconfigvar_45132)(NimStringDesc* Key_45134) {
NimStringDesc* Result_45158;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getConfigVar";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45158 = 0;
F.line = 113;F.filename = "options.nim";
Result_45158 = Get_44029(Gconfigvars_45108, Key_45134);
framePtr = framePtr->prev;
return Result_45158;
}
N_NIMCALL(void, Setconfigvar_45135)(NimStringDesc* Key_45137, NimStringDesc* Val_45138) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "setConfigVar";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 116;F.filename = "options.nim";
Put_44024(Gconfigvars_45108, Key_45137, Val_45138);
framePtr = framePtr->prev;
}
N_NIMCALL(NimStringDesc*, Getoutfile_45142)(NimStringDesc* Filename_45144, NimStringDesc* Ext_45145) {
NimStringDesc* Result_45167;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getOutFile";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45167 = 0;
F.line = 119;F.filename = "options.nim";
if (!!(((Outfile_45080) && (Outfile_45080)->Sup.len == 0))) goto LA2;
F.line = 119;F.filename = "options.nim";
Result_45167 = copyString(Outfile_45080);
goto LA1;
LA2: ;
F.line = 120;F.filename = "options.nim";
Result_45167 = nosChangeFileExt(Filename_45144, Ext_45145);
LA1: ;
framePtr = framePtr->prev;
return Result_45167;
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
N_NIMCALL(void, Addimplicitmod_45139)(NimStringDesc* Filename_45141) {
NI Length_45171;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "addImplicitMod";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Length_45171 = 0;
F.line = 124;F.filename = "options.nim";
Length_45171 = Gimplicitmods_45128->Sup.len;
F.line = 125;F.filename = "options.nim";
Gimplicitmods_45128 = (TY4377*) setLengthSeq(&(Gimplicitmods_45128)->Sup, sizeof(NimStringDesc*), addInt(Length_45171, 1));
F.line = 126;F.filename = "options.nim";
if ((NU)(Length_45171) >= (NU)(Gimplicitmods_45128->Sup.len)) raiseIndexError();
asgnRefNoCycle((void**) &Gimplicitmods_45128->data[Length_45171], copyString(Filename_45141));
framePtr = framePtr->prev;
}
N_NIMCALL(NimStringDesc*, Getprefixdir_45106)(void) {
NimStringDesc* Result_45196;
NimStringDesc* LOC1;
TY37578 LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getPrefixDir";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45196 = 0;
F.line = 129;F.filename = "options.nim";
LOC1 = 0;
LOC1 = nosgetApplicationDir();
memset((void*)&LOC2, 0, sizeof(LOC2));
nosSplitPath(LOC1, &LOC2);
Result_45196 = copyString(LOC2.Head);
framePtr = framePtr->prev;
return Result_45196;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17592, NimStringDesc* Src_17593) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendString";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 150;F.filename = "sysstr.nim";
memcpy(((NCSTRING) (&(*Dest_17592).data[((*Dest_17592).Sup.len)-0])), ((NCSTRING) ((*Src_17593).data)), ((int) ((NI32)((NI32)((*Src_17593).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17592).Sup.len += (*Src_17593).Sup.len;
framePtr = framePtr->prev;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17609, NIM_CHAR C_17610) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendChar";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 154;F.filename = "sysstr.nim";
(*Dest_17609).data[((*Dest_17609).Sup.len)-0] = C_17610;
F.line = 155;F.filename = "sysstr.nim";
(*Dest_17609).data[((NI32)((*Dest_17609).Sup.len + 1))-0] = 0;
F.line = 156;F.filename = "sysstr.nim";
(*Dest_17609).Sup.len += 1;
framePtr = framePtr->prev;
}
N_NIMCALL(NimStringDesc*, Shortendir_45197)(NimStringDesc* Dir_45199) {
NimStringDesc* Result_45200;
NimStringDesc* Prefix_45205;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "shortenDir";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45200 = 0;
Prefix_45205 = 0;
F.line = 133;F.filename = "options.nim";
LOC1 = 0;
LOC2 = 0;
LOC2 = Getprefixdir_45106();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
Prefix_45205 = LOC1;
F.line = 134;F.filename = "options.nim";
LOC4 = nsuStartsWith(Dir_45199, Prefix_45205);
if (!LOC4) goto LA5;
F.line = 135;F.filename = "options.nim";
F.line = 135;F.filename = "options.nim";
Result_45200 = copyStr(Dir_45199, Prefix_45205->Sup.len);
goto BeforeRet;
LA5: ;
F.line = 136;F.filename = "options.nim";
LOC7 = 0;
LOC8 = 0;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 47);
Prefix_45205 = LOC7;
F.line = 137;F.filename = "options.nim";
LOC10 = nsuStartsWith(Dir_45199, Prefix_45205);
if (!LOC10) goto LA11;
F.line = 138;F.filename = "options.nim";
F.line = 138;F.filename = "options.nim";
Result_45200 = copyStr(Dir_45199, Prefix_45205->Sup.len);
goto BeforeRet;
LA11: ;
F.line = 139;F.filename = "options.nim";
LOC13 = 0;
LOC13 = rawNewString(Projectpath_45110->Sup.len + 1);
appendString(LOC13, Projectpath_45110);
appendChar(LOC13, 47);
Prefix_45205 = LOC13;
F.line = 141;F.filename = "options.nim";
LOC15 = nsuStartsWith(Dir_45199, Prefix_45205);
if (!LOC15) goto LA16;
F.line = 142;F.filename = "options.nim";
F.line = 142;F.filename = "options.nim";
Result_45200 = copyStr(Dir_45199, Prefix_45205->Sup.len);
goto BeforeRet;
LA16: ;
F.line = 143;F.filename = "options.nim";
Result_45200 = copyString(Dir_45199);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_45200;
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
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_45221)(NimStringDesc* Path_45223) {
NimStringDesc* Result_45224;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "removeTrailingDirSep";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45224 = 0;
F.line = 146;F.filename = "options.nim";
LOC2 = (0 < Path_45223->Sup.len);
if (!(LOC2)) goto LA3;
if ((NU)(subInt(Path_45223->Sup.len, 1)) > (NU)(Path_45223->Sup.len)) raiseIndexError();
LOC2 = ((NU8)(Path_45223->data[subInt(Path_45223->Sup.len, 1)]) == (NU8)(47));
LA3: ;
if (!LOC2) goto LA4;
F.line = 147;F.filename = "options.nim";
Result_45224 = copyStrLast(Path_45223, 0, subInt(Path_45223->Sup.len, 2));
goto LA1;
LA4: ;
F.line = 149;F.filename = "options.nim";
Result_45224 = copyString(Path_45223);
LA1: ;
framePtr = framePtr->prev;
return Result_45224;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_45102)(NimStringDesc* Path_45104, NimStringDesc* Ext_45105) {
NimStringDesc* Result_45239;
TY37578 LOC1;
NimStringDesc* Head_45240;
NimStringDesc* Tail_45241;
NimStringDesc* LOC5;
TY45252 LOC6;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "toGeneratedFile";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45239 = 0;
F.line = 152;F.filename = "options.nim";
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(Path_45104, &LOC1);
Head_45240 = 0;
Head_45240 = copyString(LOC1.Head);
Tail_45241 = 0;
Tail_45241 = copyString(LOC1.Tail);
F.line = 153;F.filename = "options.nim";
if (!(0 < Head_45240->Sup.len)) goto LA3;
F.line = 153;F.filename = "options.nim";
LOC5 = 0;
LOC5 = rawNewString(Head_45240->Sup.len + 1);
appendString(LOC5, Head_45240);
appendChar(LOC5, 47);
Head_45240 = Shortendir_45197(LOC5);
LA3: ;
F.line = 154;F.filename = "options.nim";
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(Projectpath_45110);
LOC6[1] = copyString(((NimStringDesc*) &TMP45254));
LOC6[2] = copyString(Head_45240);
LOC6[3] = nosChangeFileExt(Tail_45241, Ext_45105);
Result_45239 = nosJoinPathOpenArray(LOC6, 4);
framePtr = framePtr->prev;
return Result_45239;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_4635) {
(*S_4635).prev = excHandler;
excHandler = S_4635;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_19404;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getCurrentException";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_19404 = 0;
F.line = 1584;F.filename = "system.nim";
Result_19404 = Currexception_4632;
framePtr = framePtr->prev;
return Result_19404;
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
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_4632, (*Currexception_4632).parent);
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_45098)(NimStringDesc* F_45100, NIM_BOOL Createsubdir_45101) {
NimStringDesc* Result_45259;
TY37578 LOC1;
NimStringDesc* Head_45260;
NimStringDesc* Tail_45261;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_45274;
TY45272 LOC7;
TSafePoint TMP45291;
NimStringDesc* LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "completeGeneratedFilePath";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45259 = 0;
F.line = 157;F.filename = "options.nim";
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(F_45100, &LOC1);
Head_45260 = 0;
Head_45260 = copyString(LOC1.Head);
Tail_45261 = 0;
Tail_45261 = copyString(LOC1.Tail);
F.line = 158;F.filename = "options.nim";
if (!(0 < Head_45260->Sup.len)) goto LA3;
F.line = 158;F.filename = "options.nim";
LOC5 = 0;
LOC5 = rawNewString(Head_45260->Sup.len + 1);
appendString(LOC5, Head_45260);
appendChar(LOC5, 47);
LOC6 = 0;
LOC6 = Shortendir_45197(LOC5);
Head_45260 = Removetrailingdirsep_45221(LOC6);
LA3: ;
Subdir_45274 = 0;
F.line = 159;F.filename = "options.nim";
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(Projectpath_45110);
LOC7[1] = copyString(((NimStringDesc*) &TMP45254));
LOC7[2] = copyString(Head_45260);
Subdir_45274 = nosJoinPathOpenArray(LOC7, 3);
F.line = 160;F.filename = "options.nim";
if (!Createsubdir_45101) goto LA9;
F.line = 161;F.filename = "options.nim";
pushSafePoint(&TMP45291);
TMP45291.status = setjmp(TMP45291.context);
framePtr = (TFrame*)&F;
if (TMP45291.status == 0) {
F.line = 162;F.filename = "options.nim";
noscreateDir(Subdir_45274);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI422) {
F.line = 164;F.filename = "options.nim";
LOC11 = 0;
LOC11 = rawNewString(Subdir_45274->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP45292));
appendString(LOC11, Subdir_45274);
Writeln_45286(stdout, LOC11);
F.line = 165;F.filename = "options.nim";
exit(1);
TMP45291.status = 0;popCurrentException();}
}
if (TMP45291.status != 0) reraiseException();
LA9: ;
F.line = 166;F.filename = "options.nim";
Result_45259 = nosJoinPath(Subdir_45274, Tail_45261);
framePtr = framePtr->prev;
return Result_45259;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_45293)(NimStringDesc* F_45295) {
NimStringDesc* Result_45296;
NIM_BOOL LOC2;
TY42015* It_45297;
NIM_BOOL LOC7;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rawFindFile";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45296 = 0;
F.line = 169;F.filename = "options.nim";
LOC2 = nosexistsFile(F_45295);
if (!LOC2) goto LA3;
F.line = 170;F.filename = "options.nim";
Result_45296 = copyString(F_45295);
goto LA1;
LA3: ;
It_45297 = 0;
F.line = 172;F.filename = "options.nim";
if (Searchpaths_45079.Head) chckObj((*Searchpaths_45079.Head).Sup.m_type, NTI42015);
It_45297 = ((TY42015*) (Searchpaths_45079.Head));
F.line = 173;F.filename = "options.nim";
while (1) {
if (!!((It_45297 == NIM_NIL))) goto LA5;
F.line = 174;F.filename = "options.nim";
Result_45296 = nosJoinPath((*It_45297).Data, F_45295);
F.line = 175;F.filename = "options.nim";
LOC7 = nosexistsFile(Result_45296);
if (!LOC7) goto LA8;
F.line = 175;F.filename = "options.nim";
goto BeforeRet;
LA8: ;
F.line = 176;F.filename = "options.nim";
if ((*It_45297).Sup.Next) chckObj((*(*It_45297).Sup.Next).Sup.m_type, NTI42015);
It_45297 = ((TY42015*) ((*It_45297).Sup.Next));
} LA5: ;
F.line = 177;F.filename = "options.nim";
Result_45296 = copyString(((NimStringDesc*) &TMP45086));
LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_45296;
}
N_NIMCALL(NimStringDesc*, Findfile_45087)(NimStringDesc* F_45089) {
NimStringDesc* Result_45313;
NimStringDesc* LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "FindFile";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45313 = 0;
F.line = 180;F.filename = "options.nim";
Result_45313 = Rawfindfile_45293(F_45089);
F.line = 181;F.filename = "options.nim";
if (!(Result_45313->Sup.len == 0)) goto LA2;
F.line = 181;F.filename = "options.nim";
LOC4 = 0;
LOC4 = nsuToLowerStr(F_45089);
Result_45313 = Rawfindfile_45293(LOC4);
LA2: ;
framePtr = framePtr->prev;
return Result_45313;
}
static N_INLINE(NI, divInt)(NI A_6403, NI B_6404) {
NI Result_6405;
NIM_BOOL LOC5;
Result_6405 = 0;
if (!(B_6404 == 0)) goto LA2;
raiseDivByZero();
LA2: ;
LOC5 = (A_6403 == (-2147483647 -1));
if (!(LOC5)) goto LA6;
LOC5 = (B_6404 == -1);
LA6: ;
if (!LOC5) goto LA7;
raiseOverflow();
LA7: ;
Result_6405 = (NI32)(A_6403 / B_6404);
goto BeforeRet;
BeforeRet: ;
return Result_6405;
}
N_NIMCALL(NI, Binarystrsearch_45146)(NimStringDesc** X_45149, NI X_45149Len0, NimStringDesc* Y_45150) {
NI Result_45323;
NI A_45324;
NI B_45335;
NI Mid_45338;
NI C_45339;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "binaryStrSearch";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45323 = 0;
A_45324 = 0;
F.line = 184;F.filename = "options.nim";
A_45324 = 0;
B_45335 = 0;
F.line = 185;F.filename = "options.nim";
B_45335 = subInt(X_45149Len0, 1);
F.line = 186;F.filename = "options.nim";
while (1) {
if (!(A_45324 <= B_45335)) goto LA1;
Mid_45338 = 0;
F.line = 187;F.filename = "options.nim";
Mid_45338 = divInt(addInt(A_45324, B_45335), 2);
C_45339 = 0;
F.line = 188;F.filename = "options.nim";
if ((NU)(Mid_45338) >= (NU)(X_45149Len0)) raiseIndexError();
C_45339 = nsuCmpIgnoreCase(X_45149[Mid_45338], Y_45150);
F.line = 189;F.filename = "options.nim";
if (!(C_45339 < 0)) goto LA3;
F.line = 190;F.filename = "options.nim";
A_45324 = addInt(Mid_45338, 1);
goto LA2;
LA3: ;
if (!(0 < C_45339)) goto LA5;
F.line = 192;F.filename = "options.nim";
B_45335 = subInt(Mid_45338, 1);
goto LA2;
LA5: ;
F.line = 194;F.filename = "options.nim";
F.line = 194;F.filename = "options.nim";
Result_45323 = Mid_45338;
goto BeforeRet;
LA2: ;
} LA1: ;
F.line = 195;F.filename = "options.nim";
Result_45323 = -1;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_45323;
}
N_NIMCALL(void, Writeln_45286)(FILE* F_45289, NimStringDesc* X_45290) {
Write_3658(F_45289, X_45290);
Write_3658(F_45289, ((NimStringDesc*) &TMP45353));
}
N_NOINLINE(void, optionsInit)(void) {
TY45352 LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "options";
F.prev = framePtr;
F.filename = "rod/options.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 63;F.filename = "options.nim";
Goptions_45075 = 1050280192;
F.line = 66;F.filename = "options.nim";
Gglobaloptions_45077 = 134217728;
Searchpaths_45079.m_type = NTI42019;
F.line = 69;F.filename = "options.nim";
asgnRefNoCycle((void**) &Outfile_45080, copyString(((NimStringDesc*) &TMP45086)));
F.line = 70;F.filename = "options.nim";
asgnRefNoCycle((void**) &Gindexfile_45081, copyString(((NimStringDesc*) &TMP45086)));
F.line = 71;F.filename = "options.nim";
Gcmd_45082 = ((NU8) 0);
F.line = 96;F.filename = "options.nim";
asgnRefNoCycle((void**) &Libpath_45109, copyString(((NimStringDesc*) &TMP45086)));
F.line = 97;F.filename = "options.nim";
asgnRefNoCycle((void**) &Projectpath_45110, copyString(((NimStringDesc*) &TMP45086)));
F.line = 98;F.filename = "options.nim";
Gkeepcomments_45111 = NIM_TRUE;
F.line = 99;F.filename = "options.nim";
asgnRefNoCycle((void**) &Gimplicitmods_45128, (TY4377*) newSeq(NTI4377, 0));
F.line = 197;F.filename = "options.nim";
memset((void*)&LOC1, 0, sizeof(LOC1));
asgnRefNoCycle((void**) &Gconfigvars_45108, Newstringtable_44019(LOC1, 0, ((NU8) 2)));
framePtr = framePtr->prev;
}

