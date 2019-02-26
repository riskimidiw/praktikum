# Konversi Biner

Time limit | Memory limit
---------- | ------------
1 s | 64 MB

## Deskripsi
Pak Dengklek baru saja menemukan metode hampir sakti untuk mengkonversi bilangan desimal ke dalam representasi binernya. Metodenya adalah sebagai berikut:

Jika suatu bilangan N adalah bilangan ganjil, maka bit (binary digit) terakhir pada representasi binernya adalah 1. Sebaliknya, jika N genap maka bit terakhir pada representasi binernya adalah 0.
Bit-bit di depan bit terakhir sama dengan representasi biner dari (N/2 dibulatkan ke bawah).
Mengapa hampir sakti? Ternyata ketika Pak Dengklek mencoba mengimplementasikan metode tersebut, programnya terjebak dalam infinite recursion!

Sebagai pemrogram handal, Anda langsung menyadari bahwa metode rekursif Pak Dengklek kekurangan satu hal yang sangat penting: base case. Bantulah Pak Dengklek memperbaiki metodenya dengan menambahkan base case dan membuat program konversi desimal ke biner yang benar!

## Format Masukan
Sebuah baris berisi berisi sebuah bilangan bulat N.

## Format Keluaran
Sebuah baris berisi representasi biner dari N tanpa leading zero.

## Contoh Masukan
    73
## Contoh Keluaran
    1001001
## Batasan
    1 ≤ N ≤ 1.000.000.000