#include<iostream>
using namespace std;

int main(){

    class factorial{
        int num;

       long long  int find_fac(){

            long long int fac=1;
           
            for(;num!=1;num--){
                fac = fac*num;
            };
            return fac;

        }

        public:
        factorial(int n){
            num = n;

            cout<<find_fac();

        }

    };

    factorial fac(20);



}