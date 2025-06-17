#include <iostream>
#include <random>
#include <string>

using namespace std;


int main(){

    string words[100]={"apple", "banana", "cherry", "dog", "cat", "elephant", "house", "car", "tree", "flower",
    "sun", "moon", "star", "book", "pen", "table", "chair", "window", "door", "sky",
    "cloud", "rain", "snow", "wind", "fire", "water", "earth", "mountain", "river", "lake",
    "ocean", "forest", "desert", "island", "city", "village", "road", "bridge", "school", "library",
    "park", "garden", "farm", "market", "shop", "kitchen", "bedroom", "clock", "lamp", "mirror",
    "phone", "computer", "television", "radio", "guitar", "piano", "drum", "song", "dance", "movie",
    "game", "sport", "soccer", "basketball", "tennis", "swimming", "running", "jump", "walk", "dream",
    "love", "hope", "joy", "peace", "friend", "family", "home", "food", "bread", "cheese",
    "fruit", "vegetable", "cake", "cookie", "coffee", "tea", "juice", "milk", "fish", "bird",
    "tiger", "lion", "bear", "wolf", "fox", "deer", "horse", "cow", "sheep", "goat"};

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0,99);
    int random_index = dist(gen);
    string random_word = words[random_index];
    cout<<"The word is "<<random_word.length()<<" letters long\n";

    int remaining_guesses = 6;
    while(remaining_guesses>0){
        char guess;
        cout<< "Guess a letter. You have "<<remaining_guesses<<" guesses remaining.\n";
        cin>>guess;
        if(random_word.find(guess)!=string::npos){
            cout<<"That letter is in the word!\n";
        }
        else{
            cout<<"That letter is not in the word. :(\n";
            remaining_guesses--;
        }
    }

}