# CPT113 Group 5 Hackathon 2
### Members 

Khoo Iu Wan

Loo Jia Xin

Raziqin Husna binti Abdul Wahid

### Description of our game
In this hackathon, our mission is to create a captivating text-based video game that explores the unwavering loyalty of a cat towards its human companion and celebrates the profound love shared between humans and cats. Introducing our heartfelt creation: **"Feline: Far From Home."**

In this game, you will assume the role of a devoted little cat who has been left behind by its human. Filled with a deep sense of loyalty and longing, the cat embarks on an extraordinary quest to find its beloved human. As the player, you hold the key to guiding this feline protagonist on a journey that showcases the power of love and devotion.

Throughout the adventure, the cat will encounter diverse characters and encounters, each representing unique aspects of the human-cat bond. Your choices and actions will determine the cat's fate as it navigates through challenges, forms connections, and overcomes obstacles in its quest to reunite with its human.

Drawing inspiration from the real-life story of Oyen, the cherished orange cat of the Raziqin family, **"Feline: Far From Home"** aims to capture the essence of loyalty and love that exists between humans and their feline companions. Immerse yourself in this heartwarming tale where the bonds of friendship and the strength of unconditional love prevail.

Join us in this immersive adventure, where the loyalty of a cat shines bright, and the profound love between humans and their feline friends is celebrated in all its glory.

### Features of our game

__Emotional Decision-Making:__ 

Shape the cat's fate through your choices, reflecting its loyalty and love for its human.

__Heartwarming Narrative:__ 

Explore the deep bond between cats and humans as the cat overcomes challenges to find its human.

__Multiple Endings:__ 

Your choices shape the outcome, offering replayability and exploration.

1. **Main Menu**: The main menu serves as the starting point for the player and presents different options to choose from.

2. **Start a New Game**: This feature allows the player to begin a new game by entering a name for the kitten character. It also displays initial information such as lives and happiness, which likely represent the health and emotional-state of the kitten.

3. **Continue Game**: When the player selects this option, they are prompted to decide whether they want to continue to the next chapter or quit the game. If they choose to continue, their progress is saved, and the next chapter of the story is displayed. If they choose to quit, the game saves their progress and exits.

4. **Quit Game**: This feature enables the player to exit the game. Before quitting, the game automatically saves the player's progress to ensure they can resume from where they left off.

5. **Save Progress**: The save progress feature allows automatically saving progress in the game. It writes the player's information, including their name, lives, and happiness, as well as the conditions of any items they possess, and the current chapter they are on, to a text file. This way, players can come back to the game and continue their journey at a later time.

6. **Load Progress**: This feature allows players to load their previously saved progress from a text file. It retrieves the player's information, such as their name, lives, and happiness, as well as the conditions of the items they possess, and the current chapter they were on when they last saved. By loading progress, players can continue playing from where they left off.

7. **Delete Progress**: This feature gives players the option to delete their saved progress from the text file. Choosing this option clears the saved content, allowing them to start a fresh game if they wish.

