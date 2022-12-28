#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

using namespace std;

#define info(s) ((s).info)
#define top(s) ((s).top)

struct lagu {
    string judul, artis, genre;
};

typedef lagu infotype;


struct stack {
    infotype info[10];
    int top;
};

void createStack(stack &s);
infotype createInfo(string judul, string artis, string genre);
bool isEmpty(stack s);
bool isFull(stack s);
void push(stack &s, infotype info);
infotype pop(stack &s);
void printLagu(stack s);
int searchJudulLagu(stack s, string judul);

#endif // STACK_H_INCLUDED
