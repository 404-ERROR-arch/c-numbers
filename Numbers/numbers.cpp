#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<list>

#include<vector>

using namespace std;

void start(void);

int flag = 1;

int main(){


    class numbers{


        public:

            void integers(){
                int start , end;
                cout<<"Enter the starting point ";
                cin>>start;
                cout<<"Enter the ending point ";
                cin>>end;

                for(int i = start; i<end;i++){
                    cout<<i<<" ";
                }
            }

            void whole_numbers(){
                int start, end;

                cout<<"Enter the starting point ";
                cin>>start;

                cout<<"Enter the ending point ";
                cin>>end;

                if(start<0  or  end <0){
                    while(!(start>=0)){
                        cout<<"Enter the starting point ";
                        cin>>start;
                    };
                    if(end < 0 ){
                    while(!(end>=0)){
                        cout<<"Enter the ending point";
                        cin>>end;
                    }
                    }
                }
                for(start ; start<=end;start++){
                    cout<<start<<" ";
                }
            }


            void natural_number(){
                int n;
                cout<<"Enter how much natural numbers you want to print ";
                cin>>n;
                if(n<=0){
                    //cout<<"do not enter negative or  0";
                    while(!(n>0)){
                        cout<<"do not enter negative or  0";
                        cin>>n;
                    }
                }
                for(int i =0; i<n;i++){
                    cout<<i;
                }
            }
            int power(int size, int n){
                int sum = 1;
                for(int i=0;i<size;i++){
                    sum = sum*n;
                }
                return sum;
            }


            void armstrong_number(){
                
                int num; cout<<"Enter the number to check whether is is armstrong or not ";
                cin>>num;
                vector<int>n;
                

                int temp = num , rem , sum=0, size =0;


                while(temp){
                    temp = temp/10;
                    size++;

                };
                temp = num;


                int i=0;
                while(temp){
                    rem = temp%10;

                    n.push_back(power(size,rem));
                    sum = sum + n[i];
                    i++;
                    
                    temp = temp/10;


                }

                if(sum == num){
                    cout<<"number is armstrong ";
                }else{
                    cout<<"number is not armstrong";
                }

                



            }

            void perfect_number(){
                int num; cout<<"Enter the number to check_wheather is it perfect or not";
                cin>>num;
                // find the all devisor of that number and add all that number if it gives you the same number you have entered that means it is a perfect number

                list<int>n;int sum =0;
                for(int i=1;i<num;i++){
                    if(num%i == 0){
                        n.push_back(i);
                    }
                

                }
                for(int a : n){
                    sum = sum+a;
                }
                if(sum ==num)
                    cout<<"number is pefect number";
                else 
                    cout<<"number is not perfect number";
            
            }
            int fac(int rem){
                int sum = 1;
                while(rem){
                sum = sum*rem;
                rem--;

                }
                return sum;
            }

            void strong_number(){

                int num; cout<<"Enter the number to check wheather is it strong or not:";cin>>num;
                int temp = num, rem, sum ;
                while(temp){
                    rem = temp%10;
                    sum = sum + fac(rem);
                    temp = temp/10;
                    
                }
                if(sum =num ){
                    cout<<"number is perfect number";

                }else{
                    cout<<"number is not perfect number";
                }


            }
            bool check_magic(int num){
                //cout<<"i am working";
                int temp = num, sum =0 , rem;
                while(temp){
                    rem = temp %10;
                    sum = sum + rem;

                    temp = temp/10;
                }
                if(sum == 1)
                    return 1;

                if(sum <= 9)
                    return 0;
                else
                    check_magic(sum);

            }
            void magic_number(){
                int num ; cout<<"Enter the number" ;cin>>num;
                if(check_magic(num)){
                    cout<<"magic_number";
                }else{
                    cout<<"not magic number";
                }
            }




    };
     if(flag)
     start();

    numbers obj;
/*   obj.integers();
    Sleep(3000);
    system("cls");
    obj.natural_number();
    Sleep(3000);
    system("cls");
    obj.whole_numbers();
 */

    //obj.armstrong_number();
    //
    //obj.perfect_number();
    //obj.strong_number();
//obj.magic_number();

    system("cls");
    cout<<"\n\n\n\t\t\t\t\t";
    cout<<"Enter your choice\n\n\n";
    short int x ;
    cout<<"\t\t\t\t\t 1:  STRONG NUMBER\n \t\t\t\t\t 2: PERFECT NUMBER \n \t\t\t\t\t 3: ARMSTRONGE NUMBER \n \t\t\t\t\t 4: MAGIC NUMBER \n \t\t\t\t\t 5: WHOLE NUMBERS \n \t\t\t\t\t 6: INTERGER NUMBERS \n \t\t\t\t\t 7: NATURAL NUMBERS \n \t\t\t\t\t 0:   EXIT \n \n \t\t\t\t\t\t ENTER YOUR CHOICE:>  ";
    cin>>x;

    switch(x){
        case 1:
        obj.strong_number();
        break;

        case 2: 
        obj.perfect_number();
        break;

        case 3:
        obj.armstrong_number();
        break;

        case 4:
        obj.magic_number();
        break;

        case 5:
        obj.whole_numbers();
        break;

        case 6:
        obj.integers();
        break;

        case 7:
        obj.natural_number();
        break;

        case 0:
            exit(1);
            break;



        default:
        cout<<"ENTER VALID VALUE 0-7";


        


    }
    system("cls");
    ::flag =0;
    
    main();



}

void start(){
    system("cls");
    system("color 04");
    char x = 219;
    cout<<"\n\n\n\n\t\t\t\t\t\t loading... \n\n";
    cout<<"\t\t\t\t\t\t";

    for(int i=0;i<=35;i++){
        cout<<x;

        Sleep(i*10);

    }
    system("cls");
}