uint32_t reverseBits(uint32_t n) {
    n = ((n >> 1) & 0x55555555) + ((n << 1) & ~0x55555555);
    n = ((n >> 2) & 0x33333333) + ((n << 2) & ~0x33333333);
    n = ((n >> 4) & 0x0f0f0f0f) + ((n << 4) & ~0x0f0f0f0f);
    n = ((n >> 8) & 0x00ff00ff) + ((n << 8) & ~0x00ff00ff);
    return ((n >> 16) & 0x0000ffff) + ((n << 16) & ~0x0000ffff);
}