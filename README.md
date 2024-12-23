# **Feline: Far From Home**

---

### **Table of Contents**
1. [Description](#description)
2. [Features](#features)
   - [Core Gameplay Features](#core-gameplay-features)
3. [How to Play](#how-to-play)
4. [Object-Oriented Concepts Used](#object-oriented-concepts-used)
5. [Data Structures Used](#data-structures-used)
6. [Contributors](#contributors)
7. [Screenshots of our game](#screenshots-of-our-game)
8. [A link to our game demo video](#license)

---

### **Description**
In this hackathon, we created a captivating text-based adventure that explores the unwavering loyalty of a cat towards its human companion and celebrates the profound love shared between humans and cats. Introducing **"Feline: Far From Home."**

In this game, you play as a devoted little cat left behind by its human. Filled with a deep sense of loyalty and longing, the cat embarks on an extraordinary quest to find its beloved human. As the player, you guide the cat through challenges, encounters, and choices that will determine the cat's fate in its journey to reunite with its human.

Inspired by the real-life story of Oyen, the cherished orange cat of the Raziqin family, **"Feline: Far From Home"** captures the essence of loyalty and love that exists between humans and their feline companions.

---

### **Features**

- **Emotional Decision-Making**: Shape the cat's fate through choices that reflect its loyalty and love for its human.
- **Heartwarming Narrative**: Explore the deep bond between cats and humans as the cat overcomes obstacles to find its human.
- **Multiple Endings**: Your decisions shape the outcome, providing replayability and exploration.

#### **Core Gameplay Features:**
1. **Main Menu**: Starting point with options like new game, continue, quit, save/load progress.
2. **Start a New Game**: Enter a name for the kitten character and view initial stats (lives, happiness).
3. **Continue Game**: Choose to continue the story or quit; progress is saved if continuing.
4. **Quit Game**: Option to quit with automatic progress saving.
5. **Save Progress**: Automatically saves game progress, including player stats and chapter.
6. **Load Progress**: Loads saved progress, allowing you to pick up where you left off.
7. **Delete Progress**: Clears saved data, enabling a fresh start.
8. **Player Information**: Displays attributes such as name, lives, happiness, and current chapter.
9. **Item Conditions**: Manage inventory items like coins, food, and cards, which influence the game.
10. **Progress Through Chapters**: Navigate through different story chapters, each with new choices and events.

---

### **How to Play**
- The game presents scenarios and choices. Your decisions affect the kitten’s lives, happiness, and story progression.
- Manage the kitten's inventory, lives, and happiness, making strategic choices to help it reunite with its human.
- The kitten has limited lives, and poor decisions may lead to game-over. Make wise choices to keep it alive and happy.
- You can acquire items (coins, food, cards) that may be useful in certain situations. Use them wisely.
- The game automatically saves after each chapter, and you can load your progress from the main menu.

**Tip**: Explore different choices for various story paths and endings!

---

### **Object-Oriented Concepts Used**
Our game employs key object-oriented principles to enhance code structure and maintainability:

- **Encapsulation**: Each class (e.g., Player, Item, Script, Game) encapsulates its data, providing methods for controlled access.
- **Abstraction**: The Game class abstracts complex game functions (e.g., startGame(), saveProgress()) into simplified interfaces.
- **Association**: The Game class interacts with Player, Item, and Script objects, enabling communication and data sharing.
- **Composition**: The Game object is composed of Player, Item, and Script objects, coordinating their functionalities to manage the game's flow.

---

### **Data Structures Used**

- **Linked Lists**: Represent different item types (coins, food, and cards). A linked list is used to manage the inventory.
- **Stacks**: Items are managed using stacks, following the Last-In-First-Out (LIFO) principle. The stack functions (Push and Pop) add or remove items from the inventory.
- **Item Addition/Removal**: Functions like `PushCoin()`, `PushCard()`, and `PushFood()` manage the stacks, allowing players to add or remove items.
- **Count Tracking**: Variables track the number of items in each stack (coinCount, cardCount, foodCount).
- **Empty Check**: Functions check if stacks are empty before attempting to add or remove items.

---

### **Contributors**
- **[Khoo Iu Wan](https://github.com/wuik1112)**
- Loo Jia Xin
- Raziqin Husna binti Abdul Wahid
  
---

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

---

### A link to our game demo video
https://youtu.be/sOfs3GsRH3U
