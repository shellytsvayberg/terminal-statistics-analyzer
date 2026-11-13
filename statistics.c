#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    
    long long sum = 0;
    
    double mean = 0;
    bool isValid = true;
    
    
    int num = 0;
    printf("How many numbers? (positive integers over 0 ONLY) \n");
    if (scanf("%d", &num) != 1 || num <= 0){
        printf("Please enter a valid positive integer. \n");
        return 1;
    }
    
    int numbers[num];

    printf("Enter %d numbers: \n", num);
    for(int i = 0; i < num; i++){
        if(scanf("%d", &numbers[i]) != 1){
            printf("Please enter a number.\n");
            isValid = false;
            break;
        } else {
            sum = sum + numbers[i];
        }        
    }

    if (isValid){
        mean = (double)sum/num;
        printf("Sum: %lld\n", sum);
        printf("Mean: %.2f\n", mean);

        int max = numbers[0];
        int min = numbers[0];

        for(int i = 1; i < num; i++){
            if(numbers[i] > max){
                max = numbers[i];
            }
            if(numbers[i] < min){
                min = numbers[i];
            }
        }
        printf("Min: %d\n", min);
        printf("Max: %d\n", max);

        
        for(int i = 0; i < num - 1; i++){
            for(int j = 1; j < (num - i); j++){
                
                if(numbers[j] < numbers[j-1]){
                    int temp = numbers[j-1];
                    numbers[j-1] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
        
        double median = 0.0;
        if(num%2 != 0){
            median = numbers[num/2];
        } else {
            median = ((double)numbers[(num/2)-1] + numbers[num/2])/2.0;
        }
        


        printf("Median: %.2f\n", median);
        
        

        
        double squaredSum = 0.0;
        for(int i = 0; i < num; i++){
            double difference = numbers[i] - mean;
            squaredSum += difference * difference;
        }

        double variance = squaredSum/(double)num;
        double standardDeviation = sqrt(variance);
        printf("Standard Deviation: %.2f\n", standardDeviation);

        
        
    }
    
}