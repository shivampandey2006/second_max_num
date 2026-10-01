#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    int len;
   cout<<endl << "Enter the number of elements: ";
    cin >> len;


    if (len < 2)
    {  cout << "Second maximum does not exist";
    return 0; }
     
    cout<<"Enter "<<len<<" elements "<<endl ; 
    vector<int> arr(len);
    for (int i = 0; i < len; i++)
     cin >> arr[i];   

    int first_max = arr[0];
    int second_max = INT_MIN;

    for (int i = 1; i < len; i++)  {
        if (arr[i] > first_max)  {
            second_max = first_max;
            first_max = arr[i];  }
        else if (arr[i] != first_max && second_max < arr[i])   {
            second_max = arr[i];   }
    }


    if (second_max == INT_MIN)
        cout << "Second maximum does not exist";
    else
        cout << "Second maximum number is: " << second_max;

    return 0;
}