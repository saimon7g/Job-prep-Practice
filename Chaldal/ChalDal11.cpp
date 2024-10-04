// Implement Game of Life

// In the game of life, you have a 2D matrix of small squares that can be either alive or dead.
// The matrix goes through iterations, and on every iteration the squares can die or be revived.
// This is based on the previous iteration and the below rules
// A living square with 1 or less neighbors in the previous iteration will die,as if from loneliness
// A living square with 2 or 3 neighbors in the previous iteration will survive,as if from contentment
// A living square with 4 or more neighbors in the previous iteration will die,as if from overpopulation
// A dead square with exactly 3 neighbors in the previous iteration will be revived,as if by unfulfilled desires
// Implement a square matrix of size 20 and set up the initial five(given)living squares.
// Then run 10 iterations on it, then print the final matrix.0, 0 should be the top left of the matrix,
// where the first is the row and the second is the column.
// matrix size = 20 iterations = 10 initial squares = [0][0][1][1]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int matrix[20][20] = {0};

    // Set up the initial five living squares
    matrix[0][0] = 1;
    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][1] = 1;
    matrix[2][2] = 1;

    // Run 10 iterations
    for (int i = 0; i < 10; i++)
    {

        int newMatrix[20][20] = {0};
        for (int j = 0; j < 20; j++)
        {
            for (int k = 0; k < 20; k++)
            {
                newMatrix[j][k] = matrix[j][k];
            }
        }

        for (int j = 0; j < 20; j++)
        {
            for (int k = 0; k < 20; k++)
            {
                int aliveNeighbors = 0;
                int deadNeighbors = 0;
                // check all 8 neighbors
                if (j > 0 && k > 0)
                { // top left
                    if (matrix[j - 1][k - 1] == 1)
                        aliveNeighbors++;
                    if (matrix[j - 1][k - 1] == 0)
                        deadNeighbors++;
                }
                if (j > 0)
                { // top
                    if (matrix[j - 1][k] == 1)
                        aliveNeighbors++;
                    if (matrix[j - 1][k] == 0)
                        deadNeighbors++;
                }
                if (j > 0 && k < 19)
                { // top right
                    if (matrix[j - 1][k + 1] == 1)
                        aliveNeighbors++;
                    if (matrix[j - 1][k + 1] == 0)
                        deadNeighbors++;
                }
                if (k > 0)
                { // left
                    if (matrix[j][k - 1] == 1)
                        aliveNeighbors++;
                    if (matrix[j][k - 1] == 0)
                        deadNeighbors++;
                }
                if (k < 19)
                { // right
                    if (matrix[j][k + 1] == 1)
                        aliveNeighbors++;
                    if (matrix[j][k + 1] == 0)
                        deadNeighbors++;
                }
                if (j < 19 && k > 0)
                { // bottom left
                    if (matrix[j + 1][k - 1] == 1)
                        aliveNeighbors++;
                    if (matrix[j + 1][k - 1] == 0)
                        deadNeighbors++;
                }
                if (j < 19)
                { // bottom
                    if (matrix[j + 1][k] == 1)
                        aliveNeighbors++;
                    if (matrix[j + 1][k] == 0)
                        deadNeighbors++;
                }
                if (j < 19 && k < 19)
                { // bottom right
                    if (matrix[j + 1][k + 1] == 1)
                        aliveNeighbors++;
                    if (matrix[j + 1][k + 1] == 0)
                        deadNeighbors++;
                }

                // Apply the rules
                if (matrix[j][k] == 1)
                {
                    if (aliveNeighbors <= 1)
                        newMatrix[j][k] = 0;
                    if (aliveNeighbors >= 4)
                        newMatrix[j][k] = 0;
                }
                else
                {
                    if (aliveNeighbors == 3)
                        newMatrix[j][k] = 1;
                }
            }
        }

        for (int j = 0; j < 20; j++)
        {
            for (int k = 0; k < 20; k++)
            {
                matrix[j][k] = newMatrix[j][k];
                cout << matrix[j][k]<< " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}