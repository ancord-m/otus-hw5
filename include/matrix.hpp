#include "cell.h"
#include <vector>

template <typename T, int DefaultValue>
class Matrix
{
	Cell<T> c;

	int m[3][3];
	std::vector<std::vector<int>> mv;
	std::vector<int> vec;

public:

	Matrix()
	{
	/*	for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				m[i][j] = i + j;
			}
		}*/
		vec.push_back(5);
		mv.push_back(vec);


	}

	std::vector<int> operator[](int index_x)
	{
		//return m[index_x];
		//return mv[index_x];
		std::cout << "Overloading []" << std::endl;
		return mv.at(index_x);
	}

	int size(void)
	{
		return 0;
	}
};
