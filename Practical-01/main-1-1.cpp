#include <iostream>
using namespace std;
extern int sum_array(int*, int);
int main(void)
{
	int z[3]={1,2,3};
	int result=sum_array(z,3);
	cout<<result<<endl;
	return 0;
}