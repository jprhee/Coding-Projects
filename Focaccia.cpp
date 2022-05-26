/**
 * focaccia.cpp
 *
 * Joshua Rhee
 * jprhee
 *
 * EECS 183: Project 1
 * Winter 2022
 * 
 * Project UID: fde244392017fe65ebcc34f01c226b11f113bb3dc6dae8af4cb6ea11bf76f7c8
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string pluralize(string singular, string plural, int number);


int main() {
    
    int numbPeople;
   
    //gets computer input to the number of people need to be served
    cout << "How many people do you need to serve? ";
    cin >> numbPeople;
    cout << endl << endl;

    //calculates the loaves of bread nessesary to feed a certain amount of people
    const double LOAVES_PER_PERSON = 0.25;
    int numbLoaves = ceil(numbPeople * LOAVES_PER_PERSON);

    //tells user how many loaves to focaccia bread they need to make
    cout << "You need to make: " << numbLoaves << " ";
    cout << pluralize("loaf", "loaves", numbLoaves) << " of focaccia";
    cout << endl << endl;
    
    //gives title of shopping list
    cout << "Shopping List for Focaccia Bread";
    cout << endl;

    
    
    const double FLOUR_CUPS_PER_LOAF = 5;
    const double FLOUR_CUPS_PER_BAG = 20;
    const double COST_OF_FLOUR_BAG = 2.69;
    
    //calculates the total cost of flour based on number of loaves
    int flourBags = ceil((numbLoaves * FLOUR_CUPS_PER_LOAF)
                         / FLOUR_CUPS_PER_BAG);
    double TOTAL_COST_OF_FLOUR = flourBags * COST_OF_FLOUR_BAG;
   
    
    
    const double YEAST_TEASPOONS_PER_LOAF = 1.75;
    const double YEAST_TEASPOONS_PER_PACKAGE = 2.25;
    const double COST_OF_YEAST_PACKAGE = 0.40;
    
    //calculates the total cost of yeast based on number of loaves
    int yeastPackages = ceil((numbLoaves * YEAST_TEASPOONS_PER_LOAF)
                             / YEAST_TEASPOONS_PER_PACKAGE);
    double TOTAL_COST_OF_YEAST = yeastPackages * COST_OF_YEAST_PACKAGE;
   
    
    
    const double GRAMS_SALT_PER_LOAF = 9.375;
    const double GRAMS_SALT_PER_CANISTER = 30;
    const double COST_OF_SALT_CANISTER = 0.49;
    
    //calculates the total cost of salt based on number of loaves
    int saltCanisters = ceil((numbLoaves * GRAMS_SALT_PER_LOAF)
                             / GRAMS_SALT_PER_CANISTER);
    double TOTAL_COST_OF_SALT = saltCanisters * COST_OF_SALT_CANISTER;

    
    
    const double TABLESPOONS_OLIVE_OIL_PER_LOAF = 2;
    const double TABLESPOONS_OLIVE_OIL_PER_BOTTLE = (500 / 14.8);
    const double COST_OLIVE_OIL_BOTTLE = 6.39;
    
    //calculates the total cost of olive oil based on number of loaves
    int oliveoilBottles = ceil((numbLoaves * TABLESPOONS_OLIVE_OIL_PER_LOAF)
                               / TABLESPOONS_OLIVE_OIL_PER_BOTTLE);
    double TOTAL_COST_OF_OLIVE_OIL = oliveoilBottles * COST_OLIVE_OIL_BOTTLE;
    
    
    //adds the costs of all ingredients
    double TOTAL_COST_OF_INGREDIENTS =
    TOTAL_COST_OF_FLOUR + TOTAL_COST_OF_YEAST
    + TOTAL_COST_OF_SALT + TOTAL_COST_OF_OLIVE_OIL;
    
    cout << "--------------------------------";
    cout << endl;
    
    //gives amount of flour necessary to buy
    cout << flourBags << " ";
    cout << pluralize("bag", "bags", flourBags);
    cout << " of flour";
    cout << endl;
    
    //gives amount of yeast necessary to buy
    cout << yeastPackages << " ";
    cout << pluralize("package", "packages", yeastPackages);
    cout << " of yeast";
    cout << endl;
    
    //gives amount of salt necessary to buy
    cout << saltCanisters << " ";
    cout << pluralize("canister", "canisters", saltCanisters);
    cout <<" of salt";
    cout << endl;
   
    //gives amount of olive oil necessary to buy
    cout << oliveoilBottles << " ";
    cout << pluralize("bottle", "bottles", oliveoilBottles);
    cout << " of olive oil";
    cout << endl << endl;
   
    //gives the total expected cost of ingredients
    cout << "Total expected cost of ingredients: $";
    cout << TOTAL_COST_OF_INGREDIENTS;
    cout << endl << endl;
    
    cout << "Have a great Party!";
    cout << endl;
 
    return 0;
}
     
     // *** DO NOT CHANGE ANYTHING BELOW THIS LINE ***

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}
