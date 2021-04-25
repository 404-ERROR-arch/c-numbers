#include<iostream>
using namespace std;

int main(){

    class sum_of_n{

        private :
        long long int  sum = 0;

        public:
        long sum_(){

            return sum;;
        }

        public:
        sum_of_n(long l){
            for(long i=0; i<l;i++){
                sum = sum+i;
            }
            
        }


    };

    cout<<"Enter the number where you want to sum ";
    long n ;
    cin>>n;

    sum_of_n sum1(n);
    cout<<sum1.sum_();
   


}