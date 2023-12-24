#include<iostream>

int main(){

    //variable braced initialization
    int elephant_count;
    int dog_count{10};
    int cat_count{15};
    int sum_of_cat_and_dog{dog_count+cat_count};
    //int narrowing_conversion{2.3}; // error

    //funcional variable initalization
    int apple_count(0);
    int orange_count(10);
    int total_fruits(apple_count+orange_count);

    //assignment initialization
    int bike_count=2;
    int truck_count=7;
    int vehicle_count = bike_count + truck_count;
    
    return 0;
}