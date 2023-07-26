class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Queue {
  constructor() {
    this.first = null;
    this.last = null;
    this.size = 0;
  }

  enqueue(value) {
    var newNode = new Node(value);
    if (!this.first) {
      this.first = newNode;
      this.last = this.first;
    } else {
      this.last.next = newNode;
      this.last = newNode;
    }
    return ++this.size;
  }

  dequeue() {
    if (!this.first) return null;
    var temp = this.first;
    if (!this.size === 1) {
      this.first = null;
      this.last = this.first;
    }
    this.first = this.first.next;
    this.size--;
    return temp.value;
  }
}

var queue = new Queue();
queue.enqueue(9);
queue.enqueue(11);
queue.enqueue(13);
console.log(queue.dequeue());
