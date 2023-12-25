#include <iostream>

int main() {

  
  for (int i = 0; i < 10; i++) {
      std::cout << "Current run: " << i << std::endl;      //Result e.g.: Current run: 9   
  }

  

  //You can also use this instead:

  

  int x = 0;                                          //Define the counter variable
  while (x < 10) {                                    //Run while x is smaller/less than 10
    std::cout << "Current run: " << x << std::endl;
    x++;                                              //The same as x = x + 1
  }



  
  return 0;
}
