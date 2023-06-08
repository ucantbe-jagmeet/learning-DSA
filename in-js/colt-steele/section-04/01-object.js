let instructor = {
  firstName: "kelly",
  isInstructor: true,
  favoriteNumbers: [1, 2, 3, 4],
};

console.log(Object.keys(instructor));
console.log(Object.values(instructor));
console.log(Object.entries(instructor));
console.log(instructor.hasOwnProperty("firstName")); // either object has that key value or not
