/*
 * CuttingPaper.cpp
 *
 *Yami is taking a Physics class in her school. She doesn't like Physics and gets bored very fast. As a hyperactive girl, she wants to use this time in a productive manner. So she takes a rectangular sheet of paper and a pair of scissors and decides to cut the paper. While cutting the paper, the following rules are followed

Paper is cut along a line that is parallel to one of the sides of the paper.
Paper is cut such that the resultant dimensions are always integers.
The process stops when all the pieces are squares. What is the minimum number of paper pieces cut by Yami such that all are squares?

Input Format
The first line of the input is number T, the number of test cases.
Each test case contains two space separated integers N and M, the dimensions of the sheet.

Constraints
1<=T<=100
1<=N,M<=100

Output Format
For each testcase, print in a newline the minimum number of squares that can be cut by Yami.

Sample Input

2
1 1
1 2
Sample Output

1
2
Explanation

For the first testcase, the minimum number of squares that can be cut is just 1 ( the original paper )
For the second testcase, the minimum number of squares that can be cut is 2 ( the paper is cut horizontally along the smaller side in the middle ).

 *  Created on: Sep 18, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>

using namespace std;

void cuttingPaperUtil(){

	int count=1;
	int l,b;
	cin>>l;
	cin>>b;
	int temp;
	if(b>l){
		temp=b;
		b=l;
		l=temp;
	}
	while(l!=b){

		l=l-b;
		count++;
		if(b>l){
				temp=b;
				b=l;
				l=temp;
			}
	}
	cout<<count<<endl;
	return;

}
void cuttingPaper(){
		int t;
		cin>>t;
	for(int i=0;i<t;i++)
		cuttingPaperUtil();
	return;
}
int main(){cuttingPaper();return 0;}
