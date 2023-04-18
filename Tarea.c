#include <stdio.h>

int main(){
        int i, j, k;

    for (i = 1; i <= 9; i++) {
        j = (i - 1) / 3 + 1; 
        k = i % 3;           
        if (k == 0) {        
            k = 3;
        }
        printf("%d %d %d\n", i, j, k);
    }

    return 0;
}