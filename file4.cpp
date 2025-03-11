#include <iostream>
using namespace std;

float FungsiHitungRerata(float p, float q)
{
    return (p + q) / 2;
}

string FungsiCekStatus(float r)
{
    if (r >= 60)
    {
        return "LULUS";
    }
    else
    {
        return "TIDAK LULUS";
    }
}

int main()
{
    float Nilai1, Nilai2;
    cout << "Masukkan nilai 1: ";
    cin >> Nilai1;
    cout << "Masukkan nilai 2: ";
    cin >> Nilai2;


    cout << "Status Kelulusan: " << FungsiCekStatus(FungsiHitungRerata(Nilai1, Nilai2));
}