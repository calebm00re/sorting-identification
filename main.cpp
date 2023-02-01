#include <iostream>
#include "time_test.h"


int main() {

    //output formatted table
    std::cout << std::left << std::setw(15) << std::setfill(' ') << "elements" <<
        std::setw(18) << std::setfill(' ') << "mystery01" <<
        std::setw(18) << std::setfill(' ') << "mystery02" <<
        std::setw(18) << std::setfill(' ') << "mystery03" <<
        std::setw(18) << std::setfill(' ') << "mystery04" <<
        std::setw(10) << std::setfill(' ') << "mystery05" << std::endl;

    //run several different sorting tests of different sizes

    int arr [5] = {10000, 20000, 30000, 60000, 100000};

    for(int i : arr){
        time_test t(i);
        //uncomment ONE of the following that is supposed to run

        t.compute_times_order();
        //t.compute_times_random();
        //t.compute_times_reverse();
        t.print_results();
    }
     return 0;
}