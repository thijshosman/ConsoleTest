// ConsoleTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	//static_assert(__cplusplus > 199711L, "Program requires C++11 capable compiler");

	using namespace std;
	//printf("hello world\n");
	cout << "hello world\n" << endl;
	cout << "hello world\n" << endl;
	cout << "hello world\n" << endl;
	

	vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(2);

	cout << myvector.size() << endl;

	for (std::vector<int>::iterator itr = myvector.begin(); itr != myvector.end(); ++itr) {
		cout << *itr << endl;
	}

	for (auto x : myvector) // x is read-only
	{
		cout << x;
	}
	
	for (auto& x : myvector) // x is modifiable
	{
		cout << ++x;
	}


	// stroustrup
	const int dmv = 17;
	int var = 17;

	constexpr double max1 = 1.4*dmv;


	return 0;
}


