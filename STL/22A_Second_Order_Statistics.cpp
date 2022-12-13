//Solve using set

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n, a ;
    cin >> n ;

    set<int>s ;

    for(int i = 0 ; i<n ; i++)
    {
        cin >> a ;
        s.insert(a) ;
    }

    if(s.size() == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        set<int>::iterator it ;
        it = s.begin() ;
        it++ ;

        cout<< *it << endl;
    }
}