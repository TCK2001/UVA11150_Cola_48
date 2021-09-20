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
		cola=in; //�켱 �ּ��� ���Ǽ� �ִ� �ݶ� ���� ���� �Է��� ��; 
		while(in>=3) //���� �Է��� ���� 3���̰ų� �̻��̸�; 
		{
			cola=cola+in/3; //�ݶ�� ��3���� ������ �Ѻ����� �ٲܼ� ������ ������3 �� ���� ����; 
			in=in/3+in%3; //in���� ���� ���� ���� ��Ŵ; 
			if(in==2) //�������� ���ϴ� ���� ���� 2���� �������� ģ���� �Ѻ����� 3������ ä���� ������ �Ѻ����� �ٲ�; 
			{
				in++;
			}
		}
		cout<<cola<<endl; //�ִ� �ݶ� ���Ǽ� �ִ� �� ���; 
	} 

return 0;
}

