#include "node.h"

Node::Node(Data *d):
    data{d},
    next{nullptr},
    prev{nullptr}
{

}

Node *Node::getNext() const
{
    return next;
}

Node *Node::getPrev() const
{
    return prev;
}

Data *Node::getData() const
{
    return data;
}

void Node::setNext(Node *value)
{
    next = value;
}

void Node::setPrev(Node *value)
{
    prev = value;
}

void Node::setData(Data *value)
{
    data = value;
}

void Node::print()
{
  data->print();
}
