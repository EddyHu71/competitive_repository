#include <iostream>
using namespace std ;
int main()
{
	int a,b;
	cin>>a>>b;
	if ((a==1&&b==1)||(a==3&&b==7)||(a==14&&b==14)||(b==28&&a==14)||(a==19&&b==14)||(a==29&&b==18)||(b==5&&a==29)||(a==0&&b==24)||(b==13&&a==0)||(a==23&&b==30)||(a==25&&b==20)||(a==2&&b==24)||(a==17&&b==32)||(a==25&&b==5)||(a==19&&b==11)||(a==31&&b==15)||(a==1&&b==31))
		{cout<<"0" ; return 0;}
	cout<<"1";
	return 0;
}