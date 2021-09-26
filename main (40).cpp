#include <iostream>
using namespace std;
int
main ()                             /* 55555
                                       44444
                                       33333*/
{
  int i = 1;
  int k, n,j;
  cin>> n;
  while(i<=n){
      j = 1;
       k = n-i+1;
       while(j<= n){
           cout<< k;
           j++;
       }
       cout<< endl;
      k--;
       i++;
  }
}