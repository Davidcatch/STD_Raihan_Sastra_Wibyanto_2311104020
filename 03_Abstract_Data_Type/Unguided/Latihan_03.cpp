#include <stdio.h>

// Fungsi untuk menampilkan isi array 2D 3x3
void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Fungsi untuk menukar elemen dari dua array pada posisi tertentu
void tukarElemenArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi untuk menukar nilai dua variabel menggunakan pointer
void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Deklarasi dua array 2D berukuran 3x3
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Deklarasi dua pointer integer
    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Menampilkan array sebelum pertukaran
    printf("Array 1 sebelum pertukaran:\n");
    tampilkanArray(array1);
    printf("Array 2 sebelum pertukaran:\n");
    tampilkanArray(array2);

    // Menukar elemen pada posisi tertentu (contoh: [1][1])
    tukarElemenArray(array1, array2, 1, 1);

    // Menampilkan array setelah pertukaran
    printf("Array 1 setelah pertukaran elemen [1][1]:\n");
    tampilkanArray(array1);
    printf("Array 2 setelah pertukaran elemen [1][1]:\n");
    tampilkanArray(array2);

    // Menampilkan nilai pointer sebelum pertukaran
    printf("Nilai sebelum pertukaran: *ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

    // Menukar nilai variabel menggunakan pointer
    tukarPointer(ptr1, ptr2);

    // Menampilkan nilai pointer setelah pertukaran
    printf("Nilai setelah pertukaran: *ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

    return 0;
}
