#pragma once
class Block sealed
{

	

public:
	char hash[64]; // hash des autres champs
	char previous_hash[64];
	unsigned int nonce;
	int num; // numero du bloc, commence a zero
	double tx1; //  transaction du bloc
	double tx0; // transaction du mineur (coinbase)
	Block();
	virtual ~Block();
};

