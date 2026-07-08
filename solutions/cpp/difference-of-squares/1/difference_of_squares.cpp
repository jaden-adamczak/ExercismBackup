#include "difference_of_squares.h"

namespace difference_of_squares {
int square_of_sum(int n){
    int sum = 0;
    for (int i{n};i>0;--i){sum+=i;}
    return pow(sum,2);
}
int sum_of_squares(int n){
    int sum = 0;
    for (int i{n};i>0;--i){sum+=pow(i,2);}
    return sum;
}
}  // namespace difference_of_squares