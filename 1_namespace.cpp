#include <iostream>

using namespace std;

namespace silla
{
    int year = 935;
    void CentralArea(){
        cout << "Gyeong-sang" << endl;
    }
}

namespace baekjae
{
    int year = 660;
    void CentralArea(){
        cout << "Chung-cheong" << endl;
    }
}

int main(){

    cout<<"Central area of Silla : ";
    silla::CentralArea();
    cout<<"Destoried year of Silla : "<< silla::year << endl;
    cout<<"Central area of baekjae : ";
    baekjae::CentralArea();
    cout<<"Destoried year of baekjae : "<< baekjae::year << endl;

    return 0;
}