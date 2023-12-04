#pragma once
#include <iostream>
#include "DataModels.cpp";

using namespace std;

class Menus {
public:
    
    void Wellcome() {
        for (int i = 0; i < 156; ++i) {
            cout << "-";
        }
        cout << endl;
        for (int i = 0; i < 65; ++i) {
            cout << " ";
        }
        cout << "WELCOME TO DIGAL LIBRARY" << endl;
        cout << endl;
        for (int i = 0; i < 40; ++i) {
            cout << " ";
        }
        cout << "~~ A diary is the autobiography of a moment in time, unedited by the future ~~" << endl;
        for (int i = 0; i < 156; ++i) {
            cout << "-";
        }
        cout << endl;
    }

    short mainMenu() {
        short n = 0;

        while (true) {
            
            cout << "\n\033[1;33m Hi there! What would you like to do today :)\033[0m\n\n";
            cout << "\033[1;32m1. Add a new Entry\033[0m\n";
            cout << "\033[1;32m2. View past Logs\033[0m\n";
            cout << "\033[1;32m3. Add a new Event\033[0m\n\n";
            cout << "\033[1;32m4. Exit\033[0m\n\n";
            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 5) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 4--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }
    }
    short chosedate() {
        //implement
        short n = 0;
        Date d=d.currentDate();
        while (true) {
            
            cout << "\n\033[1;33m Current Date is: \033[0m " << d.day<<"/"<<d.month<<"/"<<d.year <<"\n"<< endl;

            cout << "\033[1;32m1. Do you want to Change Date \033[0m\n";
            cout << "\033[1;32m2. Continue\033[0m\n\n";
            cout << "\033[1;32m3. Go Back\033[0m\n\n";

            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 4) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 3--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }
    }


    short chooseCategoryMenu() {
        short n = 0;

        while (true) {

            cout << "\n\033[1;33m ChooseCategory\033[0m \n" << endl;

            cout << "\033[1;32m1. Health\033[0m\n";
            cout << "\033[1;32m2. Education\033[0m\n";
            cout << "\033[1;32m3. Finance\033[0m\n";
            cout << "\033[1;32m4. Lifestyle\033[0m\n";
            cout << "\033[1;32m5. Fitness\033[0m\n";
            cout << "\033[1;32m6. Other\033[0m\n\n";
            cout << "\033[1;32m7. Go Back\033[0m\n\n";
            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 8) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 7--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }
    }

    short viewLogsMenu() {
        //implement
        short n = 0;

        while (true) {

            cout << "\033[1;32m1. View Topics By Date\033[0m\n";
            cout << "\033[1;32m2. View Topicd By Category\033[0m\n\n";
            cout << "\033[1;32m3. Go Back\033[0m\n\n";

            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 4) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 3--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }
    }



    short eventsMenu() {
        //implement
        short n = 0;

        while (true) {

            cout << "\033[1;32m1. Add Event\033[0m\n";
            cout << "\033[1;32m2. View Events\033[0m\n\n";
            cout << "\033[1;32m3. Go Back\033[0m\n\n";

            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 4) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 3--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }

    }
    //EVENT PARTH
    short AddEventsMenu() {
        //implement
        short n = 0;

        while (true) {

            cout << "\033[1;32m1. Go Back\033[0m\n\n";
            cout << "\033[1;32m. ..Add Date here...\033[0m\n";

            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 2) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 3--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }

    }
    short viewEventsMenu() {
        //implement
        short n = 0;

        while (true) {

            cout << "\033[1;32m1. Upcoming Event\033[0m\n";
            cout << "\033[1;32m2. Past Event\033[0m\n\n";
            cout << "\033[1;32m3. Go Back\033[0m\n\n";

            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 4) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 3--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }

    }


    short upcommingEventsMenu() {
        //implement
        short n = 0;

        while (true) {

            cout << "\n\033[1;32m Event List\033[0m \n" << endl;
            cout << "\033[1;32m1. Go Back\033[0m\n";
            cout << "\033[1;32m2. Delete \033[0m\n\n";


            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 3) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 2--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }
    }

    short pastEventMenu() {
        //implement
        short n = 0;

        while (true) {

            cout << "\n\033[1;33m Event List....\033[0m \n" << endl;
            cout << "\033[1;32m1. Delete\033[0m\n";
            cout << "\033[1;32m2. Delete All\033[0m\n\n";
            cout << "\033[1;32m3. Go Back\033[0m\n\n";

            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 4) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 3--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }

    }

    short confirmationMenu() {
        //implement
        short n = 0;

        while (true) {

            cout << "\033[1;32m1. Save\033[0m\n";
            cout << "\033[1;32m2. Cancel\033[0m\n\n";

            cout << endl;
            cout << "Select an Option: ";

            try {
                cin >> n;

                if (n > 0 && n < 3) {
                    return n;
                }
                else {
                    cout << "\033[1;31m--Enter a value between 1 and 2--\033[0m\n";
                }
            }
            catch (int e) {

            }

        }
    }

    short goBackMenu() {
        //implement
    }

    short goBackAndGoBackMainMenu() {
        //implement
    }
    //VIEW LOGS MENU PARTH


    
};