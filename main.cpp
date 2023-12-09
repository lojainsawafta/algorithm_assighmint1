#include <iostream>
#include <ctime>
using namespace std;
long long iterativeFact( long long n) {
long long fact=1;
for (int i=1;i<=n;i++)
fact=fact*i;
return fact;  }
long long recursiveFact ( long long n)
{
if (n<=1)
return 1;
else
return n*recursiveFact(n-1);
}
int main () {
long long n;
cout<<"Please enter an integer : ";
cin>>n;
if(n<=0)
cout<<"please enter a positive number "<<endl;
else{
    long long result =iterativeFact(n);
    //long long result=recursiveFact(n);
    cout<<"the factorial of the "<<n<<"="<<result<<endl;
    double start_time=clock();
    cout<<"the excution time ="<<start_time/CLOCKS_PER_SEC;
}
return 0; }
