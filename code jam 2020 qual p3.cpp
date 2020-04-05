#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define ll long long int
#define fst_hota_hai ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

using namespace std;
using namespace __gnu_pbds;

int main()
{
	fst_hota_hai
	ll t,n;
	ll i=0,j=0;
	cin>>t;
	ll q=0;
	while(t--)
	{
        cin>>n;
        map<pair<ll,ll>,vector<ll>> m;
        ll a,b;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            m[(make_pair(a,b))].push_back(i);
        }
        //sort(v.begin(),v.end());
        ll c1=0,c2=0;
        ll flg=0;
        char arr[n];
        for(i=0;i<n;i++) arr[i]='0';
        vector<ll> ind;
        //auto itr=m.begin();
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            auto it=itr->first;
            a=it.first;
            b=it.second;
            ind=itr->second;
            //cout<<a<<" "<<b<<" "<<ind<<" ";
			for(j=0;j<ind.size();j++)
			{
				int in=ind[j];
				if(c1<=a)
				{
					c1=b;
					arr[in]='C';
				}
				else if(c2<=a)
				{
					c2=b;
					arr[in]='J';
				}
				else
					flg=-1;
			}
        }
        if(flg==-1)
            cout<<"Case #"<<++q<<": Impossible"<<endl;
        else
        {cout<<"Case #"<<++q<<": ";
        for(i=0;i<n;i++)
            cout<<arr[i];
        cout<<endl;
        }
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
