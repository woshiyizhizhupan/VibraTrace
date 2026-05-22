#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VibraTrace.h"

class VibraTrace : public QMainWindow
{
    Q_OBJECT

public:
    VibraTrace(QWidget *parent = nullptr);
    ~VibraTrace();

private:
    Ui::VibraTraceClass ui;
};

