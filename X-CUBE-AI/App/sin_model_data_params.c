/**
  ******************************************************************************
  * @file    sin_model_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Jan  2 16:51:18 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "sin_model_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sin_model_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sin_model_weights_array_u64[161] = {
  0x3f07636a3f0df3b9U, 0xbe0fbc78bd811840U, 0xbeb66fdd3eefdb38U, 0x3ef78b143eef8da6U,
  0xbeb1f45dbeb46478U, 0x3d00cbdebf060e4cU, 0xbec0f8dcbf0cf594U, 0xbe6ea1d43eec1055U,
  0xbe57611ebf5c39b0U, 0x0U, 0x3e9f5dc3U, 0xbf67a115bfa5762bU,
  0x0U, 0x3e64a83f00000000U, 0x0U, 0xbc6cb04dU,
  0xbec6e2c2bed72027U, 0x3e2fbd6ebe071e00U, 0xbea3ae543dc2b274U, 0x3e82d9413eb79f27U,
  0x3e938565be3f1572U, 0xbe74aeb9bea9bd4cU, 0x3c9ed4903e61c3e2U, 0xbebe0c97be518e60U,
  0x3e91ec993ec1c3cdU, 0x3d9d2f443b936ac0U, 0x3e2b10dabe8d1e48U, 0xbe9e5802be7f2568U,
  0x3e7848e2be9f4a7cU, 0xbec3e31bbebeb67eU, 0x3eba128d3ec2976fU, 0x3ec3b2033e8abb31U,
  0x3e496228bd206e4eU, 0x3d95b4d4be9acb82U, 0x3ec231d3be17c73aU, 0x3e67a73a3e83e75bU,
  0x3e3cc2163e6e045aU, 0xbe097716bea9160fU, 0x3e33c1863ed81671U, 0x3df1146c3e3b5c83U,
  0xbdc971ce36b2c5b6U, 0x3e804875beceb61aU, 0x3eb4cd17bd899845U, 0xbebdbf61bec3d4aaU,
  0xbec2fa7c3e985411U, 0xbed19dc3be85d4a0U, 0x3d58e9583e3d77baU, 0xbd3799083e603e0cU,
  0xbe666394bec2046dU, 0x3cc64dc03e1848d6U, 0x3e97f96fbe6acafaU, 0x3e9baaa9bec44e2bU,
  0xbe75b2a43b8a81c0U, 0x3e7b38623d6e4648U, 0x3e517ab23ed1a041U, 0xbc01ee40bdbe5fa3U,
  0x3eb176e23eaa8274U, 0x3e9a823fbeae629cU, 0x3ea483493e029f93U, 0xbe892f0abe42e6edU,
  0x3edbdaa7bead4eacU, 0xbe94c9223c1c29e0U, 0x3e3861f6becdde5eU, 0x3d498780bd9d7bd3U,
  0xbec1142fbc9ea970U, 0x3ecf37f33df01614U, 0x3df54bd4bde44240U, 0xbec2be333dc6cf14U,
  0xbe69cbaa3dc7c6b4U, 0xbe0ef9cebd8082e4U, 0xbd90cea8bd6cf5d8U, 0xbed25195beda7467U,
  0x3e6f1776be723d6dU, 0x3ecf719d3dbe4bb4U, 0x3ea9b577beaacbb3U, 0xbead4bd43ddc523cU,
  0xbe841f003e240422U, 0xbe4c6a963ea9b28dU, 0x3e6baeea3e9fdf93U, 0x3e351772be68303fU,
  0xbe85eaf43e4c2862U, 0xbeaf48223e8624c9U, 0x3dc2036cbe90bf24U, 0xbe66fababe206366U,
  0x3ecb5595be11e49eU, 0xbe2f9ac8bb240f00U, 0x3e1000de3dcdd5a4U, 0x3de59314bed2d1e4U,
  0x3c8cdd8d3e3dd3e6U, 0x3de317f4beb80730U, 0xbda953803cf58f3aU, 0x3e86a8b33e3de5b4U,
  0xbe60751c3e788e76U, 0xbd225d743edc7b81U, 0xbe86171f3e691fb6U, 0xbe84a2c23e6b9ba8U,
  0xbd67e3f1bf00189cU, 0xbda6e9183eb52c4dU, 0xbe7521333eed514dU, 0xbf8183eabeb685ffU,
  0xbdcb67d43e250636U, 0x3f1377293ecad901U, 0xbe2c70ac3d5fdb60U, 0xbda59f843ee361c6U,
  0x3ee2007fbea57f77U, 0x3e1816eebde9acecU, 0xbdcaf5143cee5c5cU, 0x3da2d1a83dd1651bU,
  0x3ec4ded3be44aa1eU, 0xbedb71573e45e46eU, 0xbec1e1453e922209U, 0x3dce3d843e10b669U,
  0xbbf5a740be619586U, 0x3e230cb23ed426d9U, 0x3e2b624ebdf4a0beU, 0xbe0d62b83e11585eU,
  0x3e9cf66b3d00d0f0U, 0x3e788a32bd1c9980U, 0xbebbf369be9921d4U, 0xbe6de651be7e5593U,
  0xbe3e89ae3e93de3eU, 0x3e7e8ba6bd520c60U, 0xbddf71d8bd9d25a4U, 0x3da07fad3efe39d9U,
  0x3e158c0ebe04eeb6U, 0xbf4c7af0bdf3f97cU, 0x3e8f25373d8e1dacU, 0xbe88b0263c1e7077U,
  0x3d34fa013f112eb2U, 0xbe8fdcc9beb40549U, 0x3d963f1cbebd9e49U, 0x3dfdb1e03f114850U,
  0xbb024680bcf89540U, 0xbea3b410bd58fdb0U, 0xbdc2d8a0becb258bU, 0xbeaa5e26be40fd6eU,
  0x3e705df2bec36b2dU, 0xbdc17fbcbecd5dfbU, 0xbe251068bed84d31U, 0xbe9e0c31bc9c7b50U,
  0x3ea61e9f3e4491ceU, 0x3eae3a3bbe9551f1U, 0xbe60c600be3669d2U, 0x3b9c7d80bea895d6U,
  0xbd8ae48100000000U, 0xbcd2cb113c4e86d6U, 0xbdb5c29ebc94c9f7U, 0x0U,
  0xbe8bf17100000000U, 0xbdc2dbab3dec8290U, 0xbea5fe2bbc9cb849U, 0xbed2715aU,
  0x3dac405b3e3d57fcU, 0x3d5549cebe455223U, 0xbf1abd263e145912U, 0x3f0316743e6a86c8U,
  0x3f0fc8f4be1c5b6cU, 0xbf10c4d73fde66b2U, 0x3f88d0f03eab79ccU, 0x3e1381903f9b2f19U,
  0xbf1140bbU,
};


ai_handle g_sin_model_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sin_model_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

