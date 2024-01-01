#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:  wombat
//  action 1: the wombat sleeps
wombat.sleep();
//  action 2: the wombat runs
wombat.run();
//  action 3: the wombat poops
wombat.poop();

//  2)
//  Noun:  chef
//  action 1:  the chef cooks
chef.cook();
//  action 2:  the chef tastes
chef.taste();
//  action 3:  the chef cuts
chef.cut();
//  3)
//  Noun:  wind
//  action 1:  the wind howls
wind.howl();
//  action 2:  the wind blows
wind.blow();
//  action 3:  the wind stops
wind.stop();

//  4)
//  Noun:  water
//  action 1:  the water pools
water.pool();
//  action 2:  the water frezzes
water.freeze();
//  action 3:  the water boils
water.boil();
//  5)
//  Noun:  bird
//  action 1:  the bird flies
bird.fly();
//  action 2:  the bird sings
bird.sing();
//  action 3:  the bird makes a nest  
bird.makeNest();

//  6)
//  Noun: lush
//  action 1:  the lush drinks
lush.drink();
//  action 2:  the lush talks
lush.talk();
//  action 3:  the lush regrets
lush.regret();

//  7)
//  Noun: river
//  action 1:  the river flows
river.flow();
//  action 2: the river floods
river.flood();
//  action 3:  the river freezes
river.freeze();

//  8)
//  Noun:  miniHuman
//  action 1:  the mini human eats berries
miniHuman.eatBerries();
//  action 2:  the mini human reads a book
miniHuman.readBook();
//  action 3:  the mini human spills milk
miniHuman.spillMilk();

//  9)
//  Noun:  pug
//  action 1:  the pug snores
pug.snore();
//  action 2:  the pug eats
pug.eat();
//  action 3:  the pug derps
pug.derp();

//  10)
//  Noun:  bells  
//  action 1:  the bells ring
bells.ring();
//  action 2:  the bells chime
bells.chime();
//  action 3:  the bells swing
bells.swing();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
