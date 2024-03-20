#include <stdio.h>

// Fungsi untuk menghitung jumlah langkah minimal pertukaran
int hitungLangkah(int N, char kartu[]) {
    int langkah = 0;
    
    // Urutkan kartu sesuai urutan nilai
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (kartu[j] > kartu[j + 1]) {
                // Tukar posisi kartu
                char temp = kartu[j];
                kartu[j] = kartu[j + 1];
                kartu[j + 1] = temp;
                langkah++;
            }
        }
    }
    
    return langkah;
}

int main() {
    int N;
    scanf("%d", &N); // Input jumlah kartu
    
    char kartu[N];
    for (int i = 0; i < N; i++) {
        scanf(" %c", &kartu[i]); // Input nilai kartu
    }
    
    int langkah = hitungLangkah(N, kartu);
    printf("%d\n", langkah); // Output jumlah langkah minimal
    
    return 0;
}

/*
1. Program memiliki dua fungsi utama:

- 'hitungLangkah(int N, char kartu[])': Fungsi ini menghitung jumlah langkah minimal pertukaran yang diperlukan untuk     mengurutkan kartu menggunakan algoritma bubble sort.
- 'main()': Fungsi utama program yang menerima input jumlah kartu dan nilai-nilai kartu yang tidak terurut, lalu memanggil fungsi 'hitungLangkah()' untuk menghitung jumlah langkah minimal.
2. Algoritma yang digunakan untuk mengurutkan kartu adalah bubble sort, di mana setiap kali terjadi pertukaran posisi kartu, variabel 'langkah' akan bertambah satu.

3. Program menerima input berupa jumlah kartu dan nilai-nilai kartu yang tidak terurut, kemudian menyimpannya dalam array 'kartu[]'.

4. Setelah array 'kartu[]' terisi, program memanggil fungsi 'hitungLangkah(N, kartu)' untuk menghitung jumlah langkah minimal pertukaran yang diperlukan.

5. Hasil jumlah langkah minimal tersebut kemudian dicetak sebagai output program.
*/