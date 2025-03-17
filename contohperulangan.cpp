#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    int perulanganWhile = 0;
    int PerulanganDo = 0;

    //perulangan dengan for 
    cout << "perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
{
    cout << "nilai n = " << n << "selamat datang" << endl;
}
cout << "nilai n terakhir = " << n << endl;
cout << endl;

cout << "perulangan for pencacah turun" << endl;

//perulangan dengan for
for (n = 5; n > 0; n--)
{
    cout << "nilai n = " << n << "selamat datang" << endl;
}
cout << "nilai n terakhir = " << n;
cout << endl;


//perulangan while acak
cout << "perulangan while" << endl;

srand(time(0));

n = rand() % 10;

cout << "nilai awal n = " << n << endl;
while (n < 7)
{
    cout << "nilai n = " << n << endl;
    n = rand() % 10;
    perulanganWhile++;
} 
cout << "jumlah perulangan = " << perulanganWhile << endl;
cout << "niali n terakhir = " << n << endl;

//perulangan do while dengan angka acak
cout << "perulangan Do While" << endl;
srand(time(0));
n = rand() % 10;
cout << "nilai awal n = " << n << endl;
do
{
    cout << "nilai n = " << n << endl;
    n = rand() % 10;
    PerulanganDo++;
} while (n < 7);
cout << "jumlah perulangan = " << perulanganWhile << endl;
cout << "nilai n terakhir = " << n << endl;
}