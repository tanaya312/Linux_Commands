#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
  srand((unsigned) time(0));
  int n;
  string guess;
  string ans;
 
    n = (rand() % 10) + 1;
    
    switch (n) {
    case 1:
        cout<<"Who makes it, has no need of it. Who buys it, has no use for it. Who uses it can neither see nor feel it. What is it?\n"<<endl;
        cin>>guess;
        ans= "coffin";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you\n"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time\n"<<endl;}
        break;
    case 2:
        cout<<" What can travel around the world while staying in a corner?\n"<<endl;
        cin>>guess;
        ans= "stamp";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you\n"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time\n"<<endl;}
        break;
    case 3:
         cout<<"There was a green house. Inside the green house there was a white house. Inside the white house there was a red house. Inside the red house there were lots of babies. What is it?\n"<<endl;
        cin>>guess;
        ans= "watermelon";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you\n"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time\n"<<endl;}
        break;
    case 4:
         cout<<" What’s full of holes but still holds water?\n"<<endl;
        cin>>guess;
        ans= "sponge";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you\n"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time\n"<<endl;}
        break;
    case 5:
         cout<<"What flies without wings?\n"<<endl;
        cin>>guess;
        ans= "Time";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you\n"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time\n"<<endl;}
        break;
    case 6:
         cout<<"Where will you find roads without vehicles, forests without trees, and cities without houses?\n"<<endl;
        cin>>guess;
        ans= "map";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you\n"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time\n"<<endl;}
        break;
    case 7:
        cout<<"What are two things you cannot eat for supper?\n"<<endl;
        cin>>guess;
        ans= "Breakfast and Lunch.";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time"<<endl;}
        break;
    case 8:
         cout<<"What word looks the same upside down and backward\n"<<endl;
        cin>>guess;
        ans= "SWIMS";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time"<<endl;}
        break;
    case 9:
         cout<<"What is greater than God, more evil than the devil, the poor have it, the rich need it, and if you eat it, you’ll die?\n"<<endl;
        cin>>guess;
        ans= "Nothing";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time"<<endl;}
        break;
    case 10:
         cout<<" What can you keep but cannot share and once you share it, you can’t keep it anymore?\n"<<endl;
        cin>>guess;
        ans= "secret";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time"<<endl;}
        break;
    default:
         cout<<"The more it dries, the wetter it gets. What is it\n"<<endl;
        cin>>guess;
        ans= "Towel";
        if (guess==ans)
        {cout<<"yeah!!! you guessed Right...Kudos to you\n"<<endl;}
        else
        {cout<<"Oops!!! Wrong Choice ...Better luck next time\n"<<endl;}
        break;
    }
    
  
}
