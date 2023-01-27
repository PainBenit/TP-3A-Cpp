#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Cesar.h"
#include "Caesar2.h"
#include "Vigenere.h"

int main()
{
	/*
	BasicEncrypt test;
	test.setPlain("7");
	test.setCypher("42");
	test.encode();

	std::cout << test.getCypher() << std::endl;
	

	Cesar test;
	test.setCypher("ohv vdqjorwv orqjv ghv ylrorqv gh o'dxwrpqh eohvvhqw prq frhxu g'yqh odqjxhxu prqrwrqh.");
	test.decalage(3);
	test.decode();

	Caesar2 test;
	test.setCypher("ohv vdqjorwv orqjv ghv ylrorqv gh o'dxwrpqh eohvvhqw prq frhxu g'yqh odqjxhxu prqrwrqh.");
	test.decalage(34);
	test.decode();*/
	std::vector<int> cle;
	cle.push_back(13);
	cle.push_back(2);
	cle.push_back(5);
	cle.push_back(9);
	cle.push_back(17);
	/*std::string cle = "abcde";*/
	Vigenere test;
	test.setCypher("aaaaa");
	test.setCle(cle);
	test.decode();


	std::cout << "Le message " << test.getCypher() << " dechiffre donne : " << test.getPlain() << std::endl;


	return 0;
}

//ùodif