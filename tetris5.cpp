#include<iostream>
#include<cstdlib>
#include<ctime>
#include "genMino.h"

using namespace std;

int main()
{
	srand(time(NULL));
	Mino * mino_ptr;
	for(int i = 0; i < 3; ++i)
	{
		mino_ptr = genMino();
		mino_ptr->paint();
		
		delete mino_ptr;
	}

return 0;
}
