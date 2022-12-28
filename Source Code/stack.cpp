#include "stack.h"

void createStack(stack &s){
    top(s) = 0;
}

infotype createInfo(string judul, string artis, string genre){
    infotype info;
    info.judul = judul;
    info.artis = artis;
    info.genre = genre;

    return info;
}
bool isEmpty(stack s){
    if (top(s) == 0){
        return true;
    }else {
        return false;
    }
}

bool isFull(stack s){
    if (top(s) == 10){
        return true;
    }else {
        return false;
    }
}

void push(stack &s, infotype info){
    if (isFull(s) == true ){
        cout<< "List Lagu Mencapai Limit!\n";
    }else{
        top(s) = top(s) + 1;
        info(s)[top(s)] = info;
    }
}

infotype pop(stack &s){
    infotype info;
    if (isEmpty(s) == true ){
        cout<< "List Lagu Kosong!\n";
    }else{
        info = info(s)[top(s)];
        top(s) = top(s) - 1;
        return info;
    }
}

void printLagu(stack s){
    int i = 1;

    if (isEmpty(s) == true ){
        cout<< "Lagu Tidak Ditemukan!\n";
    }else{
        while (i <= top(s)){
        cout << i << endl;
        cout << "Judul : " << info(s)[i].judul << endl;
        cout << "Artis : " << info(s)[i].artis << endl;
        cout << "Genre : " << info(s)[i].genre << endl << endl;
        i++;
        }
    }
}

int searchJudulLagu(stack s, string judul){
    int i = 1;
    if (isEmpty(s) == true ){
        cout<< "Lagu Tidak Ditemukan!\n";
    }else{
        while (info(s)[i].judul != judul){
            if (i > top(s)) {
                return 0;
            }
            i++;
        }
        return i;
    }
}
