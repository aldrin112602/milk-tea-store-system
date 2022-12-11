#include <iostream>
using namespace std;
int main() {
 int n, payment = 0;
 string size = "", flavor = "";
 int toPay = 0;
 cout << "Welcome to Milktea Store!" << endl;
 cout << "Flavors: **Choco** **Matcha** **Caramel**" << endl;
 cout << "Sizes: Small(50)--Medium(100)--Large(150)" << endl;
 cout << "\n1 - Flavor\n2 - Size" << endl;
 cout << "Enter a number based from the choices above: ";
 cin >> n;
 switch(n) {
   case 1:
   cout << "\n***FLAVOR***" << endl;
   cout <<"Choose flavor: ";
   cin >> flavor;
   break;
   case 2:
   cout << "\n***SIZE***" << endl;
   cout <<"Choose size: ";
   cin >> size;
   break;  
 }
 cout << "\n-Success" << endl;
 cout << "-----------------------------------------------" << endl;
while(size == "" || flavor == "" || payment == 0) {
     if(payment == 0) {
         cout << "\n1 - Flavor: " << flavor << "\n2 - Size: " << size << "\n3 - Payment: " << endl;
     } else {
         cout << "\n1 - Flavor: " << flavor << "\n2 - Size: " << size << "\n3 - Payment: " <<  payment << endl;
    
      }
     
     cout << "Enter a number based from the choices above: ";
     cin >> n;
     switch(n) {
       case 1:
        cout << "\n***FLAVOR***" << endl;
        cout <<"Choose flavor: ";
        cin >> flavor;
        cout << "\n-Success" << endl;
        cout << "-----------------------------------------------" << endl;
      break;
      case 2:
        cout << "\n***SIZE***" << endl;
        cout <<"Choose size: ";
        cin >> size;
        cout << "\n-Success" << endl;
        cout << "-----------------------------------------------" << endl;
      break; 
     case 3:
     if(flavor == "" || size == "") {
          cout << "Please select flavor / choose size, first\n" << endl;
      } else {
          if(size == "Small" || size == "small") {
              toPay = 50;
           } else if(size == "Medium" || size == "medium") {
              toPay = 100;
            } else if(size == "Large" || size == "large") {
              toPay = 150;
            }
          cout << "\n***PAYMENT***" << endl;
          cout <<"Please pay here: ";
          cin >> payment;
          while(payment < toPay) {
              cout <<"\nPlease pay again: ";
              cin >> payment;
          }
          cout << "\n-----------------------------------------------" << endl;
          cout << "\n1 - Flavor: " << flavor << "\n2 - Size: " << size << "\n3 - Payment: " <<  payment << "\n4 - Print" << endl;
          cout << "Enter a number based from the choices above: ";
          cin >> n;
          while(n != 4) {
              cout << "Enter number 4 to print!" << endl;
              cout << "Enter a number based from the choices above: ";
              cin >> n;
          }
          cout << "\n-----------------------------------------------" << endl;
          cout << "Your order is: " << flavor << " (" << size << ")" << endl;
          cout << "Change: " << (payment - toPay) << endl;
          cout << "Come again  :)" << endl;
          cout << "---------------------------------" << endl;          
      }
      break; 
 }
}
 return 0;   
}
