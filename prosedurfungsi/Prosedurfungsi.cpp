#include <iostream>
using namespace std;

string nama;
int nXpander, nAlphard, nZenix, nReborn, nLexus;
int hXpander = 360, hAlphard = 1200, hZenix = 626, hReborn = 420, hLexus = 3400;


void input(){
    cout << "Nama Pembeli : ";
    cin >> nama;

    cout << "Jumlah Xpander : "; 
    cin >> nXpander;
    
    cout << "Jumlah Alphard : ";
    cin >> nAlphard;

    cout << "Jumlah Zenix : ";
    cin >> nZenix;

    cout << "Jumlah Reborn : ";
    cin >> nReborn;

    cout << "Jumlah Lexus : ";
    cin >> nLexus;
}

int TotalHarga(){
    return (nXpander * hXpander) + (nAlphard * hAlphard) + (nZenix * hZenix) + (nReborn * hReborn) + (nLexus * hLexus);
}

void display(){
    cout << "Total harganya : " << TotalHarga() << endl; 
}

int main (){
    char pilihan;
    do{
    input();
    display();
    cout << "Apakah ingin beli lagi pak bos?";
    cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}