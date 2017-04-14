/******************************************/
/* UVa 10071 Back to High School Physics  */
/* Author: WootDylan3                     */
/* Date: 2017/04/14                       */
/* Time Limit:                            */
/******************************************/


/*
Description
A particle has initial velocity and acceleration. If its velocity after certain time is v then what will its displacement be in twice of that time?

Input
The input will contain two integers in each line. Each line makes one set of input. These two integers denote the value of v (−100 ≤ v ≤ 100) and t (0 ≤ t ≤ 200) (t means at the time the particle gains that velocity)

Output
For each line of input print a single integer in one line denoting the displacement in double of that time.

--------------------------------------------------------------------------------

Sample Input
0 0
5 12

Sample Output
0
120

--------------------------------------------------------------------------------
*/

/* C++ */
/*
v'=v+at
x=vt+1/2at^2

v=0
-> v'=at
-> x=1/2at^2

if t->2t
a=v/t
x=1/2a(2t)^2
->x=1/2*v/t*(4t^2)
->x=2vt
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b){
		cout << 2*a*b << endl;
	}
}