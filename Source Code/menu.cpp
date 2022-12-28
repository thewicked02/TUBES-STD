#include "menu.h"

int selectMenu()
{
    cout << "=============MENU============="           << endl;
    cout << "1. Menambahkan Lagu kedalam List"         << endl;
    cout << "2. Menghapus Lagu dari List"              << endl;
    cout << "3. Menampilkan List Lagu"                 << endl;
    cout << "4. Menambahkan Lagu ke Antrian Playlist"  << endl;
    cout << "5. Menghapus Lagu Dari Antrian Playlist"  << endl;
    cout << "6. Menampilkan Isi Antrian Playlist"      << endl;
    cout << "0. Exit"                                  << endl;
    cout << "=============================="           << endl;
    cout << "Masukan Menu : ";

    int input = 0;
    cin >> input;
    cout << endl;
    return input;
}
