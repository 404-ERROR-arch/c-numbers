#include<iostream>
using namespace std;

int main(){


    class prime{
        int m, n;

        bool check_prime(int n){

            for(int i= 2;i<n;i++){
                if(n%i == 0)
                    return 0;
                
            }
            return 1;


        }

        void generate_prime(){

            for(int i = m; i<=n; i++){

                if(check_prime(i)){
                       cout<<i<<" ";
                

            }
        }
        }

        

        public:
        prime(int m ,int  n){
            this->m = m;
            this->n = n;

            generate_prime();



        }




    };

    prime obj(45,100);


};