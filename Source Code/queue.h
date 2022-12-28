#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

using namespace std;

#define infoQ(P) (P)->infoQ
#define next(P) (P)->next
#define head(L) ((L).head)
#define tail(L) ((L).tail)

typedef struct elmQueue *adr;
typedef struct infotypeQ {
    string judul, artis, genre;
};
typedef struct elmQueue {
    infotypeQ infoQ;
    adr next;
};
typedef struct Queue {
    adr head;
    adr tail;
};

void createQueue(Queue &Q);
bool isEmpty(Queue Q);
infotypeQ createInfoQ(string judul, string artis, string genre);
void enQueue(Queue &Q, infotypeQ p);
void deQueue(Queue &Q, infotypeQ &p);
void printQueue(Queue Q);

#endif // QUEUE_H_INCLUDED
