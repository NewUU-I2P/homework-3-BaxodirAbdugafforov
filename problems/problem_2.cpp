float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    if ( i >= j){
        if (i >= k) {
            result = i;
        }
        else {
            result = k;
        }
    }
    else {
        if (j >= k) {
            result = j;
        }
        else {
            result = k;
        }
    }
    return result;
}