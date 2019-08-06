#include <iostream>
using namespace std;
//grade函数：分数转换
double grade(double n)
{
       if (n<60) return 0;
	   else if ((n>60||n==60)&&(n<61||n==61)) return 1.3;
	   else if ((n>62||n==62)&&(n<65||n==65)) return 1.7;
	   else if ((n>66||n==66)&&(n<70||n==70)) return 2.0;
	   else if ((n>71||n==71)&&(n<74||n==74)) return 2.3;
	   else if ((n>75||n==75)&&(n<77||n==77)) return 2.7;
	   else if ((n>78||n==78)&&(n<81||n==81)) return 3.0;
	   else if ((n>82||n==82)&&(n<84||n==84)) return 3.3;
	   else if ((n>85||n==85)&&(n<89||n==89)) return 3.7;
	   else if ((n>90||n==90)&&(n<100||n==100)) return 4.0;
} 
//count函数：计算加权分数
double count(double m,double n)
{
   return grade(n)*m;               //调用grade函数
}
//主函数：计算绩点
int main()
{
  double number=0;
  double m,n,p=0;
  int x=0,i;
  cout<<"请输入科目数量："<<endl;
  cin>>x;
  i=0;
  do
  {
	  cout<<"输入分数和学分"<<endl;
      cin>>n>>m;                    //n是分数,m是学分
	  if (n<0||n>100||m<=0)
		  cout<<"输入错误"<<endl;
      else 
	  {
		  p=p+count(m,n);                //调用函数count
          number=number+m;
	      i=i+1;
	  }
  }
  while (i<x);
  cout<<"绩点为："<<p/number<<endl;
  return 0;
}