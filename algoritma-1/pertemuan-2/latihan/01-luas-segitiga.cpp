#include <stdio.h>

int main() {
    double alas, tinggi, luasSegitiga;
    
    scanf("%lf", alas);
    scanf("%lf", tinggi);
    luasSegitiga = alas * tinggi / 2;
    printf("%.2f\n", luasSegitiga);
}