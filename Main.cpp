#include<iostream>
#include<time.h>
#include<vector>
#include<iomanip>
using namespace std;
void insertionSort(int a[], int size);
void main(){
	const int size = 20;
	const int max = 50;
	int random[max];
	for (int i = 0; i<max; i++)
		random[i] = i;
	srand(time(0));
	int a[size];
	for (int i = 0; i<size; i++)
	{
		do{
			int address = rand() % max;
			a[i] = random[address];
			random[address] = NULL;
		} while (a[i] == NULL);
	}

	cout << "-------------------------------------------------------------------------------" << endl;
	cout << endl << "\t\t\t\tInsertion Sort" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "| Original |";
	for (int i = 0; i<size; i++)
		cout << setw(3) << a[i];
	cout << " | PM |" << endl << "-------------------------------------------------------------------------------" << endl;
	insertionSort(a, size);

}
void insertionSort(int a[], int size){
	int j;

	for (int p = 1; p<size; p++)
	{
		cout << "|after P=" << setw(2) << p << "|";
		int tmp = a[p];
		int i = 0;
		for (j = p; j>0 && tmp<a[j - 1]; j--)
		{
			a[j] = a[j - 1];
			i++;
		}
		a[j] = tmp;
		for (int i = 0; i<size; i++)
			cout << setw(3) << a[i];
		cout << " | " << setw(2) << i << " |" << endl;

	}
	cout << "-------------------------------------------------------------------------------" << endl;

}