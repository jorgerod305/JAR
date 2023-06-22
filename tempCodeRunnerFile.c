#include <stdio.h>

int main() {
    for (unsigned int i = 1; i <= 5; ++i) {
        for (unsigned int j = 1; j <= 3; ++j) {
            for (unsigned int k = 1; k <= 4; ++k){
                printf("%s","*");
            }
            puts("");
        }
        puts("");
    }
    return 0;
}
