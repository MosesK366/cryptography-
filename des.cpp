#include <stdio.h>
#include <stdint.h>

typedef uint64_t DES_KEY;
typedef uint64_t DES_DATA;

static const int initial_permutation[64] = {
};

static const uint8_t sboxes[8][4][16] = {
};

static DES_DATA initial_permute(DES_DATA data) {
}

static uint32_t sbox_substitution(uint32_t input, const uint8_t sbox[4][16]) {
}

DES_DATA des_encrypt(DES_DATA plaintext, DES_KEY key) {
}

int main() {
    DES_KEY key = 0x133457799BBCDFF1;
    DES_DATA plaintext = 0x0123456789ABCDEF;
    DES_DATA ciphertext;

    ciphertext = des_encrypt(plaintext, key);

    printf("Plaintext:  0x%016llX\n", plaintext);
    printf("Ciphertext: 0x%016llX\n", ciphertext);

    return 0;
}
