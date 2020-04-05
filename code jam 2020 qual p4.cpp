//It is just beginning
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
	ll t,b,k;
	ll i=0,j=0;
	cin>>t>>b;
	//if(b==10)
    //{
        while(t--)
        {
            vector<ll> v;
            for(i=1;i<=11;i++)
            {
                cout<<i<<endl;
                cin>>k;
                v.push_back(k);
            }
            for(j=0;j<v.size();j++)
                cout<<v[j];
            cout<<endl;
            char ch;
            cin>>ch;
            if(ch=='N')
                break;
            v.clear();
        }
    }
    else if(b==20)
    {
        while(t--)
        {
            vector<ll> v1;
            vector<ll> v2;
            ll cnt=0;
            lb:
            for(i=1;i<11;i++)
            {
                cout<<i+1<<endl;
                cin>>k;
                v1.push_back(k);
            }
            for(i=11;i<21;i++)
            {
                cout<<i+1<<endl;
                cin>>k;
                v2.push_back(k);
            }
            ll flgr=0;
            ll flgc=0;
            for(i=0,j=v2.size()-1;i<v1.size() && j>=0;i++,j--)
            {
                if(v1[i]==v2[j])
                    flgr=1;
                else
                {flgr=0;
                break;}
            }
            for(i=0,j=v2.size()-1;i<v1.size() && j>=0;i++,j--)
            {
                if((v1[i]==0 && v2[j]==1)||(v1[i]==1 && v2[j]==0))
                    flgc=1;
                else
                {flgc=0;
                break;}
            }
            if(flgr==1 || flgc==1 || ++cnt==7)
            {
                /*for(i=0;i<;i++)
                {

                }*/
            }
            else
                goto lb;
            cout<<endl;
            char ch;
            cin>>ch;
            if(ch=='N')
                break;
            v1.clear();
            v2.clear();
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
