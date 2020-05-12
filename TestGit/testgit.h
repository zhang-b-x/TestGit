#pragma once

#include <QtWidgets/QWidget>
#include "ui_testgit.h"

class TestGit : public QWidget
{
	Q_OBJECT

public:
	TestGit(QWidget *parent = Q_NULLPTR);

private:
	Ui::TestGitClass ui;
};
