#include <iostream>

int main () {
  // int** ptr = new int*[2];
  // int*** ptr2 = {&ptr};

  // int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  // std::cout <<**(x + 3) << " " << **(x + 3) << " " << *(x + 2) + 3; 

  const int t = 10;

  std::cout << t << std::endl;
  std::cout << t << std::endl;

  int* ptr = const_cast<int*>(&t);

  std::cout << *ptr << std::endl;

  *ptr = 12;
  std::cout << t << std::endl;


  int *d = ptr;
  std::cout << t << std::endl;
  std::cout << *d << std::endl;


struct sizeTest {
  bool c : 1;
  
};

std::cout << "Size Of A Class" << std::endl;
std::cout << sizeof(sizeTest) << std::endl;

try {
  int t = 10;
  
  if (t > 20) {

  }
  else {
    throw t;
  }
}

catch (int c) {
  std::cout << "error " << t << std::endl;
}














  // // bool something = true;

  // // if (something)
  // //   printf("%d", &something);

  // int arr[2][2][2][2][2] = {
  //                             {
  //                               {
  //                                 { 
  //                                   {1, 2}, 
  //                                   {3, 4},
  //                                 },
  //                                 {
  //                                   {5, 6},
  //                                   {7, 8},
  //                                 },
  //                               },
  //                               {
  //                                 {
  //                                   {9, 10},
  //                                   {11, 12},
  //                                 },
  //                                 {
  //                                   {13, 14},
  //                                   {16, 17}
  //                                 }
  //                               },
  //                             },
  //                             {
  //                               {
  //                                 { 
  //                                   {18, 19}, 
  //                                   {20, 21},
  //                                 },
  //                                 {
  //                                   {22, 23},
  //                                   {24, 25},
  //                                 },
  //                               },
  //                               {
  //                                 {
  //                                   {26, 27},
  //                                   {28, 29},
  //                                 },
  //                                 {
  //                                   {30, 31},
  //                                   {32, 33}
  //                                 }
  //                               }

  //                             }
  //                         };
  // for (int m = 0; m < 2; m++)                        
  //   for(int i = 0; i < 2; i++)
  //     for (int j = 0; j < 2; j++)
  //       for (int k = 0; k < 2; k++)
  //         for (int l = 0; l < 2; l++)                     
  //           std::cout << arr[m][i][j][k][l] << std::endl;
}
