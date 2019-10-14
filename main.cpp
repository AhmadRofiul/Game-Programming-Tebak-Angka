#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{

    int nilai_min = 0, nilai_max = 0, nilai = 0;
    int hasil = 0, nyawa = 3, jawab = 0;
    int rand();

    srand(time(NULL));


    cout << "Masukkan Maximal Nilai (10-100) : ";
    cin >> nilai ;

    nilai_max = nilai;


    hasil = nilai_min + (rand()%nilai_max) + 1;
    //cout << hasil << endl;

    cout << "Silahkan tebak nilai dari 0 sampai "<< nilai << " !!!" << endl;
    cout << "(Cheat: ini adalah angka yang ditebak "<< hasil << " )" << endl;

    while(nyawa>0){
        cout << "\nMasukkan tebakan anda = ";
        cin >> jawab;

        if(jawab>hasil){
                cout << "Tebakan anda terlalu besar"<< endl;
                nyawa --;
                cout << "Tebakan anda salah, nyawa : "<< nyawa << endl;
        }else if(jawab<hasil){
                cout << "Tebakan anda terlalu kecil"<< endl;
                nyawa --;
                cout << "Tebakan anda salah, nyawa : "<< nyawa << endl;
        }else{
                nyawa = -1;
                cout << ""<< endl;
        }

    }


    if(nyawa == 0){
        cout << "\nGame over, anda kalah"<< endl;

    }else{
        cout << "Tebakan anda benar"<< endl;
        cout << "Selamat anda menang"<< endl;

    }








    while(nyawa>3){


    }





    return 0;
}


