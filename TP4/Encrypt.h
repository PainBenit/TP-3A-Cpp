#pragma once
#include <iostream>

class Encrypt
{
public:

	Encrypt();

	virtual void encode() =0;
	virtual void decode() =0;

	std::string getPlain();
	std::string getCypher();

	void setPlain(std::string plain);
	void setCypher(std::string cypher);

protected:

	std::string _plain;
	std::string _cypher;
};
//modif

