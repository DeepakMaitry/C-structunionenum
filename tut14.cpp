#include<iostream>

using namespace std;

typedef struct  employee{

    int Id;
    char ch;
    float salary;
} ep;

union money {
    int rice;
    char car;
    float pounds; /*inme se koi ek use hoga*/
};



int main() {
    struct employee dm;
    ep jerry;

    dm.Id = 3;
    dm.ch = 'c';
    dm.salary = 200;

    cout << dm.Id << endl;
    cout << dm.ch << endl;
    cout << dm.salary << endl;

    jerry.Id = 4;
    cout << jerry.Id << endl;

    union money m1;

    m1.rice = 30;
    m1.car = 'A';

    cout<<m1.rice << endl;
    cout << m1.car << endl;


    enum Meal{ Breakfast, lunch, dinner};
     cout << Breakfast << endl;
     cout << lunch << endl;
     cout << dinner << endl;

     Meal K1 = Breakfast;

     cout << K1 << endl;
     cout << (K1 == 1) << endl;  // false condition K1 is 0




    return 0;
}