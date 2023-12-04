#pragma once
#include <iostream>
#include <sstream>
#include "Menus.cpp"
#include "DataModels.cpp"
#include "Database.cpp"
#include "UserIOStream.cpp"



using namespace std;

class Navigations : private Menus {
public:

    HashMap logsMap;

    //stacks to hold indexes of hash map which particular categories are stored.
    Stack healthCategotyIndexesStack;
    Stack educationCategotyIndexesStack;
    Stack financeCategotyIndexesStack;
    Stack lifestyleCategotyIndexesStack;
    Stack fitnessCategotyIndexesStack;
    Stack otherCategotyIndexesStack;


    Logs log;
    CategoryNodeValue catNodeValue;
    //Out out;

    Date EnterDate() {
        cout << "\n\033[1;33m Enter a date (dd/mm/yyyy): \033[0m";
        string inputDate;
        //getline(cin, inputDate);
        cin >> inputDate;

        istringstream dateStream(inputDate);

        // Variables to store day, month, and year
        int day, month, year;

        // Extract day, month, and year from the input
        char delimiter;
        dateStream >> day >> delimiter >> month >> delimiter >> year;

        // Check if extraction was successful
       if (dateStream.fail() || delimiter != '/') {

            cerr << "\033[1;31m Invalid date format. Please enter in dd/mm/yyyy format.\n \033[0m\n" << endl;
            EnterDate();
        }
        else if (day > 31 || month > 12) {

            cout << "\033[1;31m Invalid...!Check and again input date and month.. \033[0m\n" << endl;
            EnterDate();
        }
        
       return Date(day, month, year);




    }


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
            case 4:
                break;

