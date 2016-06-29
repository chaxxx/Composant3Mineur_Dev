#pragma once

#include "Wallet.h"
#include "Block.h"
#include "Hacheur.h"



class Mineur sealed
{
public:
	int difficulte;
	Mineur();
	bool test();
	string SHA(Block,Hacheur);
	string miner(Block b, Hacheur h);
	bool check_diff(string, int);
};

