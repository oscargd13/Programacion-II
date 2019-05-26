#ifndef NODE_H
#define NODE_H
#include<data.h>

class Node
{
public:
    Node(Data *d);

    Node *getNext() const;
    Node *getPrev() const;


    void setNext(Node *value);
    void setPrev(Node *value);

    Data *getData() const;
    void setData(Data *value);
    void print();

private:
    Node *next;
    Node *prev;
    Data *data;
};

#endif // NODE_H
