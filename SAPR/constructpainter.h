#ifndef CONSTRUCTPAINTER_H
#define CONSTRUCTPAINTER_H

#include <QGraphicsItem>
#include <QObject>
#include <QPainter>

class ConstructPainter:public QObject, public QGraphicsItem
{

    Q_OBJECT
public:
    ConstructPainter(QObject *parent = 0);
    ~ConstructPainter();

signals:
    void signall();
protected:
    void mousePressEcent(QGraphicsSceneMouseEvent *event);
private:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget widget);

};


#endif // CONSTRUCTPAINTER_H
