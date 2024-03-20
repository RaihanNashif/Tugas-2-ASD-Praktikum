#include <stdio.h>

// Fungsi untuk menampilkan urutan kartu 
void tampilkanUrutan(int N, char kartu[]) {
    for (int i = 0; i < N; i++) {
        printf("%c ", kartu[i]);
    }
    printf("\n");
}

// Fungsi untuk menghitung jumlah langkah minimal pertukaran
int hitungLangkah(int N, char kartu[]) {
    int langkah = 0;

    // Urutan kartu sesuai urutan nilai 
    for(int i = 0; i < N - 1; i++) {
        for(int j = 0; j < N - i - 1; j++) {
            if(kartu[j] > kartu[j + 1]) {
                // Tampilkan urutan kartu sebelum pertukaran
                printf("Pertukaran %d: ", langkah + 1);
                tampilkanUrutan(N, kartu);

                // Tukar posisi kartu 
                char temp = kartu[j];
                kartu[j] = kartu[j + 1];
                kartu[j + 1] = temp;
                langkah++;
            }
        }
    }

    // Tampilkan urutan kartu setelah semua pertukaran selesai
    printf("Pertukaran %d: ", langkah + 1);
    tampilkanUrutan(N, kartu);

    return langkah;
}

int main() {
    int N;
    scanf("%d", &N); // Input jumlah kartu

    char kartu[N];
    for(int i = 0; i < N; i++) {
        scanf(" %c", &kartu[i]); // Input nilai kartu 
    }

    int langkah = hitungLangkah(N, kartu);
    printf("%d\n", langkah); //Output jumlah langkah  minimal

    return 0;
}

/*
Fungsi 'tampilkanUrutan' ditambahkan untuk menampilkan urutan kartu setiap kali terjadi pertukaran. Di dalam fungsi 'hitungLangkah', setiap kali terjadi pertukaran, program akan memanggil fungsi 'tampilkanUrutan' untuk menampilkan urutan kartu sebelum pertukaran dilakukan. Selain itu, program juga akan menampilkan urutan kartu setelah semua pertukaran selesai. Dengan demikian, output program akan mencantumkan urutan kartu setiap kali terjadi pertukaran beserta jumlah langkah minimal yang diperlukan untuk mengurutkan kartu tersebut.
*/