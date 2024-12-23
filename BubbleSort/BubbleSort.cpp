// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include "BubbleSort.h"
using namespace std;

int main()
{
	
		srand(time(0));
	
	
		cout << "Welcome To BubbleSort Demonstraition.\n";
		
			int A[10];
			// array<int,10> A;
			int L = end(A) - begin(A);
			cout << "The array is : ";
			for (int i = 0; i < L; i++)
			{
				A[i] = rand() % 10;
				cout << A[i] << " ";
			}
			cout << endl;
			int N = L - 1;
			while (N > 1) {
				int J = 0;
				while (J < N) {
					if (A[J] > A[J+1])
					{
						int T = A[J];
						A[J] = A[J + 1];
						A[J + 1] = T;
						J++;
						
					}
					else
					{
						J++;
					}
				}
				N--;

			}
			cout << "The new form of array is : ";
			for (int i = 0; i < L; i++)
			{
				cout << A[i] << " ";
			}

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
