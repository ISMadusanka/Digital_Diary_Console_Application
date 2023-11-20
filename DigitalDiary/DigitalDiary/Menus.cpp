#include <iostream>

using namespace std;

class Menus {
public:
    short mainMenu() {
        short n = 0;

        while (true) {
            cout << "\033[1;32m1. Add Log\033[0m\n";
            cout << "\033[1;32m2. View Logs\033[0m\n";
            cout << "\033[1;32m3. Events\033[0m\n\n";
            cout << "\033[1;32m4. Exit\033[0m\n\n";
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
        //implement 
    }

    short viewLogsMenu() {
        //implement
    }

    short eventsMenu() {
        //implement
    }
};