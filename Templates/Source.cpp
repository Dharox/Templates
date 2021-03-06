/*
Daniel Breslin
5/2/2022
Templates
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template<typename T>
T Half(T num)
{
	T answer;

	answer = num / 2;

	return answer;
}

int Half(int num)
{
	float unrounded;
	int answer;

	unrounded = static_cast<float>(num) / 2.0f;

	answer = round(unrounded);

	return answer;
}

int main()
{
	double a = 37.0;
	float b = 18.5f;
	int c = 17;

	cout << Half(a) << endl;
	cout << Half(b) << endl;
	cout << Half(c) << endl;


	return 0;
}