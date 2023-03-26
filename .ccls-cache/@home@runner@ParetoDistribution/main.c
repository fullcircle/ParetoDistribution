#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double pareto(double x, double alpha, double k) {
    return alpha * pow(k, alpha) / pow(x, alpha + 1);
}

int main() {
    srand(time(NULL)); // Seed random number generator with current time
    double alpha = 2.0; // Pareto distribution shape parameter
    double k = 1.0; // Pareto distribution scale parameter
    int num_samples = 100; // Number of samples to generate
    for (int i = 0; i < num_samples; i++) {
        double x = ((double) rand() / (double) RAND_MAX) * 10.0; // Generate a random number between 0 and 10
        double y = pareto(x, alpha, k); // Calculate the Pareto distribution value at x
        printf("x = %f, y = %f\n", x, y); // Print x and y
    }
    return 0;
}
