#include<iostream>
#include "Lecteur.h"
#include "Livre.h"
#include "Date.h"

class Emprunt
{
public:

	Emprunt(Date dateEmprunt, Lecteur Emprunteur, Livre Emprunter);

private:

	Date _dateEmprunt;
	Lecteur _Emprunteur;
	Livre _Emprunter;
};
