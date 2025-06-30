#include <QLabel>
#include <QApplication>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[]){
	QApplication app(argc,argv);
	QWidget w;
	QLabel *l1 = new QLabel;
	QLabel *l2 = new QLabel;
	QLineEdit *e1 = new QLineEdit;
	l1->setText("Please choose your language");
	l2->setText("input:");

	QHBoxLayout *h1 = new QHBoxLayout;
	h1->addWidget(l2);
	h1->addWidget(e1);
	QVBoxLayout *v1 = new QVBoxLayout;
	v1->addWidget(l1);
	v1->addLayout(h1);

	w.setLayout(v1);
	w.show();

	return app.exec();


}
