#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0     NONE   float   xyzw
// NORMAL                   0   xyz         1     NONE   float   xyz 
// TEXCOORD                 0   xy          2     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// TEXCOORD                 0   xy          0     NONE   float   xy  
// TEXCOORD                 1   xyzw        1     NONE   float   xyzw
// TEXCOORD                 2   xyz         2     NONE   float   xyz 
// COLOR                    0   xyzw        3     NONE   float   xyzw
// SV_Position              0   xyzw        4      POS   float   xyzw
// TEXCOORD                 4   xyzw        5     NONE   float   xyzw
//
vs_5_1
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[0:0][23], immediateIndexed, space=0
dcl_input v0.xyzw
dcl_input v1.xyz
dcl_input v2.xy
dcl_output o0.xy
dcl_output o1.xyzw
dcl_output o2.xyz
dcl_output o3.xyzw
dcl_output_siv o4.xyzw, position
dcl_output o5.xyzw
dcl_temps 1
dp4 o4.x, v0.xyzw, CB0[0][8].xyzw
dp4 o4.y, v0.xyzw, CB0[0][9].xyzw
dp4 o4.z, v0.xyzw, CB0[0][10].xyzw
dp4 o4.w, v0.xyzw, CB0[0][11].xyzw
dp4 o1.x, v0.xyzw, CB0[0][1].xyzw
dp4 o1.y, v0.xyzw, CB0[0][2].xyzw
dp4 o1.z, v0.xyzw, CB0[0][3].xyzw
dp3 r0.x, v1.xyzx, CB0[0][5].xyzx
dp3 r0.y, v1.xyzx, CB0[0][6].xyzx
dp3 r0.z, v1.xyzx, CB0[0][7].xyzx
dp3 r0.w, r0.xyzx, r0.xyzx
rsq r0.w, r0.w
mul o2.xyz, r0.wwww, r0.xyzx
dp4 o5.x, v0.xyzw, CB0[0][12].xyzw
dp4 o5.y, v0.xyzw, CB0[0][13].xyzw
dp4 o5.z, v0.xyzw, CB0[0][14].xyzw
dp4 o5.w, v0.xyzw, CB0[0][15].xyzw
mov o1.w, l(1.000000)
mov o3.xyzw, CB0[0][22].xyzw
mov o0.xy, v2.xyxx
ret 
// Approximately 0 instruction slots used
#endif

const BYTE PBREffect_VSConstantVelocity[] =
{
     68,  88,  66,  67,  42, 231, 
    117, 224, 246, 214, 186,  36, 
      1,   1, 218, 148, 215, 233, 
      3,  85,   1,   0,   0,   0, 
      8,   6,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    164,   0,   0,   0,  96,   1, 
      0,   0, 148,   4,   0,   0, 
     73,  83,  71,  78, 108,   0, 
      0,   0,   3,   0,   0,   0, 
      8,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,  15,   0,   0,  92,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      7,   7,   0,   0,  99,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      3,   3,   0,   0,  83,  86, 
     95,  80, 111, 115, 105, 116, 
    105, 111, 110,   0,  78,  79, 
     82,  77,  65,  76,   0,  84, 
     69,  88,  67,  79,  79,  82, 
     68,   0,  79,  83,  71,  78, 
    180,   0,   0,   0,   6,   0, 
      0,   0,   8,   0,   0,   0, 
    152,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   3,  12,   0,   0, 
    152,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,  15,   0,   0,   0, 
    152,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   2,   0, 
      0,   0,   7,   8,   0,   0, 
    161,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,  15,   0,   0,   0, 
    167,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   4,   0, 
      0,   0,  15,   0,   0,   0, 
    152,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   5,   0, 
      0,   0,  15,   0,   0,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0,  67,  79,  76, 
     79,  82,   0,  83,  86,  95, 
     80, 111, 115, 105, 116, 105, 
    111, 110,   0, 171,  83,  72, 
     69,  88,  44,   3,   0,   0, 
     81,   0,   1,   0, 203,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   7,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  23,   0,   0,   0, 
      0,   0,   0,   0,  95,   0, 
      0,   3, 242,  16,  16,   0, 
      0,   0,   0,   0,  95,   0, 
      0,   3, 114,  16,  16,   0, 
      1,   0,   0,   0,  95,   0, 
      0,   3,  50,  16,  16,   0, 
      2,   0,   0,   0, 101,   0, 
      0,   3,  50,  32,  16,   0, 
      0,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 114,  32,  16,   0, 
      2,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      3,   0,   0,   0, 103,   0, 
      0,   4, 242,  32,  16,   0, 
      4,   0,   0,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   5,   0, 
      0,   0, 104,   0,   0,   2, 
      1,   0,   0,   0,  17,   0, 
      0,   9,  18,  32,  16,   0, 
      4,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  17,   0, 
      0,   9,  34,  32,  16,   0, 
      4,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      9,   0,   0,   0,  17,   0, 
      0,   9,  66,  32,  16,   0, 
      4,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     10,   0,   0,   0,  17,   0, 
      0,   9, 130,  32,  16,   0, 
      4,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     11,   0,   0,   0,  17,   0, 
      0,   9,  18,  32,  16,   0, 
      1,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  17,   0, 
      0,   9,  34,  32,  16,   0, 
      1,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,  17,   0, 
      0,   9,  66,  32,  16,   0, 
      1,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  16,   0, 
      0,   9,  18,   0,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      5,   0,   0,   0,  16,   0, 
      0,   9,  34,   0,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      6,   0,   0,   0,  16,   0, 
      0,   9,  66,   0,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      7,   0,   0,   0,  16,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  68,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,  32,  16,   0, 
      2,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  17,   0,   0,   9, 
     18,  32,  16,   0,   5,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  12,   0, 
      0,   0,  17,   0,   0,   9, 
     34,  32,  16,   0,   5,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  13,   0, 
      0,   0,  17,   0,   0,   9, 
     66,  32,  16,   0,   5,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  14,   0, 
      0,   0,  17,   0,   0,   9, 
    130,  32,  16,   0,   5,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  54,   0,   0,   5, 
    130,  32,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63,  54,   0, 
      0,   7, 242,  32,  16,   0, 
      3,   0,   0,   0,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  22,   0, 
      0,   0,  54,   0,   0,   5, 
     50,  32,  16,   0,   0,   0, 
      0,   0,  70,  16,  16,   0, 
      2,   0,   0,   0,  62,   0, 
      0,   1,  82,  84,  83,  48, 
    108,   1,   0,   0,   1,   0, 
      0,   0,   9,   0,   0,   0, 
     24,   0,   0,   0,   0,   0, 
      0,   0, 108,   1,   0,   0, 
     29,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    132,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    160,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    188,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    216,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     44,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     72,   1,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
    100,   1,   0,   0,   1,   0, 
      0,   0, 140,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   1,   0,   0,   0, 
    168,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      1,   0,   0,   0, 196,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   1,   0, 
      0,   0, 224,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   1,   0,   0,   0, 
    252,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      1,   0,   0,   0,  24,   1, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   5,   0, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   1,   0, 
      0,   0,  52,   1,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   1,   0,   0,   0, 
     80,   1,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};