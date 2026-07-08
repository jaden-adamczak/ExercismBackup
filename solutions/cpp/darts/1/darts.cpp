#include "darts.h"

namespace darts {

// TODO: add your solution here
int score(double x,double y){
    double dist = sqrt(x*x+y*y);
    if (dist > 10){
        return 0;
    } else if (dist <= 1){
        return 10;
    } else if (dist > 5){
        return 1;
    }
    return 5;    
}
}  // namespace darts
