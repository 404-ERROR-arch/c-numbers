#include<iostream>
using namespace std;
int main(){

    
    class prime{
        int num ;

        string is_prime(){

            for(int i=2;i<num;i++){
                if(num%i == 0)
                    return "not prime";
            }
            return "prime";
        }


        public:
        //-----------------------------------
    
        prime(int p){
            num = p;
            cout<<is_prime();
        }

    };

    prime p(45);



}