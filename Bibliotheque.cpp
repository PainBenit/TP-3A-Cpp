#pragma once

#include "Bibliotheque.h"
#include "Auteur.h"
#include "Emprunt.h"
#include "Livre.h"
#include "Lecteur.h"

Bibliotheque::Bibliotheque()
{}

Bibliotheque::Bibliotheque(std::vector<Livre> Liste_Livre, std::vector<Auteur> Liste_Auteur, std::vector<Lecteur> Liste_Lecteur, std::vector<Emprunt> Liste_Emprunt)
	:_Liste_Livre(Liste_Livre), _Liste_Auteur(Liste_Auteur), _Liste_Lecteur(Liste_Lecteur), _Liste_Emprunt(Liste_Emprunt){}

std::vector<Livre> Bibliotheque::getListe_Livre()
{
	return _Liste_Livre;
}
std::vector<Auteur> Bibliotheque::getListe_Auteur()
{
	return _Liste_Auteur;
}
std::vector<Lecteur> Bibliotheque::getListe_Lecteur()
{
	return _Liste_Lecteur;
}
std::vector<Emprunt> Bibliotheque::getListe_Emprunt()
{
	return _Liste_Emprunt;
}

int Bibliotheque::addLivre(Livre book)
{
	int retour = 1;
	try
	{
		_Liste_Livre.push_back(book);
	}
	catch (const std::exception&)
	{
		retour = 0;
	}
	return retour;
}
int Bibliotheque::addAuteur(Auteur writter)
{
	int retour = 1;
	try
	{
		_Liste_Auteur.push_back(writter);
	}
	catch (const std::exception&)
	{
		retour = 0;
	}
	return retour;
}
int Bibliotheque::addLecteur(Lecteur reader)
{
	int retour = 1;
	try
	{
		_Liste_Lecteur.push_back(reader);
	}
	catch (const std::exception&)
	{
		retour = 0;
	}
	return retour;
}
int Bibliotheque::Emprunter(Livre book,Lecteur reader,Date date)
{
	int retour = 1;
	bool dispo = book.isdispo();
	try
	{
		if (dispo == true)
		{
			book.setdispo();
			Emprunt pret(date,reader,book);
			_Liste_Emprunt.push_back(pret);
			book.addID(reader.getID());
			reader.addEmprunt(book.getISBN());
		}
	}
	catch (const std::exception&)
	{
		retour = 0;
	}
	return retour;
}

int Bibliotheque::Retour(Livre book, Lecteur reader, Date date)
{
	int retour = 1;
	try
	{
		for (int it = 0; it < _Liste_Emprunt.size(); it++)
		{
			if (_Liste_Emprunt[it].getEmprunter() == book.getISBN() && _Liste_Emprunt[it].getEmprunteur().getID() == reader.getID() && _Liste_Emprunt[it].getDateEmprunt() == date.getArrayDate())
			{
				auto iterator = _Liste_Emprunt.begin()+it-1;
				_Liste_Emprunt.erase(iterator);
				book.setdispo();
			}
		}
	}
	catch (const std::exception&)
	{
		retour = 0;
	}
	return retour;
}

std::vector<Livre> Bibliotheque::LivreparAuteur(Auteur author)
{
	std::vector<Livre> retour;
	for (int i = 0; i < _Liste_Livre.size(); i++)
	{
		Auteur auteuratest = _Liste_Livre[i].getAuteur();
		if (auteuratest.getDateNaissance() == author.getDateNaissance() && auteuratest.getFullname() == author.getFullname() && auteuratest.getID() == author.getID())
		{
			retour.push_back(_Liste_Livre[i]);
		}
	}
	return retour;
}

float Bibliotheque::PourcentageLivreEmprunte()
{
	float retour;
	retour = (_Liste_Emprunt.size() / _Liste_Livre.size()) * 100;
	return retour;
}

std::vector<Livre> Bibliotheque::LivreEmprunteParLecteur(Lecteur reader)
{
	std::vector<Livre> retour;
	for (int i = 0; i < _Liste_Emprunt.size(); i++)
	{
		Lecteur lecteuratest = _Liste_Emprunt[i].getEmprunteur();
		if (lecteuratest.getListe_Emprunt() == reader.getListe_Emprunt() && lecteuratest.getFullname() == reader.getFullname() && lecteuratest.getID() == reader.getID())
		{
			retour.push_back(_Liste_Livre[i]);
		}
	}
	return retour;
}
