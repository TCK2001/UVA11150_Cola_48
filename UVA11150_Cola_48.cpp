/*
Sample Input
8
Sample Output
12
*/
 
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int in;
	while(cin>>in)
	{
		int cola=0; 
		cola=in; //우선 최소한 마실수 있는 콜라 수는 내가 입력한 값; 
		while(in>=3) //만약 입력한 값이 3병이거나 이상이면; 
		{
			cola=cola+in/3; //콜라는 빈병3개에 온전한 한병으로 바꿀수 있으니 나누기3 한 값을 더함; 
			in=in/3+in%3; //in에는 빈병의 값을 저장 시킴; 
			if(in==2) //문제에서 말하다 시피 만약 2병이 남았으면 친구껄 한병빌려 3병으로 채워서 온전한 한병으로 바꿈; 
			{
				in++;
			}
		}
		cout<<cola<<endl; //최대 콜라 마실수 있는 수 출력; 
	} 

return 0;
}

