#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    double sum = 0;
    for(int i = 1; i < argc; i++){
        sum += atof(argv[i]);
    }
    sum /= argc-1;

    if(argc > 1){
        cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = " << sum << endl;
        cout << "---------------------------------";
    }else{
        cout << "Please input numbers to find average.\n";
    }

    return 0;
}
