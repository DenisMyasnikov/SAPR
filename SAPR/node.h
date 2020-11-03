#ifndef NODE_H
#define NODE_H


class Node
{
    int id;
    double load = 0;
    double corX;
public:
    Node(int);

    void setId(int value);
    void setLoad(double value);
    void setCorX(double value);

    int getId() const;
    double getLoad() const;
    double getCorX() const;
};

#endif // NODE_H
