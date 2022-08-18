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
//  Noun: Smartphone
//  action 1: the smartphone makes a call
smartphone.makeCall();
//  action 2: the smartphone takes a picture
smartphone.takePicture();
//  action 3: the smartphone plays a tune
smartphone.playTune();
    
//  2)
//  Noun: Watch
//  action 1: tells the time
watch.tellTime();
//  action 2: adjusts the minutes
watch.adjustMinutes();
//  action 3: sets the alarm
watch.setAlarm();
    
//  3)
//  Noun: Vacuum cleaner
//  action 1: the vacuum cleaner starts cleaning
vacuumCleaner.start();
//  action 2: the vacuum cleaner stops cleaning
vacuumCleaner.stop();
//  action 3: the vacuum cleaner connects to charger
vacuumCleaner.recharge();
    
//  4)
//  Noun: Hand
//  action 1: the hand waves
hand.wave();
//  action 2: the hand grabs an object
hand.grabObject();
//  action 3: the hand shakes another hand
hand.shakeAnotherHand();

//  5)
//  Noun: Eyes
//  action 1: the eyes read a text
eyes.readText();
//  action 2: the eyes blink
eyes.blink();
//  action 3: the eyes look to the left
eyes.lookLeft();

//  6)
//  Noun: Dog
//  action 1: a dog barks
dog.bark();
//  action 2: a dog eats
dog.eat();
//  action 3: a dog sleeps
dog.sleeps();
    
//  7)
//  Noun: Fan
//  action 1: the fan rotates clockwise
fan.rotateClockwise();
//  action 2: the fan rotates counter-clockwise
fan.rotateCounterClockwise();
//  action 3: the fan stops rotating
fan.stop();

//  8)
//  Noun: Kite
//  action 1: the kite moves up
kite.moveUp();
//  action 2: the kite moves down
kite.moveDown();
//  action 3: the kite spins
kite.spin();

//  9)
//  Noun: Audio Recorder
//  action 1: Increase recording level
audioRecoder.increaseVolume();
//  action 2: start recording
audioRecorder.startRecording();
//  action 3: pause recording
audioRecorder.pauseRecording();

//  10)
//  Noun: Soccer player
//  action 1: the soccer player kicks the ball
soccerPlayer.kickBall();
//  action 2: the soccer player scores a goal
soccerPlayer.scoreGoal();
//  action 3: the soccer player tackles
soccerPlayer.tackle();


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
