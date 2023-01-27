#include "Encrypt.h"
#include <iostream>



Encrypt::Encrypt()
{}

std::string Encrypt::getPlain()
{
	return _plain;
}

std::string Encrypt::getCypher()
{
	return _cypher;
}

void Encrypt::setPlain(std::string plain)
{
	_plain = plain;
}

void Encrypt::setCypher(std::string cypher)
{
	_cypher = cypher;
}




