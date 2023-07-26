class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Stack {
  constructor() {
    this.first = null;
    this.last = null;
    this.size = 0;
  }
  push(value) {
    var newNode = new Node(value);
    if (!this.first) {
      this.first = newNode;
      this.last = this.first;
    } else {
      var temp = this.first;
      this.first = newNode;
      this.first.next = temp;
    }
    return ++this.size;
  }

  pop() {
    if (!this.first) return null;
    var temp = this.first;
    if (!this.length === 1) {
      this.first = null;
      this.last = this.first;
    }
    this.first = this.first.next;
    this.size--;
    return temp.value;
  }
}

var stack = new Stack();
stack.push(9);
stack.push(11);
console.log(stack.pop());
