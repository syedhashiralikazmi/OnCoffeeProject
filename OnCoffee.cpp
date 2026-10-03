/*
    @AUTHUR: Syed Hashir Ali Kazmi

    I am writing this code to practice what I learn in "Programming Fundamentals" lectures so I used all 
    the concept that I learned in class I am writing all stuff here thanks to our Professor who teach us in
    incredible way and clear explanations and dedication to teaching made a huge difference in my learning.
    
    OnCoffee:
            Is online coffee shop actually it is offline but I am assuming it is online and user order coffee
            online so dont take name too serious.
    Concept I will cover:
                   - Variable
                   - IO manipulation 
                   - Escape Sequencing
                   - if/else Statements
                   - hmmmmm i think thats enough
    I know write too much comment at first but this what i mostly view in Professional codes heheh
    
    Github: @syedhashiralikazmi
    Linkedin:   Not Available

    I didn't use ai to write my code or any other writen help in this code. Yes but I understand some stuff online and use AI
    to understand the concept I attached My Gemini chats in Repo you can check it also.

    Refrence:
        - Gemini Ai (Understanding namespace,returnType. etc)
        - GeekOfGeek 
*/

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    //we are selling coffe in cup with our standard 180ml in each cup user buy
    int quantityOfCoffeeCup;
    // Lol Coffee "la te" dont read in roman urdu read in english "Latte"
    //In PKR
    float priceOfLatte = 199.99;
    float priceOfAmericano = 350.25;
    float priceOfColdBrew = 465.55;

    int selectedCoffee;
    //I am selling coffee on the basis of gender bcz women can use there 'WomenCard' for discount.
    //In reality I want to test char as I profeser teach us :)
    char gender; 

    cout << "\t\t******* Welcome To OnCoffee *******\n";
    cout << "\t We are not selling Coffee we are selling Taste \n";

    cout << "\t-------------------------------"<<endl;
    cout << "\tCoffee Name"<<"\t\tPrices\n";
    cout << "\t-------------------------------"<<endl;
    cout << "\t1 Coffee Latte"<<"\t\t"<<priceOfLatte<<endl;
    cout << "\t2 Coffee Americano"<<"\t"<<priceOfAmericano<<endl;
    cout << "\t3 Coffee ColdBrew"<<"\t"<<priceOfColdBrew<<endl;

    cout << "\nSelect Coffee from one of them (1~3)(e.g: Enter 1): ";
    cin >> selectedCoffee;


    // I am using conditional statement to make this code more dynamic
    // I know this is still not dynamic like:
    /*
        - What if we have to increase our coffee list
        - Even user dont choose the quantity of coffee
        - And hardcoded table for recipt 
        - I will improve this in futher Commits
    */
    if (selectedCoffee == 1){
        cout <<"\n\aYou're Coffee is ready!\n\n";
        cout <<"Item Name"<<setw(8)<<"Qty"<<setw(8)<<"Price"<<endl;
        cout <<"Coffee Latte"<<setw(5)<<"1"<<setw(8)<< priceOfLatte;
        //TODO: Make code modulars
    }else if (selectedCoffee == 2) {
        cout <<"Comming sooooooooooooooon";
    }else if (selectedCoffee == 3) {
        cout << "Sardi mein cold brew nhi peta balka \"THandi\" Cold Drink peta hain :)";
    }

    return 0;
}