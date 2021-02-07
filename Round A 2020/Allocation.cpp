//
// Created by Arul Prakash Samathuvamani on 11/10/2020.
// Verified to work on Kickstart - Contact hello@arulprakash.dev

#include <iostream>
#include "algorithm"
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    for(int tests=0; tests < testcases ; tests++){

        long int no_houses;
        long int b;

        cin >> no_houses ;
        cin >> b;
        int *cost =  new int[no_houses];
        for(int houses=0;houses<no_houses;houses++){
            cin >> cost[houses];
        }
        sort(cost,cost+no_houses);
        int count = 0;
        int flag = 0;
        for(int j=0 ; j < no_houses ;j++){
            b = b - cost[j];
            if(b < 0){
                cout <<"Case #"<<tests+1<<":"<<" "<<count<<endl;
                flag = 1;
                break;

            } else{
                count = count +1 ;
            }
        }
        if(flag == 0){
            cout <<"Case #"<<tests+1<<":"<<" "<<count<<endl;
        }
    }

}
