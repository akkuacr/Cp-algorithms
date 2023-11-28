// how many numbers are the multiples of first 10  prime numbers till 'N'


//Code:-
 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
  int n;
  cin>>n;

 vector<int>primes = {2,3,5,7,11,13,17,19,23,29};
  
  int m=primes.size();
  int total=0;
 for(int i=1;i<(1<<m);i++)
 {   
    int lcm=1;

      for(int j=0;j<m;j++)
      {
        //if jth bit of ith element is set then include it

        if((i>>j)&1)
        {

           lcm*=primes[j];

        }
      }

      if(__builtin_popcount(i)%2==0)
      {
        total-=(n/lcm);
      }else{
        total+=(n/lcm);
      }
    //  cout<<endl;

 }


 cout<<total<<endl;
 






      return 0;
  }

