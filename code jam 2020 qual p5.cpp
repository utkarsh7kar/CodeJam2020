//It is just beginning
#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define ll long long int
#define fst_hota_hai ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

using namespace std;
using namespace __gnu_pbds;

ll a[70][70];
ll n,k,t,q=0,m=0;
bool row[70][70], col[70][70];
bool value=false;

void calculate(int r,int c)
{
    if (r==n && c-1==n && m==k && value==false)
    {
        value=true;
        cout<<"Case #"<<++q<<": "<<"POSSIBLE"<<endl;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        return;
    }
    else if (r>n)
        return;
    else if (c>n)
        calculate(++r,1);
    else
    {
        for (ll i=1;i<=n && value==false; ++i)
        {
            if (row[r][i]==false && col[c][i]==false)
            {
                row[r][i] = col[c][i] = true;
                if (r==c)
                    m+=i;
                a[r][c]=i;
                calculate(r,c+1);
                row[r][i] =false;
                col[c][i] =false;
                if (r==c)
                    m-=i;
                a[r][c]=0;
            }
        }
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        calculate(1,1);
        if (value==false)
            cout<<"Case #"<<++q<<": "<<"IMPOSSIBLE"<<endl;
        value = false;
    }
    return 0;
}
/*
vector sortcuts
 $$$$$$$$$$$$$$$$$$$$$$$$$

    ll pos=std::min_element(v.begin()+cnt,v.end())-v.begin();

  bool b1,b2;
    b1=binary_search(v.begin(),v.end(),mn); //search element mn  in vector
    b2=binary_search(v.begin(),v.end(),mx);

    __builtin_popcount(n)

 $$$$$$$$$$$$$$$$$$$$$$$$$

   sort(v.begin(),v.end());	    //sorts vector
   is_sorted(p.begin(),p.end())	    //returns true if sorted
   *max_element(v.begin(),v.end()); //returns max element value
   v.size(); 	//size of vector
   v.insert(v.begin()+ind,value)  //insert at index ind
   v.erase(v.begin()+ind)	  //delete element from index ind

 $$$$$$$$$$$$$$$$$$$$$$$$$

   for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        p.push_back(a);
    }//adds element to vector

     for(int i=0; i < q.size(); i++)
        std::cout << q.at(i) << ' ';

 $$$$$$$$$$$$$$$$$$$$$$$$$
*/
//################################################################
/*
STRING shortcuts
$$$$$$$$$$$$$$$$$$$$$$$$$$

	string sr= str.substr(startindex, no of char);

	count(str.begin(), str.end(), 'e')
$$$$$$$$$$$$$$$$$$$$$$$$$$
*/
/*
	t//to check prime no
    bool isPrime(int num)
{
    bool flag=true;
    for(int i = 2; i <= num / 2; i++)
    {
       if(num % i == 0)
       {
          flag = false;
          break;
       }
    }
}
*/
