float problemSolution1(float consumed_water) {
    float cost,fixed;
    fixed = 13;
    // write your code here
    if (consumed_water <= 30) {
        cost = fixed + (consumed_water * 0.4);
    }
    else if (consumed_water > 30 and consumed_water <= 50) {
        cost = fixed + ((consumed_water - 30) * 0.12) + (30 * 0.4);
    }
    else if (consumed_water > 50 and consumed_water <= 60) { // Fix: Changed "30" to "50" in the condition
        cost = fixed + ((consumed_water - 50) * 1.4) + (30 * 0.4) + (20 * 0.12); // Fix: Changed "04" to "0.4"
    }
    else if (consumed_water > 60) {
        cost = fixed + ((consumed_water - 60) * 1.5) + (30 * 0.4) + (20 * 0.12) + (10 * 1.4); // Fix: Corrected the formula
    }
    return cost;
}

