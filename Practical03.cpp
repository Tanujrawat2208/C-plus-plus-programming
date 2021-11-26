#include <iostream>
using namespace std;

int search(int *arr, int element, int N)
{
    N = N-1;
    if(N < 0)
        return -1;
    else if(arr[N] == element)
        return 1;
    else
        return search(arr, element, N);
}
int main()
{
    int size;
    cout << "Enter the Size Of Array : ";
    cin >> size;
    
    int array[size], key;
    
    cout << "Enter the elements of the array : ";
    for(int i = 0; i < size; i++)
        cin >> array[i];
    
    cout << "Enter Key To Search in Array : ";
    cin >> key;
    
    if(search(array, key, size) == 1)
        cout << "Key Found in Array" << endl;
    else
        cout << "Key Not Found in Array" << endl;
    
    return 0;
}
