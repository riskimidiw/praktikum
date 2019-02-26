# Faktorial Ganjil-Genap

Time limit | Memory limit 
---------- | ------------
1 s | 64 MB

## Deskripsi
Pak Dengklek yang sangat menyukai matematika sedang mengajarkan faktorial kepada Ucil, bebek Pak Dengklek. Karena Ucil sangatlah cerdas, ia pun dengan mudahnya mengerti faktorial. Oleh karena itu, Pak Dengklek memberikan tantangan baru kepada Ucil untuk mempelajar faktorial ganjil-genap.

Perhitungan faktorial ganjil-genap sama seperti faktorial biasa, hanya saja semua bilangan genap yang dikalikan harus dibagi dengan 2 terlebih dahulu. Seperti kita ketahui bahwa notasi dari faktorial untuk bilangan bulat N adalah N!. Sedangkan, notasi dari faktorial ganjil-genap untuk N adalah N!!.

Perhitungan dari N! adalah sebagai berikut:

    N!
    = N × (N−1)!
    = N × (N−1) × (N−2) × ... × 1

Sedangkan, perhitungan dari N!! adalah sebagai berikut:

    N!!
    = f(N) × (N−1)!!
    = f(N) × f(N−1) × f(N−2) × ... × f(1)

dengan f(x) = x, apabila x ganjil, atau x/2 apabila x genap.

Sebagai contoh, 5!! = 5 × 4/2 × 3 × 2/2 × 1 = 30.

Ucil diberikan sebuah bilangan bulat N. Bantulah Ucil membuatkan program untuk menghitung faktorial ganjil-genap dari N. Khusus untuk program ini, Ucil meminta agar Anda menggunakan rekursi.

## Format Masukan
Sebuah baris berisi sebuah bilangan bulat N.

## Format Keluaran
Sebuah baris berisi sebuah bilangan bulat N!!.

## Contoh Masukan
    5
## Contoh Keluaran
    30
## Batasan
    1 ≤ N ≤ 10
