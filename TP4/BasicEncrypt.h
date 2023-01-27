#pragma once
#include <iostream>

class BasicEncrypt
{
public:
	BasicEncrypt();

	void encode();
	void decode();

	std::string getPlain();
	std::string getCypher();

	void setPlain(std::string plain);
	void setCypher(std::string cypher);


protected:

	std::string _plain;
	std::string _cypher;



};

