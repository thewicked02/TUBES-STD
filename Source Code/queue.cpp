#include "queue.h"

void createQueue(Queue &Q){

    head(Q) = NULL;
    tail(Q) = NULL;
}
bool isEmpty(Queue Q){

    if(head(Q) == NULL){
        return true;
    }else{
        return false;
    }
}
infotypeQ createInfoQ(string judul, string artis, string genre){
    infotypeQ infoQ;
    infoQ.judul = judul;
    infoQ.artis = artis;
    infoQ.genre = genre;

    return infoQ;
}
void enQueue(Queue &Q, infotypeQ p){

    adr P;
    P = new elmQueue;
    infoQ(P) = p;
    next(P) = NULL;

    if (isEmpty(Q)){
        head(Q) = P;
        tail(Q) = P;
    }else{
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}
void deQueue(Queue &Q, infotypeQ &p){

    adr P;
    if (head(Q) == NULL){
        cout << "Playlist Kosong !\n";
    } else if (Q.head == Q.tail){
        P = Q.head;
        Q.head = NULL;
        Q.tail = NULL;
        p = infoQ(P);
    } else {
        P = head(Q);
        head(Q) = next(P);
        next(P) = NULL;
    }
}
void printQueue(Queue Q){
    int i = 1;
    adr p = Q.head;
    if (head(Q) == NULL){
        cout << "Playlist Kosong !\n";
    }else{
        cout << "Antrian Playlist : \n";
        while (p != NULL) {
            cout << i << ".\n";
            cout << "Judul : " << infoQ(p).judul << " | " << " Artis : "  << infoQ(p).artis <<  " | " << " Genre : " << infoQ(p).genre << endl << endl;
            p = next(p);
            i++;
        }
    }
}
