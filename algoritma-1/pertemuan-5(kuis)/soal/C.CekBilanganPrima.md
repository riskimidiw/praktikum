# Cek Bilangan Prima

Time limit | Memory limit
---------- | ------------
1 s | 64 MB

## Deskripsi
Bilangan prima adalah bilangan bulat yang lebih besar daripada 1, dan hanya habis dibagi oleh 1 dan bilangan itu sendiri. Beberapa bilangan prima pertama adalah 2, 3, 5, 7, 11, 13, dan 17. Sebagai contoh, 9 bukanlah bilangan prima, karena habis dibagi 3.

Pak Dengklek memberikan Anda N buah bilangan bulat. Untuk setiap bilangan, tentukan apakah bilangan tersebut bilangan prima atau bukan.

## Format Masukan
Baris pertama berisi sebuah bilangan bulat N. N baris berikutnya masing-masing berisi sebuah bilangan bulat.

## Format Keluaran
Untuk setiap bilangan, cetak sebuah baris berisi YA apabila bilangan tersebut prima, atau BUKAN jika bukan prima.

## Contoh Masukan
    4
    1
    2
    3
    4
## Contoh Keluaran
    BUKAN
    YA
    YA
    BUKAN
## Batasan
    1 ≤ N ≤ 1.000.
    1 ≤ (setiap bilangan bulat) ≤ 1.000.000
### Petunjuk
Terdapat banyak cara/algoritma untuk menentukan apakah sebuah bilangan bulat adalah prima. Untuk soal ini, Anda dapat menggunakan cara sederhana berikut ini. Misalkan bilangan sekarang adalah D. Untuk setiap x yang memenuhi 2 ≤ x ≤ D-1, cek apakah x yang habis membagi D. Jika tidak ada x yang habis membagi D, maka D adalah prima.