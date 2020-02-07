#include<iostream>
#include<map>
#include<iterator>
#include<string>

using namespace std;

int main()
{
	//Map object creation
	//2d map
	map<int, map<int, int>> m;

	//to access map value use iterator
	//To access the outer iterator
	map<int, map<int, int>> ::iterator outer_itr=m.begin();

	//To access the outer iterator
	map<int, int> ::iterator inner_itr;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			m[i][j] = i + j;
		}
	}
	//earth and sun

	for (outer_itr = m.begin(); outer_itr != m.end(); outer_itr++)
	{
		cout << outer_itr->first << " : ";
		for (inner_itr = outer_itr->second.begin(); inner_itr != outer_itr->second.end(); inner_itr++)
		{
			cout << inner_itr->first <<" "<< inner_itr->second<<" | ";
		
		}
		cout << endl;
	}


	return 0;
}