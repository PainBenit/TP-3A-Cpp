#include <iostream>
#include "Date.h"


int main () 
{
#if 1 // PEG
	std::cout << "kgukg" << std::endl;
#else
	Date Araki(7, 6, 1960);
	std::cout << Araki.getArrayDate()[0] << "/" << Araki.getArrayDate()[1] << "/" << Araki.getArrayDate()[0] << std::endl;
	std::cout << Araki.getStringDate() << std::endl;
#endif
	
	return 0;
}

