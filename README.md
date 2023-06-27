# CPT113-G5-Hackathon-2
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
__Engaging Text-Based Adventure:__ 

Experience an immersive journey through captivating text and interactive storytelling.

__Emotional Decision-Making:__ 

Shape the cat's fate through your choices, reflecting its loyalty and love for its human.

__Diverse Encounters:__

Meet unique characters and animals, forging meaningful connections along the way.

__Heartwarming Narrative:__ 

Explore the deep bond between cats and humans as the cat overcomes challenges to find its human.

__Character Progression:__

Witness the cat's growth, unlocking abilities and deepening relationships.

__Multiple Endings:__ 

Your choices shape the outcome, offering replayability and exploration.

### How to play our game

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

### A link to our game demo video
https://youtu.be/dQw4w9WgXcQ // rickroll
