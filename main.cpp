#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Auteur.h"
#include "Emprunt.h"
#include "Livre.h"
#include "Lecteur.h"
#include "Bibliotheque.h"


int main () 
{
	/*
	Date Arak(7, 6, 1960);
	Auteur test(ID, prenom, nom, Arak);
	Auteur test2("try","again","looser", testDate);

	test.setID("s42");
	test.setFullname("Nguyen", "Araki");
	std::cout << Arak.getArrayDate()[0] << "/" << Arak.getArrayDate()[1] << "/" << Arak.getArrayDate()[2] << std::endl;
	std::cout << Arak.getStringDate() << std::endl;
	test.setDate(8, 9, 1969);
	
	
	std::cout << test.getDateNaissance()[0] << "/" << test.getDateNaissance()[1] << "/" << test.getDateNaissance()[2] << std::endl;
	std::cout << test.getFullname() <<"/" << test.getID() << std::endl;
	std::cout << Arak.getArrayDate()[0] << "/" << Arak.getArrayDate()[1] << "/" << Arak.getArrayDate()[2] << std::endl;
	std::cout << test2.getDateNaissance()[0] << "/" << test2.getDateNaissance()[1] << "/" << test2.getDateNaissance()[2] << std::endl;
	std::cout << test2.getFullname() <<"/" << test2.getID() << std::endl;
	std::cout << testDate.getArrayDate()[0] << "/" << testDate.getArrayDate()[1] << "/" << testDate.getArrayDate()[2] << std::endl;
	*/
	Date Musso(6, 6, 1974);
	Auteur G_Musso(" ", "Guillaume", "Musso", Musso);
	Date Camus(7, 11, 1913);
	Auteur A_Camus(" ", "Albert", "Camus", Camus);
	Date Dicker(16,6,1985);
	Auteur J_Dicker(" ", "Joel", "Dicker",Dicker);
	Date Rowling(31, 7, 1965);
	Auteur J_Rowling("J.K Rowling", "Joanne", "Rowling", Rowling);

	Date H_Potter1(27, 6, 1997);
	std::vector<std::string> Liste_ID_HP1;
	Livre HPotter1(J_Rowling, "Harry Potter à l'ecole des sorcier", "francais","Fantastique",H_Potter1, 9782070541270, Liste_ID_HP1);

	Date H_Potter2(2, 7, 1998);
	std::vector<std::string> Liste_ID_HP2;
	Livre HPotter2(J_Rowling, "Harry Potter et la chambre des secrets", "francais","Fantastique",H_Potter2, 9788869185182, Liste_ID_HP2);

	Date H_Potter3(19, 10, 1999);
	std::vector<std::string> Liste_ID_HP3;
	Livre HPotter3(J_Rowling, "Harry Potter et le prisonnier d'azkaban", "francais","Fantastique",H_Potter3, 9780439554923, Liste_ID_HP3);

	Date H_Potter4(29, 11, 2000);
	std::vector<std::string> Liste_ID_HP4;
	Livre HPotter4(J_Rowling, "Harry Potter et la Coupe de feu", "francais","Fantastique",H_Potter4, 9788893819930, Liste_ID_HP4);

	Date H_Potter5(3, 12, 2003);
	std::vector<std::string> Liste_ID_HP5;
	Livre HPotter5(J_Rowling, "Harry Potter et l'Ordre du phenix", "francais","Fantastique",H_Potter5, 9780439567619, Liste_ID_HP5);

	Date H_Potter6(16, 7, 2005);
	std::vector<std::string> Liste_ID_HP6;
	Livre HPotter6(J_Rowling, "Harry Potter et le Price de sang melee", "francais","Fantastique",H_Potter6, 9780439791328, Liste_ID_HP6);

	Date H_Potter7(21, 7, 2007);
	std::vector<std::string> Liste_ID_HP7;
	Livre HPotter7(J_Rowling, "Harry Potter et les reliques de la mort", "francais","Fantastique",H_Potter7, 9780545010221, Liste_ID_HP7);

	Date C_P(27, 03, 2014);
	std::vector < std::string> Liste_ID_CP;
	Livre CP(G_Musso, "Central park", "francais", "Fiction", C_P, 9780943010221, Liste_ID_CP);

	Date Peste(10, 6, 1947);
	std::vector<std::string> Liste_ID_Peste;
	Livre LaPeste(A_Camus, "La Peste", "francais", "Conte philosophique", Peste, 9780943523221, Liste_ID_Peste);

	Date Sander(10,3,2022);
	std::vector<std::string> Liste_ID_Sander;
	Livre ASander(J_Dicker, "L'affaire Alaska Sander", "francais", "Policier", Sander, 9780943523751, Liste_ID_Sander);

	std::vector<double> Liste_Emprunt_L1;
	std::vector<double> Liste_Emprunt_L2;
	std::vector<double> Liste_Emprunt_L3;

	Lecteur Lecteur1("Lec1","Doe","John",Liste_Emprunt_L1);
	Lecteur Lecteur2("Lec2","Grille","Jade",Liste_Emprunt_L3);
	Lecteur Lecteur3("Lec3","Spatule","Gabriel",Liste_Emprunt_L3);

	std::vector<Livre> Liste_Livre;
	std::vector<Auteur> Liste_Auteur;
	std::vector<Lecteur> Liste_Lecteur;
	std::vector<Emprunt> Liste_Emprunt;

	Liste_Livre.push_back(HPotter1);
	Liste_Livre.push_back(HPotter2);
	Liste_Livre.push_back(HPotter3);
	Liste_Livre.push_back(HPotter4);
	Liste_Livre.push_back(HPotter5);
	Liste_Livre.push_back(HPotter6);
	Liste_Livre.push_back(HPotter7);
	Liste_Livre.push_back(CP);
	Liste_Livre.push_back(LaPeste);
	Liste_Livre.push_back(ASander);

	Liste_Auteur.push_back(J_Dicker);
	Liste_Auteur.push_back(J_Rowling);
	Liste_Auteur.push_back(A_Camus);
	Liste_Auteur.push_back(G_Musso);

	Liste_Lecteur.push_back(Lecteur1);
	Liste_Lecteur.push_back(Lecteur2);
	Liste_Lecteur.push_back(Lecteur3);

	Bibliotheque Librarie(Liste_Livre,Liste_Auteur,Liste_Lecteur,Liste_Emprunt);

	Date Emprunt1(12, 1, 2023);
	Librarie.Emprunter(&HPotter1,&Lecteur1,&Emprunt1);
	Librarie.Emprunter(&HPotter1,&Lecteur1,&Emprunt1);
	Librarie.Retour(&HPotter1,&Lecteur1,&Emprunt1);
	std::cout << HPotter1 << J_Rowling << Lecteur1<<"\n";
	Librarie.Emprunter(&HPotter1, &Lecteur1, &Emprunt1);
	std::vector<Livre> listeJK = Librarie.LivreparAuteur(J_Rowling);
	for (auto it = listeJK.begin(); it != listeJK.end(); it++)
	{
		std::cout << *it << "\n";
	}
	float porcentEmprunt = Librarie.PourcentageLivreEmprunte();
	std::cout << "le pourcentage de livre emprunte est : " << porcentEmprunt << "% \n";
	std::vector<Livre> listelec1 = Librarie.LivreEmprunteParLecteur(Lecteur1);
	for (auto it = listelec1.begin(); it != listelec1.end(); it++)
	{
		std::cout << *it << "\n";
	}
	return 0;
}


