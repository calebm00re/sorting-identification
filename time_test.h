//
// Created by Caleb Moore on 3/9/21.
//

#ifndef PA03_TEMPLATE_TIME_TEST_H
#define PA03_TEMPLATE_TIME_TEST_H
#include <chrono>
#include "include/sorting_library.h"
#include <random>
#include <iostream>
#include <iomanip>

class time_test{
private:
    //make variables for time components of all the
    std::chrono::time_point<std::chrono::high_resolution_clock>
            mystery1_start, mystery1_end,
            mystery2_start, mystery2_end,
            mystery3_start, mystery3_end,
            mystery4_start, mystery4_end,
            mystery5_start, mystery5_end;

    std::chrono::duration<double>
            time_in_seconds1,
            time_in_seconds2,
            time_in_seconds3,
            time_in_seconds4,
            time_in_seconds5;

    int elements;
public:
    time_test();
    explicit time_test(int new_elements);
    void compute_times_random();
    void compute_times_order();
    void compute_times_reverse();
    void print_results();
};

#endif //PA03_TEMPLATE_TIME_TEST_H