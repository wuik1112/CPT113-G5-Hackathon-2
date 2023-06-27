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
_Engaging Text-Based Adventure:_ Experience an immersive journey through captivating text and interactive storytelling.

_Emotional Decision-Making:_ Shape the cat's fate through your choices, reflecting its loyalty and love for its human.

_Diverse Encounters:_ Meet unique characters and animals, forging meaningful connections along the way.

_Heartwarming Narrative:_ Explore the deep bond between cats and humans as the cat overcomes challenges to find its human.

_Character Progression:_ Witness the cat's growth, unlocking abilities and deepening relationships.

_Multiple Endings:_ Your choices shape the outcome, offering replayability and exploration.

### How to play our game

### How object-oriented concepts were used to develop our game

### How linked lists/stacks/queues play a role in our game
Linked Lists: Each item type (coins, card, and food) is represented as a linked list. A linked list is a data structure that consists of nodes, where each node contains the item and a pointer to the next node in the list.

Stacks: The linked lists are used as stacks to manage the player's items. A stack is a data structure that follows the Last-In-First-Out (LIFO) principle, where the last item added is the first one to be removed.

Item Addition: The functions PushCoin(), PushCard(), and PushFood() add items to their respective stacks. Each function creates a new node for the item and inserts it at the top of the corresponding linked list, representing the top of the stack.

Item Removal: The functions PopCoin(), PopCard(), and PopFood() remove items from the top of their respective stacks. These functions delete the top node from the linked list and update the top pointer to point to the next node, effectively removing the item from the stack.

Count Tracking: The variables coinCount, cardCount, and foodCount keep track of the number of items in each stack. These counts provide information about the current inventory of the player.

Empty Check: The functions isCoinEmpty(), isCardEmpty(), and isFoodEmpty() check if their respective stacks are empty. They examine the count variables and return true if the count is less than or equal to zero, indicating that the stack is empty.

By utilizing linked lists as stacks, the code efficiently manages the player's items for different item types. The stack structure allows for adding items to the top and removing items from the top, following the LIFO principle. The count variables and empty check functions provide information about the availability of items in the stacks.

### Screenshots of our game

### A link to our game demo video
https://youtu.be/dQw4w9WgXcQ // rickroll
