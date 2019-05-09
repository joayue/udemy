   // Start introducing the iostream library to use it in our code

    # include <iostream>
    
    // Declare the main function 

    main ()
    {    
   
    // We introduce some expresion statements to welcome our player
        
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";
    std::cout << std::endl;

    // Assign the value of all our need variables
        
    int a = 4;
    int b = 3;
    int c = 2;
        
     // Assign two variables that sums and multiplies our first variables

    int sum = a + b + c;
    int product = a * b * c;
        
    // Prints the sum and product of our variables
    
    std::cout << sum << std::endl;
    std::cout << product << std::endl;
        
    // Returns 0 to verify everything is ok and finish
        
    return 0;
    }
