#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));

	int a[20];
	cout << "Part a: " << endl;
	for(int i=0;i<20;i++){
		a[i]=rand() % (20-0+1) - 0;
	}
	for(int i=0;i<20;i++){
        cout << a[i] << " ";
	}
	cout << "\nPart b: "<<endl;
	int b;
	b=rand() % (100-0+1);
	cout << b;
	int d[100];
	cout << "\nPart d: " << endl;
	for(int i=0;i<100;i++){
		d[i]=rand() % (100-0+1) - 0;
	}
    for(int i=0;i<100;i++){
        cout << d[i] << " ";
    }
    cout << "\nPart e: "<<endl;
	for(int i=0;i<100;i++)
	{
		for(int j=i+1;j<100;j++)
		{
			if(d[i]>d[j])
			{
				int temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(int i=0;i<100;i++)
	cout << d[i] << " ";

	cout << "\nPart f: "<<endl;
	for(int i=0;i<100;i++)
	{
		for(int j=i+1;j<100;j++)
		{
			if(d[i]<d[j])
			{
				int temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(int i=0;i<100;i++)
	cout << d[i] << " ";
}
