#ifndef MANAGER_H
#define MANAGER_H
#include <QImage>
#include <QString>
#include "factory.h"

class AlgorithmManager {
public:
    AlgorithmManager() = default;
    //takes vector of requests for a single picture, one request == one algorithm
    void process_requests(std::vector<Request*>& r, QString path_from, QString path_to);
private:
    Factory f;
};

#endif // MANAGER_H