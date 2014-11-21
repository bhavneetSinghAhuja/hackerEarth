///*
// * TicTacToe.cpp
// *
// *  Created on: Nov 1, 2014
// *      Author: bhavneet.ahuja
// */
//
#include <iostream>
unsigned long long int mod=1000000007;

using namespace std;

unsigned long long int russianPeasant(unsigned long long int a, unsigned long long int b)
{
	unsigned long long int res = 0;  // initialize result

    // While second number doesn't become 1
    while (b > 0)
    {
         // If second number becomes odd, add the first number to result
         if (b & 1)
             res = res + a;

         // Double the first number and halve the second number
         a = a << 1;
         b = b >> 1;
     }
     return res%mod;
}
unsigned long long int calMin(unsigned long long int n){

	//return ((n*(n-1)*(n-1))/4)%mod;
	return russianPeasant(russianPeasant(n,n-1),n-1)/4;
}
unsigned long long int calMax(unsigned long long int n){

	//return ((n*(n-1)*(2*n-1))/6)%mod;
	return russianPeasant(russianPeasant(n,n-1),2*n-1)/6;
}

void tttUtil(){
	unsigned long long int n;
	cin>>n;
	cout<<calMin(n)<<" "<<calMax(n)<<endl;
}
void ttt(){
	long int t;
	cin>>t;
	for(long int i=0;i<t;i++){
		tttUtil();
	}
}
int main(){ttt();return 0;}

