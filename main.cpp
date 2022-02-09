#include "Sepuluh_Lampu.h"
#include <iostream>
using namespace std;

int main()
{
    Sepuluh_Lampu array1;
    cout << endl << "O = Nyala, X = Mati" << endl;
    cout << "Kondisi awal :" << endl;
    array1.PrintAll();

    cout << endl << "1:" << endl;
    array1.atur_nyala(1);
    array1.PrintAll();

    cout << endl << "2:" << endl;
    array1.atur_nyala(2);
    array1.PrintAll();

    cout << endl << "3:" << endl;
    array1.atur_nyala(3);
    array1.PrintAll();

    cout << endl << "4:" << endl;
    array1.atur_nyala(4);
    array1.PrintAll();

    cout << endl << "5:" << endl;
    array1.atur_nyala(5);
    array1.PrintAll();

    cout << endl << "6:" << endl;
    array1.atur_nyala(6);
    array1.PrintAll();

    cout << endl << "7:" << endl;
    array1.atur_nyala(7);
    array1.PrintAll();

    cout << endl << "8:" << endl;
    array1.atur_nyala(8);
    array1.PrintAll();

    cout << endl << "9:" << endl;
    array1.atur_nyala(9);
    array1.PrintAll();

    cout << endl << "10:" << endl;
    array1.atur_nyala(10);
    array1.PrintAll();
    cout << endl;

    Sepuluh_Lampu array2;
    cout << "Copy Lampu :" << endl;
    array2 = array1;
    array2.PrintAll();
}