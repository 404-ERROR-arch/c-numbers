◄#include<iostream>
#include<vector>
using namespace std;

int main(){

    class palindrome{
        private:

        bool find_palindrome(){
            int rem;
            vector<int> vec;
            for(;num;){
                rem = num%10;
                vec.push_back(rem);
                num /= 10;

            }
            int size =  vec.size()/2;
            for(int i=0;i<size ;i++){
                
                if((vec[0] != vec[(vec.size()-1)-i] )){
                    return 0;
                }

            }
            return 1;

        }

        public:

        palindrome(int a){
            this->num = a;
        
       
    };

        palindrome obj(121);

        return 0;


}