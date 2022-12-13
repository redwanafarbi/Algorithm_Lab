//Solve using vector 

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    int a ;
    
    cin >> t ;

    vector<int>v ;
    vector<int>answer ;

    for(int i = 0 ; i<t ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin() , v.end());
        int temp =  v.at(1);

        v.clear() ;

        answer.push_back(temp);
    }

    for(int i = 0 ; i<t ; i++)
    {
        cout << answer.at(i) << endl ;
    }
    

}