#include <iostream>
#include <string>
#include "Date.h"
#include "Auteur.h"


int main () 
{
#if 0  
	std::cout << "kgukg" << std::endl;
#else
	std::string ID = "test", prenom = "etset2", nom = "hdfosihfos";
	Date date();
	Date Arak(7, 6, 1960);
	Auteur test(ID, prenom, nom, Arak);
	
	test.setID("s42");
	test.setFullname("Nguyen", "Araki");
	std::cout << Arak.getArrayDate()[0] << "/" << Arak.getArrayDate()[1] << "/" << Arak.getArrayDate()[2] << std::endl;
	std::cout << Arak.getStringDate() << std::endl;
	test.setDate(8, 9, 1969);
	
	
	std::cout << test.getDateNaissance()[0] << "/" << test.getDateNaissance()[1] << "/" << test.getDateNaissance()[2] << std::endl;
	std::cout << test.getFullname() <<"/" << test.getID() << std::endl;
	std::cout << Arak.getArrayDate()[0] << "/" << Arak.getArrayDate()[1] << "/" << Arak.getArrayDate()[2] << std::endl;
#endif
	
	return 0;
}


