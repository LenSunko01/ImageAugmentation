#include "../include/whiteblack.h"

QImage WhiteBlack::processImage(const QImage *workingModel) {
    int32_t cols = workingModel->width();
    int32_t rows = workingModel->height();
    QImage whiteBlackPicture(cols, rows, workingModel->format());
    for (int32_t i = 0; i < cols; i++) {
        for (int32_t j = 0; j < rows; j++) {
            /* Getting the color of pixel */
            QRgb currentColor = workingModel->pixel(QPoint(i, j));
            /* Getting the each component of RGB vector */
            int green = qGreen(currentColor);
            int red = qRed(currentColor);
            int blue = qBlue(currentColor);
            /* Averaging the pixel's color */
            int newRGB = (green + red + blue) / 3;
            QRgb newColor = qRgb(newRGB, newRGB, newRGB);
            whiteBlackPicture.setPixelColor(QPoint(i, j), newColor);
           }
    }
    return whiteBlackPicture;
}

WhiteBlack WhiteBlackBuilder::build() {
    WhiteBlack* algo = new WhiteBlack();
    return *algo;
}
