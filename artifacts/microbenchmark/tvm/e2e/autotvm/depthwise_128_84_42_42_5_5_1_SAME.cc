//1_1_10752_42_7_1
//128_84_42_42_5_1_SAME
//dim3 grid(1, 1, 10752);
//dim3 block(42, 7, 1);

#ifdef _WIN32
  using uint = unsigned int;
  using uchar = unsigned char;
  using ushort = unsigned short;
  using int64_t = long long;
  using uint64_t = unsigned long long;
#else
  #define uint unsigned int
  #define uchar unsigned char
  #define ushort unsigned short
  #define int64_t long long
  #define uint64_t unsigned long long
#endif
extern "C" __global__ void __launch_bounds__(294) depthwise_kernel0(float* __restrict__ placeholder, float* __restrict__ placeholder1, float* __restrict__ DepthwiseConv2d) {
  __shared__ float PaddedInput_shared[2116];
  __shared__ float placeholder_shared[25];
  float PaddedInput_shared_local[70];
  float placeholder_shared_local[25];
  float DepthwiseConv2d_local[6];
  PaddedInput_shared[(((((int)threadIdx.y) * 42) + ((int)threadIdx.x)))] = ((((92 <= ((((int)threadIdx.y) * 42) + ((int)threadIdx.x))) && (2 <= (((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) % 46))) && ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) % 46) < 44)) ? placeholder[(((((((int)blockIdx.z) * 1764) + ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) / 46) * 42)) + (((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) % 46)) - 86))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 294))] = (((2 <= ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 18) % 46)) && (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 18) % 46) < 44)) ? placeholder[(((((((int)blockIdx.z) * 1764) + (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 294) / 46) * 42)) + ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 18) % 46)) - 86))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 588))] = (((2 <= ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 36) % 46)) && (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 36) % 46) < 44)) ? placeholder[(((((((int)blockIdx.z) * 1764) + (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 588) / 46) * 42)) + ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 36) % 46)) - 86))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 882))] = (((2 <= ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 8) % 46)) && (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 8) % 46) < 44)) ? placeholder[(((((((int)blockIdx.z) * 1764) + (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 882) / 46) * 42)) + ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 8) % 46)) - 86))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 1176))] = (((2 <= ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 26) % 46)) && (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 26) % 46) < 44)) ? placeholder[(((((((int)blockIdx.z) * 1764) + (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 1176) / 46) * 42)) + ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 26) % 46)) - 86))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 1470))] = (((2 <= ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 44) % 46)) && (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 44) % 46) < 44)) ? placeholder[(((((((int)blockIdx.z) * 1764) + (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 1470) / 46) * 42)) + ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 44) % 46)) - 86))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 1764))] = ((((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) < 260) && (2 <= ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 16) % 46))) && (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 16) % 46) < 44)) ? placeholder[(((((((int)blockIdx.z) * 1764) + (((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 1764) / 46) * 42)) + ((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 16) % 46)) - 86))] : 0.000000e+00f);
  if (((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) < 58) {
    if (((int)threadIdx.y) < 2) {
      PaddedInput_shared[((((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) + 2058))] = 0.000000e+00f;
    }
  }
  if (((((int)threadIdx.y) * 42) + ((int)threadIdx.x)) < 25) {
    if (((int)threadIdx.y) < 1) {
      placeholder_shared[(((((int)threadIdx.y) * 42) + ((int)threadIdx.x)))] = placeholder1[((((((int)threadIdx.y) * 42) + ((((int)blockIdx.z) % 84) * 25)) + ((int)threadIdx.x)))];
    }
  }
  __syncthreads();
  PaddedInput_shared_local[(0)] = PaddedInput_shared[(((((int)threadIdx.y) * 138) + ((int)threadIdx.x)))];
  PaddedInput_shared_local[(35)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 966))];
  PaddedInput_shared_local[(1)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1))];
  PaddedInput_shared_local[(36)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 967))];
  PaddedInput_shared_local[(2)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 2))];
  PaddedInput_shared_local[(37)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 968))];
  PaddedInput_shared_local[(3)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 3))];
  PaddedInput_shared_local[(38)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 969))];
  PaddedInput_shared_local[(4)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 4))];
  PaddedInput_shared_local[(39)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 970))];
  PaddedInput_shared_local[(5)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 46))];
  PaddedInput_shared_local[(40)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1012))];
  PaddedInput_shared_local[(6)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 47))];
  PaddedInput_shared_local[(41)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1013))];
  PaddedInput_shared_local[(7)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 48))];
  PaddedInput_shared_local[(42)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1014))];
  PaddedInput_shared_local[(8)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 49))];
  PaddedInput_shared_local[(43)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1015))];
  PaddedInput_shared_local[(9)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 50))];
  PaddedInput_shared_local[(44)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1016))];
  PaddedInput_shared_local[(10)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 92))];
  PaddedInput_shared_local[(45)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1058))];
  PaddedInput_shared_local[(11)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 93))];
  PaddedInput_shared_local[(46)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1059))];
  PaddedInput_shared_local[(12)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 94))];
  PaddedInput_shared_local[(47)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1060))];
  PaddedInput_shared_local[(13)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 95))];
  PaddedInput_shared_local[(48)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1061))];
  PaddedInput_shared_local[(14)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 96))];
  PaddedInput_shared_local[(49)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1062))];
  PaddedInput_shared_local[(15)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 138))];
  PaddedInput_shared_local[(50)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1104))];
  PaddedInput_shared_local[(16)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 139))];
  PaddedInput_shared_local[(51)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1105))];
  PaddedInput_shared_local[(17)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 140))];
  PaddedInput_shared_local[(52)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1106))];
  PaddedInput_shared_local[(18)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 141))];
  PaddedInput_shared_local[(53)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1107))];
  PaddedInput_shared_local[(19)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 142))];
  PaddedInput_shared_local[(54)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1108))];
  PaddedInput_shared_local[(20)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 184))];
  PaddedInput_shared_local[(55)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1150))];
  PaddedInput_shared_local[(21)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 185))];
  PaddedInput_shared_local[(56)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1151))];
  PaddedInput_shared_local[(22)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 186))];
  PaddedInput_shared_local[(57)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1152))];
  PaddedInput_shared_local[(23)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 187))];
  PaddedInput_shared_local[(58)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1153))];
  PaddedInput_shared_local[(24)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 188))];
  PaddedInput_shared_local[(59)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1154))];
  PaddedInput_shared_local[(25)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 230))];
  PaddedInput_shared_local[(60)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1196))];
  PaddedInput_shared_local[(26)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 231))];
  PaddedInput_shared_local[(61)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1197))];
  PaddedInput_shared_local[(27)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 232))];
  PaddedInput_shared_local[(62)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1198))];
  PaddedInput_shared_local[(28)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 233))];
  PaddedInput_shared_local[(63)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1199))];
  PaddedInput_shared_local[(29)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 234))];
  PaddedInput_shared_local[(64)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1200))];
  PaddedInput_shared_local[(30)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 276))];
  PaddedInput_shared_local[(65)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1242))];
  PaddedInput_shared_local[(31)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 277))];
  PaddedInput_shared_local[(66)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1243))];
  PaddedInput_shared_local[(32)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 278))];
  PaddedInput_shared_local[(67)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1244))];
  PaddedInput_shared_local[(33)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 279))];
  PaddedInput_shared_local[(68)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1245))];
  PaddedInput_shared_local[(34)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 280))];
  PaddedInput_shared_local[(69)] = PaddedInput_shared[((((((int)threadIdx.y) * 138) + ((int)threadIdx.x)) + 1246))];
  placeholder_shared_local[(0)] = placeholder_shared[(0)];
  placeholder_shared_local[(1)] = placeholder_shared[(1)];
  placeholder_shared_local[(2)] = placeholder_shared[(2)];
  placeholder_shared_local[(3)] = placeholder_shared[(3)];
  placeholder_shared_local[(4)] = placeholder_shared[(4)];
  placeholder_shared_local[(5)] = placeholder_shared[(5)];
  placeholder_shared_local[(6)] = placeholder_shared[(6)];
  placeholder_shared_local[(7)] = placeholder_shared[(7)];
  placeholder_shared_local[(8)] = placeholder_shared[(8)];
  placeholder_shared_local[(9)] = placeholder_shared[(9)];
  placeholder_shared_local[(10)] = placeholder_shared[(10)];
  placeholder_shared_local[(11)] = placeholder_shared[(11)];
  placeholder_shared_local[(12)] = placeholder_shared[(12)];
  placeholder_shared_local[(13)] = placeholder_shared[(13)];
  placeholder_shared_local[(14)] = placeholder_shared[(14)];
  placeholder_shared_local[(15)] = placeholder_shared[(15)];
  placeholder_shared_local[(16)] = placeholder_shared[(16)];
  placeholder_shared_local[(17)] = placeholder_shared[(17)];
  placeholder_shared_local[(18)] = placeholder_shared[(18)];
  placeholder_shared_local[(19)] = placeholder_shared[(19)];
  placeholder_shared_local[(20)] = placeholder_shared[(20)];
  placeholder_shared_local[(21)] = placeholder_shared[(21)];
  placeholder_shared_local[(22)] = placeholder_shared[(22)];
  placeholder_shared_local[(23)] = placeholder_shared[(23)];
  placeholder_shared_local[(24)] = placeholder_shared[(24)];
  DepthwiseConv2d_local[(0)] = 0.000000e+00f;
  DepthwiseConv2d_local[(3)] = 0.000000e+00f;
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(0)] * placeholder_shared_local[(0)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(35)] * placeholder_shared_local[(0)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(1)] * placeholder_shared_local[(1)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(36)] * placeholder_shared_local[(1)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(2)] * placeholder_shared_local[(2)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(37)] * placeholder_shared_local[(2)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(3)] * placeholder_shared_local[(3)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(38)] * placeholder_shared_local[(3)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(4)] * placeholder_shared_local[(4)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(39)] * placeholder_shared_local[(4)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(5)] * placeholder_shared_local[(5)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(40)] * placeholder_shared_local[(5)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(6)] * placeholder_shared_local[(6)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(41)] * placeholder_shared_local[(6)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(7)] * placeholder_shared_local[(7)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(42)] * placeholder_shared_local[(7)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(8)] * placeholder_shared_local[(8)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(43)] * placeholder_shared_local[(8)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(9)] * placeholder_shared_local[(9)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(44)] * placeholder_shared_local[(9)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(10)] * placeholder_shared_local[(10)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(45)] * placeholder_shared_local[(10)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(11)] * placeholder_shared_local[(11)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(46)] * placeholder_shared_local[(11)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(12)] * placeholder_shared_local[(12)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(47)] * placeholder_shared_local[(12)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(13)] * placeholder_shared_local[(13)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(48)] * placeholder_shared_local[(13)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(14)] * placeholder_shared_local[(14)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(49)] * placeholder_shared_local[(14)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(15)] * placeholder_shared_local[(15)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(50)] * placeholder_shared_local[(15)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(16)] * placeholder_shared_local[(16)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(51)] * placeholder_shared_local[(16)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(17)] * placeholder_shared_local[(17)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(52)] * placeholder_shared_local[(17)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(18)] * placeholder_shared_local[(18)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(53)] * placeholder_shared_local[(18)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(19)] * placeholder_shared_local[(19)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(54)] * placeholder_shared_local[(19)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(20)] * placeholder_shared_local[(20)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(55)] * placeholder_shared_local[(20)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(21)] * placeholder_shared_local[(21)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(56)] * placeholder_shared_local[(21)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(22)] * placeholder_shared_local[(22)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(57)] * placeholder_shared_local[(22)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(23)] * placeholder_shared_local[(23)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(58)] * placeholder_shared_local[(23)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(24)] * placeholder_shared_local[(24)]));
  DepthwiseConv2d_local[(3)] = (DepthwiseConv2d_local[(3)] + (PaddedInput_shared_local[(59)] * placeholder_shared_local[(24)]));
  DepthwiseConv2d_local[(1)] = 0.000000e+00f;
  DepthwiseConv2d_local[(4)] = 0.000000e+00f;
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(5)] * placeholder_shared_local[(0)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(40)] * placeholder_shared_local[(0)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(6)] * placeholder_shared_local[(1)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(41)] * placeholder_shared_local[(1)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(7)] * placeholder_shared_local[(2)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(42)] * placeholder_shared_local[(2)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(8)] * placeholder_shared_local[(3)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(43)] * placeholder_shared_local[(3)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(9)] * placeholder_shared_local[(4)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(44)] * placeholder_shared_local[(4)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(10)] * placeholder_shared_local[(5)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(45)] * placeholder_shared_local[(5)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(11)] * placeholder_shared_local[(6)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(46)] * placeholder_shared_local[(6)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(12)] * placeholder_shared_local[(7)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(47)] * placeholder_shared_local[(7)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(13)] * placeholder_shared_local[(8)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(48)] * placeholder_shared_local[(8)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(14)] * placeholder_shared_local[(9)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(49)] * placeholder_shared_local[(9)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(15)] * placeholder_shared_local[(10)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(50)] * placeholder_shared_local[(10)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(16)] * placeholder_shared_local[(11)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(51)] * placeholder_shared_local[(11)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(17)] * placeholder_shared_local[(12)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(52)] * placeholder_shared_local[(12)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(18)] * placeholder_shared_local[(13)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(53)] * placeholder_shared_local[(13)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(19)] * placeholder_shared_local[(14)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(54)] * placeholder_shared_local[(14)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(20)] * placeholder_shared_local[(15)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(55)] * placeholder_shared_local[(15)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(21)] * placeholder_shared_local[(16)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(56)] * placeholder_shared_local[(16)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(22)] * placeholder_shared_local[(17)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(57)] * placeholder_shared_local[(17)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(23)] * placeholder_shared_local[(18)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(58)] * placeholder_shared_local[(18)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(24)] * placeholder_shared_local[(19)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(59)] * placeholder_shared_local[(19)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(25)] * placeholder_shared_local[(20)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(60)] * placeholder_shared_local[(20)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(26)] * placeholder_shared_local[(21)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(61)] * placeholder_shared_local[(21)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(27)] * placeholder_shared_local[(22)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(62)] * placeholder_shared_local[(22)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(28)] * placeholder_shared_local[(23)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(63)] * placeholder_shared_local[(23)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(29)] * placeholder_shared_local[(24)]));
  DepthwiseConv2d_local[(4)] = (DepthwiseConv2d_local[(4)] + (PaddedInput_shared_local[(64)] * placeholder_shared_local[(24)]));
  DepthwiseConv2d_local[(2)] = 0.000000e+00f;
  DepthwiseConv2d_local[(5)] = 0.000000e+00f;
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(10)] * placeholder_shared_local[(0)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(45)] * placeholder_shared_local[(0)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(11)] * placeholder_shared_local[(1)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(46)] * placeholder_shared_local[(1)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(12)] * placeholder_shared_local[(2)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(47)] * placeholder_shared_local[(2)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(13)] * placeholder_shared_local[(3)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(48)] * placeholder_shared_local[(3)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(14)] * placeholder_shared_local[(4)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(49)] * placeholder_shared_local[(4)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(15)] * placeholder_shared_local[(5)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(50)] * placeholder_shared_local[(5)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(16)] * placeholder_shared_local[(6)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(51)] * placeholder_shared_local[(6)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(17)] * placeholder_shared_local[(7)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(52)] * placeholder_shared_local[(7)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(18)] * placeholder_shared_local[(8)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(53)] * placeholder_shared_local[(8)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(19)] * placeholder_shared_local[(9)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(54)] * placeholder_shared_local[(9)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(20)] * placeholder_shared_local[(10)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(55)] * placeholder_shared_local[(10)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(21)] * placeholder_shared_local[(11)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(56)] * placeholder_shared_local[(11)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(22)] * placeholder_shared_local[(12)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(57)] * placeholder_shared_local[(12)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(23)] * placeholder_shared_local[(13)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(58)] * placeholder_shared_local[(13)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(24)] * placeholder_shared_local[(14)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(59)] * placeholder_shared_local[(14)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(25)] * placeholder_shared_local[(15)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(60)] * placeholder_shared_local[(15)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(26)] * placeholder_shared_local[(16)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(61)] * placeholder_shared_local[(16)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(27)] * placeholder_shared_local[(17)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(62)] * placeholder_shared_local[(17)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(28)] * placeholder_shared_local[(18)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(63)] * placeholder_shared_local[(18)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(29)] * placeholder_shared_local[(19)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(64)] * placeholder_shared_local[(19)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(30)] * placeholder_shared_local[(20)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(65)] * placeholder_shared_local[(20)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(31)] * placeholder_shared_local[(21)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(66)] * placeholder_shared_local[(21)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(32)] * placeholder_shared_local[(22)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(67)] * placeholder_shared_local[(22)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(33)] * placeholder_shared_local[(23)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(68)] * placeholder_shared_local[(23)]));
  DepthwiseConv2d_local[(2)] = (DepthwiseConv2d_local[(2)] + (PaddedInput_shared_local[(34)] * placeholder_shared_local[(24)]));
  DepthwiseConv2d_local[(5)] = (DepthwiseConv2d_local[(5)] + (PaddedInput_shared_local[(69)] * placeholder_shared_local[(24)]));
  DepthwiseConv2d[((((((int)blockIdx.z) * 1764) + (((int)threadIdx.y) * 126)) + ((int)threadIdx.x)))] = DepthwiseConv2d_local[(0)];
  DepthwiseConv2d[(((((((int)blockIdx.z) * 1764) + (((int)threadIdx.y) * 126)) + ((int)threadIdx.x)) + 882))] = DepthwiseConv2d_local[(3)];
  DepthwiseConv2d[(((((((int)blockIdx.z) * 1764) + (((int)threadIdx.y) * 126)) + ((int)threadIdx.x)) + 42))] = DepthwiseConv2d_local[(1)];
  DepthwiseConv2d[(((((((int)blockIdx.z) * 1764) + (((int)threadIdx.y) * 126)) + ((int)threadIdx.x)) + 924))] = DepthwiseConv2d_local[(4)];
  DepthwiseConv2d[(((((((int)blockIdx.z) * 1764) + (((int)threadIdx.y) * 126)) + ((int)threadIdx.x)) + 84))] = DepthwiseConv2d_local[(2)];
  DepthwiseConv2d[(((((((int)blockIdx.z) * 1764) + (((int)threadIdx.y) * 126)) + ((int)threadIdx.x)) + 966))] = DepthwiseConv2d_local[(5)];
}

