using namespace std;
#include <vector>

// look into modulus for replacing rows and columns with numbers.

class Rotating
{
public:
	void rotate(vector<vector<int>>& matrix)
	{
		int n = matrix.size(); // size of the square matrix, a 3x3 grid would be 3.
		for (int i = 0; i < (n+1)/2 ; ++i) // i represents the current layer being processed. (n+1)/2 calculates the index of the center row rounded to nearest one.
		{
			for (int j = 0; j < n/2 ; ++j) // j represents the current element within the layer we are swapping. n/2 ensures we are only processes up to, but not including the centre of the grid.
			{
				int temp = matrix[n - 1 - j][i]; // separates the bottom left of the grid and puts into a temporary variable.
				matrix[n - 1 - j][i] = matrix[n - 1 - i][n - j - 1]; // moves bottom right to bottom left number.
				matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 - i]; // moves top right to bottom right.
				matrix[j][n - 1 - i] = matrix[i][j]; // moves top left to top right.
				matrix[i][j] = temp; // moves temp to top left.
			}
		}
	}
};