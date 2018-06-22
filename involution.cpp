#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

int involution(int a,int n){
  if( n == 0 ){  
    return 0;
  }
  if( n % 2 != 0 ){
    return involution( a, n - 1 ) * a ;
  }
  else{
  int k = involution(a, n/2) ;
  return k * k ;
  }
}

int main(){
  int a, n ;
  cin >> a >> n ;
  cout << involution(a, n) << endl ;
  return 0;
}
