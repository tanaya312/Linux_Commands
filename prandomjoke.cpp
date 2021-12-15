#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned) time(0));
  int n;
 
    n = (rand() % 10) + 1;
    
    switch (n) {
    case 1:
        cout<<"I went to a street where the houses were numbered 8k, 16k, 32k, 64k, 128k, 256k and 512k.It was a trip down Memory Lane.\n"<<endl;
        break;
    case 2:
        cout<<"If doctors were like software engineers, they would say things like “Have you tried killing yourself and being reborn?”\n"<<endl;
        break;
    case 3:
        cout<<"//be nice to the CPU Thread_sleep(1);\n"<<endl;
        break;
    case 4:
        cout<<"A programmer’s wife asks: “Would you go to the shop and pick up a loaf of bread? And if they have eggs, get a dozen.”\nThe programmer returns home with 12 loaves of bread.\n“They had eggs.”\n"<<endl;
        break;
    case 5:
        cout<<"“Debugging” is like being the detective in a crime drama where you are also the murderer.\n"<<endl;
        break;
    case 6:
        cout<<"!false\n(It’s funny because it’s true.)\n"<<endl;
        break;
    case 7:
        cout<<"Why do programmers always mix up Christmas and Halloween\nBecause Dec 25 is Oct 31.\n"<<endl;
        break;
    case 8:
        cout<<"The best thing about a Boolean is that even if you are wrong, you are only off by a bit.\n"<<endl;
        break;
    case 9:
        cout<<"An optimist says “The glass is half full.”\nA pessimist says “The glass is half empty.”\nA programmer says “The glass is twice as large as necessary.”\n"<<endl;
        break;
    case 10:
        cout<<"A programmer had a problem. He thought to himself, “I know, I’ll solve it with threads!”\nhas Now problems. two he\n"<<endl;
        break;
    
    default:
        cout<<"Why do Java programmers have to wear glasses?\nBecause they don’t C.\n"<<endl;
        break;
    }
  
}
