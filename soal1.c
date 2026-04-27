/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3
 *   Hari dan Tanggal    : Senin, 27 April 2026
 *   Nama (NIM)          : Abydzar Dzakyan Akbar (13224106)
 *   Nama File           : soal2.c
 *   Deskripsi           : Merupakan program yang menginput data lalu dimasukkan ke array sampai input data -1 (menandakan akhir)
 *                          setelah itu akan dilakukan sorting terhadap data dan akan dicari median dari datanya berdasarkan
 *                          jumlah datanya (ganjil atau genap)
 * 
 */

 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>


 void sorting (int *data, int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if (data[j]> data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
 }

 int main() {
    int *data = NULL;
    int input;
    int n = 0;

    scanf("%d", &input);
    while (input != -1){
        data = (int*)realloc(data,(n+1)*sizeof(int));
        data[n] = input;
        n++;
        scanf("%d", &input);

    }

    if (n>0){
        printf("COUNT %d ", n);

        sorting(data, n);
        printf("SORTED ");
        for (int i = 0; i<n; i++){
            printf("%d ", data[i]);
        }
    }

    if (n%2 == 0){
        float median = (float)(data[(n/2)-1] + data[n/2])/2;
        printf("MEDIAN %.2f", median);
    } else {
        printf("MEDIAN %d", data[n/2]);
    }

 }
