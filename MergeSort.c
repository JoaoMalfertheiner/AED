#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void Intercala (int p, int q, int r, int v[]) {
int i, j, k, *w;
w = malloc ((r-p) * sizeof (int));
i = p; j = q; k = 0;
while (i < q && j < r) {
if (v[i] <= v[j]) w[k++] = v[i++];
else w[k++] = v[j++];
}
while (i < q) w[k++] = v[i++];
while (j < r) w[k++] = v[j++];
for (i = p; i < r; i++) v[i] = w[i-p];
free (w); 
}

void Mergesort (int p, int r, int v[]) {
if (p < r - 1) {
int q = (p + r)/2;
Mergesort (p, q, v);
Mergesort (q, r, v);
Intercala (p, q, r, v);
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
        Mergesort(0, n, v);
        t = clock() - t;
        printf("\n %f", ((double)t)/((CLOCKS_PER_SEC)));
    }
    return 0;
}
