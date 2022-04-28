#include <iostream>
#include <cmath>

namespace ArrLib {
	void ArrayInit(int size, float arr[])
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = (static_cast<float>(rand())) / 3;
		}

		
	}

	void PrintArr(float arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
	}

	void PosNegCount(float arr[], int size)
	{
		int countPos = 0;
		int	countNeg =0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0) countPos++;
			
			else countNeg++;


		}

		std::cout << countPos << " " << countNeg << std::endl;
	}

}