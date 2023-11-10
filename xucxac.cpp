#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	for (int i = 0; i < 7; i++)
	{
		cout << rand() % 6 + 1 <<"";		}


	
}