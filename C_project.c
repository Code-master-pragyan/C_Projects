#include <stdio.h>

// Function to input marks
void inputMarks(int marks[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validation
        while(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks. Please enter marks between 0 and 100: ");
            scanf("%d", &marks[i]);
        }
    }
}

// Function to calculate total
int calculateTotal(int marks[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average
float calculateAverage(int total, int n) {
    return (float)total / n;
}

// Function to calculate grade
char calculateGrade(float average) {
    if(average >= 90)
        return 'A';
    else if(average >= 80)
        return 'B';
    else if(average >= 70)
        return 'C';
    else if(average >= 60)
        return 'D';
    else
        return 'F'; 
}

// Function to display results
void displayResults(int marks[], int n, int total, float average, char grade) {
    printf("\n--- Student Report ---\n");
    for(int i = 0; i < n; i++) {
        printf("Subject %d Marks: %d\n", i + 1, marks[i]);
    }
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);
}

int main() {
    int marks[5];
    int total;
    float average;
    char grade;

    printf("Student Marks & Grade Management System\n");
    printf("----------------------------------------\n");

    inputMarks(marks, 5);
    total = calculateTotal(marks, 5);
    average = calculateAverage(total, 5);
    grade = calculateGrade(average);
    displayResults(marks, 5, total, average, grade);

    return 0;
}
