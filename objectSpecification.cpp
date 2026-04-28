/*Buatlah sebuah program sederhana untuk mendata sebuah barang menggunakan paradigma OOP. 
terdapat sebuah data barang memiliki spesifikasi nama, jumlah, kategori dan tanggalProduksi. 
Didalam class terdapat pula method untuk menampilkan spesifikasi barang. 
buatlah 2 buah object bernama "elektronik" dan "nonElektronik".*/

#include <iostream>
using namespace std;

class Barang
{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

