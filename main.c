#include <stdio.h>

int main() {
    int N, array[70][70];
    while(scanf("%d", &N) != EOF) {
        for (int x=0;x<N;x++){
            for (int y= 0; y<N;y++){
                array[x][y]=3;
            }
        }

        if (N >= 3 && N < 70) {
            for (int x = 0; x < N; x++) {
                for (int y = 0; y < N; y++) {
                    if (x == y) {
                        array[x][y] = 1;
                    }
                    if (x + y == N - 1) {
                        array[x][y] = 2;
                    }
                }
            }


            for (int x = 0; x < N; x++) {
                for (int y = 0; y < N; y++) {
                    printf("%d", array[x][y]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
