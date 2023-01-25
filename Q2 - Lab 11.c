#include <stdio.h>
#include <math.h>


struct point3D {
    double x;
    double y;
    double z;
};


struct sphere {
    double radius;
    struct point3D center;
};


double surface_area(struct sphere s) {
   
    return 4 * M_PI * s.radius * s.radius;
}

double volume(struct sphere s) {

    return (4.0 / 3.0) * M_PI * s.radius * s.radius * s.radius;
}

int main() {
	double r;
	scanf("%lf", &r);
    struct sphere s = {r, {0, 0, 0}};

    printf("Surface area: %f\n", surface_area(s));
    printf("Volume: %f\n", volume(s));

    return 0;
}
