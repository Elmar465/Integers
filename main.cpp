#include <iostream>
#include <string>

int main()
{
    // Braced Intialization
    // Variable may contain random garbage value .Warning 
    /*
    int elephant_count;

    int lion_count{}; // Initializes zero

    int dog_count {10}; // Initializes to 10

    int cat_count {15}; // Initializes to 15

    // Can use expression as initializer
    int dcmestic_animals { dog_count + cat_count};

    // 
    // int new_number {doesnt_exist};

    // int  narrowing_conversion {2.9};

    std::cout <<"Elephant count " << elephant_count << std::endl;
    std::cout <<"Lion count " << lion_count << std::endl;
    std::cout <<"Dog count " << dog_count << std::endl;
    std::cout <<"Cat count " << cat_count << std::endl;
    std::cout <<"domestic animals count " << dcmestic_animals << std::endl;

    */
    // Functional initializer
    /*
    int apple_count(5);
    int orange_count(5);
    int fruit_count (apple_count + orange_count);

    //  int bad_initialization (doesnt_exist3 + doesnt_exist4);

    // information lost. less safe then braced initiazilers
    int narrowing_conversion_function(2.9);

    std::cout<< "Apple counts :" << apple_count << std::endl;
    std::cout<< "Orange counts :" << orange_count <<std::endl;
    std::cout<< "Fruit counts :" << fruit_count << std::endl;
    std::cout<< "Narrowing conversion :" << narrowing_conversion_function << std::endl;
    */
    //Assigment notation
    int apple_count = 5;
    int orange_count = 5;
    int fruit_count = apple_count + orange_count;
    int narrowing_conversion_function = 2.9;
    std::cout<<"Apple count :" << apple_count << std::endl;
    std::cout<<"Orange count :" << orange_count << std::endl;
    std::cout<<"Fruit count :" << fruit_count << std::endl;
    std::cout<<"Narrowing conversion :" << narrowing_conversion_function << std::endl;

    // Check the size width size 
    std::cout << "The size is " << sizeof(int) << std::endl;
    std::cout << "size of orange_count " << sizeof(orange_count) <<std::endl;
    return 0;
}