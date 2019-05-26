#include "list.h"

List::List():
    first{nullptr},
    last{nullptr}
{

}

void List::push_back(Data *d)
{
    Node *n = new Node(d);
    if(last){
        last->setNext(n);
        n->setPrev(last);
        last = n;

    }else {
       last = n;
       first = n;
    }

}

void List::push_front(Data *d)
{
    Node *g = new Node(d);
    if(first){
       g->setNext(first);
       first->setPrev(g);
       first = g;
    }else {
     first = g;
     last = g;

    }
}

Node *List::getFirst() const
{
    return first;
}

void List::setFirst(Node *value)
{
    first = value;
}

Node *List::getLast() const
{
    return last;
}

void List::setLast(Node *value)
{
    last = value;
}


ostream &operator <<(ostream &os, const List &l)
{
    for(Node *pene = l.getFirst();pene != nullptr; pene = pene->getNext()){

        os << pene->getData()->getValue() << " - ";
    }
}
