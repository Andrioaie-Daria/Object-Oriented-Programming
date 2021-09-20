//
// Created by daria on 05/05/2021.
//

#ifndef A89_911_ANDRIOAIE_DARIA_USERGUI_H
#define A89_911_ANDRIOAIE_DARIA_USERGUI_H
#include "qwidget.h"
#include "qlistwidget.h"
#include "qlineedit.h"
#include "qpushbutton.h"
#include "UserService.h"
#include <QDialog>

class UserGUI : public QDialog{
private:
    UserService& userService;
    void initGUI();
    void populateAvailableListWithBreed();
    void populateAvailableListWithAll();
    void populateAdoptedList();
    int getSelectedIndex() const;
    void adoptDog();
    void openInApp();

    void connectSignalsAndSlots();
    QListWidget *availableDogsListWidget, *adoptedDogsListWidget;
    QLineEdit *breedLineEdit;
    QPushButton *seeBreedButton, *seeAllButton, *adoptButton, *openApplicationButton;

public:
    UserGUI(UserService& userService1, QWidget *parent = nullptr);
//    ~UserGUI();
};


#endif //A89_911_ANDRIOAIE_DARIA_USERGUI_H
