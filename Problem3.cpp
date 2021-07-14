#include <string>
#include <iostream>
using namespace std;

void printInReverseOrder(int x)
	{

		for (int i = x;i > 0;i--)
		{

			cout<<i;

			if (i != 1)
			{
				cout<<", ";
			}

		}
		cout<<"\n";
return;
	}

	 void printInSerialOrder(int x)
	{

		for (int i = 1;i <= x;i++)
		{
			cout<<i;

			if (i != x)
			{
				cout<<", ";
			}

		}
		cout<<"\n";
return;
	}



	int main()
	{
		cout<<"Please provide input for pattern printing";
		
		
		int p = 0;
		cin>>p;
		cout<<"\n";

		for (int i = 0;i < 2*p;i++)
		{

			int numbersToPrint = 0;
			if (i <= p - 1)
			{
				numbersToPrint = i + 1;
			}
			else
			{
				numbersToPrint = p - (i - p + 1);
			}

			if (i % 2 == 0)
			{
				printInSerialOrder(numbersToPrint);

			}
			else
			{
				printInReverseOrder(numbersToPrint);
			}

		}
	}