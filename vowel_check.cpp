Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
int main()
{
  char str;
  cout << "Enter a Character : ";
  cin >> str;
  if (str=='a' || str=='e' || str=='i' || str=='o' || str=='u'|| str=='A' || str=='E' || str=='I'||str=='O'|| str=='U')
  {
    cout << "The Character entered is a Vowel";
  }
  else {
    cout << "The Character entered is a Consonant";
  }
}

output:
Output:
Enter a Character : v
The Character entered is a Consonant
Enter a Character : o
The Character entered is a Vowel
