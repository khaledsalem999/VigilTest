#include "Testin.h"
#include <QtWidgets/QApplication>

bool help_showed = false;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Testin w;
	w.show();
	return a.exec();
}
