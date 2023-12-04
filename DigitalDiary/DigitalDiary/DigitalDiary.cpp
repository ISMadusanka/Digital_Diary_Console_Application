#pragma once
#include <iostream>
#include "Navigations.cpp"

#include "DataModels.cpp"
#include "Database.cpp"


using namespace std;
int main()
{
	Navigations n;
	n.startNavigation();

	/*Logs log;
	HashMap logsMap;
	Date d(3, 12, 2023);
	log.key = d;
	CategoryNodeValue catNodeValue(d,"topic","sd","desc",HEALTH);


	log.addLog(catNodeValue);
	log.addLog(catNodeValue);
	log.addLog(catNodeValue);



	logsMap.insert(log);
	

	//cout<<logsMap.HASH_FUNCTION(d)<<endl;
    cout << logsMap.search(d).health.getSize() << endl;

	logsMap.search(d).health.printList();*/

	
}

