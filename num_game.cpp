#include<iostream> 
#include<cstdlib> 
#include<ctime>   
using namespace std;
int main(){
    int num, guess;
    srand(time(0));
    num = rand() % 100 + 1 ; 

    do
   {
    
    cout << "Enter a number between 1 and 100 : " ;
    cin >> guess;
    if(guess > num)
    cout<< "Your guess is too high!\n\n";
    else if(guess < num)
    cout << "Your guess is too low!\n\n";
    else
    cout << "\nYour guess " << num << " is correct!" ; 
   } while (guess != num);


return 0;
}