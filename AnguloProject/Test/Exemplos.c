//
// Created by eteixeira on 30/04/2024.
//

// int count = 10;
    // int *teste;
    // teste=&count;
    // *teste = 12;
    // printf("%p", teste);
    //

int main() {
    char** str = retornaArray();
    if (str != NULL) {
        printf("%s\n", str[0]);
        printf("%s\n", str[1]);

        // Libera a memória alocada para as strings e o array
        free(str[0]);
        free(str[1]);
        free(str);
    }
    return 0;
}