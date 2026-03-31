#include <iostream>
#include <ctime>
using namespace std;


int main(){
    int x;
// Perulangan dengan for
// Mencetak tulisan sebanyak 5 kali
    cout<<"Perulangan for"<<endl;
    for(int i=0; i<=4; i++){
        cout<<"Teknologi Informasi"<<endl;
    }
    cout<<endl;
// untuk menghasilkan bilangan acak
    srand(time(0));

// Perulangan dengan while
    cout<<"Perulangan while"<<endl;
    x = 1 + rand()%10;
// Perulangan while akan terus berjalan selama nilai x kurang dari atau sama dengan 5
    while(x <= 5){
        cout<<"Bilangan acak =  "<<x <<endl;
        x = rand()%10;

    }
// Setelah keluar dari perulangan while, nilai x akan lebih besar dari 5
    cout<< "Bilangan acak while yang terakhir = "<<x <<endl;
    cout<<endl;

}