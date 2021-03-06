/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY54525 TY54525;
typedef struct TY90028 TY90028;
typedef struct TY79011 TY79011;
typedef struct TY75267 TY75267;
typedef struct TY75263 TY75263;
typedef struct TY73013 TY73013;
typedef struct TY53011 TY53011;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54551 TY54551;
typedef struct TY46532 TY46532;
typedef struct TY54547 TY54547;
typedef struct TY54519 TY54519;
typedef struct TY74015 TY74015;
typedef struct TY75434 TY75434;
typedef struct TY54549 TY54549;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY54543 TY54543;
typedef struct TY42013 TY42013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY90013[3];
typedef NimStringDesc* TY90017[4];
struct TY79011 {
TY75267* Lex;
TY75263* Tok;
};
struct TY90028 {
NU8 Skin;
TY79011 Parser;
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
typedef NimStringDesc* TY45352[1];
struct TY73013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY74015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY73013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY75267 {
  TY74015 Sup;
NimStringDesc* Filename;
TY75434* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY75263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY53011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY75263* Next;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
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
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
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
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY75434 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY54525*, Parsefile_90031)(NimStringDesc* Filename_90033);
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(void, Rawmessage_46553)(NU8 Msg_46555, NimStringDesc* Arg_46556);
N_NIMCALL(TY73013*, Llstreamopen_73028)(FILE** F_73031);
N_NIMCALL(TY54525*, Parseall_90044)(TY90028* P_90047);
N_NIMCALL(TY54525*, Parseall_79014)(TY79011* P_79017);
N_NIMCALL(TY54525*, Parseall_81004)(TY79011* P_81007);
N_NIMCALL(void, Internalerror_46571)(NimStringDesc* Errmsg_46573);
N_NIMCALL(TY54525*, Parsetoplevelstmt_90048)(TY90028* P_90051);
N_NIMCALL(TY54525*, Parsetoplevelstmt_79028)(TY79011* P_79031);
N_NIMCALL(TY54525*, Parsetoplevelstmt_81008)(TY79011* P_81011);
N_NIMCALL(NI, Utf8bom_90078)(NimStringDesc* S_90080);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, Containsshebang_90088)(NimStringDesc* S_90090, NI I_90091);
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(TY54525*, Parsepipe_90124)(NimStringDesc* Filename_90126, TY73013* Inputstream_90127);
N_NIMCALL(TY73013*, Llstreamopen_73032)(NimStringDesc* Filename_73034, NU8 Mode_73035);
N_NIMCALL(NimStringDesc*, Llstreamreadline_73048)(TY73013* S_73050);
N_NIMCALL(void, Openparser_79018)(TY79011* P_79021, NimStringDesc* Filename_79022, TY73013* Inputstream_79023);
N_NIMCALL(TY73013*, Llstreamopen_73025)(NimStringDesc* Data_73027);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(void, Closeparser_79024)(TY79011* P_79027);
N_NIMCALL(void, Llstreamclose_73040)(TY73013* S_73042);
N_NIMCALL(NU8, Getfilter_90187)(TY53011* Ident_90189);
N_NIMCALL(NIM_BOOL, Identeq_53028)(TY53011* Id_53030, NimStringDesc* Name_53031);
N_NIMCALL(NU8, Getparser_90226)(TY53011* Ident_90228);
N_NIMCALL(TY53011*, Getcallee_90265)(TY54525* N_90267);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5475);
N_NIMCALL(NimStringDesc*, Rendertree_83042)(TY54525* N_83044, NU8 Renderflags_83047);
N_NIMCALL(TY73013*, Applyfilter_90348)(TY90028* P_90351, TY54525* N_90352, NimStringDesc* Filename_90353, TY73013* Stdin_90354);
N_NIMCALL(TY73013*, Filtertmpl_89001)(TY73013* Stdin_89003, NimStringDesc* Filename_89004, TY54525* Call_89005);
N_NIMCALL(TY73013*, Filterstrip_88009)(TY73013* Stdin_88011, NimStringDesc* Filename_88012, TY54525* Call_88013);
N_NIMCALL(TY73013*, Filterreplace_88004)(TY73013* Stdin_88006, NimStringDesc* Filename_88007, TY54525* Call_88008);
N_NIMCALL(void, Rawmessage_46557)(NU8 Msg_46559, NimStringDesc** Args_46561, NI Args_46561Len0);
N_NIMCALL(void, Messageout_46550)(NimStringDesc* S_46552);
N_NIMCALL(TY73013*, Evalpipe_90385)(TY90028* P_90388, TY54525* N_90389, NimStringDesc* Filename_90390, TY73013* Start_90391);
N_NIMCALL(void, Openparsers_90034)(TY90028* P_90037, NimStringDesc* Filename_90038, TY73013* Inputstream_90039);
N_NIMCALL(void, Closeparsers_90040)(TY90028* P_90043);
STRING_LITERAL(TMP90020, "standard", 8);
STRING_LITERAL(TMP90021, "braces", 6);
STRING_LITERAL(TMP90022, "endx", 4);
NIM_CONST TY90013 Parsernames_90012 = {((NimStringDesc*) &TMP90020),
((NimStringDesc*) &TMP90021),
((NimStringDesc*) &TMP90022)}
;
STRING_LITERAL(TMP90023, "none", 4);
STRING_LITERAL(TMP90024, "stdtmpl", 7);
STRING_LITERAL(TMP90025, "replace", 7);
STRING_LITERAL(TMP90026, "strip", 5);
NIM_CONST TY90017 Filternames_90016 = {((NimStringDesc*) &TMP90023),
((NimStringDesc*) &TMP90024),
((NimStringDesc*) &TMP90025),
((NimStringDesc*) &TMP90026)}
;
STRING_LITERAL(TMP90070, "parser to implement", 19);
static NIM_CONST TY54999 TMP90344 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP90345, "sons", 4);
static NIM_CONST TY54999 TMP90346 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP90347, "ident", 5);
STRING_LITERAL(TMP90552, "|", 1);
extern NI Gverbosity_45083;
N_NIMCALL(TY54525*, Parsefile_90031)(NimStringDesc* Filename_90033) {
TY54525* Result_90055;
TY90028 P_90056;
FILE* F_90057;
NIM_BOOL LOC2;
TY73013* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ParseFile";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90055 = 0;
memset((void*)&P_90056, 0, sizeof(P_90056));
F_90057 = 0;
F.line = 47;F.filename = "syntaxes.nim";
LOC2 = Open_3617(&F_90057, Filename_90033, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
F.line = 48;F.filename = "syntaxes.nim";
Rawmessage_46553(((NU8) 2), Filename_90033);
F.line = 49;F.filename = "syntaxes.nim";
goto BeforeRet;
LA3: ;
F.line = 50;F.filename = "syntaxes.nim";
LOC5 = 0;
LOC5 = Llstreamopen_73028(&F_90057);
Openparsers_90034(&P_90056, Filename_90033, LOC5);
F.line = 51;F.filename = "syntaxes.nim";
Result_90055 = Parseall_90044(&P_90056);
F.line = 52;F.filename = "syntaxes.nim";
Closeparsers_90040(&P_90056);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_90055;
}
N_NIMCALL(TY54525*, Parseall_90044)(TY90028* P_90047) {
TY54525* Result_90067;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseAll";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90067 = 0;
F.line = 55;F.filename = "syntaxes.nim";
switch ((*P_90047).Skin) {
case ((NU8) 0):
F.line = 57;F.filename = "syntaxes.nim";
Result_90067 = Parseall_79014(&(*P_90047).Parser);
break;
case ((NU8) 1):
F.line = 59;F.filename = "syntaxes.nim";
Result_90067 = Parseall_81004(&(*P_90047).Parser);
break;
case ((NU8) 2):
F.line = 61;F.filename = "syntaxes.nim";
Internalerror_46571(((NimStringDesc*) &TMP90070));
break;
}
framePtr = framePtr->prev;
return Result_90067;
}
N_NIMCALL(TY54525*, Parsetoplevelstmt_90048)(TY90028* P_90051) {
TY54525* Result_90075;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseTopLevelStmt";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90075 = 0;
F.line = 65;F.filename = "syntaxes.nim";
switch ((*P_90051).Skin) {
case ((NU8) 0):
F.line = 67;F.filename = "syntaxes.nim";
Result_90075 = Parsetoplevelstmt_79028(&(*P_90051).Parser);
break;
case ((NU8) 1):
F.line = 69;F.filename = "syntaxes.nim";
Result_90075 = Parsetoplevelstmt_81008(&(*P_90051).Parser);
break;
case ((NU8) 2):
F.line = 71;F.filename = "syntaxes.nim";
Internalerror_46571(((NimStringDesc*) &TMP90070));
break;
}
framePtr = framePtr->prev;
return Result_90075;
}
N_NIMCALL(NI, Utf8bom_90078)(NimStringDesc* S_90080) {
NI Result_90081;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "UTF8_BOM";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90081 = 0;
F.line = 75;F.filename = "syntaxes.nim";
if ((NU)(0) > (NU)(S_90080->Sup.len)) raiseIndexError();
LOC3 = ((NU8)(S_90080->data[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
if ((NU)(1) > (NU)(S_90080->Sup.len)) raiseIndexError();
LOC3 = ((NU8)(S_90080->data[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
if ((NU)(2) > (NU)(S_90080->Sup.len)) raiseIndexError();
LOC2 = ((NU8)(S_90080->data[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
F.line = 76;F.filename = "syntaxes.nim";
Result_90081 = 3;
goto LA1;
LA6: ;
F.line = 78;F.filename = "syntaxes.nim";
Result_90081 = 0;
LA1: ;
framePtr = framePtr->prev;
return Result_90081;
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
N_NIMCALL(NIM_BOOL, Containsshebang_90088)(NimStringDesc* S_90090, NI I_90091) {
NIM_BOOL Result_90092;
NIM_BOOL LOC2;
NI J_90097;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "containsShebang";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90092 = 0;
F.line = 81;F.filename = "syntaxes.nim";
if ((NU)(I_90091) > (NU)(S_90090->Sup.len)) raiseIndexError();
LOC2 = ((NU8)(S_90090->data[I_90091]) == (NU8)(35));
if (!(LOC2)) goto LA3;
if ((NU)(addInt(I_90091, 1)) > (NU)(S_90090->Sup.len)) raiseIndexError();
LOC2 = ((NU8)(S_90090->data[addInt(I_90091, 1)]) == (NU8)(33));
LA3: ;
if (!LOC2) goto LA4;
J_90097 = 0;
F.line = 82;F.filename = "syntaxes.nim";
J_90097 = addInt(I_90091, 2);
F.line = 83;F.filename = "syntaxes.nim";
while (1) {
if ((NU)(J_90097) > (NU)(S_90090->Sup.len)) raiseIndexError();
if (!(((NU8)(S_90090->data[J_90097])) == ((NU8)(32)) || ((NU8)(S_90090->data[J_90097])) == ((NU8)(9)) || ((NU8)(S_90090->data[J_90097])) == ((NU8)(11)) || ((NU8)(S_90090->data[J_90097])) == ((NU8)(13)) || ((NU8)(S_90090->data[J_90097])) == ((NU8)(10)) || ((NU8)(S_90090->data[J_90097])) == ((NU8)(12)))) goto LA6;
F.line = 83;F.filename = "syntaxes.nim";
J_90097 = addInt(J_90097, 1);
} LA6: ;
F.line = 84;F.filename = "syntaxes.nim";
if ((NU)(J_90097) > (NU)(S_90090->Sup.len)) raiseIndexError();
Result_90092 = ((NU8)(S_90090->data[J_90097]) == (NU8)(47));
LA4: ;
framePtr = framePtr->prev;
return Result_90092;
}
N_NIMCALL(TY54525*, Parsepipe_90124)(NimStringDesc* Filename_90126, TY73013* Inputstream_90127) {
TY54525* Result_90128;
TY73013* S_90129;
NimStringDesc* Line_90141;
NI I_90142;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
TY79011 Q_90182;
NimStringDesc* LOC14;
TY73013* LOC15;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parsePipe";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90128 = 0;
S_90129 = 0;
F.line = 87;F.filename = "syntaxes.nim";
S_90129 = Llstreamopen_73032(Filename_90126, ((NU8) 0));
F.line = 88;F.filename = "syntaxes.nim";
if (!!((S_90129 == NIM_NIL))) goto LA2;
Line_90141 = 0;
F.line = 89;F.filename = "syntaxes.nim";
Line_90141 = Llstreamreadline_73048(S_90129);
I_90142 = 0;
F.line = 90;F.filename = "syntaxes.nim";
I_90142 = Utf8bom_90078(Line_90141);
F.line = 91;F.filename = "syntaxes.nim";
LOC5 = Containsshebang_90088(Line_90141, I_90142);
if (!LOC5) goto LA6;
F.line = 92;F.filename = "syntaxes.nim";
Line_90141 = Llstreamreadline_73048(S_90129);
F.line = 93;F.filename = "syntaxes.nim";
I_90142 = 0;
LA6: ;
F.line = 94;F.filename = "syntaxes.nim";
if ((NU)(I_90142) > (NU)(Line_90141->Sup.len)) raiseIndexError();
LOC9 = ((NU8)(Line_90141->data[I_90142]) == (NU8)(35));
if (!(LOC9)) goto LA10;
if ((NU)(addInt(I_90142, 1)) > (NU)(Line_90141->Sup.len)) raiseIndexError();
LOC9 = ((NU8)(Line_90141->data[addInt(I_90142, 1)]) == (NU8)(33));
LA10: ;
if (!LOC9) goto LA11;
F.line = 95;F.filename = "syntaxes.nim";
I_90142 = addInt(I_90142, 2);
F.line = 96;F.filename = "syntaxes.nim";
while (1) {
if ((NU)(I_90142) > (NU)(Line_90141->Sup.len)) raiseIndexError();
if (!(((NU8)(Line_90141->data[I_90142])) == ((NU8)(32)) || ((NU8)(Line_90141->data[I_90142])) == ((NU8)(9)) || ((NU8)(Line_90141->data[I_90142])) == ((NU8)(11)) || ((NU8)(Line_90141->data[I_90142])) == ((NU8)(13)) || ((NU8)(Line_90141->data[I_90142])) == ((NU8)(10)) || ((NU8)(Line_90141->data[I_90142])) == ((NU8)(12)))) goto LA13;
F.line = 96;F.filename = "syntaxes.nim";
I_90142 = addInt(I_90142, 1);
} LA13: ;
memset((void*)&Q_90182, 0, sizeof(Q_90182));
F.line = 98;F.filename = "syntaxes.nim";
LOC14 = 0;
LOC14 = copyStr(Line_90141, I_90142);
LOC15 = 0;
LOC15 = Llstreamopen_73025(LOC14);
Openparser_79018(&Q_90182, Filename_90126, LOC15);
F.line = 99;F.filename = "syntaxes.nim";
Result_90128 = Parseall_79014(&Q_90182);
F.line = 100;F.filename = "syntaxes.nim";
Closeparser_79024(&Q_90182);
LA11: ;
F.line = 101;F.filename = "syntaxes.nim";
Llstreamclose_73040(S_90129);
LA2: ;
framePtr = framePtr->prev;
return Result_90128;
}
N_NIMCALL(NU8, Getfilter_90187)(TY53011* Ident_90189) {
NU8 Result_90190;
NU8 I_90220;
NU8 Res_90223;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getFilter";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90190 = 0;
I_90220 = 0;
Res_90223 = 0;
F.line = 1021;F.filename = "system.nim";
Res_90223 = ((NU8) 0);
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_90223 <= ((NU8) 3))) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_90220 = Res_90223;
F.line = 105;F.filename = "syntaxes.nim";
LOC3 = Identeq_53028(Ident_90189, Filternames_90016[(I_90220)-0]);
if (!LOC3) goto LA4;
F.line = 106;F.filename = "syntaxes.nim";
F.line = 106;F.filename = "syntaxes.nim";
Result_90190 = I_90220;
goto BeforeRet;
LA4: ;
F.line = 1024;F.filename = "system.nim";
Res_90223 = addInt(Res_90223, 1);
} LA1: ;
F.line = 107;F.filename = "syntaxes.nim";
Result_90190 = ((NU8) 0);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_90190;
}
N_NIMCALL(NU8, Getparser_90226)(TY53011* Ident_90228) {
NU8 Result_90229;
NU8 I_90259;
NU8 Res_90262;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getParser";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90229 = 0;
I_90259 = 0;
Res_90262 = 0;
F.line = 1021;F.filename = "system.nim";
Res_90262 = ((NU8) 0);
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_90262 <= ((NU8) 2))) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_90259 = Res_90262;
F.line = 111;F.filename = "syntaxes.nim";
LOC3 = Identeq_53028(Ident_90228, Parsernames_90012[(I_90259)-0]);
if (!LOC3) goto LA4;
F.line = 112;F.filename = "syntaxes.nim";
F.line = 112;F.filename = "syntaxes.nim";
Result_90229 = I_90259;
goto BeforeRet;
LA4: ;
F.line = 1024;F.filename = "system.nim";
Res_90262 = addInt(Res_90262, 1);
} LA1: ;
F.line = 113;F.filename = "syntaxes.nim";
Rawmessage_46553(((NU8) 28), (*Ident_90228).S);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_90229;
}
N_NIMCALL(TY53011*, Getcallee_90265)(TY54525* N_90267) {
TY53011* Result_90268;
NIM_BOOL LOC2;
NimStringDesc* LOC8;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getCallee";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90268 = 0;
F.line = 116;F.filename = "syntaxes.nim";
LOC2 = ((*N_90267).Kind == ((NU8) 21));
if (!(LOC2)) goto LA3;
if (((TMP90344[(*N_90267).Kind/8] &(1<<((*N_90267).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP90345));
if ((NU)(0) >= (NU)((*N_90267).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC2 = ((*(*N_90267).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA3: ;
if (!LOC2) goto LA4;
F.line = 117;F.filename = "syntaxes.nim";
if (((TMP90344[(*N_90267).Kind/8] &(1<<((*N_90267).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP90345));
if ((NU)(0) >= (NU)((*N_90267).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP90346[(*(*N_90267).KindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*N_90267).KindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP90347));
Result_90268 = (*(*N_90267).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA1;
LA4: ;
if (!((*N_90267).Kind == ((NU8) 2))) goto LA6;
F.line = 119;F.filename = "syntaxes.nim";
if (!(((TMP90346[(*N_90267).Kind/8] &(1<<((*N_90267).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP90347));
Result_90268 = (*N_90267).KindU.S5.Ident;
goto LA1;
LA6: ;
F.line = 121;F.filename = "syntaxes.nim";
LOC8 = 0;
LOC8 = Rendertree_83042(N_90267, 0);
Rawmessage_46553(((NU8) 159), LOC8);
LA1: ;
framePtr = framePtr->prev;
return Result_90268;
}
N_NIMCALL(TY73013*, Applyfilter_90348)(TY90028* P_90351, TY54525* N_90352, NimStringDesc* Filename_90353, TY73013* Stdin_90354) {
TY73013* Result_90355;
TY53011* Ident_90356;
NU8 F_90357;
TY45352 LOC7;
TY45352 LOC8;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "applyFilter";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90355 = 0;
Ident_90356 = 0;
F.line = 125;F.filename = "syntaxes.nim";
Ident_90356 = Getcallee_90265(N_90352);
F_90357 = 0;
F.line = 126;F.filename = "syntaxes.nim";
F_90357 = Getfilter_90187(Ident_90356);
F.line = 127;F.filename = "syntaxes.nim";
switch (F_90357) {
case ((NU8) 0):
F.line = 129;F.filename = "syntaxes.nim";
(*P_90351).Skin = Getparser_90226(Ident_90356);
F.line = 130;F.filename = "syntaxes.nim";
Result_90355 = Stdin_90354;
break;
case ((NU8) 1):
F.line = 132;F.filename = "syntaxes.nim";
Result_90355 = Filtertmpl_89001(Stdin_90354, Filename_90353, N_90352);
break;
case ((NU8) 3):
F.line = 134;F.filename = "syntaxes.nim";
Result_90355 = Filterstrip_88009(Stdin_90354, Filename_90353, N_90352);
break;
case ((NU8) 2):
F.line = 136;F.filename = "syntaxes.nim";
Result_90355 = Filterreplace_88004(Stdin_90354, Filename_90353, N_90352);
break;
}
F.line = 137;F.filename = "syntaxes.nim";
if (!!((F_90357 == ((NU8) 0)))) goto LA2;
F.line = 138;F.filename = "syntaxes.nim";
if (!(2 <= Gverbosity_45083)) goto LA5;
F.line = 139;F.filename = "syntaxes.nim";
memset((void*)&LOC7, 0, sizeof(LOC7));
Rawmessage_46557(((NU8) 231), LOC7, 0);
F.line = 140;F.filename = "syntaxes.nim";
Messageout_46550((*Result_90355).S);
F.line = 141;F.filename = "syntaxes.nim";
memset((void*)&LOC8, 0, sizeof(LOC8));
Rawmessage_46557(((NU8) 232), LOC8, 0);
LA5: ;
LA2: ;
framePtr = framePtr->prev;
return Result_90355;
}
N_NIMCALL(TY73013*, Evalpipe_90385)(TY90028* P_90388, TY54525* N_90389, NimStringDesc* Filename_90390, TY73013* Start_90391) {
TY73013* Result_90392;
NIM_BOOL LOC5;
NIM_BOOL LOC6;
NI I_90480;
NI Res_90549;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "evalPipe";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_90392 = 0;
F.line = 145;F.filename = "syntaxes.nim";
Result_90392 = Start_90391;
F.line = 146;F.filename = "syntaxes.nim";
if (!(N_90389 == NIM_NIL)) goto LA2;
F.line = 146;F.filename = "syntaxes.nim";
goto BeforeRet;
LA2: ;
F.line = 147;F.filename = "syntaxes.nim";
LOC6 = ((*N_90389).Kind == ((NU8) 27));
if (!(LOC6)) goto LA7;
if (((TMP90344[(*N_90389).Kind/8] &(1<<((*N_90389).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP90345));
if ((NU)(0) >= (NU)((*N_90389).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC6 = ((*(*N_90389).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA7: ;
LOC5 = LOC6;
if (!(LOC5)) goto LA8;
if (((TMP90344[(*N_90389).Kind/8] &(1<<((*N_90389).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP90345));
if ((NU)(0) >= (NU)((*N_90389).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP90346[(*(*N_90389).KindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*N_90389).KindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP90347));
LOC5 = Identeq_53028((*(*N_90389).KindU.S6.Sons->data[0]).KindU.S5.Ident, ((NimStringDesc*) &TMP90552));
LA8: ;
if (!LOC5) goto LA9;
I_90480 = 0;
Res_90549 = 0;
F.line = 1021;F.filename = "system.nim";
Res_90549 = 1;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_90549 <= 2)) goto LA11;
F.line = 1021;F.filename = "system.nim";
I_90480 = Res_90549;
F.line = 150;F.filename = "syntaxes.nim";
if (((TMP90344[(*N_90389).Kind/8] &(1<<((*N_90389).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP90345));
if ((NU)(I_90480) >= (NU)((*N_90389).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!((*(*N_90389).KindU.S6.Sons->data[I_90480]).Kind == ((NU8) 27))) goto LA13;
F.line = 151;F.filename = "syntaxes.nim";
if (((TMP90344[(*N_90389).Kind/8] &(1<<((*N_90389).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP90345));
if ((NU)(I_90480) >= (NU)((*N_90389).KindU.S6.Sons->Sup.len)) raiseIndexError();
Result_90392 = Evalpipe_90385(P_90388, (*N_90389).KindU.S6.Sons->data[I_90480], Filename_90390, Result_90392);
goto LA12;
LA13: ;
F.line = 153;F.filename = "syntaxes.nim";
if (((TMP90344[(*N_90389).Kind/8] &(1<<((*N_90389).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP90345));
if ((NU)(I_90480) >= (NU)((*N_90389).KindU.S6.Sons->Sup.len)) raiseIndexError();
Result_90392 = Applyfilter_90348(P_90388, (*N_90389).KindU.S6.Sons->data[I_90480], Filename_90390, Result_90392);
LA12: ;
F.line = 1024;F.filename = "system.nim";
Res_90549 = addInt(Res_90549, 1);
} LA11: ;
goto LA4;
LA9: ;
if (!((*N_90389).Kind == ((NU8) 101))) goto LA15;
F.line = 155;F.filename = "syntaxes.nim";
if (((TMP90344[(*N_90389).Kind/8] &(1<<((*N_90389).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP90345));
if ((NU)(0) >= (NU)((*N_90389).KindU.S6.Sons->Sup.len)) raiseIndexError();
Result_90392 = Evalpipe_90385(P_90388, (*N_90389).KindU.S6.Sons->data[0], Filename_90390, Result_90392);
goto LA4;
LA15: ;
F.line = 157;F.filename = "syntaxes.nim";
Result_90392 = Applyfilter_90348(P_90388, N_90389, Filename_90390, Result_90392);
LA4: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_90392;
}
N_NIMCALL(void, Openparsers_90034)(TY90028* P_90037, NimStringDesc* Filename_90038, TY73013* Inputstream_90039) {
TY73013* S_90559;
TY54525* Pipe_90560;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "openParsers";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
S_90559 = 0;
F.line = 161;F.filename = "syntaxes.nim";
(*P_90037).Skin = ((NU8) 0);
Pipe_90560 = 0;
F.line = 162;F.filename = "syntaxes.nim";
Pipe_90560 = Parsepipe_90124(Filename_90038, Inputstream_90039);
F.line = 163;F.filename = "syntaxes.nim";
if (!!((Pipe_90560 == NIM_NIL))) goto LA2;
F.line = 163;F.filename = "syntaxes.nim";
S_90559 = Evalpipe_90385(P_90037, Pipe_90560, Filename_90038, Inputstream_90039);
goto LA1;
LA2: ;
F.line = 164;F.filename = "syntaxes.nim";
S_90559 = Inputstream_90039;
LA1: ;
F.line = 165;F.filename = "syntaxes.nim";
switch ((*P_90037).Skin) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 2):
F.line = 167;F.filename = "syntaxes.nim";
Openparser_79018(&(*P_90037).Parser, Filename_90038, S_90559);
break;
}
framePtr = framePtr->prev;
}
N_NIMCALL(void, Closeparsers_90040)(TY90028* P_90043) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "closeParsers";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 170;F.filename = "syntaxes.nim";
Closeparser_79024(&(*P_90043).Parser);
framePtr = framePtr->prev;
}
N_NOINLINE(void, syntaxesInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "syntaxes";
F.prev = framePtr;
F.filename = "rod/syntaxes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

