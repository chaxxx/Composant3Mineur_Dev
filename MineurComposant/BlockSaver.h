#pragma once
#include "Block.h"
#include "Mineur.h"
#include "Hacheur.h"
#include "InterfaceFichier.h"

class BlockSaver sealed
{
public:
	Mineur mineur;
	Hacheur hacheur;
	InterfaceFichier IF;
	bool saveBlock(Block);
	BlockSaver();
	virtual ~BlockSaver();
};

