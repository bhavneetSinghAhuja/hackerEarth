/*
 * PRPOTION.cpp
 *
 *  Created on: Oct 8, 2014
 *      Author: bhavneet.ahuja
 *
 *      http://www.codechef.com/OCT14/problems/PRPOTION
 *
 *      Naturally, the magical girl is very good at performing magic. She recently met her master wizard Devu, who gifted her R potions of red liquid,
 B potions of blue liquid, and G potions of green liquid.
 The red liquid potions have liquid amounts given by r[1], ..., r[R] liters.
 The green liquid potions have liquid amounts given by g[1], ..., g[G] liters.
 The blue liquid potions have liquid amounts given by b[1], ..., b[B] liters.
 She want to play with the potions by applying magic tricks on them. In a single magic trick, she will choose a particular color. Then she will pick all the potions of
 the chosen color and decrease the amount of liquid in them to half (i.e. if initial amount
 of liquid is x, then the amount after decrement will be x / 2 where division is integer division, e.g. 3 / 2 = 1 and 4 / 2 = 2).
 Because she has to go out of station to meet her uncle Churu, a wannabe wizard, only M minutes are left for her. In a single minute, she can perform at most one magic
 trick. Hence, she can perform at most M magic tricks.
 She would like to minimize the maximum amount of liquid among all of Red, Green and Blue colored potions. Formally Let v be the maximum value of amount of liquid in any
 potion. We want to minimize the value of v.
 Please help her.
 Input

 First line of the input contains an integer T denoting the number of test cases.
 Then for each test case, we have four lines.
 The first line contains four space separated integers R, G, B, M. The next 3 lines will describe the amount of different color liquids (r, g, b), which are separated by
 space.
 Output

 For each test case, print a single integer denoting the answer of the problem.
 Constraints

 1 ² T ² 1000
 1 ² R, G, B, M ² 100
 1 ² r[i], g[i], b[i] ² 10^9
 Example

 Input:
 3
 1 1 1 1
 1
 2
 3
 1 1 1 1
 2
 4
 6
 3 2 2 2
 1 2 3
 2 4
 6 8
 Output:
 2
 4
 4
 Explanation

 Example case 1. Magical girl can pick the blue potion and make its liquid amount half. So the potions will now have amounts 1 2 1. Maximum of these values is 2. Hence answer is 2.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator (unsigned long long int const &a, unsigned long long int const &b){return a>b;}

struct less_than_key
{
    inline bool operator() (const unsigned long long int& struct1, const unsigned long long int& struct2)
    {
        return (struct1 > struct2);
    }
};

void prpotionUtil(){

	int rCount,gCount,bCount,m;
	scanf("%d %d %d %d", &rCount, &gCount, &bCount, &m);
	vector<unsigned long long int> r, g, b;
	unsigned long long int temp;

	for(int i=0;i<rCount;i++){
		scanf("%llu", &temp);
		r.push_back(temp);
	}

	for(int i=0;i<gCount;i++){
			scanf("%llu", &temp);
			g.push_back(temp);
		}

	for(int i=0;i<bCount;i++){
			scanf("%llu", &temp);
			b.push_back(temp);
		}
	unsigned long long int rMax, gMax, bMax, max;
	int rIndex=0, gIndex=0, bIndex=0, maxIndex=1;

	sort(r.begin(), r.end(), less_than_key());
	sort(g.begin(), g.end(), less_than_key());
	sort(b.begin(), b.end(), less_than_key());

	while(m>0){

		if(r.at(rIndex)>g.at(gIndex)){
			if(r.at(rIndex)>b.at(bIndex))
				maxIndex=1;
			else
				maxIndex=3;
		}

		else{
			if(g.at(gIndex)>b.at(bIndex))
				maxIndex=2;
			else
				maxIndex=3;
		}

		if(rIndex==(rCount-1)&&(gIndex==gCount-1)&&(bIndex==bCount-1)&&(r.at(rCount-1)==0)&&(g.at(gCount-1)==0)&&(b.at(bCount-1)==0)){
			printf("0\n");
			return;
		}

		if(maxIndex==1){
			r[rIndex]=r[rIndex]/2;

		}

	}


}

void prpotion() {

	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
		prpotionUtil();
	return;

}

//int main() {prpotion();return 0;}

