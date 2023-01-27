#include "BasicEncrypt.h"
#include <iostream>



BasicEncrypt::BasicEncrypt()
{}

std::string BasicEncrypt::getPlain()
{
	return _plain;
}

std::string BasicEncrypt::getCypher()
{
	return _cypher;
}

void BasicEncrypt::setPlain(std::string plain)
{
	_plain = plain;
}

void BasicEncrypt::setCypher(std::string cypher)
{
	_cypher = cypher;
}

void BasicEncrypt::encode()
{
	_cypher = _plain;
}

void BasicEncrypt::decode()
{
	_plain = _cypher;
}
