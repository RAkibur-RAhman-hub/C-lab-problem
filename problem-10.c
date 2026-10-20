#include<stdio.h>
#include<math.h>

#define PI 3.14159265358979323846

// Function 1: Converts degrees to radians
double degreesToRadians(double degrees) {
    return degrees * (PI / 180.0);
}

// Function 2: Calculates sine series sum up to n terms
double calculateSine(double x_rad, int n){
    double sum = x_rad; // Initialize sum with the first term of the series
    double term = x_rad; // First term is x_rad

    for(int i = 2; i <= n; i++){
        term *= -x_rad * x_rad / ((2 * i - 2) * (2 * i - 1));
        sum += term;
    }
    return sum;
}

int main() {
    double degree, x_rad, sin_val;
    int n;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &degree);

    printf("Enter the number of terms for the sine series: ");
    scanf("%d", &n);

    x_rad = degreesToRadians(degree);
    sin_val = calculateSine(x_rad, n);

   // printf("The sine of %.2f degrees is approximately %.10f\n", degree, sin_val);

    printf("\n--- Results ---\n");
    printf("Angle in radians: %.6lf rad\n"
    , x_rad);
    printf("Calculated sin(%.2lf) using %d terms = %.6lf\n"
    , degree, n, sin_val);
    printf("Built-in sin(%.2lf) = %.6lf\n"
    , degree, sin(x_rad));

    return 0;
}