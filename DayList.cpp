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

