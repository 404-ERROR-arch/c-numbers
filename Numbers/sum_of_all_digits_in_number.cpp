#include<iostream>
#include<list>
using namespace std;

int main(){

    class sum_of_all_digits{

        private:
        int num ;
        list<int> digits;
    
         int sum=0;


        void get_digits(){
            int rem ;
            while(num){

                rem = num%10;
                //cout<<rem<<endl;
                this->digits.push_back(rem);

                num /= 10;


            }
        }

        void get_sum(){
            for(auto a: digits){
                sum = sum+a;
                
            }
        }



        public:
        sum_of_all_digits(int n){
            num = n;

        get_digits();
    
        get_sum();
        cout<<sum;



        }



    };

    sum_of_all_digits obj(123) ;


}