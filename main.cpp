#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
  QApplication app (argc, argv);

  QFont font ("Courier");

  QPushButton button;
  button.setText("Hello world!");
  button.setToolTip("Hullo");
  button.setFont(font);
  button.show();

  return app.exec();
}
