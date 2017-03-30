#pragma once

#include <QObject>

class View : public QObject
{
	Q_OBJECT

public:
	View(QObject *parent);
	~View();
};
