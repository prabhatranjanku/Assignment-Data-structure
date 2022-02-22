#include <iostream>
using namespace std;

int main ()
{
	int a[10][10];
	int i = 0, j = 0, row = 0, col = 0;
 
	cout<<"Enter the order of the matrix (mxn): "<<endl;
	cout<<"where m = number of rows; and "<<endl;
	cout<<"      n = number of columns "<<endl;
	cin>>row;
	cin>>col;
 
	int flag = 0;
 
	cout<<"Enter the elements of the matrix"<<endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin>>a[i][j];
		}
	}
 
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && a[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}
 
	if (flag == 0)
	{
		cout<<"It is a IDENTITY MATRIX"<<endl;
	}
	else
	{
		cout<<"It is NOT an identity matrix"<<endl;
	}
 
	return 0;
}