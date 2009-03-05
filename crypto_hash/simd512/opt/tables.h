
static const int P4[32][4] = {
{ 2, 34, 18, 50 },
{ 6, 38, 22, 54 },
{ 0, 32, 16, 48 },
{ 4, 36, 20, 52 },
{ 14, 46, 30, 62 },
{ 10, 42, 26, 58 },
{ 12, 44, 28, 60 },
{ 8, 40, 24, 56 },
{ 15, 47, 31, 63 },
{ 13, 45, 29, 61 },
{ 3, 35, 19, 51 },
{ 1, 33, 17, 49 },
{ 9, 41, 25, 57 },
{ 11, 43, 27, 59 },
{ 5, 37, 21, 53 },
{ 7, 39, 23, 55 },
{ 8, 40, 24, 56 },
{ 4, 36, 20, 52 },
{ 14, 46, 30, 62 },
{ 2, 34, 18, 50 },
{ 6, 38, 22, 54 },
{ 10, 42, 26, 58 },
{ 0, 32, 16, 48 },
{ 12, 44, 28, 60 },
{ 70, 102, 86, 118 },
{ 64, 96, 80, 112 },
{ 72, 104, 88, 120 },
{ 78, 110, 94, 126 },
{ 76, 108, 92, 124 },
{ 74, 106, 90, 122 },
{ 66, 98, 82, 114 },
{ 68, 100, 84, 116 }
};

static const int Q4[32][4] = {
{ 66, 98, 82, 114 },
{ 70, 102, 86, 118 },
{ 64, 96, 80, 112 },
{ 68, 100, 84, 116 },
{ 78, 110, 94, 126 },
{ 74, 106, 90, 122 },
{ 76, 108, 92, 124 },
{ 72, 104, 88, 120 },
{ 79, 111, 95, 127 },
{ 77, 109, 93, 125 },
{ 67, 99, 83, 115 },
{ 65, 97, 81, 113 },
{ 73, 105, 89, 121 },
{ 75, 107, 91, 123 },
{ 69, 101, 85, 117 },
{ 71, 103, 87, 119 },
{ 9, 41, 25, 57 },
{ 5, 37, 21, 53 },
{ 15, 47, 31, 63 },
{ 3, 35, 19, 51 },
{ 7, 39, 23, 55 },
{ 11, 43, 27, 59 },
{ 1, 33, 17, 49 },
{ 13, 45, 29, 61 },
{ 71, 103, 87, 119 },
{ 65, 97, 81, 113 },
{ 73, 105, 89, 121 },
{ 79, 111, 95, 127 },
{ 77, 109, 93, 125 },
{ 75, 107, 91, 123 },
{ 67, 99, 83, 115 },
{ 69, 101, 85, 117 }
};


static const int P8[32][8] = {
{ 2, 66, 34, 98, 18, 82, 50, 114 },
{ 6, 70, 38, 102, 22, 86, 54, 118 },
{ 0, 64, 32, 96, 16, 80, 48, 112 },
{ 4, 68, 36, 100, 20, 84, 52, 116 },
{ 14, 78, 46, 110, 30, 94, 62, 126 },
{ 10, 74, 42, 106, 26, 90, 58, 122 },
{ 12, 76, 44, 108, 28, 92, 60, 124 },
{ 8, 72, 40, 104, 24, 88, 56, 120 },
{ 15, 79, 47, 111, 31, 95, 63, 127 },
{ 13, 77, 45, 109, 29, 93, 61, 125 },
{ 3, 67, 35, 99, 19, 83, 51, 115 },
{ 1, 65, 33, 97, 17, 81, 49, 113 },
{ 9, 73, 41, 105, 25, 89, 57, 121 },
{ 11, 75, 43, 107, 27, 91, 59, 123 },
{ 5, 69, 37, 101, 21, 85, 53, 117 },
{ 7, 71, 39, 103, 23, 87, 55, 119 },
{ 8, 72, 40, 104, 24, 88, 56, 120 },
{ 4, 68, 36, 100, 20, 84, 52, 116 },
{ 14, 78, 46, 110, 30, 94, 62, 126 },
{ 2, 66, 34, 98, 18, 82, 50, 114 },
{ 6, 70, 38, 102, 22, 86, 54, 118 },
{ 10, 74, 42, 106, 26, 90, 58, 122 },
{ 0, 64, 32, 96, 16, 80, 48, 112 },
{ 12, 76, 44, 108, 28, 92, 60, 124 },
{ 134, 198, 166, 230, 150, 214, 182, 246 },
{ 128, 192, 160, 224, 144, 208, 176, 240 },
{ 136, 200, 168, 232, 152, 216, 184, 248 },
{ 142, 206, 174, 238, 158, 222, 190, 254 },
{ 140, 204, 172, 236, 156, 220, 188, 252 },
{ 138, 202, 170, 234, 154, 218, 186, 250 },
{ 130, 194, 162, 226, 146, 210, 178, 242 },
{ 132, 196, 164, 228, 148, 212, 180, 244 },
};

