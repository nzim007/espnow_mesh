#include "hash.h"

uint32_t fnv1a32(const char* apStr) {
  uint32_t hash = 2166136261UL; // 32 bit offset_basis = 2166136261UL

  for (uint32_t idx = 0; apStr[idx] != '\0'; ++idx) {
    // 32 bit FNV_prime = 224 + 28 + 0x93 = 16777619
    hash = 16777619UL * (hash ^ (uint32_t)static_cast<unsigned char>(apStr[idx]));
  }

  return hash;
}
