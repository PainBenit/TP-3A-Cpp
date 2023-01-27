#include "Caesar2.h"
#include <iostream>
#include "Encrypt.h"

Caesar2::Caesar2(){}


void Caesar2::decalage(int nb)
{
	_nombre = nb;
}

void Caesar2::decode()
{
	int i;
	int ascii;
	int l = _cypher.length();
	for (i = 0; i < l; i++)
	{
		ascii = int(_cypher[i]);
		ascii = (ascii - _nombre + 127)%127;

		_plain += char(ascii);
	}
}

//modif
void Caesar2::encode()
{
	int i;
	int ascii;
	int l = _plain.length();
	for (i = 0; i < l; i++)
	{
		ascii = int(_plain[i]);
		ascii = (ascii + _nombre) % 127;

		_cypher += char(ascii);
	}
}