#include <stdio.h>
#include <unistd.h>

int main() {
    // Pętla dla wyświetlenia napisu w różnych kolorach RGB
    for (int r = 0; r <= 255; r +=32) {
        for (int g = 0; g <= 255; g +=32) {
            for (int b = 0; b <= 255; b +=32) {
                printf("\033[38;2;%d;%d;%dm%s\n", r, g, b,"Hello, World!");
            }
        }
    }

    // Resetuj kolor do domyślnego
    printf("\033[0m");
    return 0;
}

