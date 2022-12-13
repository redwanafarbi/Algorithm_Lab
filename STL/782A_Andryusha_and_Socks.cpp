//Solve using set

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t ;
    cin >> t ;

    long long int arr[2*t] ;

    set<int>s ;
    int maximum = 0 ;

    for(long long int i = 0 ; i<(2*t) ; i++)
    {
        cin >> arr[i]  ;
    }

    for(long long int i = 0 ; i<(2*t) ; i++)
    {
        if(s.count(arr[i]) == 1)
        {
            s.erase(arr[i]) ;
        }

        else
        {
            s.insert(arr[i]) ;
        }

        if(s.size() > maximum)
        {
            maximum = s.size() ;
        }
    }

    cout << maximum << endl ;
    
}