#include "menu.h"
#include "stack.h"
#include "queue.h"

int main()
{
    //Stack
    stack s;
    infotype info;
    createStack(s);
    //Queue
    Queue q;
    createQueue(q);
    infotypeQ infoQ;
    int intJudul;
    //Main
    int pilihan = 0;
    string pil, judul, artis, genre, sJudul;
    pilihan = selectMenu();
    while (pilihan != 0) {
        switch (pilihan){
        case 1:
            cout << "Input Data Music \n";
            cout << "Masukan Judul : ";cin>>judul;cout << endl;
            cout << "Masukan Artis : ";cin>>artis;cout << endl;
            cout << "Masukan Genre : ";cin>>genre;cout << endl;
            info = createInfo(judul, artis, genre);
            push(s, info);
            cout << "Lagu berhasil ditambahkan ke List !";
            cout << endl;
            break;
        case 2:
            info = pop(s);
            cout << "Berhasil Menghapus Lagu Dari List !";
            cout << endl << endl;
            break;
        case 3:
            printLagu(s);
            break;
        case 4:
            printLagu(s);
            if (isEmpty(s) == true) {
                break;
            }else {
                cout << "Pilih Judul Lagu Yang Akan Di Masukkan Ke Playlist : ";
                cin>>sJudul;
                intJudul = searchJudulLagu(s, sJudul);
                cout << endl;
                while (intJudul == 0) {
                    cout << "Lagu tidak tersedia !\n";
                    cout << "Pilih Judul Lagu Yang Akan Di Masukkan Ke Playlist : ";
                    cin>>sJudul;
                    intJudul = searchJudulLagu(s, sJudul);
                    cout << endl;
                }
                infoQ = createInfoQ(info(s)[intJudul].judul, info(s)[intJudul].artis, info(s)[intJudul].genre);
                enQueue(q, infoQ);
                cout << "Berhasil Menbambah Lagu ke Playlist";
            }
            cout << endl << endl;
            break;
        case 5:
            deQueue(q, infoQ);
            if (isEmpty(q) == true){
                break;
            }else {
                cout << "Berhasil Menghapus Lagu dari Playlist";
            }
            cout << endl << endl;
            break;
        case 6:
            printQueue(q);
            break;
        }
        cout<<"Kembali ke menu utama ? (Y/N) : ";cin>>pil;
            if (pil == "Y"){
                pilihan = selectMenu();
            }else if (pil == "N"){
                pilihan = 0;
            }
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
