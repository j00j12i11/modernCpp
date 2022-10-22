#pragma once
class Exp{
	int value, base, exp;
public:
	Exp();
	Exp(int b);
	Exp(int b, int e);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

