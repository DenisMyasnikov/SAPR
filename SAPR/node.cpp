#include "node.h"

int Node::getId() const
{
    return id;
}

void Node::setId(int value)
{
    id = value;
}

double Node::getLoad() const
{
    return load;
}

void Node::setLoad(double value)
{
    load = value;
}

void Node::setCorX(double value)
{
    corX = value;
}

double Node::getCorX() const
{
    return corX;
}

Node::Node(int id)
{
    this->id = id;
}
