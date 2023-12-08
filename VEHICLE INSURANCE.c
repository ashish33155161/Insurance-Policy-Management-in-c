#include <stdio.h>
// Customer details structure
struct Customer {
  char name[50];
  char address[100];
  int age;
  long int phoneNo;
};

// Function to calculate vehicle insurance cost for 1st year
float calculateVehicleInsuranceCost(float vehiclecost, float insurancecost) {

    // Calculate 5% of the insured amount for total vehicle damage
    float claimamount = 0.05 * vehiclecost;
    
    int totalinsurancecost = claimamount + insurancecost;
    return totalinsurancecost;
}
    // Apply 20% depreciation each year
    int calculatelastinsurancecost(float vehiclecost, int yearsinvested, float insurancecost)
    {
        float lastinsuranceclaim;
        float depriciatedcost;
    
      for (int yearsinvested = 1; yearsinvested < 10; yearsinvested++)
        {
            depriciatedcost = 0.80 * vehiclecost;
            lastinsuranceclaim = 0.05 * depriciatedcost;
        } 
        return (lastinsuranceclaim + insurancecost);
    }
int main() {
    printf("\n\t\t\t\t****************\n");
    printf("\033[1m");  // Start bold text
    printf("\t\t\t\t VEHICLE INSURANCE \n");
    printf("\033[0m");  // Reset text formatting
    printf("\t\t\t\t****************\n");
    // Vehicle insurance calculation
    char vehicleType;
    float vehiclecost;
    int yearsinvested;
    float insurancecost;
    
    //customer details
    struct Customer customer;
    printf("Enter customer name: ");
    scanf("%s", customer.name);

    printf("Enter customer address: ");
    scanf("%s", customer.address);
    
    printf("Enter customer age: ");
    scanf("%d", &customer.age);

    printf("Enter customer phone number: ");
    scanf("%ld", &customer.phoneNo);
  
    printf("\nEnter vehicle type (2 for Two-Wheeler / 4 for Four-Wheeler): ");
    scanf(" %c", &vehicleType);

    printf("Enter the actual cost for the vehicle: ");
    scanf("%f", &vehiclecost);
    
    printf("Years Invested: ");
    scanf("%d",&yearsinvested);
    
    // Fixed amount for two-wheeler and four-wheeler
    if (vehicleType == '2') {
        insurancecost = 1500.0;
    } 
    else if (vehicleType == '4') {
        insurancecost = 3000.0;
    }
    else {
        printf("Invalid vehicle type.\n");

    }
    // Print summary
    printf("\n\n_______________________________________________________");
    printf("\nCustomer Details:\n");
    printf("Name: %s\n", customer.name);
    printf("Address: %s\n", customer.address);
    printf("Age: %d\n",customer.age);
    printf("Phone Number: %ld\n", customer.phoneNo);

    float vehicleInsuranceCost = calculateVehicleInsuranceCost(vehiclecost, insurancecost);
    printf("\nVehicle Insurance Cost at the end of Year 1: Rs %.2f\n", vehicleInsuranceCost);

    int lastcost  = calculatelastinsurancecost(vehiclecost, yearsinvested, insurancecost);
    printf("Vehicle Insurance Cost at the end of Year %d: Rs %d", yearsinvested, lastcost);
    printf("\n\n_______________________________________________________");
    printf("\033[1m");  // Start bold text
    printf("\n\nReminder:");
    printf("The due date for your Life policy is approaching, %s! Please submit your payment on time. Contact: 9027693613",customer.name);
    printf("\033[0m");  // Reset text formatting

  return 0;
}





