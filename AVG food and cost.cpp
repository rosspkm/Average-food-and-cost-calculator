#include "pch.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//counts number of lines
	for (int lines = 8; lines > 0; lines--)
	{
		//counts number of stars
		for (int star = lines; star > 0; star--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

output
********
*******
******
*****
****
***
**
*

Problem 2
// Ross Miller Lab 1 

#include "pch.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string name;
	ifstream file;
	double price;
	int food;
	char hookbill;
	double totalprice = 0;
	double averageprice = 0;
	double totalfood = 0;
	double averagefood = 0;
	int numofbirds = 0;
	//opens file
	file.open("BIRD.txt");

	//check if file is open
	if (!file)
	{
		cout << "ERROR" << endl;
	}
	//header for output
	cout << left << setw(20) << "BIRD" << setw(20) << "PRICE" << setw(20) << "FOOD" << setw(20) << "HOOKBILL" << endl;
	cout << "---------------------------------------------------------------" << endl;
	//print information from file
	while (file >> name >> price >> food)
	{
		//calculate if hookbill is small or large
		if (food >= 15)
			hookbill = 'L';
		else
			hookbill = 'S';
		//prints info
		cout << setw(20) << name << setw(20) << price << setw(20) << food << setw(20) << hookbill << endl;
		//calculates total price
		totalprice += price;
		//calculates total food
		totalfood += food;
		//counts number of birds
		numofbirds++;

	}
	//calculates averages 
	averageprice = totalprice / numofbirds;
	averagefood = totalfood / numofbirds;
	//prints averages
	cout << "The average price is: " << averageprice << endl;
	cout << "The average food is: " << averagefood << endl;



	//closes file
	file.close();

	system("pause");
	return 0;
}