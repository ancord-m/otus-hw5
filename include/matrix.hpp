#include "cell.h"
#include <vector>
#include <map>

template <typename T, int DefaultValue>
class Matrix
{
	Cell<T> c;


	struct Row
	{
		std::map<int, T> row;

		T& operator[](int col_key)
		{
			return row[col_key];
		}

	//	Row & operator=(int new_value)
		
			//*this->insert(std::make_pair(4, new_value));
		
	};

	int m[3][3];
	std::vector<std::vector<int>> mv;
	std::vector<int> vec;

	std::map<int, Row> mtx;

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

	Row & operator[](int row_key)
	{
		return mtx[row_key];
	}
/*
	std::vector<int> operator[](int index_x)
	{
		//return m[index_x];
		//return mv[index_x];
		std::cout << "Overloading []" << std::endl;
		return mv.at(index_x);
	}
*/
	int size(void)
	{
		return mtx.size();
	}
};