            default:
                break;
            }


        } while (mainMenuResult != 4);
    }

    void addLogFlow() {
        short menuResult = 0;
        
        Date logDate;
        Date checkDate;
        do {
            menuResult = chosedate();



            switch (menuResult)
            {
            case 1:
                //Change date
                
                logDate = EnterDate();
                

                catNodeValue.date = logDate;
                log.key = logDate;
                checkDate = logsMap.hashArray[HashMap().HASH_FUNCTION(logDate)].key;
                if (checkDate.year ==logDate.year && checkDate.month == logDate.month && checkDate.day == logDate.day) {
                    log = logsMap.hashArray[HashMap().HASH_FUNCTION(logDate)];
                    
                }

            cout << "\n\033[1;32m Date: \033[0m" << Date().currentDate().day << "/" << Date().currentDate().month << "/" << Date().currentDate().year << endl;


                chosecategoryN();
                break;

            case 2:
                //continue
                logDate = logDate.currentDate();
                catNodeValue.date = logDate;
                log.key = logDate;
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


    short r = 0;
    void chosecategoryN() {
        short menuResult = 0;

        do {
            menuResult = chooseCategoryMenu();

            switch (menuResult)
            {
            case 1:
                //Health
                catNodeValue.category = HEALTH;
                cout << "Enter Topic: ";
                cin >> catNodeValue.topic;
                cout << "Short Description: ";
                cin >> catNodeValue.short_description;
                cout << "Description: ";
                cin >> catNodeValue.description;
                r = confirmationMenu();
                if (r == 1) {
                    log.addLog(catNodeValue);
                    logsMap.insert(log);

                    //store the index of log object in hash array
                    healthCategotyIndexesStack.push(HashMap().HASH_FUNCTION(log.key));

                    cout << "\033[1;31m--Saved Health Data--\033[0m\n";
                }
                else {
                    cout << "\033[1;31m--Cancel saved--  \033[0m\n";
                }
                break;

            case 2:
                //Education
                catNodeValue.category = EDUCATION;
                cout << "Enter Topic: ";
                cin >> catNodeValue.topic;
                cout << "Short Description: ";
                cin >> catNodeValue.short_description;
                cout << "Description: ";
                cin >> catNodeValue.description;
                 r = confirmationMenu();
                if (r == 1) {
                    log.addLog(catNodeValue);
                    logsMap.insert(log);

                    //store the index of log object in hash array
                    educationCategotyIndexesStack.push(HashMap().HASH_FUNCTION(log.key));

                    cout << "--Saved Education Data-- \n";

                }
                else {
                    cout << "--Cancal save-- \n";
                }
                break;

            case 3:
                //Finance
                catNodeValue.category = FINANCE;
                cout << "Enter Topic: ";
                cin >> catNodeValue.topic;
                cout << "Short Description: ";
                cin >> catNodeValue.short_description;
                cout << "Description: ";
                cin >> catNodeValue.description;
                 r = confirmationMenu();
                if (r == 1) {
                    log.addLog(catNodeValue);
                    logsMap.insert(log);

                    //store the index of log object in hash array
                    financeCategotyIndexesStack.push(HashMap().HASH_FUNCTION(log.key));

                    cout << "--Saved Finance Data-- \n";

                }
                else {
                    cout << "--Cancal save-- \n";
                }
                break;
            case 4:
                //Lifestyle
                catNodeValue.category = LIFESTYLE;
                cout << "Enter Topic: ";
                cin >> catNodeValue.topic;
                cout << "Short Description: ";
                cin >> catNodeValue.short_description;
                cout << "Description";
                cin >> catNodeValue.description;
                 r = confirmationMenu();
                if (r == 1) {
                    log.addLog(catNodeValue);
                    logsMap.insert(log);

                    //store the index of log object in hash array
                    lifestyleCategotyIndexesStack.push(HashMap().HASH_FUNCTION(log.key));

                    cout << "--Saved Lifestyle Data--\n";

                }
                else {
                    cout << "--Cancel save-- \n";
                }
                break;
            case 5:
                //Fitness
                catNodeValue.category = FITNESS;
                cout << "Enter Topic: ";
                cin >> catNodeValue.topic;
                cout << "Short Description: ";
                cin >> catNodeValue.short_description;
                cout << "Description: ";
                cin >> catNodeValue.description;
                 r = confirmationMenu();
                if (r == 1) {
                    log.addLog(catNodeValue);
                    logsMap.insert(log);

                    //store the index of log object in hash array
                    fitnessCategotyIndexesStack.push(HashMap().HASH_FUNCTION(log.key));

                    cout << "--Saved Fitness Data--\n";

                }
                else {
                    cout << "--Cancel save-- \n";
                }
                break;
            case 6:
                //Other
                catNodeValue.category = OTHER;
                cout << "Enter Topic: ";
                cin >> catNodeValue.topic;
                cout << "Short Description: ";
                cin >> catNodeValue.short_description;
                cout << "Description: ";
                cin >> catNodeValue.description;
                 r = confirmationMenu();
                if (r == 1) {
                    log.addLog(catNodeValue);
                    logsMap.insert(log);

                    //store the index of log object in hash array
                    otherCategotyIndexesStack.push(HashMap().HASH_FUNCTION(log.key));

                    cout << "--Saved Other Data--\n";
                }
                else {
                    cout << "--Cancel save-- \n";
                }

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




    short chosedate() {
        //implement
        short n = 0;
       

        while (true) {

            cout << "\n\033[1;33m   Current Date : \033[0m" << Date().currentDate().day << "/" << Date().currentDate().month << "/" << Date().currentDate().year << endl;


            cout << "\n\033[1;32m1. Change Date \033[0m\n";
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



    Date sDate;
    void ViewLOgs() {
        short menuResult = 0;
        Logs tmpLog;
        Date d(3, 12, 2023);
        do {
            menuResult = viewLogsMenu();
            switch (menuResult)
            {
            case 1:
                //Search by date
                sDate = EnterDate();
                cout << "--HEALTH--\n";
                logsMap.search(sDate).health.printList();
                cout << "--EDUCATION--\n";
                logsMap.search(sDate).education.printList();
                cout << "--FITNESS--\n";
                logsMap.search(sDate).fitness.printList();
                cout << "--FINANCE--\n";
                logsMap.search(sDate).finance.printList();
                cout << "--LIFESTYLE--\n";
                logsMap.search(sDate).lifestyle.printList();
                cout << "--OTHER--\n";
                logsMap.search(sDate).other.printList();
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

            Logs logs[4];
            Stack tmp;
            Logs tmpLog;
            int tmpIndex;
            int maxSize;

            switch (menuResult)
            {
            case 1:
                //Health
               

                for (int i = 0; i < 4; i++)
                {
                    tmpIndex = healthCategotyIndexesStack.pop();
                    if (tmpIndex == -1) {
                        break;
                    }
                    tmpLog = logsMap.hashArray[tmpIndex];
                    tmp.push(tmpIndex);


                    logs[i] = tmpLog;

                    maxSize = i + 1;

                }

                for (int i = 0; i < maxSize; i++)
                {
                    logs[i].health.printList();

                    healthCategotyIndexesStack.push(tmp.pop());
                }

                

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