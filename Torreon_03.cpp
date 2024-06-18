/*  Program by: Ericka Gwynne S. Torreon
    Description: This program provides a way to manage a queue of customers at a checkout counter, allowing for adding customers,
                 serving them, and checking the next customer or serving all remaining customers in the queue.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defines the maximum size for the queue
#define SIZE 10

// Defines a structure for a customer, containing their name and the total amount to be paid
typedef struct{
    char name[50];
    float amount;
} Customer;

// Defines a structure for a queue of customers, using the Customer structure and tracking front and rear positions
typedef struct{
    Customer customers[SIZE];
    int front, rear;
} Queue;

// Function to initialize the queue
Queue initQueue(){
    Queue queue;
    queue.front = queue.rear = -1;
    return queue;
}

// Function to check if the queue is empty
int isEmpty(Queue queue){
    return (queue.front == -1);
}

// Function to check if the queue is full
int isFull(Queue queue){
    return (queue.rear == SIZE - 1);
}

// Function to add a customer to the queue
Queue enqueue(Queue queue, char name[], float amount){
    // Checks if the queue is full
    if (isFull(queue)){
        printf("\nThe QUEUE is FULL. Cannot add more customers.\n");
        return queue;
    }

    // Sets the front pointer to the first position if the queue is empty
    if (isEmpty(queue)){
        queue.front = 0;
    }

    // Increments the rear pointer and adds the customer to the queue
    queue.rear++;
    strcpy(queue.customers[queue.rear].name, name);
    queue.customers[queue.rear].amount = amount;

    return queue;
}

// Function to remove and return the front customer from the queue
Customer dequeue(Queue *queue){
    // Creates an empty customer object for cases when the queue is empty
    Customer emptyCustomer = {"", 0.0};

    // Checks if the queue is empty
    if (isEmpty(*queue)){
        printf("\nThe QUEUE is EMPTY. No orders to serve.\n");
        return emptyCustomer;
    }

    // Retrieves and stores the front customer
    Customer servedCustomer = queue->customers[queue->front];

    // Updates the front pointer and handles the empty queue case
    if (queue->front == queue->rear){
        queue->front = queue->rear = -1;
    } else{
        queue->front++;
    }

    return servedCustomer;
}

// Function to serve a customer from the queue
void serveCustomer(Queue *queue){
    // Dequeues the next customer to be served
    Customer servedCustomer = dequeue(queue);

    // If the customer is empty, the queue was empty
    if (servedCustomer.name[0] == '\0'){
        return;
    }

    printf("\nNow serving %s with total amount payable of %.4f.\n", servedCustomer.name, servedCustomer.amount);
}

// Function to display the front customer of the queue
void front(Queue queue){
    // Checks if the queue is empty
    if (isEmpty(queue)) {
        printf("\nThe QUEUE is EMPTY. No order to serve.\n");
    } else{
        // Displays the next order in the queue
        printf("\nNext order: For %s with total amount payable of %.4f.\n", queue.customers[queue.front].name, queue.customers[queue.front].amount);
    }
}

// Function to serve all remaining customers in the queue
void closingTime(Queue *queue){
    // Checks if the queue is empty
    if (isEmpty(*queue)){
        printf("\nThe QUEUE is EMPTY. No customer/s to serve.\n");
        return;
    }

    printf("\nServing all the customers left in the queue:\n");
    while (!isEmpty(*queue)){
        Customer servedCustomer = dequeue(queue);
        printf("Now serving %s with total amount payable of %.4f.\n", servedCustomer.name, servedCustomer.amount);
    }
    printf("\nAll customers have been served.\n");
}

int main()
{
    Queue queue = initQueue();
    int choice;
    char name[50];
    float amount;

    while (1){
        printf("\n========================================================\n");
        printf("||               Pricemart Counter 0:                 ||\n");
        printf("========================================================\n");
        printf("||\t\t[1] Fall in line                      ||\n");
        printf("||\t\t[2] Serve Customer                    ||\n");
        printf("||\t\t[3] Next Customer                     ||\n");
        printf("||\t\t[4] Closing Time                      ||\n");
        printf("||\t\t[0] Exit                              ||\n");
        printf("========================================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                if (isFull(queue)){
                    printf("The QUEUE is FULL. Cannot add more customers.\n");
                    break;
                }
                printf("\nEnter customer's last name: ");
                scanf("%s", name);
                printf("Enter total amount payable: ");
                scanf("%f", &amount);
                queue = enqueue(queue, name, amount);
                break;
            case 2:
                serveCustomer(&queue);
                break;
            case 3:
                front(queue);
                break;
            case 4:
                closingTime(&queue);
                break;
            case 0:
                printf("\n\n\nThe checkout system has been terminated.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

