#include <iostream>
using namespace std;

int main(){
    int total = 1330;
    int rs100 = 0;
    int rs50 = 0;
    int rs20 = 0;
    int rs1 = 0;

    int step = 1;

    while (total > 0){
        switch(step){
            case 1: cout << total%100;
                    step++;
                    break;
            case 2: cout << total%50;
                    step++;
                    break;
            case 3: cout << total%20;
                    step++;
                    break;
            case 4: cout << total%1;
                    step++;
                    break;
        }
    }
return 0;
}

// wrong code