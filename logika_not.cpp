#include <iostream>
using namespace std;

// deklarasi variabel global
int main ()
{
    float nilB, nilM, rerata;
    string status;

// Input nilai Matematika dan Bahasa Inggris
    cout << "Masukkan nilai Matematika: ";
    cin >> nilM;

    cout << "Masukkan nilai Bahasa Inggris: ";
    cin >> nilB;

// Hitung rata-rata nilai
    rerata = (nilM + nilB) / 2;

// Logika NOT: Siswa lulus jika rata-rata nilai tidak kurang dari 60
    if(!( rerata < 60))
        status = "Lulus";
    else
        status = "Tidak Lulus";

    cout << "Status kelulusan : " << status<< ", dengan rata-rata nilai : " << rerata << endl;
}