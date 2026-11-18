// patient record
#include <stdio.h>
#include <string.h>

struct Patient {
    int ID;
    char name[30];
    int age;
    float temperature;
    int daysadmitted;
};

int main() {
    int sum = 0;
    int days = 1;

    struct Patient patient1;

    patient1.ID = 321;
    strcpy(patient1.name, "Gladys");
    patient1.age = 25;
    patient1.temperature = 36.7;
    patient1.daysadmitted = 6;

    while (days <= patient1.daysadmitted) {
        sum = sum + 2500;
        days++;
    }

    printf("Patient ID: %d\n", patient1.ID);
    printf("Patient Name: %s\n", patient1.name);
    printf("Patient Age: %d\n", patient1.age);
    printf("Temperature: %.1f\n", patient1.temperature);
    printf("Days Admitted: %d\n", patient1.daysadmitted);
    printf("Total Accommodation Cost: Ksh %d\n", sum);

    return 0;
}