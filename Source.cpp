
#include <vector>
#include <stdlib.h>  // abs() 


int solution(std::vector<int> &A)
{
	int minDiff = 0;
	int P = 1;
	int sum = 0;
	int total = 0;
	std::vector<int> sumUntil;
	for (int a = 0; a < A.size(); a++) {
		total += A[a]; // sum of all elements
		sumUntil.push_back(total); // sum untill every element
	}
	for (int k = 0; k < A.size()-1; k++)
	{
		int diff = 0;
		int sum = sumUntil.at(k);
		diff = (2*sum) - total; // sum - (total - sum)
		if (k == 0)
			minDiff = abs(diff);
		else if (abs(diff) < abs(minDiff))
			minDiff = abs(diff);
	}
	return minDiff;
}