#pragma once

namespace difference_of_squares {
int square_of_sum(int n);
int sum_of_squares(int n);
inline int difference(int n){return square_of_sum(n) - sum_of_squares(n);}
}  // namespace difference_of_squares