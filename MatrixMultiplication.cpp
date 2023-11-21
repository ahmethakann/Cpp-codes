#include <iostream>
using namespace std;

int main() {
    
    float matrix1[10][10], matrix2[10][10], multipled[10][10];
    int m, n , k ,l;

    cout << "Enter rows and clumns for first matrix: ";
    cin >> m >> n;
    cout << "Enter rows and clumns for second matrix: ";
    cin >> k >> l;

    if (m == l && n == k)
    {
        cout << "Enter elements of matrix 1:"<<endl;
        for (int i = 0;i < m;i++)
        {
            for (int j=0;j < n;j++)
            {
                cout << "a"<<i+1<<j+1<<": ";
                cin >> matrix1[i][j];
            }
        }
        cout << "Enter elements of matrix 2:" << endl;
        for (int i = 0;i < k;i++)
        {
            for (int j = 0;j < l;j++)
            {
                cout << "b" << i+1 << j+1 << ": ";
                cin >> matrix2[i][j];
            }
        }

        for (int i = 0;i < m;i++)
        {
            for (int j = 0;j < l;j++)
            {
                multipled[i][j] = 0;
                for (int x = 0;x < n;x++)
                {
                    multipled[i][j] += matrix1[i][x] * matrix2[x][j];
                }
            }
        }

        cout << endl << "Output Matrix: " << endl;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < l; ++j)
            {
                cout << " " << multipled[i][j];
            }
        }
    }
    else
    {
        cout << "Wrong matrix dimentions. Column of first matrix must equal to row of second matrix." << endl;
    }
}
