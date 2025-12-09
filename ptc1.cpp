#include <iostream>
using namespace std;


class book{
    public :
    int print_data(int x, int y){
        int a = x;
        int b = y;
        int sum = x + y;
        cout << "Sum = " << sum;
        return sum;
    }
    int sub_data(int x, int y){
        int a = x;
        int b = y;
        int sub = x - y;
        cout << "Sub = " << sub;
        return sub;
    }
};

int main(){
    book b1;
    b1.print_data(5,6);
    b1.sub_data(7,4);
    return 0;
}