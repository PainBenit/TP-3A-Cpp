#pragma once
#include "Auteur.h"
#include "Emprunt.h"
#include "Livre.h"
#include "Lecteur.h"

class Bibliotheque
{
public:
	Bibliotheque();
	Bibliotheque(std::vector<Livre> Liste_Livre, std::vector<Auteur> Liste_Auteur, std::vector<Lecteur> Liste_Lecteur, std::vector<Emprunt> Liste_Emprunt);
	std::vector<Livre> getListe_Livre();
	std::vector<Auteur> getListe_Auteur();
	std::vector<Lecteur> getListe_Lecteur();
	std::vector<Emprunt> getListe_Emprunt();
	int addLivre(Livre book);
	int addAuteur(Auteur writer);
	int addLecteur(Lecteur reader);
	int Emprunter(Livre* book, Lecteur* reader,Date* date);
	int Retour(Livre* book, Lecteur* reader, Date* date);
	std::vector<Livre> LivreparAuteur(Auteur author);
	float PourcentageLivreEmprunte();
	std::vector<Livre> LivreEmprunteParLecteur(Lecteur reader);

private:
	std::vector<Livre> _Liste_Livre;
	std::vector<Auteur> _Liste_Auteur;
	std::vector<Lecteur> _Liste_Lecteur;
	std::vector<Emprunt> _Liste_Emprunt;
};