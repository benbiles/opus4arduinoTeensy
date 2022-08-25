/* BEN ADDS GLOBAL DEFINES to OPUS LIBRARY RATHER THAN USING - D FLAG AS ITS HARD IN ARDUINO
nclde this header #include global_lib_defines.h in every C file in the opus library instead! 
*/

#ifndef GOLBAL_LIB_DEFINES_H
#define GOLBAL_LIB_DEFINES_H

#ifdef __cplusplus
extern "C"
{
#endif


#define OPUS_BUILD
#define FIXED_POINT
#define OVERRIDE_OPUS_ALLOC 
#define OVERRIDE_OPUS_FREE 
#define VAR_ARRAYS 
#define HAVE_CONFIG_H 
#define OVERRIDE_OPUS_ALLOC_SCRATCH 
#define DISABLE_FLOAT_API 
#define OPUS_ARM_INLINE_EDSP 
#define EMBEDDED_ARM 
#define OPUS_ARM_ASM 
#define opus_alloc(x) NULL
#define opus_free(x) NULL



#ifdef __cplusplus
}
#endif

#endif
