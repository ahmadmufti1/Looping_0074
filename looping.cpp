#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;

    cout<<"Perulangan for"<<endl;
    for(int i=0; i<=4; i++){
        cout<<"Teknologi Informasi"<<endl;
    }
    cout<<endl;

    srand(time(0));

    cout<<"Perulangan while"<<endl;
    x = 1 + rand() % 10;

    while(x <= 5){
        cout<<"Bilangan acak =  "<<x <<endl;
        x = rand() % 10;

    }

    cout<< "Bilangan acak while yang terakhir = "<<x <<endl;
    cout<<endl;

    //Perulangan dengan do while
    cout<<"Perulangan do while"<<endl;
    x = 1 + rand()%10;
    do{
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand() % 10;
    }while(x <= 5);

    cout<<"Bilangan acak do while yang terakhir = "<<x <<endl;
    cout<<endl;
}