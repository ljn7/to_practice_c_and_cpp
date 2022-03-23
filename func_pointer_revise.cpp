// struct item

// {

// int data;

// struct item* next; 

// };

// int f(struct item *p)

// {

// return((p = = NULL)||(p ―> next = = NULL) || 

// ((p ―>data <= p ―>next―> data)&& f(p―> next)));

// }
// #include <iostream>
// #include <string>

// class Login {
//   int tries = 5;
//   const char* PASSWORD = "changeme";

//   public: 

//     void SetPassword () {
//       std::cout << "Enter the password: ";
//       std::string inputPassword;

//       do {

//         std::cin >> inputPassword;

//         if (inputPassword == PASSWORD) {
//           std::cout << "Password Acceted"
//                     << std::endl;
//           exit(0); //if password matches before 5 tries program will exit successfully.
//         }
          
//       } while (--tries);

//       std::cout << "Access denied. Please contact IT services to reset your password" 
//                 << std::endl; //if password doesn't match then it will come here and print this
//     }

// };

#include <iostream>

int Add (int a, int b) {

  return a + b;
}
int Sum (int a, int b) {
  
  return a - b;
}
int (*something[])(int a, int b) = {Add, Sum}; 


int main () {

  // Login test;
  // test.SetPassword();
  
  std::cout << something[0](10, 5);
  
}