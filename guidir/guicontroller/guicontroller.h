#ifndef GUICONTROLLER_H
#define GUICONTROLLER_H

#include <vector>
<<<<<<< HEAD
#include <QImage>
#include <QString>
#include "../../main/include/request.h"
#include "../../main/include/manager.h"
=======
>>>>>>> Add file for controller

class GuiController
{
private:
<<<<<<< HEAD
    GlobalRequest request;
    AlgorithmManager manager;

    std::shared_ptr<Request> get_request_from_str(QString name);
public:
    GuiController();
    void make_request(QStringList algo_list);
    QImage make_request_preview(QStringList algo_list);
    void save_path_in(QString new_path_in);
    void save_path_to(QString new_path_to);
=======
public:
    GuiController();
>>>>>>> Add file for controller
};

#endif // GUICONTROLLER_H