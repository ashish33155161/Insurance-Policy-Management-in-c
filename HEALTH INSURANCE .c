#include <stdio.h>
// Customer details structure
struct Customer {
  char name[50];
  char address[100];
  int age;
  long int phoneNo;
};

// Function to calculate health insurance cost
float calculateHICost(char healthInsuranceType) {
    float cost;

    // Fixed amount for Gold Pass and Platinum Pass
    if (healthInsuranceType == 'G'|| healthInsuranceType == 'g') {
        cost = 500.0;
        {
            printf("\nMedical expenses(for treatment) of Rs 1,00,000 are covered \n(not including viral, body pain, dental, cosmetic surgery).");
        }
    } else if (healthInsuranceType == 'P'|| healthInsuranceType == 'p') {
        cost = 1000.0;
        {
            printf("\nMedical expenses(for treatment) of Rs 5,00,000 which includes all types of medical illness are covered (notnincluding cosmetic    surgery, but cosmetic surgery is covered in accidental cases).");
        }
    } else {
        printf("Invalid health insurance type.\n");
        return 0.0;
    }

    return cost;
}
int main()
{   
    printf("\n\t\t\t\t****************\n");
    printf("\033[1m");  // Start bold text
    printf("\t\t\t\t HEALTH INSURANCE \n");
    printf("\033[0m");  // Reset text formatting
    printf("\t\t\t\t****************\n");
    // Customer details
    struct Customer customer;

    printf("Enter customer name: ");
    scanf("%s", customer.name);

    printf("Enter customer address: ");
    scanf("%s", customer.address);
    
    printf("Enter customer age: ");
    scanf("%d", &customer.age);
    
    printf("Enter customer phone number: ");
    scanf("%ld", &customer.phoneNo);
    
    // Health insurance calculation
    char healthInsuranceType;
    printf("\nEnter health insurance type ('G' or 'g' for Gold Pass / 'P' or 'g' for Platinum Pass): ");
    scanf(" %c", &healthInsuranceType);
    
    // Print summary
    printf("\n\n_______________________________________________________");
    printf("\nCustomer Details:\n");
    printf("Name: %s\n", customer.name);
    printf("Address: %s\n", customer.address);
    printf("Age: %d",customer.age);
    printf("Phone Number: %ld\n", customer.phoneNo);
    float healthInsuranceCost = calculateHICost(healthInsuranceType);
    printf("\nHealth Insurance Cost: Rs %.2f\n", healthInsuranceCost);
    printf("\n_______________________________________________________");
    printf("\033[1m");  // Start bold text
    printf("\n\nReminder:");
    printf("The due date for your Life policy is approaching, %s! Please submit your payment on time. Contact: 9027693613",customer.name);
    printf("\033[0m");  // Reset text formatting
    
    return 0;
}
