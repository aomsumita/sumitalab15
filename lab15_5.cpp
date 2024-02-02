#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *, int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a, &b, &c, &d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d)
{
	int arr[] = {*a, *b, *c, *d};
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; i++)
	{
		int random = rand() % n;
		swap(arr[i], arr[random]);
	}

	*a = arr[0];
	*b = arr[1];
	*c = arr[2];
	*d = arr[3];
}