static const int Q8[32][8] = {
{ 130, 194, 162, 226, 146, 210, 178, 242 },
{ 134, 198, 166, 230, 150, 214, 182, 246 },
{ 128, 192, 160, 224, 144, 208, 176, 240 },
{ 132, 196, 164, 228, 148, 212, 180, 244 },
{ 142, 206, 174, 238, 158, 222, 190, 254 },
{ 138, 202, 170, 234, 154, 218, 186, 250 },
{ 140, 204, 172, 236, 156, 220, 188, 252 },
{ 136, 200, 168, 232, 152, 216, 184, 248 },
{ 143, 207, 175, 239, 159, 223, 191, 255 },
{ 141, 205, 173, 237, 157, 221, 189, 253 },
{ 131, 195, 163, 227, 147, 211, 179, 243 },
{ 129, 193, 161, 225, 145, 209, 177, 241 },
{ 137, 201, 169, 233, 153, 217, 185, 249 },
{ 139, 203, 171, 235, 155, 219, 187, 251 },
{ 133, 197, 165, 229, 149, 213, 181, 245 },
{ 135, 199, 167, 231, 151, 215, 183, 247 },
{ 9, 73, 41, 105, 25, 89, 57, 121 },
{ 5, 69, 37, 101, 21, 85, 53, 117 },
{ 15, 79, 47, 111, 31, 95, 63, 127 },
{ 3, 67, 35, 99, 19, 83, 51, 115 },
{ 7, 71, 39, 103, 23, 87, 55, 119 },
{ 11, 75, 43, 107, 27, 91, 59, 123 },
{ 1, 65, 33, 97, 17, 81, 49, 113 },
{ 13, 77, 45, 109, 29, 93, 61, 125 },
{ 135, 199, 167, 231, 151, 215, 183, 247 },
{ 129, 193, 161, 225, 145, 209, 177, 241 },
{ 137, 201, 169, 233, 153, 217, 185, 249 },
{ 143, 207, 175, 239, 159, 223, 191, 255 },
{ 141, 205, 173, 237, 157, 221, 189, 253 },
{ 139, 203, 171, 235, 155, 219, 187, 251 },
{ 131, 195, 163, 227, 147, 211, 179, 243 },
{ 133, 197, 165, 229, 149, 213, 181, 245 },
};

  static const fft_t FFT64_8_8_Twiddle[] = {
    1,    1,    1,    1,    1,    1,    1,    1,
    1,    2,    4,    8,   16,   32,   64,  128,
    1,   60,    2,  120,    4,  -17,    8,  -34,
    1,  120,    8,  -68,   64,  -30,   -2,   17,
    1,   46,   60,  -67,    2,   92,  120,  123,
    1,   92,  -17,  -22,   32,  117,  -30,   67,
    1,  -67,  120,  -73,    8,  -22,  -68,  -70,
    1,  123,  -34,  -70,  128,   67,   17,   35,
  };

 static const fft_t FFT128_2_64_Twiddle[] =  {
    1, -118,   46,  -31,   60,  116,  -67,  -61,
    2,   21,   92,  -62,  120,  -25,  123, -122,
    4,   42,  -73, -124,  -17,  -50,  -11,   13,
    8,   84,  111,    9,  -34, -100,  -22,   26,
   16,  -89,  -35,   18,  -68,   57,  -44,   52,
   32,   79,  -70,   36,  121,  114,  -88,  104,
   64,  -99,  117,   72,  -15,  -29,   81,  -49,
  128,   59,  -23, -113,  -30,  -58,  -95,  -98
  };

