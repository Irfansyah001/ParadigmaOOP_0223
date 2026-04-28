#include <iostream>
using namespace std;

class Mahasiswa // Deklarasi kelas Mahasiswa
{
    public: // Akses modifier/publik untuk anggota kelas
    int NIM;
    string nama;
    float nilai;

    void printData() // Method untuk menampilkan data mahasiswa
    {
        cout << "NIM: " << NIM << endl;
        cout << "Nama: " << nama << endl;
        cout << "NIlai: " << nilai << endl;
    }
};

int main()
{
    Mahasiswa mhs; // Membuat/deklarasi objek mhs dari kelas Mahasiswa

    mhs.NIM = 2024;
    mhs.nama = "Irfansyah";
    mhs.nilai = 75.5;

    mhs.printData();
}
