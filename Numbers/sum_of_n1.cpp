#include<iostream>
using namespace std;

int main(){


class sum_of_n{

    private:
    long long int sum = 0;

    public:
    sum_of_n(int n){
        sum = (n*(n+1))/2LL;
    }

    ~sum_of_n(){
        cout<<sum;
    }


};
    static int n = 56700;
  sum_of_n obj1(n); 


}