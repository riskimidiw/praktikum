# KUIS

## Soal Pilihan
- [A.Sepatu](./A.Sepatu.pdf)
- [B.Segiempat](./B.Segiempat.pdf)
- [C.CekBilanganPrima](./C.CekBilanganPrima.pdf)

## Ketentuan Program

- buatlah sistem login pada awal program dengan username
= nama dan password = nim

        username: [username]
        password: [password]

- jika login gagal maka user melakukan login kembali, jika berhasil
maka tampilkan menu dengan ketentuan :
    - menu pertama adalah program yang dipilih untuk dikerjakan
    - menu kedua yaitu menu untuk keluar program
    - jika mengerjakan > 1 soal maka menu ke 2 atau ke 3 adalah menu untuk program
    dan menu terakhir menu untuk keluar
    - banyak program yang wajib di kerjakan adalah 1, jika mengerjakan lebih maka
    akan mendapat nilai tambahan

            PROGRAM KUIS

            1. Program Sepatu
            2. Keluar
            pilih : 

- ketika menu no 1 di pilih maka akan menampilkan hasil program
sesuai dengan soal yang dipilih

- untuk keluar program bisa meggunakan

        return 0; atau exit(0);
    untuk `exit(0)` harus menggunakan header `#include<stdlib.h>`

- untuk mebersihkan layar pada console/prompt/terminal bisa menggunakan

        system("clear || cls");
    dan harus meggunakan header `#include <stdlib.h>`

- Setelah selesai simpan file dengan format KUIS-NIM.cpp contoh: KUIS-123170035.cpp
- kirim file .cpp ke email : riski.midi@yahoo.com dengan judul email KUIS-F

## Contoh Program

    username : riskmidiw
    password : 123170035

    PROGRAM KUIS

    1. Sepatu
    2. Keluar
    pilih : 1

    PROGRAM SEPATU

    banyak ukuran : 5
    30 31 32 33 34

    ukuran terbesar-1 : 34
    ukuran terbesar-2 : 33

    ukuran terkecil-1 : 30
    ukuran terkecil-2 : 31

    rata-rata : 32

    kembali ke menu [y/n] ? y

    PROGRAM KUIS

    1. Sepatu
    2. Keluar
    pilih : 2