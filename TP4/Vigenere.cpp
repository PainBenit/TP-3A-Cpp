#include "Vigenere.h"
#include <iostream>
#include <vector>

Vigenere::Vigenere(){}

//modif
void Vigenere::setCle(std::vector<int> cle)
{
	_cle = cle;
}

void Vigenere::decode()
{
	int i;
	int l = _cypher.length();
	int test = 0;
	int decompte = 0;


	for (i = 0; i < l; i++)
	{
		while (test != 1)
		{
			if (decompte > 25)
			{
				_plain = _plain + _cypher[i];
				test = 1;
			}
			else if (_cypher[i] == _Alphabet[decompte])
			{
				decompte = (decompte - _cle[i % _cle.size()] + 26) % 26;
				_plain = _plain + _Alphabet[decompte];
				test = 1;

			}

			decompte += 1;
		}


		decompte = 0;
		test = 0;
	}
}

void Vigenere::encode()
{
	int i;
	int l = _plain.length();
	int test = 0;
	int decompte = 0;


	for (i = 0; i < l; i++)
	{
		while (test != 1)
		{
			if (decompte > 25)
			{
				_cypher = _cypher + _plain[i];
				test = 1;
			}
			else if (_plain[i] == _Alphabet[decompte])
			{
				decompte = (decompte + _cle[i % _cle.size()]) % 26;
				_cypher = _cypher + _Alphabet[decompte];
				test = 1;

			}

			decompte += 1;
		}


		decompte = 0;
		test = 0;
	}
}