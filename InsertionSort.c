#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Insercao(int n, int v[]) {
int i, j, x;
    for (j = 1; j < n; j++) {
        x = v[j];
        for (i = j-1; i >= 0 && v[i] > x; i--)
            v[i+1] = v[i];
        v[i+1] = x;
    }
}

int main(){
clock_t t;
int n;
    for(int j = 0; j<=20; j++){
        n = 20000 * j;
    int v[n-1];
        for(int i = 0; i < n; i++){
            v[i] = rand() % n;
        }
        t = clock();
        Insercao(n, v);
        t = clock() - t;
        printf("\n %f", ((double)t)/((CLOCKS_PER_SEC)));
    }
return 0;
}




