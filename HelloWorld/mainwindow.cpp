#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    QVBoxLayout *layout = new QVBoxLayout(centralWidget);
    QPushButton *button1 = new QPushButton("Button 1", centralWidget);
    QPushButton *button2 = new QPushButton("Button 2", centralWidget);
    QPushButton *button3 = new QPushButton("Button 3", centralWidget);

    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);

    connect(button1, &QPushButton::clicked, this, [=]() {
        QMessageBox::information(this, "Button 1", "Button 1 was clicked!");
    });
    connect(button2, &QPushButton::clicked, this, [=]() {
        QMessageBox::information(this, "Button 2", "Button 2 was clicked!");
    });
    connect(button2, &QPushButton::clicked, this, [=]() {
        QMessageBox::information(this, "Button 3", "Button 3 was clicked!");
    });

    setWindowTitle("Hello World with Buttons");
}

MainWindow::~MainWindow()
{
}
