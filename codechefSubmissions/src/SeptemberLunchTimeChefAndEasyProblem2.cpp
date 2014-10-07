/*
 * SeptemberLunchTimeChefAndEasyProblem2.cpp
 *
 *  Created on: Sep 28, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void chefAndEasyProblem2(){
	int n, m ,q;
	cin>>n;
	cin>>m;
	cin>>q;
	int a[100][5000];
	int b[100];
	//vector<vector<int> > a;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int level=5001;
	int temp;
	for (int i=0; i<q;i++){
		for(int j=0;j<n;j++){

			cin>>b[j];
		}

		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				if(b[k]<a[l][k]){
					temp=k;
					break;
				}
			}
			if(level>temp)
				level=temp+1;

		}
		cout<<level<<endl;
	}

}

//int main(){chefAndEasyProblem2(); return 0;}
