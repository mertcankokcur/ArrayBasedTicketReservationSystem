#include "Flight.h"
#include "List.h"

using namespace std;

Flight::Flight()
{
	flightNumber = "0";
}

int Flight::getNumberOfPassangers()
{
	return passangerList.getSize();
}

bool Flight::cancelReservation(string passangerName)
{
	if(!passangerList.isEmpty())
		{
			passangerList.remove(passangerName);
			return true;
		}
	return false;
}

bool Flight::reserveSeat(string passangerName)
{

	if(passangerList.isFull()) return false;

	if(passangerList.IsMember(passangerName)==true) return false;

	passangerList.insert(passangerName);

	return true;

}

void Flight::printPassangers()
{
		passangerList.print();
}

bool Flight::checkReservation(string passangerName)
{

	
	if(passangerList.IsMember(passangerName)==true)
		{
			return true;
		}
	else return false;
}
