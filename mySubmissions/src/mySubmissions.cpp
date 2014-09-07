//Practice- http://www.hackerearth.com/problem/algorithm/who-wants-to-be-a-millionaire-7/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;

	for(int i=0; i<t; i++){
		double n;
		cin>>n;
		printf("%0.6lf\n", (n-1)/n);
	}
	return 0;
}
