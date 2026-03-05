#include <stdio.h> // Untuk fungsi input/output seperti scanf dan printf

int main() {
    int jumlah_mahasiswa;
    // Meminta input jumlah nilai mahasiswa
    scanf("%d", &jumlah_mahasiswa);

    int total_nilai = 0;
    int nilai;

    // Melakukan loop sebanyak jumlah mahasiswa untuk menerima input nilai
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        scanf("%d", &nilai);
        total_nilai += nilai; // Menambahkan nilai ke total
    }

    // Menghitung rata-rata, pastikan menggunakan double agar hasilnya presisi
    // Asumsi jumlah_mahasiswa akan selalu lebih dari 0 berdasarkan contoh,
    // namun ada penanganan sederhana jika seandainya 0 untuk menghindari division by zero.
    double rata_rata_nilai;
    if (jumlah_mahasiswa > 0) {
        rata_rata_nilai = (double)total_nilai / jumlah_mahasiswa;
    } else {
        rata_rata_nilai = 0.0; // Jika tidak ada mahasiswa, rata-rata 0
    }

    // Mencetak total nilai pada baris pertama
    printf("%d\n", total_nilai);

    // Mencetak rata-rata nilai pada baris kedua dengan 2 angka di belakang koma
    printf("%.2f\n", rata_rata_nilai);

    return 0; // Menandakan program berakhir dengan sukses
}