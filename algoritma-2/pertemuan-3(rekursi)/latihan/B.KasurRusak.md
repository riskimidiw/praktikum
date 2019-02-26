# Kasur Rusak

Time limit | Memory limit
---------- | ------------
1 s | 64 MB

## Deskripsi
Pak Dengklek mendapat kesempatan untuk mengajari bebek-bebeknya di taman kanak-kanak. Ia mengajarkan membaca dan menulis alfabet. Pak Dengklek sebagai sang guru yang menyukai tantangan merasa bosan dengan lagu ABC standar. Ia lalu memperkenalkan konsep palindrom dalam mengajarkan alfabet. Kali ini, Pak Dengklek hanya akan menggunakan alfabet berupa huruf kecil 'a' - 'z'.

Palindrom adalah sebuah kata yang terbaca sama baik dari depan maupun belakang. Salah satu cara untuk mengecek apakah sebuah kata adalah palindrom adalah dengan mengecek kesamaan huruf terdepan dan terbelakang. Kemudian, huruf terdepan dan terbelakang tersebut dibuang, sehingga kata tersebut menjadi lebih pendek. Proses ini diulangi sampai tidak ada huruf yang bersisa di kata tersebut. Jika pada suatu saat huruf terdepan dan terbelakang berbeda, maka kata tersebut bukan palindrom.

Sebagai contoh, misalkan kita ingin mengecek kata "kodok"

        k o d o k
        ^       ^        Huruf terdepan dan huruf terbelakang sama. Buang.
          o d o
          ^   ^          Huruf terdepan dan huruf terbelakang sama. Buang.
            d
            ^            Huruf terdepan dan huruf terbelakang sama. Buang.

        Habis. Maka, "kodok" adalah kata palindrom.

Contoh lainnya adalah kata "kodek".

        k o d e k
        ^       ^        Huruf terdepan dan huruf terbelakang sama. Buang.
          o d e
          ^   ^          Huruf terdepan dan huruf terbelakang berbeda.

        Maka, "kodek" bukanlah kata palindrom.

Ucil, salah satu bebek Pak Dengklek mengalami kesulitan dan meminta bantuan Anda untuk menentukan palindrom tidaknya sebuah kata S, sesuai dengan cara di atas. Ia memiliki permintaan tambahan: program Anda harus menggunakan rekursi.

## Format Masukan
Sebuah baris berisi sebuah string S.

## Format Keluaran
Sebuah baris berisi YA apabila S palindrom, atau BUKAN jika bukan.

## Contoh Masukan 1
    kodok
## Contoh Keluaran 1
    YA
## Contoh Masukan 2
    kodek
## Contoh Keluaran 2
    BUKAN
## Batasan
    String S terdiri atas karakter-karakter 'a' - 'z'.
    String S terdiri atas 1 sampai dengan 100 karakter, inklusif.