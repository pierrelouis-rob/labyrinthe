#ifndef __Cell_H__
#define __Cell_H__
#include <cstddef>


/*#include <math.h>
#include <list>
#include <cstdlib> 
#include <iostream> 
#include <vector>
#include <unistd.h>
#include "vibes.h"*/ 



using namespace std ;

class Cell {
public:
	Cell();
	Cell(int x, int y);
	int m_x = 0;
 	int m_y = 0;
	int m_nb_neighb = 0;
	Cell **m_neighb = NULL;
	void add_neighb(Cell *c);
	void add_neighb(Cell *c1, Cell *c2);
	bool m_displayed = false;



};

#endif
