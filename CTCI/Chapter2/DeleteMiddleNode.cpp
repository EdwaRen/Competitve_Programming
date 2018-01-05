#include <iostream>

using namespace std;

struct node {
  int data;
  node *next;
}

class list {
private:
  node *head;
  node *tail:
public:
  list() {
    head = NULL;
    tail = NULL;
  }

  void insert(int value) {
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    if (head == NULL) {
      head = temp;
      tail = temp;
    } else {
      tail->next = temp;
      tail = temp;
    }
  }

  void display() {
    node *temp = new node;
    temp = head;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp=temp->next;
    }
  }
}

bool deleteNode(node *c) {
  if (c == NULL || c->next == NULL) {
    return false;
  } else {
    node *n = new node;
    n = c->next;
    c->data = n->data;
    c->next = n->next;
    return true;
  }
}

int main() {
  list obj;
  obj.createNode(25);
  obj.createNode(50);
  obj.createNode(90);
  obj.createNode(40);
  obj.createNode(50);
  // obj.deleteDups();


  // obj.deleteNode(2);
  cout<<"\n--------------------------------------------------\n";
  cout<<"---------------Displaying All nodes---------------";
  cout<<"\n--------------------------------------------------\n";
  obj.display();
}
