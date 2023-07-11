class Student {
  constructor(firstName, lastName, year) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.grade = year;
    this.tardies = 0;
    this.scores = [];
  }

  fullName() {
    return `Your full name is ${this.firstName} ${this.lastName}`;
  }

  markLate() {
    this.tardies += 1;

    if (this.tardies >= 3) return "You are expelled!!!";

    return `${this.firstName} ${this.lastName} has been late ${this.tardies}  times`;
  }

  addScore(score) {
    this.scores.push(score);
  }
  calculateAverage() {
    let sum = this.scores.reduce((a, b) => {
      return a + b;
    });

    return sum / this.scores.length;
  }
}

let myStudent = new Student("Stone", "Cold", 2);
console.log(myStudent.markLate());
myStudent.addScore(10);
myStudent.addScore(17);
myStudent.addScore(20);
console.log(myStudent.scores);
console.log(myStudent.calculateAverage());
