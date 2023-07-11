class Student {
  constructor(firstName, lastName, year) {
    this.firstName = firstName;
    this.lastName = lastName;
  }

  fullName() {
    return `Your full name is ${this.firstName} ${this.lastName}`;
  }

  static enrollStudents() {
    return "Enrolling Students";
  }
}

let myStudent = new Student("Stone", "Cold", 2);
console.log(Student.enrollStudents());
