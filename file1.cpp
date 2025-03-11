#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;

void ProsedurHitungLuasPersegiPanjang()
{
    Luas = Panjang * Lebar;
}

int main()
{
    cout << "Masukkan panjang persegi panjang: ";
    cin >> Panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> Lebar;

    ProsedurHitungLuasPersegiPanjang();
    cout << "Luas persegi panjang adalah: " << Luas;
}