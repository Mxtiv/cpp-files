#include <iostream>
#include <cmath> // For trigonometric functions

int main()
{
    double angleDegrees, angleRadians;

    // Get user input for angle in degrees
    std::cout << "Enter an angle in degrees: ";
    std::cin >> angleDegrees;

    // Convert degrees to radians
    angleRadians = angleDegrees * M_PI / 180.0;

    // Compute trigonometric functions
    double cosine = cos(angleRadians);
    double sine = sin(angleRadians);
    double tangent = tan(angleRadians);

    // Output trigonometric values
    std::cout << "Cosine of " << angleDegrees << " degrees: " << cosine << std::endl;
    std::cout << "Sine of " << angleDegrees << " degrees: " << sine << std::endl;
    std::cout << "Tangent of " << angleDegrees << " degrees: " << tangent << std::endl;

    // Compute inverse trigonometric functions
    if (cosine >= -1 && cosine <= 1)
    {
        double arcCosine = acos(cosine);
        std::cout << "Arc cosine of " << cosine << ": " << arcCosine * 180.0 / M_PI << " degrees" << std::endl;
    }
    else
    {
        std::cout << "Arc cosine is not defined for " << cosine << std::endl;
    }

    if (sine >= -1 && sine <= 1)
    {
        double arcSine = asin(sine);
        std::cout << "Arc sine of " << sine << ": " << arcSine * 180.0 / M_PI << " degrees" << std::endl;
    }
    else
    {
        std::cout << "Arc sine is not defined for " << sine << std::endl;
    }

    double arcTangent = atan(tangent);
    std::cout << "Arc tangent of " << tangent << ": " << arcTangent * 180.0 / M_PI << " degrees" << std::endl;

    // Compute atan2 for a sample point (y, x)
    double y, x;
    std::cout << "Enter coordinates (y x) for atan2: ";
    std::cin >> y >> x;
    double angleAtan2 = atan2(y, x);
    std::cout << "Arc tangent (atan2) of (" << y << ", " << x << "): "
              << angleAtan2 * 180.0 / M_PI << " degrees" << std::endl;

    return 0;
}
