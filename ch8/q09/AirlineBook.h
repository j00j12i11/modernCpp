#pragma once
#include "Schedule.h"


class AirlineBook{
	Schedule* sch;
public:
	AirlineBook();
	~AirlineBook();
	bool run();
	void makeReserve();
	void cancelReserve();
	void showReserve();

};

