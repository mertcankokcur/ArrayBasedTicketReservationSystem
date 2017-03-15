#pragma once
#include <iostream>
#include <string>
#include "List.h"

using namespace std;
class Flight
{
private:

	string flightNumber;
	List passangerList;
public:
	Flight();

	bool reserveSeat(string passangerName);
	bool cancelReservation(string passangerName);
	int getNumberOfPassangers();
	void printPassangers();
	bool checkReservation(string passangerName);

};

