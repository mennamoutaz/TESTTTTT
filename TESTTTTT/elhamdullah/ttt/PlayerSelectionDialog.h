#ifndef PLAYERSELECTIONDIALOG_H
#define PLAYERSELECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class PlayerSelectionDialog;
}

class PlayerSelectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlayerSelectionDialog(QWidget *parent = nullptr);
    ~PlayerSelectionDialog();

    char getPlayer1Symbol() const;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::PlayerSelectionDialog *ui;
    char player1Symbol;
};

#endif // PLAYERSELECTIONDIALOG_H
