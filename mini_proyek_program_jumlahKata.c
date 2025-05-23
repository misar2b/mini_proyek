#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fungsi untuk menghitung jumlah kata
int hitungKata(char teks[]) {
    int jumlah = 0;
    int diDalamKata = 0;

    for (int i = 0; teks[i] != '\0'; i++) {
        if (isspace(teks[i])) {
            diDalamKata = 0; // keluar dari kata
        } else if (diDalamKata == 0) {
            diDalamKata = 1; // masuk ke kata baru
            jumlah++;        // hitung 1 kata
        }
    }

    return jumlah;
}

int main() {
    char teks[10000];

    printf("=== Program Menghitung Jumlah Kata ===\n");
    printf("Masukkan teks: ");

    // Mengambil input dari pengguna
    fgets(teks, sizeof(teks), stdin);

    // Menghitung jumlah kata
    int hasil = hitungKata(teks);

    // Menampilkan hasil
    printf("Jumlah kata dalam teks: %d\n", hasil);

    return 0;
}