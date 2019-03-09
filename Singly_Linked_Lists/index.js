
// creating node class
class Node {
  constructor(val) {
    this.val = val;
    this.next = null;
  }
}


// creating singley linked list
class SingleyLinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
    this.length = 0;
  }

  push(val) {
    var newNode = new Node(val);
    if (!this.head) {
      this.head = newNode;
      this.tail = this.head;
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
    this.length++;
    return this;
  }

  traverse() {
    let current = this.head;
    while (current) {
      console.log(current.val);
      current = current.next;
    }
  }
}

var list = new SingleyLinkedList();
list.push("Hello");
list.push("Goodbye");
list.push("Next");
// list.push("goodbye");
// var first = new Node("Hi");

// first.next = new Node("there.");
// first.next.next = new Node("How");
// first.next.next.next = new Node("are");
// first.next.next.next.next = new Node("you?");