static const fft_t FFT128_16_8_Twiddle[] =  {
1, 1, 1, 1, 1, 1, 1, 1, 
1, 2, 4, 8, 16, 32, 64, 128, 
1, 60, 2, 120, 4, -17, 8, -34, 
1, 120, 8, -68, 64, -30, -2, 17, 
1, 46, 60, -67, 2, 92, 120, 123, 
1, 92, -17, -22, 32, 117, -30, 67, 
1, -67, 120, -73, 8, -22, -68, -70, 
1, 123, -34, -70, 128, 67, 17, 35, 
1, -118, 46, -31, 60, 116, -67, -61, 
1, 21, -73, 9, -68, 114, 81, -98, 
1, 116, 92, -122, -17, 84, -22, 18, 
1, -25, 111, 52, -15, 118, -123, -9, 
1, -31, -67, 21, 120, -122, -73, -50, 
1, -62, -11, -89, 121, -49, -46, 25, 
1, -61, 123, -50, -34, 18, -70, -99, 
1, -122, -22, 114, -30, 62, -111, -79 };

 static const fft_t FFT128_8_16_Twiddle[] =  {
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 60, 2, 120, 4, -17, 8, -34, 16, -68, 32, 121, 64, -15, 128, -30, 
1, 46, 60, -67, 2, 92, 120, 123, 4, -73, -17, -11, 8, 111, -34, -22, 
1, -67, 120, -73, 8, -22, -68, -70, 64, 81, -30, -46, -2, -123, 17, -111, 
1, -118, 46, -31, 60, 116, -67, -61, 2, 21, 92, -62, 120, -25, 123, -122, 
1, 116, 92, -122, -17, 84, -22, 18, 32, 114, 117, -49, -30, 118, 67, 62, 
1, -31, -67, 21, 120, -122, -73, -50, 8, 9, -22, -89, -68, 52, -70, 114, 
1, -61, 123, -50, -34, 18, -70, -99, 128, -98, 67, 25, 17, -9, 35, -79};


static const fft_t FFT256_2_128_Twiddle[] =  {
   1,   41, -118,   45,   46,   87,  -31,   14, 
  60, -110,  116, -127,  -67,   80,  -61,   69, 
   2,   82,   21,   90,   92,  -83,  -62,   28, 
 120,   37,  -25,    3,  123,  -97, -122, -119, 
   4,  -93,   42,  -77,  -73,   91, -124,   56, 
 -17,   74,  -50,    6,  -11,   63,   13,   19, 
   8,   71,   84,  103,  111,  -75,    9,  112, 
 -34, -109, -100,   12,  -22,  126,   26,   38, 
  16, -115,  -89,  -51,  -35,  107,   18,  -33, 
 -68,   39,   57,   24,  -44,   -5,   52,   76, 
  32,   27,   79, -102,  -70,  -43,   36,  -66, 
 121,   78,  114,   48,  -88,  -10,  104, -105, 
  64,   54,  -99,   53,  117,  -86,   72,  125, 
 -15, -101,  -29,   96,   81,  -20,  -49,   47, 
 128,  108,   59,  106,  -23,   85, -113,   -7, 
 -30,   55,  -58,  -65,  -95,  -40,  -98,   94};


static const u32 IV_224[] = {
  0x2bcc3476, 0x64dce6a3, 0xbabf841b, 0xcf1bb3a2,
  0x1389afa5, 0x8818544b, 0x83140916, 0x9525c82b,
  0x42b233fc, 0xf332c0dc, 0x597129f0, 0x7c8f6a8d,
  0xfe2c7137, 0x3385203b, 0x841742af, 0xbcfe0e48
};

static const u32 IV_256[] = {
  0x96301f14, 0x64f69407, 0x8450cc02, 0x42c538e3,
  0x75ad94b4, 0x8b618939, 0x5a13cb35, 0x26141ded,
  0x2d83bbab, 0x0c195501, 0xcc0782ba, 0x356688a2,
  0x5731b59d, 0xabff7dd4, 0xdb4cd0f5, 0x7240ec03
};

static const u32 IV_384[] = {
 0x0d14da0d, 0x95c2d7d5, 0xa95b8260, 0xb4722c01, 0xe4be208b, 0x12cb4873, 0x67773662, 0x56a66d24,
 0xfba71944, 0x6e1b3ca0, 0x7d0b1a7c, 0xb506d742, 0xc417ab0b, 0xeb34f21c, 0xbab7945b, 0xd1ed927e,
 0xe65ced88, 0xb0667012, 0x916393e6, 0x4b0643ce, 0x4fbed3f1, 0x9627d2bc, 0xeb96513b, 0x9aa6c3e3,
 0xf8773176, 0x4c45a87d, 0xc3280609, 0xe6996ca4, 0x694e541f, 0x0e3dcf80, 0x042ab187, 0x71fb0b87
};

static const u32 IV_512[] = {
 0xc2956828, 0x3da33320, 0x4149c566, 0xc49d9244, 0x04a3f1aa, 0x0220c98b, 0x7246bebf, 0xe51d9d96,
 0x39369835, 0xb7b6f593, 0x956d5c2e, 0x2e4e80c8, 0x1e9fc449, 0x84ca34e9, 0x17d45ec5, 0x27db1b31,
 0xd9ca7181, 0xcf8e8183, 0xe2f28feb, 0xe9aa51c5, 0xc5c2d649, 0x37c0b473, 0x07eef0a5, 0xdd23d692,
 0x4d6185f6, 0xbbdcbc6e, 0x753b2bf6, 0x7aac68ac, 0xeb672a56, 0xed8a5dcd, 0xb072020d, 0xb07cf71f
};
