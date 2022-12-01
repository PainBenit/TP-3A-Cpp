#include <iostream>
#include "Date.h"


int main () 
{
	Date Araki(7, 6, 1960);
	std::cout << Araki.getArrayDate() << "\n";
	std::cout << Araki.getStringDate() << "\n";
	
	return 0;
}

