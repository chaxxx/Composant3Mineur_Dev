#include "pch.h"
#include "BlockSaver.h"

//Enregistre le Block dans le composant 1 (interface fichier) si le nombre de 0 du hash obtenu = difficult�
bool BlockSaver::saveBlock(Block b)
{
	string hash = this->mineur.SHA(b, hacheur);
	// si diffult� = nombre de zero du hash on fait appel � addBlocks du composant 1
	if (mineur.check_diff(hash,mineur.difficulte)){
		IF.addBlock(b);
	}

	// Si nombre de 0 du hash != difficult� on incr�mente le nonce du block et on fait appel encore une fois le hash et le save
	else {
		b.nonce++;
		mineur.SHA(b, hacheur);
		BlockSaver::saveBlock(b);
	}

	
	return false;
}

BlockSaver::BlockSaver()
{
}


BlockSaver::~BlockSaver()
{
}
