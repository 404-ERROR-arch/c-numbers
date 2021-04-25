//method 1

#include<iostream>
using namespace std;

int main(){

    class reverse_num{

        private:
        long num;
        long sum=0;

        public:
        
        void get_reverse(){
            int temp = num;
            int rem;
            while(temp){
                rem = temp%10;
                sum = sum*10+rem;
                temp /= 10;
            }
            cout<<"--------------------------------------------\n reverse of "<<num<<" is "<<sum <<endl;
            cout<<"----------------------------------------------";

        }

        
        reverse_num(long n){
            num = n;
              get_reverse();
        }


      
    };
    reverse_num  obj(14866789);


    

}
