#include<iostream>
using namespace std;


int main(){

    //0 1 1 2 3 5 8 13 21 

    class finbonacci{

        private:
        int num;

        void generate_finb(){

            long long int prev = 0   ,  next , current = 1;

            for(int i=0; i<num; i++){

                if(i== 0 or i == 1){
                    cout<< i<<" ";
                }else{
                    next = current + prev;
                    prev = current ;
                    current = next ;
                    cout<<next<<" ";

                }

            }


        }


        public:
        finbonacci(int n ){
            num = n;
            generate_finb();
            cout<<"\n\n";

            cout<<"_______________________________________________________\n\n";
        }
    };
    for(int i=0 ;i<=10;i++)
        finbonacci obj(i);





}