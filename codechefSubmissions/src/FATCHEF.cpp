/*
 * FATCHEF.cpp
 *
 *  Created on: Oct 4, 2014
 *      Author: bhavneet.ahuja
 *
 *      Our chef Remy ate all the delicious food he made. As a result, he has become really fat :). Chef's assistant Linguini has taken up the herculean task of bringing back chef Remy to shape.
Linguini has built a fence which has N planks in a straight line. The planks are numbered 1 to N from left to right. In front of M of these N planks, he has put a bucket of paint. The paints may be of different colors. Each color is represented by any uppercase letter (A-Z). Chef Remy needs to paint the fence. He uses his painting brush to paint the fence.
Chef Remy starts the task by choosing a plank which has a bucket of paint in front of it and dips his brush in the bucket. He starts walking randomly along the straight fence passing the planks. He never moves out of the fence. Note that walking randomly along a fence means that Remy keeps walking all the time along his current direction. He can change his direction any time he wishes. Moving along a straight fence has just two directions, forward and backward.
Linguini has devised the following recipe for painting the fence.
Each bucket has an infinite supply of paint.
The brush can carry paint of a single color at any time.
When Remy passes a paint bucket, the brush acquires the color in the bucket first.
Every plank that Remy passes in his random walk must be colored with the color in the brush. A plank will be colored completely.
A plank can be colored multiple times. A plank's color is the latest color it is painted with.
A fence coloring is complete when each plank is painted with some color. Linguini is watching Remy dance around with colors. He wonders how many different complete fence colorings will he be able to see. Two fence colorings are different if there is atleast one plank numbered x whose color differs in both the colorings. Find out the number of different complete fence colorings modulo 1000000009.
Input

First line contains T, the number of test cases. T test cases follow. The first line of each case contains N and M separated by a space. Next M lines follow each of the form x and y separated by a space. Here x is the color in the bucket which is placed at plank numbered y.
Constraints

1 <= T <= 10
1 <= N <= 100000
1 <= M <= N
x will be an uppercase letter between A to Z
1 <= y <= N
Output

The number of different complete fence colorings modulo 1000000009 for each case on a new line.
Example

Input:

3
2 1
R 1
3 1
A 2
6 2
A 2
B 6

Output:
1
1
4
 */

#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>

#define MOD 1000000009
using namespace std;

void clear ()
{
 while ( getchar() != '\n' );
}

unsigned long long int  prod(unsigned long long int a, unsigned long long int  b)
   {
       unsigned long long int  q = a * b;
       if(q < a || q < b)
       {
           unsigned long long int x=0,y=a%MOD;
           while(b > 0)
           {
               if(b%2 == 1)
               {
                   x = (x+y)%MOD;
               }
               y = (y*2)%MOD;
               b /= 2;
           }
           return (x%MOD);
       }
       else
       {
           return q % MOD;
       }
     return 1;
   }

unsigned long long int productUtil(unsigned long long int p, unsigned long long int diff){

	if(p>MOD){
		p=p%MOD;
	}
	p=p*diff;

	if(p>MOD){
			return p%MOD;
		}
	return p;
}

void fatchefUtil(){

	unsigned long long int n, m;
	scanf("%llu",&n);
	scanf("%llu",&m);
	//cin>>n;
	//cin>>m;
	char temp1;
	unsigned long long int temp2;
	vector< pair < char, unsigned long long int> > a;
	for(unsigned long long int i=0;i<m;i++)
	{	clear();
		scanf("%c",&temp1);
		scanf("%llu",&temp2);
		//cin>>temp1;
		//cin>>temp2;
		a.push_back(make_pair(temp1, temp2));
	}
	unsigned long long int product=1;

	for(unsigned long long int i=0;i<(m-1);i++){

		if(a.at(i).first!=a.at(i+1).first){
			product=prod(product, a[i+1].second-a[i].second);
			//product=(product*(a[i+1].second-a[i].second))%MOD;
		}
	}
	//cout<<product<<endl;
	printf("%llu\n", product);


}

void fatchef(){

	int t;
	//cin>>t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
		fatchefUtil();
}

int main(){fatchef();return 0;}

