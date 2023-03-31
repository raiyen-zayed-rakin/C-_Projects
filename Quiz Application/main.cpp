#include <iostream>

using namespace std;

int main()
{
  int finalResult=0;
  char playAgain;
  int playQuiz(void);
  play:
  finalResult = playQuiz();
  cout<<"Your total score is "<<finalResult<<endl;
  if(finalResult>=6)
    {
    cout<<"You passed the Quiz!"<<endl;
    cout<<"Do you want to play quiz again? y or n"<<endl;
    cin>>playAgain;
        if(playAgain=='y' || playAgain=='Y'){
            goto play;
        }
        else{
            cout<<"Thank you for playing Quiz."<<endl;
        }
    }
  else
  {
  cout<<"You failed the quiz."<<endl;
  cout<<"Do you want to play quiz again? y or n"<<endl;
  cin>>playAgain;
        if(playAgain=='y' || playAgain=='Y'){
            goto play;
  }
        else{
            cout<<"Thank you for playing Quiz."<<endl;
        }
  }
}
int playQuiz(){
    char c;
    char option;
    int score=0;
    insidefunction:
    cout<<"---------Welcome to Quiz Game---------"<< endl;
    cout<<"-----Please follow the instruction-----"<<endl;
    cout<<"Step 1 : Quiz contains total 10 questions"<<endl;
    cout<<"Step 2 : You will be given 1 mark for each right ans"<<endl;
    cout<<"Step 3 : There will be no negative marking"<<endl;
    cout<<"Step 4 : Please press s to start the quiz"<<endl;
    cout<<"Step 5 : Please select option a, b, c, d"<<endl;
    cout<<"Step 6 : If you score >=6, you will pass the quiz"<<endl;

    cin>>c;

    if(c=='s' || c=='s'){
        cout<<"Q1. What is the capital of Bangladesh?"<<endl;
        cout<<"(a)Dhaka (b)Rajshahi  (c)Chittagong  (d)Khulna"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q2. Who is the PM of Bangladesh?"<<endl;
        cout<<"(a)Hasina (b)Adityanth  (c)nitin  (d)Narendra "<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q3. What is the national bird of Bangladesh?"<<endl;
        cout<<"(a)Koyel (b)Owl  (c)Parrot   (d)Woodpecker "<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q4. What is the national animal of Bangladesh?"<<endl;
        cout<<"(a)Tiger (b)Lion  (c)Zibra  (d)Leopard"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q5. What is the national flower of Bangladesh?"<<endl;
        cout<<"(a)Shapla (b)Rose  (c)Lotus  (d)Lily"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q6. Who is the CM of UPI?"<<endl;
        cout<<"(a)Adithynath (b)Nitin  (c)Raghunath  (d)Kejriwal"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q7. What is the capital of UPI?"<<endl;
        cout<<"(a)LAkhnow (b)Prayagraj  (c)Itawaa  (d)Mirzapur"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q8. What is the capital of Jharkhad?"<<endl;
        cout<<"(a)Ranchi (b)Ramgarh  (c)Plamu (d)Dhanbad"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q9. Who is the leader of Congress?"<<endl;
        cout<<"(a)Rahul (b)Sonia  (c)Rohit  (d)Sanju"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
        cout<<"Q10. Which on of the following state comes in Norht?"<<endl;
        cout<<"(a)Dehli (b)Banglore (c)Chennai  (d)Kerla"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        else{
            score=score+0;
        }
    }
    else{
        cout<<"You have entered wrong value, please enter s."<<endl;
       goto insidefunction;
    }
    return score;
}
