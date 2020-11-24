#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include"homepage.h"
#include"register.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_Register_clicked();

private:
    Ui::Login *ui;
    Homepage *homepage;
    Register *regis;
};

#endif // LOGIN_H
