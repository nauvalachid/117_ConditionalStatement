#include <iostream>
using namespace std;

float Panjang, Lebar;

float FungsiHitungLuasPersegiPanjang()
{
    return Panjang * Lebar;
}

int main()
{
    cout << "Masukkan panjang persegi panjang: ";
    cin >> Panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> Lebar;

    cout << "Luas persegi panjang adalah: " << FungsiHitungLuasPersegiPanjang();
}