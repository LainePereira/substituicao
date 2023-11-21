#include "cs50.h"
#include "stdio.h"
#include "ctype.h"
#include "string.h"

// Função para criptografar uma única letra usando a cifra de substituição
char cifraDeSubstituicao(char letra, const char chave[]) {
    if (isalpha(letra)) {
        char base = isupper(letra) ? 'A' : 'a';
        int indice = letra - base;
        return chave[indice];
    }
    return letra;
}

// Função para criptografar uma string usando a cifra de substituição
void criptografarSubstituicao(char mensagem[], const char chave[]) {
    for (int i = 0; mensagem[i] != '\0'; i++) {
        mensagem[i] = cifraDeSubstituicao(mensagem[i], chave);
    }
}

int main() {
    // Defina a chave de substituição
    const char chave[] = "JTREKYAVOGDXPSNCUIZLFBMWHQ";

    // Mensagem a ser criptografada
    char mensagem[] = "HELLO";

    // Criptografe a mensagem
    criptografarSubstituicao(mensagem, chave);

    // Imprima a mensagem criptografada
    printf("Texto cifrado: %s\n", mensagem);

    return 0;
}
