#include <stdio.h>

// Define the structure for Student
struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    // Initialize the data for 5 students
    struct Student students[5] = {
        {121, "Raj Patel", 95, 90, 88},
        {122, "Divya Sharma", 92, 80, 84},
        {123, "Piyush Mishra", 72, 87, 93},
        {124, "Vatsal Mangukiya", 68, 96, 85},
        {125, "Sagar Trivedi", 91, 89, 77}
    };

    float percentage;

    // Display the mark sheet with percentage for each student
    printf("Mark Sheets:\n");
    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %d\n", students[i].chem_marks);
        printf("Mathematics Marks: %d\n", students[i].maths_marks);
        printf("Physics Marks: %d\n", students[i].phy_marks);

        // Calculate percentage
        percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;

        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}