#include<iostream>
using namespace std;



int bigMod(int num,int n,int d){
  int mod;
    int a,b;
  if(n==1){
    return num;
  }
 else if(n%2==0){
    a=bigMod(num,n/2,d);
    b=bigMod(num,n/2,d);
    return  mod=(a*b)%d;

 }

 else if(n%2==1){
    a=bigMod(num,1,d);
    b=bigMod(num,n-1,d);
    return mod=(a*b)%d;

 }


}
/*

           **************************************************** Explain:: ********************************

            num=10 n=3 d=3  so 10^5 % 3 =???

            bigmod(10,3,3){
                n==3 is odd
                a=bigmod(10,1,3) ----------------->> n==1 so it will <<-- return 10;
                b=bigmod(10,2,3) ----------------->> n==2 so Even  a=bigmod(10,1,3) -------------->> n==1 so it will  <<---return(n) 10
                                                                   b=bigmod(10,1,3) -------------->> n==1 so it will  <<---return(n) 10
                                                                   mod=(a*b)%d -->> (10*10)%3 = 1 so it will return <<---1
                                 <---------(b=1)-----------------
              mod=(10*1)%3= 1 ---------------->> It will return to the main function. How it works!! Thank you :) :)



            }
*/




int main(){
    int num,n,dig;
    // input system //
    cout<<"Enter (num^n)%Dig"<<endl;
    cin>>num>>n>>dig;
    int mod=bigMod(num,n,dig);

    cout<<"answer is:: "<<mod;

}
