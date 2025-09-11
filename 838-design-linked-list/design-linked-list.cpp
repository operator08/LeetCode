class MyLinkedList {
public:
  MyLinkedList() : header(ListNode()), tail(nullptr), size(0) {}
  ~MyLinkedList() {
    tail = nullptr;
    size = 0;

    ListNode* p = header.next;
    while (p) {
      ListNode* temp = p;
      p = p->next;
      delete temp;
    }
    header.next = nullptr;
  }
  
  int get(int index) {
    ListNode* p = header.next;
    int i = 0;
    while (i < index && p) {
      i++;
      p = p->next;
    }

    return (i == index && p ? p->val : -1);
  }
  
  void addAtHead(int val) {
    ListNode* n = new ListNode{val, &header, header.next};
    ListNode* next = header.next;

    header.next = n;
    if (next) { next->prev = n; }

    if (!tail) { tail = header.next; }

    size++;
  }
  
  void addAtTail(int val) {
    if (!tail) {
      header.next = tail = new ListNode{val, &header};
    } else {
      tail->next = new ListNode{val, tail};
      tail = tail->next;
      /*
       * or tail = new ListNode{val, tail};
       *    tail->prev->next = tail;
       */
    }

    size++;
  }
  
  void addAtIndex(int index, int val) {
    ListNode* prev = &header;
    int i = 0;
    while (i < index && prev) {
      i++;
      prev = prev->next;
    }
    if (i != index || !prev) { return; }
    ListNode* next = prev->next;

    ListNode* n = new ListNode{val};
    // Handle new node's pointers
    n->prev = prev;
    n->next = next;

    // Handle neighbours' pointers
    prev->next = n;
    if (next) { next->prev = n; }

    // Set tail if appended to back
    if (index == size) tail = n;
    size++;
  }
  
  void deleteAtIndex(int index) {
    ListNode* p = header.next;
    int i = 0;
    while (i < index && p) {
      i++;
      p = p->next;
    }
    if (i != index || !p) { return; }
    // If we are deleting last element, update tail
    if (index == size - 1) { tail = tail->prev; }

    ListNode* prev = p->prev;
    ListNode* next = p->next;

    prev->next = next;
    if (next) { next->prev = prev; }

    delete p;
    size--;

  }
  
private:
  struct ListNode {
    int val;
    ListNode* prev;
    ListNode* next;
    ListNode(int initVal = int(),
             ListNode* initPrev = nullptr,
             ListNode* initNext = nullptr)
      : val(initVal), prev(initPrev), next(initNext) {}
  };

  ListNode header;
  ListNode* tail;

  int size;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */