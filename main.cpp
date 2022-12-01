#include <iostream>
#include "Date.h"


int main () 
{
	Date Araki(7, 6, 1960);
	std::cout << Araki.getArrayDate << endl;
	std::cout << Araki.getStringDate << endl;
	
	return 0;
}

