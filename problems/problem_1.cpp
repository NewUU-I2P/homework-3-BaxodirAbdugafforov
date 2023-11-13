void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    double f1 = 0.4;
    double f2 = 0.12;
    double f3 = 1.4;
    double f4 = 1.5;
    if (consumed_water <= 30) {
        cost =  13 + (consumed_water * f1);
    }
    else if (consumed_water > 30 and consumed_water <= 50 ){
        cost = 13 + ((consumed_water - 30) * f2) + (30 * f1);
    }
    else if (consumed_water > 30 and consumed_water <= 60){
        cost = 13 + ((consumed_water - 50) * f3) + (30 * f1) + (20 * f2);
    }
    else if (consumed_water > 60) {
        cost = 13 + ((consumed_water - 60) * f4) * (30 * f1) + (20 * f2) + (10 * f3);
        return;
    }

}
