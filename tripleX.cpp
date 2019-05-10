    
   // Start introducing the iostream library to use it in our code

    # include <iostream>
    
    // Declare the main function 

      int main ()
    {    
   
    // We introduce some expresion statements to welcome our player
        
       std::cout << "You are a secret agent breaking into a secure server room...";
       std::cout << std::endl;
       std::cout << "Enter the correct code to continue...";
       std::cout << std::endl;

    // Assign the value of all our need variables
        
       int CodeA = 4;
       int CodeB = 3;
       int CodeC = 2;
        
     // Assign two variables that sums and multiplies our first variables

       int CodeSum = CodeA + CodeB + CodeC;
       int CodeProduct = CodeA * CodeB * CodeC;
        
    // Show rules to solve the code
    
       std::cout << "- The code is made of 3 numbers" << std::endl;
       std::cout << "- This 3 numbers sum is : " << CodeSum << std::endl;
       std::cout << "- Their product is : " << CodeProduct << std::endl;

    // Asks the player afor an answer

      int PlayerAnswer[3];
      std::cout << "- Introduce the Code : " << std::endl;
      std::cin >> PlayerAnswer[3];
      std::cout << "- Your answer is " << PlayerAnswer[1] << PlayerAnswer[2] << PlayerAnswer [3] << std::endl;   

        
    // Returns 0 to verify everything is ok and finish
        
       return 0;
    }
