#include <iostream>
#include "Menus.cpp"

using namespace std;

class Navigations : private Menus {
public:
	void startNavigation() {
        short mainMenuResult = 0;
       
        do {
            mainMenuResult = mainMenu();

            switch (mainMenuResult)
            {
            case 1:
                //Add Log menu
                addLogFlow();
               
                break;

            case 2:
                //View Log menu
                
                break;

            case 3:
                //Event menu
                break;

            default:
                break;
            }


        } while (mainMenuResult != 4);
	}

    void addLogFlow() {
        short menuResult = 0;

        do {
            menuResult = chooseCategoryMenu();

            switch (menuResult)
            {
            case 1:
                //Add Log menu
                

                break;

            case 2:
                //View Log menu
                

                break;

            case 3:
                //Event menu
               
                break;

            default:
                break;
            }


        } while (menuResult != 4);
    }
};