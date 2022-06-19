#include<iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    setlocale(LC_ALL, "ru");
    int rows;
    int cols;
    int lim;
    bool alredyThere;
    bool flag = false;
    while (true)
    {
        cout << "Кол-во строк:";
        cin >> rows;
        cout << "Кол-во столбцов:";
        cin >> cols;
        cout << "Дипозон рандомирования:";
        cin >> lim;
        if (rows == cols)
        {
            int** arr = new int* [rows];

            for (int i = 0; i < rows; i++)
            {
                arr[i] = new int[cols];
            }
            for (int i = 0; i < cols; i++)
            {
                for (int j = 0; j < rows;)
                {
                    alredyThere = false;
                    int newRandomValue = rand() % lim;
                    for (int d = 0; d < cols; d++)
                    {
                        if (alredyThere)
                        {
                            break;
                        }
                    
                    }
                    if (!alredyThere)
                    {
                        arr[i][j] = newRandomValue;
                        j++;
                    }
                }
            }
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr[i][j] << "\t";
                }
                cout << endl;
            }
     
            flag = true;
            int minimum;
            for (int i = 1; i < rows; i++)
            {
                minimum = INT_MAX;
                for (int j = 0; j < i; j++)
                {
                   
                        if (arr[i][j] < minimum)
                        {
                            minimum = arr[i][j];
                        }
                    
                }
                cout << minimum << " ";
            }
            
        }
        else if (rows != cols)
        {
            cout << "Матрица не квадратная! Попробуйте еще раз" << endl;
            flag = false;
        }
        if (flag)
        {
            break;
        }
    }
    
}