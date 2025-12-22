#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Stage 1: Rail Fence Cipher Encryption
void railFenceEncrypt(char text[], int depth, char result[]) {
    if (depth == 1) {
        strcpy(result, text);
        return;
    }

    int len = strlen(text);
    char rail[depth][len];
    
    // Initialize rail matrix with '\n'
    for (int i = 0; i < depth; i++)
        for (int j = 0; j < len; j++)
            rail[i][j] = '\n';

    int row = 0, dir = 1;

    for (int i = 0; i < len; i++) {
        rail[row][i] = text[i];

        if (row == 0)
            dir = 1;
        else if (row == depth - 1)
            dir = -1;

        row += dir;
    }

    int index = 0;
    for (int i = 0; i < depth; i++) {
        for (int j = 0; j < len; j++) {
            if (rail[i][j] != '\n')
                result[index++] = rail[i][j];
        }
    }
    result[index] = '\0';
}

// Stage 2: ROT13 Cipher
void rot13Encrypt(char text[]) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = 'A' + (text[i] - 'A' + 13) % 26;
        else if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = 'a' + (text[i] - 'a' + 13) % 26;
    }
}

int main() {
    char plaintext[200];
    char transposed[200];
    int depth;

    printf("Enter plain text: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    // Remove newline from fgets
    plaintext[strcspn(plaintext, "\n")] = '\0';

    printf("Enter depth (key) for Rail Fence Cipher: ");
    scanf("%d", &depth);

    // Stage 1: Transposition
    railFenceEncrypt(plaintext, depth, transposed);
    printf("After Rail Fence Cipher: %s\n", transposed);

    // Stage 2: Substitution
    rot13Encrypt(transposed);
    printf("Final Encrypted Text (ROT13): %s\n", transposed);

    return 0;
}
