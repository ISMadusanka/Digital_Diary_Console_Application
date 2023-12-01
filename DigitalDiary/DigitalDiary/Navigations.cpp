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
                ViewLOgs();
                break;

            case 3:
                //Event menu
                Event();
                break;

            default:
                break;
            }


        } while (mainMenuResult != 4);
    }
    void addLogFlow() {
        short menuResult = 0;

        do {
            menuResult = chosedate();

            switch (menuResult)
            {
            case 1:
                //Change date


                break;

            case 2:
                //continue
                chosecategoryN();

                break;


            case 3:
                //Go Back
                startNavigation();

                break;


            default:
                break;
            }


        } while (menuResult != 8);
    }


    void chosecategoryN() {
        short menuResult = 0;

        do {
            menuResult = chooseCategoryMenu();

            switch (menuResult)
            {
            case 1:
                //Health


                break;

            case 2:
                //Education


                break;

            case 3:
                //Finance


                break;
            case 4:
                //Lifestyle


                break;
            case 5:
                //Fitness


                break;
            case 6:
                //Other


                break;
            case 7:
                //Go Back
                startNavigation();

                break;


            default:
                break;
            }


        } while (menuResult != 8);
    }









    void ViewLOgs() {
        short menuResult = 0;

        do {
            menuResult = viewLogsMenu();

            switch (menuResult)
            {
            case 1:
                //Search by date


                break;

            case 2:
                //View by category
                ViewByCategoryN();

                break;

            case 3:
                //Go Back
                startNavigation();

                break;

            default:
                break;
            }


        } while (menuResult != 3);
    }

    void ViewByCategoryN() {
        short menuResult = 0;

        do {
            menuResult = chooseCategoryMenu();

            switch (menuResult)
            {
            case 1:
                //Health


                break;

            case 2:
                //Education


                break;

            case 3:
                //Finance


                break;
            case 4:
                //Lifestyle


                break;
            case 5:
                //Fitness


                break;
            case 6:
                //Other


                break;
            case 7:
                //Go Back
                ViewLOgs();

                break;


            default:
                break;
            }


        } while (menuResult != 8);
    }














    void Event() {
        short menuResult = 0;

        do {
            menuResult = eventsMenu();

            switch (menuResult)
            {
            case 1:
                //Add Event
                AddEventN();

                break;

            case 2:
                //View Events
                ViewEventN();

                break;

            case 3:
                //Go Back
                startNavigation();

                break;

            default:
                break;
            }


        } while (menuResult != 3);
    }
    //EVENT PARTH
    void AddEventN() {
        short menuResult = 0;

        do {
            menuResult = AddEventsMenu();

            switch (menuResult)
            {
            case 1:
                //Go Back
                Event();

                break;



            default:
                break;
            }


        } while (menuResult != 3);
    }
    void ViewEventN() {
        short menuResult = 0;

        do {
            menuResult = viewEventsMenu();

            switch (menuResult)
            {
            case 1:
                //Upcoming Event
                upcommingEventsN();

                break;

            case 2:
                //Past Event
                pasteventN();

                break;

            case 3:
                //Go Back
                Event();

                break;

            default:
                break;
            }


        } while (menuResult != 3);
    }
    void pasteventN() {
        short menuResult = 0;

        do {
            menuResult = pastEventMenu();

            switch (menuResult)
            {
            case 1:
                //delete


                break;

            case 2:
                //delet all


                break;

            case 3:
                //Go Back
                ViewEventN();

                break;

            default:
                break;
            }


        } while (menuResult != 3);
    }
    void upcommingEventsN() {
        short menuResult = 0;

        do {
            menuResult = upcommingEventsMenu();

            switch (menuResult)
            {
            case 1:
                //Go Back
                ViewEventN();

                break;

            case 2:
                //delet 


                break;



            default:
                break;
            }


        } while (menuResult != 2);
    }

};