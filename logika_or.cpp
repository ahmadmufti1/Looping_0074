#include <iostream>
using namespace std;

//deklarasi variabel global
int main(){
    float nilB, nilM, rerata;
    string status;
    
// Input nilai Matematika dan Bahasa Inggris
    cout << "Masukkan nilai Matematika: ";
    cin >> nilM;

    cout << "Masukkan nilai Bahasa Inggris: ";
    cin >> nilB;

// Hitung rata-rata nilai
    rerata = (nilM + nilB) / 2;

// Logika OR: Siswa lulus jika rata-rata nilai lebih besar atau sama dengan 60 atau 70
    if(( rerata >= 60) || (rerata >= 70))
        status = "Lulus";
    else
        status = "Tidak Lulus";
// Output status kelulusan dan rata-rata nilai
    cout << "Status kelulusan : " << status<< ", dengan nilai rata-rata  : " << rerata << endl;
}