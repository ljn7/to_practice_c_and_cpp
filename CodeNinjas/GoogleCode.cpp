#include<iostream>
#include<vector>
#include<string>
#include<iterator>
using namespace std;
int main() {
   vector <string> texts;
   string input;
   while (getline(cin, input)) {
      texts.push_back(input); 
      if (input=="stop") break;
   }
   for (auto it : texts) {
      cout << it << "\n";
     
   }
}
