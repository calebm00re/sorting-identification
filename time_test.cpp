//
// Created by Caleb Moore on 3/9/21.
//

#include "time_test.h"

time_test::time_test() {

}

time_test::time_test(int new_elements) {
    elements = new_elements;
}

void time_test::compute_times_random() {
    //make variables for tests
    int* data1 = new int[elements];
    int* data2 = new int[elements];
    int* data3 = new int[elements];
    int* data4 = new int[elements];
    int* data5 = new int[elements];

    int temp_number;

    //fill array with random, unsorted numbers
    std::random_device my_rand;
    std::mt19937 gen(my_rand());
    std::uniform_int_distribution<> dist(1, elements);   temp_number = dist(gen);

    //fill all arrays with random numbers
    for(int i = 0; i < elements; i++){
        temp_number = dist(gen);
        data1[i] = temp_number;
        data2[i] = temp_number;
        data3[i] = temp_number;
        data4[i] = temp_number;
        data5[i] = temp_number;
    }

    //time to sort with mystery one computed ***ONE
    mystery1_start = std::chrono::high_resolution_clock::now();
    mystery01(data1, elements);
    mystery1_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds1 = mystery1_end - mystery1_start;

    //time to sort with mystery two computed ***TWO
    mystery2_start = std::chrono::high_resolution_clock::now();
    mystery02(data2, elements);
    mystery2_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds2 = mystery2_end - mystery2_start;

    //time to sort with mystery one computed ***THREE
    mystery3_start = std::chrono::high_resolution_clock::now();
    mystery03(data3, elements);
    mystery3_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds3 = mystery3_end - mystery3_start;

    //time to sort with mystery two computed ***FOUR
    mystery4_start = std::chrono::high_resolution_clock::now();
    mystery04(data4, elements);
    mystery4_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds4 = mystery4_end - mystery4_start;

    //time to sort with mystery two computed ***FIVE
    mystery5_start = std::chrono::high_resolution_clock::now();
    mystery05(data5, elements);
    mystery5_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds5 = mystery5_end - mystery5_start;

    delete[] data1;
    delete[] data2;
    delete[] data3;
    delete[] data4;
    delete[] data5;
}

void time_test::compute_times_order() {
    //make variables for tests
    int* data1 = new int[elements];
    int* data2 = new int[elements];
    int* data3 = new int[elements];
    int* data4 = new int[elements];
    int* data5 = new int[elements];

    int temp_number;

    //fill all arrays with ordered numbers
    for(int i = 0; i < elements; i++){
        temp_number = i;
        data1[i] = temp_number;
        data2[i] = temp_number;
        data3[i] = temp_number;
        data4[i] = temp_number;
        data5[i] = temp_number;
    }

    //time to sort with mystery one computed ***ONE
    mystery1_start = std::chrono::high_resolution_clock::now();
    mystery01(data1, elements);
    mystery1_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds1 = mystery1_end - mystery1_start;

    //time to sort with mystery two computed ***TWO
    mystery2_start = std::chrono::high_resolution_clock::now();
    mystery02(data2, elements);
    mystery2_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds2 = mystery2_end - mystery2_start;

    //time to sort with mystery one computed ***THREE
    mystery3_start = std::chrono::high_resolution_clock::now();
    mystery03(data3, elements);
    mystery3_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds3 = mystery3_end - mystery3_start;

    //time to sort with mystery two computed ***FOUR
    mystery4_start = std::chrono::high_resolution_clock::now();
    mystery04(data4, elements);
    mystery4_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds4 = mystery4_end - mystery4_start;

    //time to sort with mystery two computed ***FIVE
    mystery5_start = std::chrono::high_resolution_clock::now();
    mystery05(data5, elements);
    mystery5_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds5 = mystery5_end - mystery5_start;

    delete[] data1;
    delete[] data2;
    delete[] data3;
    delete[] data4;
    delete[] data5;
}

void time_test::compute_times_reverse() {
    //make variables for tests
    int* data1 = new int[elements];
    int* data2 = new int[elements];
    int* data3 = new int[elements];
    int* data4 = new int[elements];
    int* data5 = new int[elements];

    int temp_number;

    //fill all arrays with backwards numbers
    for(int i = 0; i < elements; i++){
        temp_number = elements - i;
        data1[i] = temp_number;
        data2[i] = temp_number;
        data3[i] = temp_number;
        data4[i] = temp_number;
        data5[i] = temp_number;
    }

    //time to sort with mystery one computed ***ONE
    mystery1_start = std::chrono::high_resolution_clock::now();
    mystery01(data1, elements);
    mystery1_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds1 = mystery1_end - mystery1_start;

    //time to sort with mystery two computed ***TWO
    mystery2_start = std::chrono::high_resolution_clock::now();
    mystery02(data2, elements);
    mystery2_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds2 = mystery2_end - mystery2_start;

    //time to sort with mystery one computed ***THREE
    mystery3_start = std::chrono::high_resolution_clock::now();
    mystery03(data3, elements);
    mystery3_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds3 = mystery3_end - mystery3_start;

    //time to sort with mystery two computed ***FOUR
    mystery4_start = std::chrono::high_resolution_clock::now();
    mystery04(data4, elements);
    mystery4_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds4 = mystery4_end - mystery4_start;

    //time to sort with mystery two computed ***FIVE
    mystery5_start = std::chrono::high_resolution_clock::now();
    mystery05(data5, elements);
    mystery5_end = std::chrono::high_resolution_clock::now();
    //end minus start to get total time
    time_in_seconds5 = mystery5_end - mystery5_start;

    delete[] data1;
    delete[] data2;
    delete[] data3;
    delete[] data4;
    delete[] data5;
}

void time_test::print_results() {
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);

    //std::cout << "with " << elements << " elements the times are:" << std::endl;
    std::cout <<    std::left << std::setw(13) << std::setfill(' ') << elements <<
                    std::setw(18) << std::setfill(' ') << time_in_seconds1.count() <<
                    std::setw(18) << std::setfill(' ') << time_in_seconds2.count() <<
                    std::setw(18) << std::setfill(' ') << time_in_seconds3.count() <<
                    std::setw(18) << std::setfill(' ') << time_in_seconds4.count() <<
                    std::setw(15) << std::setfill(' ') << time_in_seconds5.count() << std::endl;
}