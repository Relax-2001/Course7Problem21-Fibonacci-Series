#include <iostream>
#include <iomanip>
using namespace std;

void PrintFibonacciUsingLoop(short Length)
{
	short Prev1 = 1, Prev2 = 0, FebNumber = 0;

	cout << "1 ";

	for (short i = 2 ; i <= Length ; i++)
	{
		FebNumber = Prev1 + Prev2;

		cout << FebNumber << " ";

		Prev2 = Prev1;
		Prev1 = FebNumber;
		
	}

}

int main()
{

	PrintFibonacciUsingLoop(10);


}

