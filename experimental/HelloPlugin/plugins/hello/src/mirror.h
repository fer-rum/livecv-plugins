#ifndef MIRROR_H
#define MIRROR_H

#include <QQuickItem>

#include <QQuickItem>
#include "qmat.h"
#include "qmatfilter.h"

class Mirror : public QMatFilter{

    Q_OBJECT

public:
    void transform(cv::Mat& in, cv::Mat& out) override;

};

#endif // MIRROR_H
