#include <iostream>
#include <cstdlib>
#include <ctime>

#define MINACAK 1
#define MAXACAK 10

using namespace std;

int main()
{
    srand (time(NULL));
    int angka = (rand()%(MAXACAK-MINACAK+1))+MINACAK;

    cout << "Selamat datang di Permainan Tebak Kata" << endl;
    cout << "======================================" << endl;
    cout << endl;

    cout << "Penjelasan:" << endl;
    cout << "Angka yang akan ditebak nerada dalam batasan ";
    cout << MINACAK;
    cout << " sampai ";
    cout << MAXACAK << endl << endl;

    int tebakan = 5;
    bool menang = false;
    int jawaban;

    do{
        cout << "Masukkan tebakan Anda: ";
        cin >> jawaban;
        tebakan --;

        if(jawaban == angka){
            menang = true;
            cout << "Benar!" << endl;
        } else {
            if(jawaban<angka){
                cout << "Tebakan Anda terlalu kecil" << endl;
            } else {
                cout << "Tebakan Anda terlalu besar" << endl;
            }
            cout << "Kesempatan tersisa: ";
            cout << tebakan << endl;
        }
        cout << endl;

    } while((tebakan>0) && (!menang));

    if(menang){
        cout << "Selamat! Anda telah memenangkan permainan ini!" << endl;
    } else {
        cout << "Maaf, Anda kalah :(" << endl;
        cout << "Angka yang akan ditebak adalah : ";
        cout << angka;
        cout << endl;
    }

    return 0;
}
