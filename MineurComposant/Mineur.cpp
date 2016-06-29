#include "pch.h"
#include "Mineur.h"
#include "Hacheur.h"

// Comporte les m�thodes li�s � l'op�ration Miner un bloc
Mineur::Mineur()
{



}

bool Mineur::test()
{

	return false;
}

/*Applique le hashage sur le block b avec le hasheur h et retourne un string*/
string Mineur::SHA(Block b, Hacheur h)
{
	h.Hash(b);
	return string();
}

//Retourne le block depuis le Wallet selon sa position

string Mineur::miner( Block b, Hacheur h)
{
	return SHA(b, h);
}


// Verifie si la difficult� (nombre de z�ro) correspond au hash du block 
bool Mineur::check_diff(string hash, int difficulte)
{

	int n = std::count(hash.begin(), hash.end(), '0');


	return n== difficulte;
}
