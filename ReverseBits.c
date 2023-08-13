uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    int power = 31; // Start with the highest bit position

    while (n > 0) {
        result |= (n & 1) << power; // Add the current bit to the result using bitwise OR
        n >>= 1;                    // Shift n to the right by 1
        power--;                    // Move to the next bit position
    }

    return result;
}
