#include "mirror.h"

#include <iostream>

void
Mirror::transform(const cv::Mat& in, cv::Mat& out) {

        out.create(in.rows, in.cols, in.type());

        std::cout << "Rows: in = " << in.rows << " out = " << out.rows << std::endl;
        std::cout << "Cols: in = " << in.cols << " out = " << out.cols << std::endl;

        cv::flip(in, out, 0);

}

