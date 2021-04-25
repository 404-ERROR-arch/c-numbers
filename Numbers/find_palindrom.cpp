//method 1

#include<iostream>
using namespace std;

int main(){

    class find_palindrome_num{

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
            
            if(sum == num){
                cout<<num<<endl;

            }else{
                //cout<<"number is not palindrome"<<endl;
            }
        }

        
        find_palindrome_num(long n){
            num = n;
              get_reverse();
        }


      
    };
    for(int i=1000;!(i == -1);i--)
        find_palindrome_num  obj(i);
    


    

}
