/*
******************************************************************************
* Copyright (c) 2017,学生开放实验室
* All rights reserved.
******************************************************************************
* 文件名称： mian.cpp
* 文件标识： 主函数
* 摘    要:
******************************************************************************
* 当前版本： 1.0
* 作者    : zhiliao007
* 创建日期： 2018-01-01T15:13:15
******************************************************************************
*/
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();

    return app.exec();
}

/************** (C) COPYRIGHT 2014-2018 学生开放实验室 *****END OF FILE*********/
