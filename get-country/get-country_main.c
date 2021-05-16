/*****************************************************************************
 * Feifan Qiao
 * 
 * This program is inspired by https://blog.cloudflare.com/branch-predictor/
 * 
 * How many ifs are too many?
 *****************************************************************************/
#include "util.h"
#include <string.h>
#include <assert.h>


#define UNUSED(x)   (void)(x)



// function prototypes
const char* getCountry(int cc);



int main(int argc, char* argv[]) {
    for (int i = 0; i <= 240; ++i) {
        const char* c = getCountry(i);
        UNUSED(c);
    }
    
    // no need to verify

    return 0;
}



/**
 * @brief A snippet of production code found on the blog linked above.
 * 
 * This is supposed to be a production level code I saw on that blog.
 * I modified the the list of country using data from this github page:
 * https://gist.github.com/marijn/396531/188caa065e3cd319fed7913ee3eecf5eec541918
 * 
 * @param   cc    country code from 1 to 257
 * @return  two character string representing the country,
 *          if no match is found, returns "XX"
 */
const char* getCountry(int cc) {
	if (cc == 0) return "AF";
	if (cc == 1) return "AL";
	if (cc == 2) return "DZ";
	if (cc == 3) return "AS";
	if (cc == 4) return "AD";
	if (cc == 5) return "AO";
	if (cc == 6) return "AI";
	if (cc == 7) return "AQ";
	if (cc == 8) return "AG";
	if (cc == 9) return "AR";
	if (cc == 10) return "AM";
	if (cc == 11) return "AW";
	if (cc == 12) return "AU";
	if (cc == 13) return "AT";
	if (cc == 14) return "AZ";
	if (cc == 15) return "BS";
	if (cc == 16) return "BH";
	if (cc == 17) return "BD";
	if (cc == 18) return "BB";
	if (cc == 19) return "BY";
	if (cc == 20) return "BE";
	if (cc == 21) return "BZ";
	if (cc == 22) return "BJ";
	if (cc == 23) return "BM";
	if (cc == 24) return "BT";
	if (cc == 25) return "BO";
	if (cc == 26) return "BA";
	if (cc == 27) return "BW";
	if (cc == 28) return "BV";
	if (cc == 29) return "BR";
	if (cc == 30) return "IO";
	if (cc == 31) return "BN";
	if (cc == 32) return "BG";
	if (cc == 33) return "BF";
	if (cc == 34) return "BI";
	if (cc == 35) return "KH";
	if (cc == 36) return "CM";
	if (cc == 37) return "CA";
	if (cc == 38) return "CV";
	if (cc == 39) return "KY";
	if (cc == 40) return "CF";
	if (cc == 41) return "TD";
	if (cc == 42) return "CL";
	if (cc == 43) return "CN";
	if (cc == 44) return "CX";
	if (cc == 45) return "CC";
	if (cc == 46) return "CO";
	if (cc == 47) return "KM";
	if (cc == 48) return "CG";
	if (cc == 49) return "CD";
	if (cc == 50) return "CK";
	if (cc == 51) return "CR";
	if (cc == 52) return "CI";
	if (cc == 53) return "HR";
	if (cc == 54) return "CU";
	if (cc == 55) return "CY";
	if (cc == 56) return "CZ";
	if (cc == 57) return "DK";
	if (cc == 58) return "DJ";
	if (cc == 59) return "DM";
	if (cc == 60) return "DO";
	if (cc == 61) return "TP";
	if (cc == 62) return "EC";
	if (cc == 63) return "EG";
	if (cc == 64) return "SV";
	if (cc == 65) return "GQ";
	if (cc == 66) return "ER";
	if (cc == 67) return "EE";
	if (cc == 68) return "ET";
	if (cc == 69) return "FK";
	if (cc == 70) return "FO";
	if (cc == 71) return "FJ";
	if (cc == 72) return "FI";
	if (cc == 73) return "FR";
	if (cc == 74) return "GF";
	if (cc == 75) return "PF";
	if (cc == 76) return "TF";
	if (cc == 77) return "GA";
	if (cc == 78) return "GM";
	if (cc == 79) return "GE";
	if (cc == 80) return "DE";
	if (cc == 81) return "GH";
	if (cc == 82) return "GI";
	if (cc == 83) return "GR";
	if (cc == 84) return "GL";
	if (cc == 85) return "GD";
	if (cc == 86) return "GP";
	if (cc == 87) return "GU";
	if (cc == 88) return "GT";
	if (cc == 89) return "GN";
	if (cc == 90) return "GW";
	if (cc == 91) return "GY";
	if (cc == 92) return "HT";
	if (cc == 93) return "HM";
	if (cc == 94) return "VA";
	if (cc == 95) return "HN";
	if (cc == 96) return "HK";
	if (cc == 97) return "HU";
	if (cc == 98) return "IS";
	if (cc == 99) return "IN";
	if (cc == 100) return "ID";
	if (cc == 101) return "IR";
	if (cc == 102) return "IQ";
	if (cc == 103) return "IE";
	if (cc == 104) return "IL";
	if (cc == 105) return "IT";
	if (cc == 106) return "JM";
	if (cc == 107) return "JP";
	if (cc == 108) return "JO";
	if (cc == 109) return "KZ";
	if (cc == 110) return "KE";
	if (cc == 111) return "KI";
	if (cc == 112) return "KP";
	if (cc == 113) return "KR";
	if (cc == 114) return "KV";
	if (cc == 115) return "KW";
	if (cc == 116) return "KG";
	if (cc == 117) return "LA";
	if (cc == 118) return "LV";
	if (cc == 119) return "LB";
	if (cc == 120) return "LS";
	if (cc == 121) return "LR";
	if (cc == 122) return "LY";
	if (cc == 123) return "LI";
	if (cc == 124) return "LT";
	if (cc == 125) return "LU";
	if (cc == 126) return "MO";
	if (cc == 127) return "MK";
	if (cc == 128) return "MG";
	if (cc == 129) return "MW";
	if (cc == 130) return "MY";
	if (cc == 131) return "MV";
	if (cc == 132) return "ML";
	if (cc == 133) return "MT";
	if (cc == 134) return "MH";
	if (cc == 135) return "MQ";
	if (cc == 136) return "MR";
	if (cc == 137) return "MU";
	if (cc == 138) return "YT";
	if (cc == 139) return "MX";
	if (cc == 140) return "FM";
	if (cc == 141) return "MD";
	if (cc == 142) return "MC";
	if (cc == 143) return "MN";
	if (cc == 144) return "MS";
	if (cc == 145) return "ME";
	if (cc == 146) return "MA";
	if (cc == 147) return "MZ";
	if (cc == 148) return "MM";
	if (cc == 149) return "NA";
	if (cc == 150) return "NR";
	if (cc == 151) return "NP";
	if (cc == 152) return "NL";
	if (cc == 153) return "AN";
	if (cc == 154) return "NC";
	if (cc == 155) return "NZ";
	if (cc == 156) return "NI";
	if (cc == 157) return "NE";
	if (cc == 158) return "NG";
	if (cc == 159) return "NU";
	if (cc == 160) return "NF";
	if (cc == 161) return "MP";
	if (cc == 162) return "NO";
	if (cc == 163) return "OM";
	if (cc == 164) return "PK";
	if (cc == 165) return "PW";
	if (cc == 166) return "PS";
	if (cc == 167) return "PA";
	if (cc == 168) return "PG";
	if (cc == 169) return "PY";
	if (cc == 170) return "PE";
	if (cc == 171) return "PH";
	if (cc == 172) return "PN";
	if (cc == 173) return "PL";
	if (cc == 174) return "PT";
	if (cc == 175) return "PR";
	if (cc == 176) return "QA";
	if (cc == 177) return "RE";
	if (cc == 178) return "RO";
	if (cc == 179) return "RU";
	if (cc == 180) return "RW";
	if (cc == 181) return "SH";
	if (cc == 182) return "KN";
	if (cc == 183) return "LC";
	if (cc == 184) return "PM";
	if (cc == 185) return "VC";
	if (cc == 186) return "WS";
	if (cc == 187) return "SM";
	if (cc == 188) return "ST";
	if (cc == 189) return "SA";
	if (cc == 190) return "SN";
	if (cc == 191) return "RS";
	if (cc == 192) return "SC";
	if (cc == 193) return "SL";
	if (cc == 194) return "SG";
	if (cc == 195) return "SK";
	if (cc == 196) return "SI";
	if (cc == 197) return "SB";
	if (cc == 198) return "SO";
	if (cc == 199) return "ZA";
	if (cc == 200) return "GS";
	if (cc == 201) return "ES";
	if (cc == 202) return "LK";
	if (cc == 203) return "SD";
	if (cc == 204) return "SR";
	if (cc == 205) return "SJ";
	if (cc == 206) return "SZ";
	if (cc == 207) return "SE";
	if (cc == 208) return "CH";
	if (cc == 209) return "SY";
	if (cc == 210) return "TW";
	if (cc == 211) return "TJ";
	if (cc == 212) return "TZ";
	if (cc == 213) return "TH";
	if (cc == 214) return "TG";
	if (cc == 215) return "TK";
	if (cc == 216) return "TO";
	if (cc == 217) return "TT";
	if (cc == 218) return "TN";
	if (cc == 219) return "TR";
	if (cc == 220) return "TM";
	if (cc == 221) return "TC";
	if (cc == 222) return "TV";
	if (cc == 223) return "UG";
	if (cc == 224) return "UA";
	if (cc == 225) return "AE";
	if (cc == 226) return "GB";
	if (cc == 227) return "US";
	if (cc == 228) return "UM";
	if (cc == 229) return "UY";
	if (cc == 230) return "UZ";
	if (cc == 231) return "VU";
	if (cc == 232) return "VE";
	if (cc == 233) return "VN";
	if (cc == 234) return "VG";
	if (cc == 235) return "VI";
	if (cc == 236) return "WF";
	if (cc == 237) return "EH";
	if (cc == 238) return "YE";
	if (cc == 239) return "ZM";
	if (cc == 240) return "ZW";
    return "XX";
}
