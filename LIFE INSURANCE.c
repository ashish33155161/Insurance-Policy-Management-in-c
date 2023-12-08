#include <stdio.h>

// Customer details structure
struct Customer {
  char name[50];
  char address[100];
  int age;
  long int phoneNo;
};

// Nominee details structure
struct Nominee {
  char name[50];
  char relationship[20];
  int age;
};

// Main function
int main() {
  printf("\n\t\t\t\t****************\n");
  printf("\033[1m");  // Start bold text
  printf("\t\t\t\t LIFE INSURANCE \n");
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

  // Nominee details
  struct Nominee nominee1, nominee2;

  // Get details for both nominees using same prompts
  for (int i = 1; i <= 2; i++) {
    printf("\nEnter details for nominee %d:\n", i);
    printf("Name: ");
    scanf("%s", (i == 1) ? nominee1.name : nominee2.name);
    printf("Relationship: ");
    scanf("%s", (i == 1) ? nominee1.relationship : nominee2.relationship);
    printf("Age: ");
    scanf("%d", (i == 1) ? &nominee1.age : &nominee2.age);
  }

// Investment amount
  int investment;
  printf("\nEnter annual investment amount: ");
  scanf("%d", &investment);
  int insuranceamount = investment*1000;

   // Calculate insurance amount based on investment
  int j;
    if(investment >=1000 && investment<=50000) 
    {
        for(investment >=1000; investment<=50000; investment++);
            {
                printf("Insurance amount = %d\n",insuranceamount); 
            }
    }
    else
    {
        printf("Invalid investment amount\n");
    }

  // Penalty for late submission
  int penalty;
  printf("\nEnter installment frequency (1 for annual, 2 for monthly): ");
  scanf("%d", &penalty);
  if (penalty == 1) {
    penalty = 100;
  } else if (penalty == 2) {
    penalty = 10;
  } else {
    penalty = 0;
  }

  // Print summary
  printf("\n\n_______________________________________________________");
  printf("\nCustomer Details:\n");
  printf("Name: %s\n", customer.name);
  printf("Address: %s\n", customer.address);
  printf("Age: %d\n",customer.age);
  printf("Phone Number: %ld\n", customer.phoneNo);

  printf("\nNominee 1:\n");
  printf("Name: %s\n", nominee1.name);
  printf("Relationship: %s\n", nominee1.relationship);
  printf("Age: %d\n", nominee1.age);

  printf("\nNominee 2:\n");
  printf("Name: %s\n", nominee2.name);
  printf("Relationship: %s\n", nominee2.relationship);
  printf("Age: %d\n", nominee2.age);
  
  printf("\nPolicy Term: 30 Years");
  printf("\nInsurance Amount: %d\n", insuranceamount);

  if (penalty > 0) {
    printf("Late Submission Penalty: %d\n", penalty);
  }
  printf("_______________________________________________________");
  printf("\033[1m");  // Start bold text
  printf("\n\nReminder:");
  printf("The due date for your Life policy is approaching, %s! Please submit your payment on time. Contact: 9027693613",customer.name);
  printf("\033[0m");  // Reset text formatting
  
return 0;
}