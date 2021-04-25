#include<iostream>
#include<list>

using namespace std;
int main(){

    class sum_of_n{

        private:
        long long int sum = 0;
        int n;
        list<long long int>num;

        public:
        

        int sum_num(int n_){
            return (n_*(n_+1))/2;
        }

        void insert_list(){
            int k = 0;
            for(int i=1;i<=n;i++){
                k  = sum_num(i);
                if(!(k&1))
                    num.push_back(k);
            }
            

        }        


        sum_of_n(int n){
            this->n = n;

            insert_list();
 
        }

        ~sum_of_n(){
            cout<<"working";
            for(auto a: num){
                cout<<a<<endl;
            }
        }
    };

    sum_of_n obj1(10);




}