8. **Player Information**: The player information represents the attributes and characteristics of the kitten character controlled by the player. It includes their name, lives (representing the number of chances or retries the player has), and happiness (likely a measure of the kitten's emotional state).

9. **Item Conditions**: This feature represents the conditions or states of various items within the game. The items could include coins, food, and cards. The item conditions could indicate the quantity or availability of these items, which may impact the gameplay and choices available to the player.

10. **Progress through Chapters**: The game progresses through different chapters, which likely represent different stages or sections of the story. Each chapter introduces new challenges, choices, and events for the player to navigate. 
### How to play our game

The game presents you with various scenarios and choices. Read the descriptions and options carefully before making a decision. Use the provided menu options or enter the corresponding numbers to select your choice. Your choices will affect the kitten's lives, happiness, and the overall story progression. Your main objective is to guide the kitten through different challenges and help it find its way back to its owner. Along the way, you may encounter obstacles, make friends, collect items, and face difficult decisions.

The kitten has a limited number of lives. If you make poor choices or encounter dangerous situations, you may lose lives. Be mindful of the kitten's happiness level. Positive actions and choices can increase its happiness. If the kitten loses all its lives, the game will end. Throughout the game, you can acquire various items such as coins, food, and cards. These items may be useful in specific situations or can be used to interact with characters or the environment. Manage your inventory wisely and use items strategically to progress in the story.

The progress will be automatically saved when you finish a chapter or you choose to quit the game. You can load your previous progress in the main menu. If you wish to exit the game, choose the "Quit" option from the main menu or after each chapter.

There are multiple story paths and endings in the game. Feel free to experiment with different choices and explore different outcomes.

### How object-oriented concepts were used to develop our game
**Encapsulation:**

Encapsulation is demonstrated by the classes, such as Player, Item, Script, and Game.
Each class encapsulates its own data and provides public methods to interact with that data. For example, the Player class encapsulates the player's name, lives, and happiness, and provides getter and setter methods to access and modify these attributes.
Encapsulation helps protect the internal state of objects and ensures that data manipulation is performed through controlled access points, improving data integrity and code maintainability.

**Abstraction:**

Abstraction is achieved by using classes to abstract away the implementation details and expose simplified interfaces.
The Game class abstracts the game's functionality by providing high-level methods like startGame(), saveProgress(), loadProgress(), and quitGame(). These methods hide the underlying complexities of game management and provide a simplified interface for other parts of the program.
Abstraction allows other classes and modules to interact with the Game object without needing to understand its internal workings, promoting code modularity and reducing dependencies.

**Association:**

Association is established through the relationships between classes, enabling them to collaborate and share information.
The Game class has associations with the Player, Item, and Script classes. It holds instances of these classes as member variables to access their functionalities.
For example, the Game class interacts with the Player object to retrieve and modify player-related data, such as the player's name, lives, and happiness. It also utilizes the Item object to manage the game items and the Script object to progress through the game's storyline.
Associations facilitate communication and data sharing between classes, allowing them to work together to achieve the game's functionality.

**Composition:**

The Game class composes instances of the Player, Item, and Script classes as member variables.
For example, the Game object is composed of a Player object to represent the game's player, an Item object to manage the game items, and a Script object to control the game's storyline.
Composition allows the Game object to combine and coordinate the functionalities provided by these composed objects to implement the overall game logic.
These object-oriented concepts promote code organization, modularization, and reusability. They help structure the code in a logical and maintainable manner, encapsulating related data and behaviors, abstracting away complexities, establishing relationships between classes, and composing objects to build more complex systems.

### How linked lists/stacks/queues play a role in our game
**Linked Lists:** 

Each item type (coins, card, and food) is represented as a linked list. A linked list is a data structure that consists of nodes, where each node contains the item and a pointer to the next node in the list.

**Stacks:** 

The linked lists are used as stacks to manage the player's items. A stack is a data structure that follows the Last-In-First-Out (LIFO) principle, where the last item added is the first one to be removed.

**Item Addition:** 

The functions PushCoin(), PushCard(), and PushFood() add items to their respective stacks. Each function creates a new node for the item and inserts it at the top of the corresponding linked list, representing the top of the stack.

**Item Removal:** 

The functions PopCoin(), PopCard(), and PopFood() remove items from the top of their respective stacks. These functions delete the top node from the linked list and update the top pointer to point to the next node, effectively removing the item from the stack.

**Count Tracking:** 

The variables coinCount, cardCount, and foodCount keep track of the number of items in each stack. These counts provide information about the current inventory of the player.

**Empty Check:** 

The functions isCoinEmpty(), isCardEmpty(), and isFoodEmpty() check if their respective stacks are empty. They examine the count variables and return true if the count is less than or equal to zero, indicating that the stack is empty.


By utilizing linked lists as stacks, the code efficiently manages the player's items for different item types. The stack structure allows for adding items to the top and removing items from the top, following the LIFO principle. The count variables and empty check functions provide information about the availability of items in the stacks.

### Screenshots of our game
Main Menu
![屏幕截图 2023-06-28 103524](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/7b076b04-8a46-43a1-a351-6d78e2477cdc)

Start Game
![屏幕截图 2023-06-28 103619](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/0ed1eea9-9099-4b4d-a8d4-d321680a5d66)

Continue Progress
![屏幕截图 2023-06-28 103700](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/9a6409d7-2574-4071-af65-51d633ac6348)

How to Play
![屏幕截图 2023-06-28 103813](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/0cf45003-d8b0-4520-b385-f674d0920bdb)

Credits
![屏幕截图 2023-06-28 104052](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/1bde12f0-7097-4b9a-baed-ad40c1296a58)

Quit Game
![屏幕截图 2023-06-28 103925](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/fe3b8955-9f39-40e9-a9c8-72cb3994fd5f)

Make Choice
![屏幕截图 2023-06-28 105502](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/9a1275de-8a4c-4396-9263-e2b24abda2f1)

Continue to next chapter 
![屏幕截图 2023-06-28 105544](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/6759cdde-b429-4dc2-befc-8c138c63ec42)

Back to Main Menu after one chapter
![屏幕截图 2023-06-28 115108](https://github.com/iuw1112/CPT113-G5-Hackathon-2/assets/119191251/04754b09-cd62-4a90-9090-d7d9653c00c5)

### A link to our game demo video
https://youtu.be/sOfs3GsRH3U
