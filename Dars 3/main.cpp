// Teshaboyev Ixtiyor

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << " n= "; cin >> n;
    int minglik=n/1000;
    int yuzlik=(n%1000)/100;
    int onlik=(n%100)/10;
    int birlik=n%10;
    switch(minglik)
    {
        case 1:cout << " bir ming ";break;
        case 2:cout << " ikki ming ";break;
        case 3:cout << " uch ming ";break;
        case 4:cout << " tort ming ";break;
        case 5:cout << " besh ming ";break;
        case 6:cout << " olti ming ";break;
        case 7:cout << " yetti ming ";break;
        case 8:cout << " sakkiz ming ";break;
        case 9:cout << " toqqiz ming ";break;

    }
    switch(yuzlik)
    {
        case 1:cout << " bir yuz ";break;
        case 2:cout << " ikki yuz ";break;
        case 3:cout << " uch yuz ";break;
        case 4:cout << " tort yuz ";break;
        case 5:cout << " besh yuz ";break;
        case 6:cout << " olti yuz ";break;
        case 7:cout << " yetti yuz ";break;
        case 8:cout << " sakkiz yuz ";break;
        case 9:cout << " toqqiz yuz ";break;

    }
    switch(onlik)
    {
        case 1:cout << " on ";break;
        case 2:cout << " yigirma ";break;
        case 3:cout << " Ottiz";break;
        case 4:cout << " Qirq ";break;
        case 5:cout << " Ellik ";break;
        case 6:cout << " Oltmish";break;
        case 7:cout << " Yetmish";break;
        case 8:cout << " Sakson";break;
        case 9:cout << " Toqson";break;

    }
    switch(birlik)
    {
        case 1:cout << " bir ";break;
        case 2:cout << " ikki";break;
        case 3:cout << " uch";break;
        case 4:cout << " tort";break;
        case 5:cout << " besh";break;
        case 6:cout << " olti ";break;
        case 7:cout << " yetti";break;
        case 8:cout << " sakkiz";break;
        case 9:cout << " toqqiz";break;

    }
    return 0;
}
