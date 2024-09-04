# DSA
 course work
measuring the time taken by a program to execute is a crucial aspect of software development. In this course, we will learn about various techniques to measure the time taken by a program to execute. We will also learn about the various tools and techniques available to measure the time taken by a program to execute.
meauring by execution time in cpp:
1. Using the clock function: The clock function in C++ provides the time elapsed since the program started running. It returns the number of clock ticks since the program started running. We can use this function to measure the time taken by a program to execute. Here's an example:
written code in lect1:

#***important syntax:***

#include <chrono>,auto start = high_resolution_clock::now();,auto end = high_resolution_clock::now();,auto duration = duration_cast<microseconds>(end - start);,cout << "Time taken by program: " << duration.count() << " microseconds";

Explanation:
We first include the <chrono> header file which provides us with the high_resolution_clock class. We then declare two variables start and end, which are of type high_resolution_clock::time_point. We use the start variable to record the start time of the program and the end variable to record the end time of the program. We then calculate the duration between the start and end time using the duration_cast function. The duration_cast function takes a duration object as an argument and returns a duration object of the specified duration type. In this case, we are converting the duration to microseconds. Finally, we print the duration in microseconds.