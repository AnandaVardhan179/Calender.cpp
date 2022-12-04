/* A program to find day of a given date */
#include <bits/stdc++.h>
using namespace std;

int dayofweek(int d, int m, int y)
{
	static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
	//y-=0;
    if(y%4==0){
			t[1]=1;
	}
	int result=( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
	
	return result;
}


int main()
{	
	int x,v,z;
	cout<<"Enter the date in [dd mm yyyy] form"<<endl;
	cin>>x>>v>>z;
	int day = dayofweek(x,v,z);
	switch(day){
		case 0: 
			cout << "Sunday"<<endl;
			break;
		case 1:
			cout << "Monday"<<endl;
			break;
		case 2:
			cout << "Tuesday"<<endl;
			break;
		case 3:
			cout << "Wednesday"<<endl;
			break;
		case 4:
			cout << "Thursday"<<endl;
			break;
		case 5:
			cout << "Friday"<<endl;
			break;
		case 6:
			cout << "Saturday" <<endl;
			break;
			
					
				}
			
	return 0;
}
