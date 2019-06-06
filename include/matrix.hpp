#include "cell.h"

template <typename T, int DefaultValue>
class Matrix
{
	Cell<T> c;

	int m[3][3];

public:

	Matrix()
	{
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				m[i][j] = i + j;
			}
		}
	}

	const int * operator[](int index_x)
	{
		return m[index_x];
	}

	int size(void)
	{
		return 0;
	}
};
