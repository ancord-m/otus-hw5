#ifndef CELL_H
#define CELL_H

template <typename T>
struct Cell
{
	unsigned int x;
	unsigned int y;
	T value;
};

#endif