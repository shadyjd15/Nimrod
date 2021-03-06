/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY46532 TY46532;
typedef struct TY54525 TY54525;
typedef struct TY54551 TY54551;
typedef struct TY54547 TY54547;
typedef struct TY53011 TY53011;
typedef struct TY54519 TY54519;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54543 TY54543;
typedef struct TY105012 TY105012;
typedef struct TY103002 TY103002;
typedef struct TY105006 TY105006;
typedef struct TY58107 TY58107;
typedef struct TY58109 TY58109;
typedef struct TY54900 TY54900;
typedef struct TY54896 TY54896;
typedef struct TY54898 TY54898;
typedef struct TY42019 TY42019;
typedef struct TY42013 TY42013;
typedef struct TY54549 TY54549;
typedef struct TY58092 TY58092;
typedef struct TY58079 TY58079;
typedef struct TY10802 TY10802;
typedef struct TY11190 TY11190;
typedef struct TY10818 TY10818;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY46532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY54525 {
TY54551* Typ;
NimStringDesc* Comment;
TY46532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY54547* Sym;
} S4;
struct {TY53011* Ident;
} S5;
struct {TY54519* Sons;
} S6;
} KindU;
};
typedef NU8 TY54999[16];
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
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
};
struct TY54547 {
  TY53005 Sup;
NU8 Kind;
NU8 Magic;
TY54551* Typ;
TY53011* Name;
TY46532 Info;
TY54547* Owner;
NU32 Flags;
TY54529 Tab;
TY54525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY54539 Loc;
TY54543* Annex;
};
struct TY103002 {
  TNimObject Sup;
};
struct TY58107 {
NI Tos;
TY58109* Stack;
};
struct TY54900 {
NI Counter;
NI Max;
TY54896* Head;
TY54898* Data;
};
struct TY42019 {
TNimType* m_type;
TY42013* Head;
TY42013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY54525*, TY105032) (TY105012* C_105033, TY54525* N_105034);
typedef N_NIMCALL_PTR(TY54525*, TY105037) (TY105012* C_105038, TY54525* N_105039);
struct TY105012 {
  TY103002 Sup;
TY54547* Module;
TY105006* P;
NI Instcounter;
TY54525* Generics;
NI Lastgenericidx;
TY58107 Tab;
TY54900 Ambiguoussymbols;
TY54527* Converters;
TY42019 Optionstack;
TY42019 Libs;
NIM_BOOL Fromcache;
TY105032 Semconstexpr;
TY105037 Semexpr;
TY54900 Includedfiles;
NimStringDesc* Filename;
TY54529 Userpragmas;
};
struct TY54551 {
  TY53005 Sup;
NU8 Kind;
TY54549* Sons;
TY54525* N;
NU8 Flags;
NU8 Callconv;
TY54547* Owner;
TY54547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY54539 Loc;
};
struct TY58092 {
NI H;
TY53011* Name;
};
struct TY58079 {
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(TY54547*, TY103044) (NimStringDesc* Filename_103045);
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
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY54543 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54525* Path;
};
struct TY105006 {
TY54547* Owner;
TY54547* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8814[16];
struct TY54896 {
TY54896* Next;
NI Key;
TY8814 Bits;
};
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
struct TY58109 {
  TGenericSeq Sup;
  TY54529 data[SEQ_DECL_SIZE];
};
struct TY54898 {
  TGenericSeq Sup;
  TY54896* data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, Findmodule_108016)(TY46532 Info_108018, NimStringDesc* Modulename_108019);
N_NIMCALL(NimStringDesc*, Findfile_45087)(NimStringDesc* F_45089);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_38044, NimStringDesc* Ext_38045);
N_NIMCALL(void, Limessage_46562)(TY46532 Info_46564, NU8 Msg_46565, NimStringDesc* Arg_46566);
N_NIMCALL(NimStringDesc*, Getmodulefile_108013)(TY54525* N_108015);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_35856);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5475);
N_NIMCALL(void, Internalerror_46567)(TY46532 Info_46569, NimStringDesc* Errmsg_46570);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17508);
N_NIMCALL(void, Rawimportsymbol_108070)(TY105012* C_108072, TY54547* S_108073);
N_NIMCALL(TY54547*, Strtableget_58069)(TY54529* T_58071, TY53011* Name_58072);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, Intsetincl_54914)(TY54900* S_54917, NI Key_54918);
N_NIMCALL(void, Strtableadd_58064)(TY54529* T_58067, TY54547* N_58068);
N_NIMCALL(NI, Sonslen_54803)(TY54525* N_54805);
static N_INLINE(NI, subInt)(NI A_6003, NI B_6004);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(TY54547*, Initidentiter_58095)(TY58092* Ti_58098, TY54529* Tab_58099, TY53011* S_58100);
N_NIMCALL(TY54547*, Nextidentiter_58101)(TY58092* Ti_58104, TY54529* Tab_58105);
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804);
N_NIMCALL(void, Addconverter_105058)(TY105012* C_105060, TY54547* Conv_105061);
N_NIMCALL(void, Importsymbol_108232)(TY105012* C_108234, TY54525* Ident_108235, TY54547* Frommod_108236);
N_NIMCALL(void, Loadstub_91070)(TY54547* S_91072);
N_NIMCALL(void, Importallsymbols_108009)(TY105012* C_108011, TY54547* Frommod_108012);
N_NIMCALL(TY54547*, Inittabiter_58081)(TY58079* Ti_58084, TY54529* Tab_58085);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17592, NimStringDesc* Src_17593);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_18579, TNimType* Typ_18580);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17487);
N_NIMCALL(TY54547*, Nextiter_58086)(TY58079* Ti_58089, TY54529* Tab_58090);
N_NIMCALL(TY54525*, Evalimport_108001)(TY105012* C_108003, TY54525* N_108004);
N_NIMCALL(void, Adddecl_106026)(TY105012* C_106028, TY54547* Sym_106029);
N_NIMCALL(TY54525*, Evalfrom_108005)(TY105012* C_108007, TY54525* N_108008);
N_NIMCALL(void, Checkminsonslen_105103)(TY54525* N_105105, NI Length_105106);
N_NIMCALL(TY54525*, Newsymnode_54734)(TY54547* Sym_54736);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12018, void* Src_12019);
static N_INLINE(TY10802*, Usrtocell_11236)(void* Usr_11238);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11858)(TY10802* C_11860);
N_NOINLINE(void, Addzct_11225)(TY10818* S_11228, TY10802* C_11229);
STRING_LITERAL(TMP108021, "nim", 3);
static NIM_CONST TY54999 TMP108062 = {
0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP108063, "strVal", 6);
static NIM_CONST TY54999 TMP108064 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP108065, "ident", 5);
static NIM_CONST TY54999 TMP108066 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP108067, "sym", 3);
STRING_LITERAL(TMP108068, "getModuleFile()", 15);
STRING_LITERAL(TMP108069, "", 0);
static NIM_CONST TY54999 TMP108229 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP108230, "sons", 4);
STRING_LITERAL(TMP108231, "rawImportSymbol", 15);
STRING_LITERAL(TMP108320, "importSymbol", 12);
STRING_LITERAL(TMP108321, "importSymbol: 2", 15);
STRING_LITERAL(TMP108322, "importSymbol: 3", 15);
STRING_LITERAL(TMP108388, "importAllSymbols: ", 18);
extern TNimType* NTI54174; /* TSymKind */
extern TY103044 Gimportmodule_103047;
extern TY11190 Gch_11210;
N_NIMCALL(NimStringDesc*, Findmodule_108016)(TY46532 Info_108018, NimStringDesc* Modulename_108019) {
NimStringDesc* Result_108020;
NimStringDesc* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "findModule";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_108020 = 0;
F.line = 24;F.filename = "importer.nim";
LOC1 = 0;
LOC1 = nosaddFileExt(Modulename_108019, ((NimStringDesc*) &TMP108021));
Result_108020 = Findfile_45087(LOC1);
F.line = 25;F.filename = "importer.nim";
if (!((Result_108020) && (Result_108020)->Sup.len == 0)) goto LA3;
F.line = 25;F.filename = "importer.nim";
Limessage_46562(Info_108018, ((NU8) 2), Modulename_108019);
LA3: ;
framePtr = framePtr->prev;
return Result_108020;
}
N_NIMCALL(NimStringDesc*, Getmodulefile_108013)(TY54525* N_108015) {
NimStringDesc* Result_108025;
NimStringDesc* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getModuleFile";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_108025 = 0;
F.line = 28;F.filename = "importer.nim";
switch ((*N_108015).Kind) {
case ((NU8) 14):
case ((NU8) 15):
case ((NU8) 16):
F.line = 30;F.filename = "importer.nim";
if (!(((TMP108062[(*N_108015).Kind/8] &(1<<((*N_108015).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP108063));
LOC1 = 0;
LOC1 = nosUnixToNativePath((*N_108015).KindU.S3.Strval);
Result_108025 = Findmodule_108016((*N_108015).Info, LOC1);
break;
case ((NU8) 2):
F.line = 32;F.filename = "importer.nim";
if (!(((TMP108064[(*N_108015).Kind/8] &(1<<((*N_108015).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP108065));
Result_108025 = Findmodule_108016((*N_108015).Info, (*(*N_108015).KindU.S5.Ident).S);
break;
case ((NU8) 3):
F.line = 34;F.filename = "importer.nim";
if (!(((TMP108066[(*N_108015).Kind/8] &(1<<((*N_108015).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP108067));
Result_108025 = Findmodule_108016((*N_108015).Info, (*(*(*N_108015).KindU.S4.Sym).Name).S);
break;
default:
F.line = 36;F.filename = "importer.nim";
Internalerror_46567((*N_108015).Info, ((NimStringDesc*) &TMP108068));
F.line = 37;F.filename = "importer.nim";
Result_108025 = copyString(((NimStringDesc*) &TMP108069));
break;
}
framePtr = framePtr->prev;
return Result_108025;
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
N_NIMCALL(void, Rawimportsymbol_108070)(TY105012* C_108072, TY54547* S_108073) {
TY54547* Copy_108074;
TY54547* Check_108075;
NIM_BOOL LOC2;
TY54551* Etyp_108112;
NI J_108147;
NI HEX3Atmp_108220;
NI LOC15;
NI Res_108222;
TY54547* E_108172;
TY58092 It_108182;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rawImportSymbol";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Copy_108074 = 0;
F.line = 42;F.filename = "importer.nim";
Copy_108074 = S_108073;
Check_108075 = 0;
F.line = 44;F.filename = "importer.nim";
if ((NU)(0) >= (NU)((*C_108072).Tab.Stack->Sup.len)) raiseIndexError();
Check_108075 = Strtableget_58069(&(*C_108072).Tab.Stack->data[0], (*S_108073).Name);
F.line = 45;F.filename = "importer.nim";
LOC2 = !((Check_108075 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = !(((*Check_108075).Sup.Id == (*Copy_108074).Sup.Id));
LA3: ;
if (!LOC2) goto LA4;
F.line = 46;F.filename = "importer.nim";
if (!!(((269824 &(1<<(((*S_108073).Kind)&31)))!=0))) goto LA7;
F.line = 48;F.filename = "importer.nim";
Intsetincl_54914(&(*C_108072).Ambiguoussymbols, (*Copy_108074).Sup.Id);
F.line = 49;F.filename = "importer.nim";
Intsetincl_54914(&(*C_108072).Ambiguoussymbols, (*Check_108075).Sup.Id);
LA7: ;
LA4: ;
F.line = 50;F.filename = "importer.nim";
if ((NU)(0) >= (NU)((*C_108072).Tab.Stack->Sup.len)) raiseIndexError();
Strtableadd_58064(&(*C_108072).Tab.Stack->data[0], Copy_108074);
F.line = 51;F.filename = "importer.nim";
if (!((*S_108073).Kind == ((NU8) 6))) goto LA10;
Etyp_108112 = 0;
F.line = 52;F.filename = "importer.nim";
Etyp_108112 = (*S_108073).Typ;
F.line = 53;F.filename = "importer.nim";
if (!((*Etyp_108112).Kind == ((NU8) 1) || (*Etyp_108112).Kind == ((NU8) 14))) goto LA13;
J_108147 = 0;
HEX3Atmp_108220 = 0;
F.line = 54;F.filename = "importer.nim";
LOC15 = Sonslen_54803((*Etyp_108112).N);
HEX3Atmp_108220 = subInt(LOC15, 1);
Res_108222 = 0;
F.line = 1021;F.filename = "system.nim";
Res_108222 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_108222 <= HEX3Atmp_108220)) goto LA16;
F.line = 1021;F.filename = "system.nim";
J_108147 = Res_108222;
E_108172 = 0;
F.line = 55;F.filename = "importer.nim";
if (((TMP108229[(*(*Etyp_108112).N).Kind/8] &(1<<((*(*Etyp_108112).N).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP108230));
if ((NU)(J_108147) >= (NU)((*(*Etyp_108112).N).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP108066[(*(*(*Etyp_108112).N).KindU.S6.Sons->data[J_108147]).Kind/8] &(1<<((*(*(*Etyp_108112).N).KindU.S6.Sons->data[J_108147]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP108067));
E_108172 = (*(*(*Etyp_108112).N).KindU.S6.Sons->data[J_108147]).KindU.S4.Sym;
F.line = 56;F.filename = "importer.nim";
if (!!(((*E_108172).Kind == ((NU8) 16)))) goto LA18;
F.line = 57;F.filename = "importer.nim";
Internalerror_46567((*S_108073).Info, ((NimStringDesc*) &TMP108231));
LA18: ;
memset((void*)&It_108182, 0, sizeof(It_108182));
F.line = 62;F.filename = "importer.nim";
if ((NU)(0) >= (NU)((*C_108072).Tab.Stack->Sup.len)) raiseIndexError();
Check_108075 = Initidentiter_58095(&It_108182, &(*C_108072).Tab.Stack->data[0], (*E_108172).Name);
F.line = 63;F.filename = "importer.nim";
while (1) {
if (!!((Check_108075 == NIM_NIL))) goto LA20;
F.line = 64;F.filename = "importer.nim";
if (!((*Check_108075).Sup.Id == (*E_108172).Sup.Id)) goto LA22;
F.line = 65;F.filename = "importer.nim";
E_108172 = NIM_NIL;
F.line = 66;F.filename = "importer.nim";
goto LA20;
LA22: ;
F.line = 67;F.filename = "importer.nim";
if ((NU)(0) >= (NU)((*C_108072).Tab.Stack->Sup.len)) raiseIndexError();
Check_108075 = Nextidentiter_58101(&It_108182, &(*C_108072).Tab.Stack->data[0]);
} LA20: ;
F.line = 68;F.filename = "importer.nim";
if (!!((E_108172 == NIM_NIL))) goto LA25;
F.line = 69;F.filename = "importer.nim";
Rawimportsymbol_108070(C_108072, E_108172);
LA25: ;
F.line = 1024;F.filename = "system.nim";
Res_108222 = addInt(Res_108222, 1);
} LA16: ;
LA13: ;
goto LA9;
LA10: ;
if (!((*S_108073).Kind == ((NU8) 12))) goto LA27;
F.line = 71;F.filename = "importer.nim";
Addconverter_105058(C_108072, S_108073);
goto LA9;
LA27: ;
LA9: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Importsymbol_108232)(TY105012* C_108234, TY54525* Ident_108235, TY54547* Frommod_108236) {
TY54547* S_108258;
TY58092 It_108302;
TY54547* E_108304;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "importSymbol";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 74;F.filename = "importer.nim";
if (!!(((*Ident_108235).Kind == ((NU8) 2)))) goto LA2;
F.line = 74;F.filename = "importer.nim";
Internalerror_46567((*Ident_108235).Info, ((NimStringDesc*) &TMP108320));
LA2: ;
S_108258 = 0;
F.line = 75;F.filename = "importer.nim";
if (!(((TMP108064[(*Ident_108235).Kind/8] &(1<<((*Ident_108235).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP108065));
S_108258 = Strtableget_58069(&(*Frommod_108236).Tab, (*Ident_108235).KindU.S5.Ident);
F.line = 76;F.filename = "importer.nim";
if (!(S_108258 == NIM_NIL)) goto LA5;
F.line = 76;F.filename = "importer.nim";
if (!(((TMP108064[(*Ident_108235).Kind/8] &(1<<((*Ident_108235).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP108065));
Limessage_46562((*Ident_108235).Info, ((NU8) 58), (*(*Ident_108235).KindU.S5.Ident).S);
LA5: ;
F.line = 77;F.filename = "importer.nim";
if (!((*S_108258).Kind == ((NU8) 20))) goto LA8;
F.line = 77;F.filename = "importer.nim";
Loadstub_91070(S_108258);
LA8: ;
F.line = 78;F.filename = "importer.nim";
if (!!(((1081280 &(1<<(((*S_108258).Kind)&31)))!=0))) goto LA11;
F.line = 79;F.filename = "importer.nim";
Internalerror_46567((*Ident_108235).Info, ((NimStringDesc*) &TMP108321));
LA11: ;
F.line = 81;F.filename = "importer.nim";
switch ((*S_108258).Kind) {
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 14):
case ((NU8) 12):
memset((void*)&It_108302, 0, sizeof(It_108302));
E_108304 = 0;
F.line = 85;F.filename = "importer.nim";
E_108304 = Initidentiter_58095(&It_108302, &(*Frommod_108236).Tab, (*S_108258).Name);
F.line = 86;F.filename = "importer.nim";
while (1) {
if (!!((E_108304 == NIM_NIL))) goto LA13;
F.line = 87;F.filename = "importer.nim";
if (!!(((*(*E_108304).Name).Sup.Id == (*(*S_108258).Name).Sup.Id))) goto LA15;
F.line = 87;F.filename = "importer.nim";
Internalerror_46567((*Ident_108235).Info, ((NimStringDesc*) &TMP108322));
LA15: ;
F.line = 88;F.filename = "importer.nim";
Rawimportsymbol_108070(C_108234, E_108304);
F.line = 89;F.filename = "importer.nim";
E_108304 = Nextidentiter_58101(&It_108302, &(*Frommod_108236).Tab);
} LA13: ;
break;
default:
F.line = 90;F.filename = "importer.nim";
Rawimportsymbol_108070(C_108234, S_108258);
break;
}
framePtr = framePtr->prev;
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
N_NIMCALL(void, Importallsymbols_108009)(TY105012* C_108011, TY54547* Frommod_108012) {
TY58079 I_108327;
TY54547* S_108329;
NimStringDesc* LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "importAllSymbols";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&I_108327, 0, sizeof(I_108327));
S_108329 = 0;
F.line = 94;F.filename = "importer.nim";
S_108329 = Inittabiter_58081(&I_108327, &(*Frommod_108012).Tab);
F.line = 95;F.filename = "importer.nim";
while (1) {
if (!!((S_108329 == NIM_NIL))) goto LA1;
F.line = 96;F.filename = "importer.nim";
if (!!(((*S_108329).Kind == ((NU8) 18)))) goto LA3;
F.line = 97;F.filename = "importer.nim";
if (!!(((*S_108329).Kind == ((NU8) 16)))) goto LA6;
F.line = 98;F.filename = "importer.nim";
if (!!(((1081280 &(1<<(((*S_108329).Kind)&31)))!=0))) goto LA9;
F.line = 99;F.filename = "importer.nim";
LOC11 = 0;
LOC11 = rawNewString(reprEnum((*S_108329).Kind, NTI54174)->Sup.len + 18);
appendString(LOC11, ((NimStringDesc*) &TMP108388));
appendString(LOC11, reprEnum((*S_108329).Kind, NTI54174));
Internalerror_46567((*S_108329).Info, LOC11);
LA9: ;
F.line = 100;F.filename = "importer.nim";
Rawimportsymbol_108070(C_108011, S_108329);
LA6: ;
LA3: ;
F.line = 101;F.filename = "importer.nim";
S_108329 = Nextiter_58086(&I_108327, &(*Frommod_108012).Tab);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY54525*, Evalimport_108001)(TY105012* C_108003, TY54525* N_108004) {
TY54525* Result_108393;
NI I_108401;
NI HEX3Atmp_108440;
NI LOC1;
NI Res_108442;
NimStringDesc* F_108414;
TY54547* M_108415;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "evalImport";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_108393 = 0;
F.line = 104;F.filename = "importer.nim";
Result_108393 = N_108004;
I_108401 = 0;
HEX3Atmp_108440 = 0;
F.line = 105;F.filename = "importer.nim";
LOC1 = Sonslen_54803(N_108004);
HEX3Atmp_108440 = subInt(LOC1, 1);
Res_108442 = 0;
F.line = 1021;F.filename = "system.nim";
Res_108442 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_108442 <= HEX3Atmp_108440)) goto LA2;
F.line = 1021;F.filename = "system.nim";
I_108401 = Res_108442;
F_108414 = 0;
F.line = 106;F.filename = "importer.nim";
if (((TMP108229[(*N_108004).Kind/8] &(1<<((*N_108004).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP108230));
if ((NU)(I_108401) >= (NU)((*N_108004).KindU.S6.Sons->Sup.len)) raiseIndexError();
F_108414 = Getmodulefile_108013((*N_108004).KindU.S6.Sons->data[I_108401]);
M_108415 = 0;
F.line = 107;F.filename = "importer.nim";
M_108415 = Gimportmodule_103047(F_108414);
F.line = 108;F.filename = "importer.nim";
if (!(((*M_108415).Flags &(1<<((((NU8) 22))&31)))!=0)) goto LA4;
F.line = 109;F.filename = "importer.nim";
if (((TMP108229[(*N_108004).Kind/8] &(1<<((*N_108004).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP108230));
if ((NU)(I_108401) >= (NU)((*N_108004).KindU.S6.Sons->Sup.len)) raiseIndexError();
Limessage_46562((*(*N_108004).KindU.S6.Sons->data[I_108401]).Info, ((NU8) 213), (*(*M_108415).Name).S);
LA4: ;
F.line = 111;F.filename = "importer.nim";
Adddecl_106026(C_108003, M_108415);
F.line = 112;F.filename = "importer.nim";
Importallsymbols_108009(C_108003, M_108415);
F.line = 1024;F.filename = "system.nim";
Res_108442 = addInt(Res_108442, 1);
} LA2: ;
framePtr = framePtr->prev;
return Result_108393;
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
N_NIMCALL(TY54525*, Evalfrom_108005)(TY105012* C_108007, TY54525* N_108008) {
TY54525* Result_108449;
NimStringDesc* F_108462;
TY54547* M_108463;
NI I_108483;
NI HEX3Atmp_108497;
NI LOC1;
NI Res_108499;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "evalFrom";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_108449 = 0;
F.line = 115;F.filename = "importer.nim";
Result_108449 = N_108008;
F.line = 116;F.filename = "importer.nim";
Checkminsonslen_105103(N_108008, 2);
F_108462 = 0;
F.line = 117;F.filename = "importer.nim";
if (((TMP108229[(*N_108008).Kind/8] &(1<<((*N_108008).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP108230));
if ((NU)(0) >= (NU)((*N_108008).KindU.S6.Sons->Sup.len)) raiseIndexError();
F_108462 = Getmodulefile_108013((*N_108008).KindU.S6.Sons->data[0]);
M_108463 = 0;
F.line = 118;F.filename = "importer.nim";
M_108463 = Gimportmodule_103047(F_108462);
F.line = 119;F.filename = "importer.nim";
if (((TMP108229[(*N_108008).Kind/8] &(1<<((*N_108008).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP108230));
if ((NU)(0) >= (NU)((*N_108008).KindU.S6.Sons->Sup.len)) raiseIndexError();
asgnRefNoCycle((void**) &(*N_108008).KindU.S6.Sons->data[0], Newsymnode_54734(M_108463));
F.line = 120;F.filename = "importer.nim";
Adddecl_106026(C_108007, M_108463);
I_108483 = 0;
HEX3Atmp_108497 = 0;
F.line = 121;F.filename = "importer.nim";
LOC1 = Sonslen_54803(N_108008);
HEX3Atmp_108497 = subInt(LOC1, 1);
Res_108499 = 0;
F.line = 1021;F.filename = "system.nim";
Res_108499 = 1;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_108499 <= HEX3Atmp_108497)) goto LA2;
F.line = 1021;F.filename = "system.nim";
I_108483 = Res_108499;
F.line = 121;F.filename = "importer.nim";
if (((TMP108229[(*N_108008).Kind/8] &(1<<((*N_108008).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP108230));
if ((NU)(I_108483) >= (NU)((*N_108008).KindU.S6.Sons->Sup.len)) raiseIndexError();
Importsymbol_108232(C_108007, (*N_108008).KindU.S6.Sons->data[I_108483], M_108463);
F.line = 1024;F.filename = "system.nim";
Res_108499 = addInt(Res_108499, 1);
} LA2: ;
framePtr = framePtr->prev;
return Result_108449;
}
N_NOINLINE(void, importerInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "importer";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

