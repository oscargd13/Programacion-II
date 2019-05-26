#ifndef LIST_H
#define LIST_H

#include<data.h>
#include<node.h>

class List
{
public:
    List();

    void push_back(Data *d);
    void push_front(Data *d);


    Node *getFirst() const;
    void setFirst(Node *value);

    Node *getLast() const;
    void setLast(Node *value);

private:
    Node *first;
    Node *last;

};

ostream& operator << (ostream& os, const List& l );


#endif // LIST_H
