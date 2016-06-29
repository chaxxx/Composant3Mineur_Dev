#pragma once
#include "Block.h"
#include <stdio.h>
#include <string>

using namespace std;

class Hacheur sealed
{

public:
	string Hash(Block);
	Hacheur();
	virtual ~Hacheur();
};

