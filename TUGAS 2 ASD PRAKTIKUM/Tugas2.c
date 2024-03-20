#include <stdio.h>

void koboImaginaryChess(int i, int j, int size, int *chessBoard) {
    // Array untuk menyimpan pergerakan bidak kuda
    int moves[8][2] = {
        {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}
    };

    // Loop untuk memeriksa setiap kemungkinan gerakan bidak kuda
    for (int k = 0; k < 8; k++) {
        int new_i = i + moves[k][0];
        int new_j = j + moves[k][1];

        // Periksa apakah posisi baru masih berada dalam papan catur
        if (new_i >= 0 && new_i < size && new_j >= 0 && new_j < size) {
            // Tandai posisi yang dapat dicapai oleh bidak kuda
            chessBoard[new_i * size + new_j] = 1;
        }
    }
}

int main() {
    int i, j;
    scanf("%d %d", &i, &j); // Input posisi awal bidak kuda

    int size = 8; // Ukuran papan catur
    int chessBoard[size][size]; // Array untuk menyimpan papan catur

    // Inisialisasi papan catur dengan nilai 0
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            chessBoard[i][j] = 0;
        }
    }

    koboImaginaryChess(i, j, size, (int *)chessBoard); // Panggil fungsi untuk mensimulasikan pergerakan bidak kuda

    // Cetak hasil papan catur setelah simulasi
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", chessBoard[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Penjelasan 
- `koboImaginaryChess(int i, int j, int size, int *chessBoard)`: Fungsi ini menerima input posisi awal bidak kuda (i, j), ukuran papan catur, dan array `chessBoard` yang merupakan representasi papan catur. Fungsi ini menggunakan algoritma untuk menandai posisi mana saja yang dapat dicapai oleh bidak kuda dalam satu langkah. Fungsi ini mengubah nilai pada array `chessBoard` menjadi 1 pada posisi yang dapat dicapai oleh bidak kuda. 
- Kemudian fungsi utama 'main()' melakukan inisialisasi papan catur, menerima input posisi awal bidak kuda, memanggil fungsi `koboImaginaryChess` untuk mensimulasikan pergerakan bidak kuda, dan mencetak hasil papan catur setelah simulasi. - Setelah memanggil fungsi `koboImaginaryChess`, program akan mencetak nilai-nilai pada array `chessBoard`, yang mewakili papan catur dengan posisi yang dapat dicapai oleh bidak kuda ditandai dengan angka 1.
*/