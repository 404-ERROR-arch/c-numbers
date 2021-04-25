/*  
    program to find out  sum of all number who are divisible by n numbers


 */

#include<iostream>
using namespace std;

int main(){

    class find_sum_divisible{
        private:
        int low , hight, num;

        int find_sum(){
            int sum = 0;
            for(low;low<=hight;low++){
                if(low%num == 0){
                    sum = sum + low;
                    cout<<low<<endl;

                }
               
            }
            cout<<"the total sum is ";
             return sum;

        }




        public:
            find_sum_divisible(int n, int m, int num){
                low = n, hight = m, this->num = num;

                cout<<find_sum();



            }

            
    };
        find_sum_divisible    obj(1,88,4);



}