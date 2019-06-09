#include "cell.h"
#include <vector>
#include <map>

template <typename T, int DefaultValue>
class Matrix
{
	Cell<T> c;

	struct Row
	{
		int defVal = DefaultValue;
		std::map<int, T> row;

		T& operator[](int col_key)
		{
			if(row.find(col_key) == row.end())
			{
				std::cout << "Empty col" << std::endl;
			}

			return row[col_key];
		}

		Row& operator=(T new_value)
		{
			//std::cout << __PRETTY_FUNCTION__ << std::endl;
			//*this->insert(std::make_pair(4, new_value));
		}
		
		int size(void)
		{
			return row.size();
		}

	};


	std::map<int, Row> mtx;

public:

	Matrix()
	{

	}

	Row & operator[](int row_key)
	{
		if(mtx.find(row_key) == mtx.end())
		{
			std::cout << "Empty row" << std::endl;
		}

		return mtx[row_key];
	}

	int size(void)
	{
		int size = 0;

		for(auto m : mtx)
		{
			size += m.second.size();
		}

		return size;
	}
};
