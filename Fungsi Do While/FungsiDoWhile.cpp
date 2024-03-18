#include <iostream>
using namespace std;

int main(){
    char pilihan;

    do{
        cout << "Berangkat ambil takjil" << endl;
        cout << "Antri takji;" << endl;
        cout << "Ambil takjil" << endl;
        cout << "Apakah mau antri lagi?" << endl;
        cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}
