#include <iostream>
using namespace std;

// Deklarasi variabel global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// Prosedur input
void input(){
    cout<<"=== PENDAFTARAN JURUSAN KAMPUS ==="<<endl;
    cout<<"1. Teknologi Informasi"<<endl;
    cout<<"2. Teknik Elektro"<<endl;
    cout<<"3. Sistem Informasi"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Masukkan kode jurusan yang ingin didaftarkan (1-3): ";
    cin>>kodeJurusan;
}
