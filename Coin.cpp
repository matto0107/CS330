// Coin.cpp
// John (Jack) Johnson, Jamie Veals
//------------------------------------------------------------
// include header file Coin.h
#include "Coin.h"
// include header file Scene.h
#include "Level.h"
//------------------------------------------------------------
void Coin::draw()
{
	
	glColor3ub(255, 255, 0);
	int i;
	for(i=0;i<4;++i){
		glBegin(GL_POLYGON);
		glVertex2d(left(),bottom());
        glVertex2d(right(),bottom());
        glVertex2d(right(),top());
        glVertex2d(left(),top());
		
		glEnd();
	}
	
}


