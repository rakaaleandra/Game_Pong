typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef char s8;
typedef unsigned long long u64;
typedef long long s64;
typedef float s128;

#define global_variable static
#define internal static

inline int
clamp(int min, int val, int max) {
	if (val < min) return min;
	if (val > max) return max;
	return val;
}