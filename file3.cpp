#include <iostream>
using namespace std;

float FungsiHitungLuasPersegiPanjangBerparameter(float a, float b)
{
    return a * b;
}

int main()
{
    float Panjang, Lebar;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> Panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> Lebar;

    cout << "Luas persegi panjang adalah: " << FungsiHitungLuasPersegiPanjangBerparameter(Panjang, Lebar);
}