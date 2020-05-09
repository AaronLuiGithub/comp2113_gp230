# comp2113_group_game

## Lui Ching Hang,Aaron 3035537612 BSC(IM) Year 4

## Lam Hok Sum,Nathan 3035667649  BENG Year 1


## Memory Game

It is a single player game which will help to train Players’ short-term memory. The game may adopt different modes such as visual and verbal with a view to facilitating memory in various perspectives.

#### Main interface:
Different modes of the game will be provided, and users are able to choose which mode they will play.

#### Game rules:
Player will have 3 lives in total. 

Player may have 3 seconds to remember the answer. After 3 seconds gone, there will be an input flied provided for user to fill in their answer.  

If they made a wrong answer, 1 life will be deduced. The game ends when lives turn into 0. On the contrary, 1 point will be given to the correct answer. At the end, the accumulated score will be printed in the screen. 




## Visual memory mode:

A NXN grid graph will be provided initially. The graph will be pinned randomly. So, player is required to input the correct graph .
Player can opt for diffculty 

010
110
111


## Verbal memory mode: 

A random N digits number will be provided initially. Player is required to remember the number. Also, n+1 will also be the next level.

Level 3: 721
The answer:721



## Coding requirements

#### 1.	Generation of random game sets or events

The question will be generated randomly using Rand(). Time will be the random seed. 
For instance, the N digits will be generated : rand() % 9 + 1;

#### 2.	Data structures for storing game status

Array will be the main data for storing lives, level and score.

#### 3.	Dynamic memory management

Array will be the main data to store the questions. For instance, the array will store the random number in the question. However, we don’t know what the size of the array is, as we can’t estimate which levels will the players finished. Dynamic memory can help to make good use of the memory.  

#### 4.	File input/output (e.g., for loading/saving game status)
Player’s score record will be stored every game ended locally.

#### 5.	Program codes in multiple files

For the readability, program will be coded in multiple files. For instance, the two game modes will be in two files. 




