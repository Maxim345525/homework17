#include<iostream>
using namespace std;
int main()
{
    cout << "--------ex_5_1-------" << endl;
	srand(time(0));
	const uint32_t size = 5;
	int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << "\t";
    }
    cout << endl;
    int max;
    max = arr[0];
    for (size_t i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max:" << max << endl;
    cout << "---------ex_5_2--------" << endl;
    srand(time(0));
    int arr2D[5][5];
    int i, j;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        { 
            arr2D[i][j] = rand() % 10;
            cout << arr2D[i][j] << "\t";
            if (arr2D[i][j] > max)
                max = arr2D[i][j];
        }
        
    }
    cout << endl;
    cout << "Max:" << max << endl;
    cout << "--------ex_5_3--------" << endl;
    srand(time(0));
    int arr3D[5][5][5]; 
    int l;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            for (size_t l = 0; l < 5; l++)
            {
                arr3D[i][j][l] = rand() % 10;
                cout << arr3D[i][j][l] << "\t";
                if (arr3D[i][j][l] > max)
                    max = arr3D[i][j][l];
            }
        }
    }
    cout << endl;
    cout << "Max:" << max << endl;
    cout << "---------ex_5_4--------" << endl;
    int a, b;
    cout << "Input number a:";
    cin >> a;
    cout << "Input number b:";
    cin >> b;
    if (a > b)
    {
        cout << "Max is:" << a << endl;
        return 0;
    }
    else (a < b);
    {
        cout << "Max is:" << b;
    }
    cout << "---------ex_5_5--------" << endl;
    int c;
    cout << "Input number a:";
    cin >> a;
    cout << "Input number b:";
    cin >> b;
    cout << "Input number c:";
    cin >> c;
    if (a > b, c)
    {
        cout << "Max is :" << a << endl;
        return 0;
    }
    else(b > a, c);
    {
        cout << "Max is:" << b;
        return 0;
    }
    if (c > b, a)
    {
        cout << "Max is:" << c << endl;
    }
    return 0;
}
