
#include <iostream>
#include "MyLib.h"

//подключил тут для удобства
using namespace ArrLib;

#define NumberTure(border, number) ((number>=0&& number<border)? std::cout<<"true" : std::cout<<"false")

//наконец-то пригодился этот метод обмена значениями переменных :)
#define SwapINT(a, b) {               \
                       (a) ^= (b); \
                       (b) ^= (a); \
                       (a) ^= (b); \
                   }
#define SIZE1 6

int main()
{
    int const size = 8;
    float arr[size];
   

    ArrayInit(size, arr);
    PrintArr(arr, size);

    std::cout << std::endl;

    PosNegCount(arr, size);

   

    int number;
    int border;

    std::cout << "Enter a number: ";
        std::cin >> number;

    std::cout << "Enter a border number: ";
        std::cin >> border;

        NumberTure(border, number);

        std::cout << std::endl;

    int arr1[SIZE1];

    for (int i = 0; i < SIZE1; i++)
    {
        std::cout << "Enter and arry element: ";
            std::cin >> arr1[i];
    }

    std::cout << std::endl;

    for (int i = 0; i < SIZE1; i++)
    {
        std::cout << arr1[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < SIZE1 -1; i++) {

        for (int j = 0; j < SIZE1 - i-1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                SwapINT(arr1[j], arr1[j + 1]);
            }
        }
    }

    for (int i = 0; i < SIZE1; i++)
    {
        std::cout << arr1[i] << " ";
    }


}


