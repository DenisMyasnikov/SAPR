#ifndef QDYNAMICEDITTEXT_H
#define QDYNAMICEDITTEXT_H
#include <QLineEdit>


class QDynamicEditLine : public QLineEdit
{
    Q_OBJECT
    int textEditid;
public:
    QDynamicEditLine(QWidget *parent = 0);
    ~QDynamicEditLine();
//    int getLocalId();
    static int ResId;
    int getGlobaId();
public slots:




};

#endif // QDYNAMICEDITTEXT_H
