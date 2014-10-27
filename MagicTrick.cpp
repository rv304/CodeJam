#include <iostream>
using namespace std;

int main() {
	int no,no1,i,j;
	int a[4][4];
	int m;
	cin>>m;
	int t=1;
	while(t<=m)
	{
	cin>>no;
	for(i=0;i<4;i++)
	{
		
	
	for(j=0;j<4;j++)
	cin>>a[i][j];
	//cin>>"\n";
	}
	int b[4];
	for(j=0;j<4;j++)
	
	{
		b[j]=a[no-1][j];
	//cout<<b[j];
	}
	cin>>no1;
	for(i=0;i<4;i++)
	{
		
	
	for(j=0;j<4;j++)
	cin>>a[i][j];
	//cin>>"\n";
	}
	int c[4];
	for(j=0;j<4;j++)
	
	{
		c[j]=a[no1-1][j];
	//cout<<b[j];
	}
	int flag=0;
	int flag2=0;
	
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
		if(b[i]==c[j])
		flag2++;
	}
	if(flag2>1)
	cout<<"Case#"<<t<<" Bad Magician!\n";
	else if(flag2==1)
	{
	
	for(i=0;i<4;i++)
	{
	for(j=0;j<4;j++)
	{
		if(b[i]==c[j])
		{
			cout<<"Case#"<<t<<" "<<b[i]<<"\n";
			flag=1;
			break;
		}
	}
	if(flag==1)
	break;
	
	}
	}
	if(flag2==0)
	cout<<"Case#"<<t<<" Volunteer Cheated!"<<"\n";
	// your code goes here
	t++;
	}
	
	return 0;
}