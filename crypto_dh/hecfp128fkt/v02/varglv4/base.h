#define SLICE 0

#define GENERATOR static const unsigned char base[16*4] = { \
    0x68, 0x47, 0xE4, 0xB1, 0x80, 0x26, 0xA3, 0xE5, 0xD3, 0x13, 0x8A, 0x21, 0xE5, 0xEC, 0xCC, 0xF2, \
    0x56, 0x14, 0xED, 0x36, 0x16, 0xE7, 0xE9, 0x64, 0xFB, 0x75, 0x85, 0x7D, 0xE7, 0x41, 0xCE, 0x98, \
    0xE7, 0x79, 0xF2, 0xE2, 0xE6, 0x1E, 0xD8, 0xDD, 0x21, 0x7C, 0xF1, 0xCF, 0x0C, 0x2F, 0x1A, 0x81, \
    0x1F, 0x6F, 0x31, 0xCF, 0x9E, 0x13, 0x2C, 0xED, 0xAC, 0x92, 0xD5, 0xC8, 0xEA, 0xC9, 0x84, 0xBF \
}
/* Mumford (u1, u0, v1, v0) = (P : R : S : T : 1). */
