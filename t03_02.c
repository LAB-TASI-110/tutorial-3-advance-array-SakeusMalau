#include <stdio.h>
#include <stdlib.h> // Untuk exit, jika diperlukan, tapi tidak di sini.

int main() {
    int jumlah_mahasiswa;
    double total_nilai = 0;
    double rata_rata;
    int count_di_atas_rata = 0;

    // Meminta input jumlah mahasiswa
    scanf("%d", &jumlah_mahasiswa);

    // Deklarasi array untuk menyimpan nilai
    // Ukuran array harus dialokasikan setelah jumlah_mahasiswa diketahui
    // Atau bisa menggunakan VLA (Variable Length Array) yang didukung oleh GCC/MinGW
    int nilai_mahasiswa[jumlah_mahasiswa]; 

    // Meminta input nilai mahasiswa dan menghitung total
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        scanf("%d", &nilai_mahasiswa[i]);
        total_nilai += nilai_mahasiswa[i];
    }

    // Menghitung rata-rata
    if (jumlah_mahasiswa > 0) {
        rata_rata = total_nilai / jumlah_mahasiswa;
    } else {
        rata_rata = 0; // Jika tidak ada mahasiswa, rata-rata 0
    }

    // Menghitung jumlah mahasiswa yang nilainya di atas atau sama dengan rata-rata
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        if (nilai_mahasiswa[i] >= rata_rata) {
            count_di_atas_rata++;
        }
    }

    // Output sesuai format yang diminta
    printf("%.0f\n", total_nilai); // Total nilai (tanpa desimal)
    printf("%.2f\n", rata_rata);   // Rata-rata (dengan 2 angka di belakang koma)
    printf("%d\n", count_di_atas_rata); // Jumlah mahasiswa di atas/sama dengan rata-rata

    return 0;
}