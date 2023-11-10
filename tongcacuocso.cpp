#include <iostream>
using namespace std;

int main(){
	int n, tong, k ,a[k];
	do {
		cout << " nhap n voi so gioi han gom  5 chu so\n";
		cin >> n ;
		if (n < 0 || n > 99999 )
			{  cout << "nhap lai\n" ;
		
			} 
			}
	while(n < 0 || n > 99999);
			 
			 
	cout << "so ban da nhap la: \n" << n << endl ;
			
	for (int i = 1; i <= n ; i ++)
	{ 
			if(n % i == 0)
			{           tong +=i;
			            a[k] = i;
						cout << "uoc so la \n" << a[k] << " " <<endl;
			} 
	}
		
	cout <<"tong cua cac uoc so la\n:";
	cout << tong << endl;
			
}