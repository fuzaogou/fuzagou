#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int c,s;//�����ܳ�c�����s 
float a,b,delta;//���ڶ��η��̵ļ��� 
cin>>c>>s;//��������볤�� 
delta = (((c*c)/4)-4*s);

if (delta>=0)//�ж���� 
{
	if(delta==0)
	{
		
		 a=b=((c/2)/2*a);
		
	}
	else
	{
		
	    b=(((c/2)+sqrt(delta))/2);
    	a=(((c/2)-sqrt(delta))/2);
	    	
	}
	cout<<"���εĳ��Ϳ�ֱ���"<<b<<"��"<<a; 
}

  else
  {
	
	cout<<"�����ҵ������ľ���";
  }
return 0;
}
