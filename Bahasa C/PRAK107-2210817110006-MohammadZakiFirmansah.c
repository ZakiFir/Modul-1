#include <stdio.h>
int main(){
    int Sisi1 = 4;
    int Sisi2 = 5;
    int Sisi3 = 7;
    int Keliling = Sisi1 + Sisi2 + Sisi3;
    int HargaTanah= 85000;
    int Hasil = Keliling * HargaTanah;
    printf("Masukkan Sisi 1 = %d\n", Sisi1);
    printf("Masukkan Sisi 2 = %d\n", Sisi2);
    printf("Masukkan Sisi 3 = %d\n", Sisi3);
    printf("Harga tanah per meter adalah = %d\n", HargaTanah);
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", Hasil);
}