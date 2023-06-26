#include <iostream>
using namespace std;

// Day type definition
typedef void (Script::*DayPointer)();

// Node structure for the linked list
struct DayNode {
    DayPointer day;
    DayNode* next;
};

// Linked list class
class DayList {
public:
    DayNode* head;
    DayNode* tail;

    DayList() : head(nullptr), tail(nullptr) {}

    // Add a day to the list
    void addDay(DayPointer day) {
        DayNode* newNode = new DayNode;
        newNode->day = day;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Invoke all days in the list
    void invokeAllDays(Script& script, int d) {
        DayNode* current = head;
        for (int i=1; i<d; i++) {
          current = current->next;
        }
        while (current != nullptr) {
            (script.*(current->day))();
            current = current->next;
        }
    }
};
