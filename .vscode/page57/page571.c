// Sphere's volume.

#include <stdio.h>

float sphereVolume(float r) {
    float volume = r*r*r;
    return volume;
}

void main() {
    
    float r;
    float volume;
    
    printf("Let's determine the volume of a sphere.");
    printf("\nInput the sphere's radius: ");
    scanf("%f", &r);
    
    volume = sphereVolume(r);
    
    printf("The sphere's volume is %.3f cubic unities", volume);
}