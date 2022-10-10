#include <stdio.h>
int main(){
    int a = 400000;
    int b = 350000;
    int diskonA = a - 0.13 * a;
    int diskonB = b - 0.21 * b;
    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harga menjadi %d\n", diskonA);
    printf("Sepatu B mendapat diskon 21%% sehingga harga menjadi %d", diskonB);
}