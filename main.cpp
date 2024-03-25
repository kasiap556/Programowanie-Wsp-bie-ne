#include <iostream>
using namespace std;

int is_even(int a){
    if(a%2==1){
        return 1;
    }
    return 0;
}

int main() {
    std::cout << "funkcja sprawdzajaca czy liczba jest parzysta\n" << std::endl;
    int numb=3, numb2=4;
    if(is_even(numb)==1&& is_even(numb2)==0){
        cout<<"funkcja dziala poprawnie\n";
    }
    else{
        cout<<"funkcja nie dziala poprawnie\n";
    }
    return 0;
}
