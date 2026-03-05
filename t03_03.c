#include <stdio.h>
#include <stdlib.h> // Untuk exit() jika perlu, tapi tidak digunakan di sini
#include <limits.h> // Untuk INT_MAX dan INT_MIN

int main() {
    int jumlahMahasiswa;
    int nilai;
    int totalNilai = 0;
    int nilaiTertinggi = 0; // Batas nilai 0-100, jadi 0 adalah nilai terendah awal yang valid
    int nilaiTerendah = 100; // Batas nilai 0-100, jadi 100 adalah nilai tertinggi awal yang valid

    // Meminta input jumlah mahasiswa
    scanf("%d", &jumlahMahasiswa);

    // Array untuk menyimpan nilai agar bisa dihitung rata-rata dan di atas rata-rata nanti
    // Untuk mahasiswa semester 2, array statis mungkin lebih sederhana
    int *daftarNilai = (int *) malloc(jumlahMahasiswa * sizeof(int));
    if (daftarNilai == NULL) {
        // Handle error jika alokasi memori gagal
        return 1;
    }

    // Meminta input nilai mahasiswa dan menghitung total, tertinggi, terendah
    for (int i = 0; i < jumlahMahasiswa; i++) {
        scanf("%d", &nilai);
        daftarNilai[i] = nilai; // Simpan nilai ke array
        totalNilai += nilai;

        if (nilai > nilaiTertinggi) {
            nilaiTertinggi = nilai;
        }
        if (nilai < nilaiTerendah) {
            nilaiTerendah = nilai;
        }
    }

    // Hitung rata-rata
    double rataRata = (double)totalNilai / jumlahMahasiswa;

    // Hitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    int diAtasRataRata = 0;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        if (daftarNilai[i] >= rataRata) {
            diAtasRataRata++;
        }
    }

    // Hitung selisih antara nilai tertinggi dan terendah
    int selisih = nilaiTertinggi - nilaiTerendah;

    // Output sesuai format yang diminta
    printf("%d\n", totalNilai);
    printf("%.2lf\n", rataRata); // Format dua angka di belakang koma untuk rata-rata
    printf("%d\n", diAtasRataRata);
    printf("%d\n", selisih);

    free(daftarNilai); // Bebaskan memori yang dialokasikan
    return 0;
}