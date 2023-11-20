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
                //Enter data menu
               
                break;

            case 2:
                //Show data menu
                
                break;

            default:
                break;
            }


        } while (mainMenuResult != 3);
	}
};