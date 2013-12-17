#include <QMainWindow>
#include <QApplication>
#include <QFormLayout>
#include <QLineEdit>


class MainWindow:public QMainWindow {
public:
  MainWindow():QMainWindow() {
    QWidget *w=new QWidget;
    setCentralWidget(w);
    
    QFormLayout *layout = new QFormLayout(w);
    layout->addRow("Name",new QLineEdit);
    layout->addRow("Age",new QLineEdit);
    layout->addRow("Rank",new QLineEdit);
    
  }
};

int main(int argc,char*argv[]) {
  QApplication app(argc,argv);
  MainWindow *w=new MainWindow;
  w->show();
  return app.exec();
}