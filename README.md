# OOADProject2
# Team Members: Kyle Schultz, Aaron Steiner, Pari Bhetwal
#Language used: C++
#Environment used: xcode

This project simulates a zoo full of animals and how they interact with the 
zookeeper when given a certain command. We are assuming that the only animals 
in the zoo are a wolf, cat, feline, and a canine. We are also assuming that 
the print statement requirements apply to feline and canine as well as cat and 
wolf. We are assuming there is only one zookeeper. We are assuming that when the
cat is told to do something, it can only randomly choose between eating and roaming. 
We are assuming that when an animal is created that you are passing in the name and classname.

This project implements the strategy pattern to perform the rollCall (make noise) functionality.

This project implements the observer pattern to give the ZooAnnouncer proper functionality. When the 
Zookeeper is about to interact with the animals the subject updates the observer and the display element
tells the ZooAnnouncer what and when to announce. We are assuming that the ZooAnnouncer is the only 
observer in this scenario.

Instructions to run code:
	From the same directory as the main.cpp file open the terminal.  
	
### To compile, type: `g++ -std=c++11 -o zoo main.cpp`  
### To run, type: `./zoo`  
The code will then execute and print out proper statements.
