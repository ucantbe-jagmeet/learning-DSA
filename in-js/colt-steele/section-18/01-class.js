class Student {
  constructor(firstName, lastName, year) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.grade = year;
  }
}
// creating object from classes
let firstStudent = new Student("Jagmeet", "singh", 2023);
let secondStudent = new Student("Jasmeet", "singh", 2022);

console.log(firstStudent);
