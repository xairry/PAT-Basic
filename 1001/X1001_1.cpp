#include <iostream>
using namespace std;

int main()
{
<<<<<<< HEAD
 int n;
 int count=0;
 cin>>n;
 while(n!=1){
   if(n%2==0){
     n=n/2;
     count++;
   }
  else{
	 n=(3*n+1)/2;
	 count++;
  }
}
 cout<<count<<endl;
 return 0;
=======
    int n;
    int count=0;
    cin>>n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
            count++;
        }
        else{
            n=(3*n+1)/2;
            count++;
        }
    }
    cout<<count<<endl;
>>>>>>> 9fc29facbaf983d60d15e1d4a7a66ea1fae7e67a
}
