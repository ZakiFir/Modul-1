#include <stdio.h>
int main(){
    float Lingkaran = 5;
    float Jarak = 14;
    float Satu_putaran = Jarak / Lingkaran; 
    float Hasil = Satu_putaran / (2 * 3.14);
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", Lingkaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", Jarak);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", Hasil);
}