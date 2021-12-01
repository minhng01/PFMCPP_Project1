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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       bird
//  action 1:   the bird flies
bird.fly();
//  action 2:   the bird sings
bird.sing();
//  action 3:   the bird pecks wood
bird.peckWood();
//  2)
//  Noun:       baby
//  action 1:   the baby cries
baby.cry();
//  action 2:   the baby smiles
baby.smile();
//  action 3:   the baby sleeps
baby.sleep();
//  3)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog runs
dog.run();
//  action 3:   the dog drinks water
dog.drinkWater();
//  4)
//  Noun:       sun
//  action 1:   the sun rises up
sun.riseUp();
//  action 2:   the sun goes down
sun.goDown();
//  action 3:   the sun shines light
sun.shineLight();
//  5)
//  Noun:       oven
//  action 1:   the oven reaches temperature
oven.reachTemperature();
//  action 2:   the oven roasts chicken
oven.roastChicken();
//  action 3:   the oven burns food
oven.burnFood();
//  6)
//  Noun:       car
//  action 1:   the car brakes
car.brake();
//  action 2:   the car turns left
car.turnLeft();
//  action 3:   the car speeds up
car.speedUp();
//  7)
//  Noun:       student
//  action 1:   the student writes essay
student.writeEssay();
//  action 2:   the student review exam
student.reviewExam();
//  action 3:   the student study math
student.studyMath();
//  8)
//  Noun:       water bottle
//  action 1:   the water bottle spills
waterBottle.spill();
//  action 2:   the water bottle leaks
waterBottle.leak();
//  action 3:   the water bottle contains liquid
waterBottle.containLiquid();
//  9)
//  Noun:       mobile phone
//  action 1:   the mobile phone rings
mobilePhone.ring();
//  action 2:   the mobile phone vibrates
mobilePhone.vibrate();
//  action 3:   the mobile phone updates software
mobilePhone.updateSoftware();
//  10)
//  Noun:       security camera
//  action 1:   the security camera records video
securityCamera.recordVideo();
//  action 2:   the security camera connects to Wifi
securityCamera.connectToWifi();
//  action 3:   the security camera detects motion
securityCamera.detectMotion();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
