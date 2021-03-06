/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NI TY49040[256];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
static N_INLINE(int, Updatecrc32_49014)(NI8 Val_49016, int Crc_49017);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(int, Updatecrc32_49018)(NIM_CHAR Val_49020, int Crc_49021);
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612);
N_NOINLINE(void, raiseRangeError)(NI64 Val_5418);
N_NIMCALL(int, Strcrc32_49026)(NimStringDesc* S_49028);
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI A_6003, NI B_6004);
N_NIMCALL(int, HEX3EHEX3C_49094)(int C_49096, NimStringDesc* S_49097);
N_NIMCALL(int, Crcfrombuf_49022)(void* Buf_49024, NI Length_49025);
N_NIMCALL(int, Crcfromfile_49029)(NimStringDesc* Filename_49031);
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NOCONV(void*, Alloc_1950)(NI Size_1952);
N_NIMCALL(NI, Readbuffer_3714)(FILE* F_3716, void* Buffer_3717, NI Len_3718);
N_NOCONV(void, Dealloc_1960)(void* P_1962);
N_NIMCALL(int, Updateadler32_49032)(int Adler_49034, void* Buf_49035, NI Length_49036);
NIM_CONST TY49040 Crc32table_49039 = {0,
1996959894,
-301047508,
-1727442502,
124634137,
1886057615,
-379345611,
-1637575261,
249268274,
2044508324,
-522852066,
-1747789432,
162941995,
2125561021,
-407360249,
-1866523247,
498536548,
1789927666,
-205950648,
-2067906082,
450548861,
1843258603,
-187386543,
-2083289657,
325883990,
1684777152,
-43845254,
-1973040660,
335633487,
1661365465,
-99664541,
-1928851979,
997073096,
1281953886,
-715111964,
-1570279054,
1006888145,
1258607687,
-770865667,
-1526024853,
901097722,
1119000684,
-608450090,
-1396901568,
853044451,
1172266101,
-589951537,
-1412350631,
651767980,
1373503546,
-925412992,
-1076862698,
565507253,
1454621731,
-809855591,
-1195530993,
671266974,
1594198024,
-972236366,
-1324619484,
795835527,
1483230225,
-1050600021,
-1234817731,
1994146192,
31158534,
-1731059524,
-271249366,
1907459465,
112637215,
-1614814043,
-390540237,
2013776290,
251722036,
-1777751922,
-519137256,
2137656763,
141376813,
-1855689577,
-429695999,
1802195444,
476864866,
-2056965928,
-228458418,
1812370925,
453092731,
-2113342271,
-183516073,
1706088902,
314042704,
-1950435094,
-54949764,
1658658271,
366619977,
-1932296973,
-69972891,
1303535960,
984961486,
-1547960204,
-725929758,
1256170817,
1037604311,
-1529756563,
-740887301,
1131014506,
879679996,
-1385723834,
-631195440,
1141124467,
855842277,
-1442165665,
-586318647,
1342533948,
654459306,
-1106571248,
-921952122,
1466479909,
544179635,
-1184443383,
-832445281,
1591671054,
702138776,
-1328506846,
-942167884,
1504918807,
783551873,
-1212326853,
-1061524307,
-306674912,
-1698712650,
62317068,
1957810842,
-355121351,
-1647151185,
81470997,
1943803523,
-480048366,
-1805370492,
225274430,
2053790376,
-468791541,
-1828061283,
167816743,
2097651377,
-267414716,
-2029476910,
503444072,
1762050814,
-144550051,
-2140837941,
426522225,
1852507879,
-19653770,
-1982649376,
282753626,
1742555852,
-105259153,
-1900089351,
397917763,
1622183637,
-690576408,
-1580100738,
953729732,
1340076626,
-776247311,
-1497606297,
1068828381,
1219638859,
-670225446,
-1358292148,
906185462,
1090812512,
-547295293,
-1469587627,
829329135,
1181335161,
-882789492,
-1134132454,
628085408,
1382605366,
-871598187,
-1156888829,
570562233,
1426400815,
-977650754,
-1296233688,
733239954,
1555261956,
-1026031705,
-1244606671,
752459403,
1541320221,
-1687895376,
-328994266,
1969922972,
40735498,
-1677130071,
-351390145,
1913087877,
83908371,
-1782625662,
-491226604,
2075208622,
213261112,
-1831694693,
-438977011,
2094854071,
198958881,
-2032938284,
-237706686,
1759359992,
534414190,
-2118248755,
-155638181,
1873836001,
414664567,
-2012718362,
-15766928,
1711684554,
285281116,
-1889165569,
-127750551,
1634467795,
376229701,
-1609899400,
-686959890,
1308918612,
956543938,
-1486412191,
-799009033,
1231636301,
1047427035,
-1362007478,
-640263460,
1088359270,
936918000,
-1447252397,
-558129467,
1202900863,
817233897,
-1111625188,
-893730166,
1404277552,
615818150,
-1160759803,
-841546093,
1423857449,
601450431,
-1285129682,
-1000256840,
1567103746,
711928724,
-1274298825,
-1022587231,
1510334235,
755167117}
;
static N_INLINE(int, Updatecrc32_49014)(NI8 Val_49016, int Crc_49017) {
int Result_49048;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "updateCrc32";
F.prev = framePtr;
F.filename = "rod/crc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_49048 = 0;
F.line = 78;F.filename = "crc.nim";
if ((NU)((NI32)((NI32)(((NI) (Crc_49017)) ^ (NI32)(((NI) (Val_49016)) & 255)) & 255)) > (NU)(255)) raiseIndexError();
Result_49048 = (NI32)(((int) (Crc32table_49039[((NI32)((NI32)(((NI) (Crc_49017)) ^ (NI32)(((NI) (Val_49016)) & 255)) & 255))-0])) ^ (NI32)((NU32)(Crc_49017) >> (NU32)(((NI32) 8))));
framePtr = framePtr->prev;
return Result_49048;
}
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612) {
NI Result_5516;
NIM_BOOL LOC2;
Result_5516 = 0;
LOC2 = (A_4611 <= I_4610);
if (!(LOC2)) goto LA3;
LOC2 = (I_4610 <= B_4612);
LA3: ;
if (!LOC2) goto LA4;
Result_5516 = I_4610;
goto BeforeRet;
goto LA1;
LA4: ;
raiseRangeError(((NI64) (I_4610)));
LA1: ;
BeforeRet: ;
return Result_5516;
}
static N_INLINE(int, Updatecrc32_49018)(NIM_CHAR Val_49020, int Crc_49021) {
int Result_49053;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "updateCrc32";
F.prev = framePtr;
F.filename = "rod/crc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_49053 = 0;
F.line = 82;F.filename = "crc.nim";
Result_49053 = Updatecrc32_49014(((NI8)chckRange(((NU8)(Val_49020)), ((NI8) -128), ((NI8) 127))), Crc_49021);
framePtr = framePtr->prev;
return Result_49053;
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
N_NIMCALL(int, Strcrc32_49026)(NimStringDesc* S_49028) {
int Result_49062;
NI I_49087;
NI HEX3Atmp_49089;
NI Res_49091;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "strCrc32";
F.prev = framePtr;
F.filename = "rod/crc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_49062 = 0;
F.line = 85;F.filename = "crc.nim";
Result_49062 = ((NI32) -1);
I_49087 = 0;
HEX3Atmp_49089 = 0;
F.line = 86;F.filename = "crc.nim";
HEX3Atmp_49089 = subInt(addInt(S_49028->Sup.len, 0), 1);
Res_49091 = 0;
F.line = 1021;F.filename = "system.nim";
Res_49091 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_49091 <= HEX3Atmp_49089)) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_49087 = Res_49091;
F.line = 86;F.filename = "crc.nim";
if ((NU)(I_49087) > (NU)(S_49028->Sup.len)) raiseIndexError();
Result_49062 = Updatecrc32_49018(S_49028->data[I_49087], Result_49062);
F.line = 1024;F.filename = "system.nim";
Res_49091 = addInt(Res_49091, 1);
} LA1: ;
framePtr = framePtr->prev;
return Result_49062;
}
N_NIMCALL(int, HEX3EHEX3C_49094)(int C_49096, NimStringDesc* S_49097) {
int Result_49098;
NI I_49108;
NI HEX3Atmp_49110;
NI Res_49112;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "><";
F.prev = framePtr;
F.filename = "rod/crc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_49098 = 0;
F.line = 89;F.filename = "crc.nim";
Result_49098 = C_49096;
I_49108 = 0;
HEX3Atmp_49110 = 0;
F.line = 90;F.filename = "crc.nim";
HEX3Atmp_49110 = subInt(S_49097->Sup.len, 1);
Res_49112 = 0;
F.line = 1021;F.filename = "system.nim";
Res_49112 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_49112 <= HEX3Atmp_49110)) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_49108 = Res_49112;
F.line = 90;F.filename = "crc.nim";
if ((NU)(I_49108) > (NU)(S_49097->Sup.len)) raiseIndexError();
Result_49098 = Updatecrc32_49018(S_49097->data[I_49108], Result_49098);
F.line = 1024;F.filename = "system.nim";
Res_49112 = addInt(Res_49112, 1);
} LA1: ;
framePtr = framePtr->prev;
return Result_49098;
}
N_NIMCALL(int, Crcfrombuf_49022)(void* Buf_49024, NI Length_49025) {
int Result_49124;
NI8* P_49125;
NI I_49133;
NI HEX3Atmp_49135;
NI Res_49137;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "crcFromBuf";
F.prev = framePtr;
F.filename = "rod/crc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_49124 = 0;
P_49125 = 0;
F.line = 97;F.filename = "crc.nim";
P_49125 = ((NI8*) (Buf_49024));
F.line = 98;F.filename = "crc.nim";
Result_49124 = ((NI32) -1);
I_49133 = 0;
HEX3Atmp_49135 = 0;
F.line = 99;F.filename = "crc.nim";
HEX3Atmp_49135 = subInt(Length_49025, 1);
Res_49137 = 0;
F.line = 1021;F.filename = "system.nim";
Res_49137 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_49137 <= HEX3Atmp_49135)) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_49133 = Res_49137;
F.line = 99;F.filename = "crc.nim";
if ((NU)(I_49133) > (NU)(10000000)) raiseIndexError();
Result_49124 = Updatecrc32_49014(P_49125[(I_49133)-0], Result_49124);
F.line = 1024;F.filename = "system.nim";
Res_49137 = addInt(Res_49137, 1);
} LA1: ;
framePtr = framePtr->prev;
return Result_49124;
}
N_NIMCALL(int, Crcfromfile_49029)(NimStringDesc* Filename_49031) {
int Result_49143;
FILE* Bin_49145;
void* Buf_49146;
NI Readbytes_49147;
NI8* P_49148;
NIM_BOOL LOC2;
NI I_49157;
NI HEX3Atmp_49161;
NI Res_49163;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "crcFromFile";
F.prev = framePtr;
F.filename = "rod/crc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_49143 = 0;
Bin_49145 = 0;
Buf_49146 = 0;
Readbytes_49147 = 0;
P_49148 = 0;
F.line = 109;F.filename = "crc.nim";
Result_49143 = ((NI32) -1);
F.line = 110;F.filename = "crc.nim";
LOC2 = Open_3617(&Bin_49145, Filename_49031, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
F.line = 111;F.filename = "crc.nim";
goto BeforeRet;
LA3: ;
F.line = 112;F.filename = "crc.nim";
Buf_49146 = Alloc_1950(8192);
F.line = 113;F.filename = "crc.nim";
P_49148 = ((NI8*) (Buf_49146));
F.line = 114;F.filename = "crc.nim";
while (1) {
F.line = 115;F.filename = "crc.nim";
Readbytes_49147 = Readbuffer_3714(Bin_49145, Buf_49146, 8192);
I_49157 = 0;
HEX3Atmp_49161 = 0;
F.line = 116;F.filename = "crc.nim";
HEX3Atmp_49161 = subInt(Readbytes_49147, 1);
Res_49163 = 0;
F.line = 1021;F.filename = "system.nim";
Res_49163 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_49163 <= HEX3Atmp_49161)) goto LA6;
F.line = 1021;F.filename = "system.nim";
I_49157 = Res_49163;
F.line = 116;F.filename = "crc.nim";
if ((NU)(I_49157) > (NU)(10000000)) raiseIndexError();
Result_49143 = Updatecrc32_49014(P_49148[(I_49157)-0], Result_49143);
F.line = 1024;F.filename = "system.nim";
Res_49163 = addInt(Res_49163, 1);
} LA6: ;
F.line = 117;F.filename = "crc.nim";
if (!!((Readbytes_49147 == 8192))) goto LA8;
F.line = 117;F.filename = "crc.nim";
goto LA5;
LA8: ;
} LA5: ;
F.line = 118;F.filename = "crc.nim";
Dealloc_1960(Buf_49146);
F.line = 119;F.filename = "crc.nim";
fclose(Bin_49145);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_49143;
}
N_NIMCALL(int, Updateadler32_49032)(int Adler_49034, void* Buf_49035, NI Length_49036) {
int Result_49174;
int S1_49175;
int S2_49176;
NI L_49177;
NI K_49178;
NI B_49179;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "updateAdler32";
F.prev = framePtr;
F.filename = "rod/crc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_49174 = 0;
S1_49175 = 0;
S2_49176 = 0;
L_49177 = 0;
K_49178 = 0;
B_49179 = 0;
F.line = 135;F.filename = "crc.nim";
S1_49175 = (NI32)(Adler_49034 & ((NI32) 65535));
F.line = 136;F.filename = "crc.nim";
S2_49176 = (NI32)((NI32)((NU32)(Adler_49034) >> (NU32)(((NI32) 16))) & ((NI32) 65535));
F.line = 137;F.filename = "crc.nim";
L_49177 = Length_49036;
F.line = 138;F.filename = "crc.nim";
B_49179 = 0;
F.line = 139;F.filename = "crc.nim";
while (1) {
if (!(0 < L_49177)) goto LA1;
F.line = 140;F.filename = "crc.nim";
if (!(L_49177 < 3854)) goto LA3;
F.line = 140;F.filename = "crc.nim";
K_49178 = L_49177;
goto LA2;
LA3: ;
F.line = 141;F.filename = "crc.nim";
K_49178 = 3854;
LA2: ;
F.line = 142;F.filename = "crc.nim";
L_49177 = subInt(L_49177, K_49178);
F.line = 143;F.filename = "crc.nim";
while (1) {
if (!(0 < K_49178)) goto LA5;
F.line = 144;F.filename = "crc.nim";
S1_49175 = (NI32)((NU32)(S1_49175) + (NU32)(((int) (((NU8)(((NCSTRING) (Buf_49035))[B_49179]))))));
F.line = 145;F.filename = "crc.nim";
S2_49176 = (NI32)((NU32)(S2_49176) + (NU32)(S1_49175));
F.line = 146;F.filename = "crc.nim";
B_49179 = addInt(B_49179, 1);
F.line = 147;F.filename = "crc.nim";
K_49178 = subInt(K_49178, 1);
} LA5: ;
F.line = 148;F.filename = "crc.nim";
S1_49175 = (NI32)((NU32)(S1_49175) % (NU32)(((NI32) 65521)));
F.line = 149;F.filename = "crc.nim";
S2_49176 = (NI32)((NU32)(S2_49176) % (NU32)(((NI32) 65521)));
} LA1: ;
F.line = 150;F.filename = "crc.nim";
Result_49174 = (NI32)((NI32)((NU32)(S2_49176) << (NU32)(((NI32) 16))) | S1_49175);
framePtr = framePtr->prev;
return Result_49174;
}
N_NOINLINE(void, crcInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "crc";
F.prev = framePtr;
F.filename = "rod/crc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

