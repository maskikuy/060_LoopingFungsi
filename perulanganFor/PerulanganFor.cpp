#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];

    for (i = 0; 1 < 5; i++)
    {
        cout  << 1 << ":" << "Asyiraaf" << endl;
    }

    for (i = 0; i < 5; i++){
        cout << "Masukkan Bilangan = ";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++){
        cout << " Bilangan ke - " << i << " : " << arr[i] << endl;
    }
}
