#ifndef HELLOPLUGIN_H
#define HELLOPLUGIN_H

#include <QQuickItem>

class HelloPlugin : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(HelloPlugin)

public:
    HelloPlugin(QQuickItem *parent = 0);
    ~HelloPlugin();
};

#endif // HELLOPLUGIN_H
