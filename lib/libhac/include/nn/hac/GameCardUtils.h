#pragma once
#include <nn/hac/define/gc.h>

namespace nn
{
namespace hac
{
	class GameCardUtils
	{
	public:
		static inline uint64_t blockToAddr(uint32_t block) { return ((uint64_t)block) << 9; }
		static void getXciHeaderAesIv(const nn::hac::sGcHeader* hdr, byte_t* iv);
		static void decryptXciHeader(const byte_t* src, byte_t* dst, const byte_t* key);
	};
}
}