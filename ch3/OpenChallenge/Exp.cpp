#include "Exp.h"

Exp::Exp(){
	value = base = exp = 1;
}

Exp::Exp(int b){
	value = base = b;
	exp = 1;
}

Exp::Exp(int b, int e){
	base = b;
	exp = e;
	value = b;
	for (int i = 1; i < e; i++) value *= b;
}

int Exp::getValue(){
	return value;
}

int Exp::getBase()
{
	return base;
}

int Exp::getExp()
{
	return exp;
}

bool Exp::equals(Exp b){
	if (value == b.getValue())
		return true;
	else
		return false;
}
