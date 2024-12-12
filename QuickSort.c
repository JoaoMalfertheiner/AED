#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Separa (int p, int r, int v[]) {
int c, j, k, t;
c = v[r]; j = p;
for (k = p; /*A*/ k < r; k++)
if (v[k] <= c) {
t = v[j], v[j] = v[k], v[k] = t;
j++;
}
v[r] = v[j], v[j] = c;
return j;
}

void Quicksort (int p, int r, int v[]) {
int j;
if (p < r) {
j = Separa (p, r, v);
Quicksort (p, j - 1, v);
Quicksort (j + 1, r, v);
}
}

int main(){
clock_t t;
int n;
    for(int j = 0; j <= 20; j++){ 
        n = 20000 * j;
int v[n-1];
    for(int i = 0; i < n; i++){
        v[i] = rand() % n;
        }
    t = clock();
    Quicksort(0, n-1, v);
    t = clock() - t;
    printf("\n %f", ((double)t)/((CLOCKS_PER_SEC)));
    }
    return 0;
}
