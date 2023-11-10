function temp(releaseTime, keysPressed) {
  let maxTime = releaseTime[0],
    maxKey = keysPressed[0];

  for (let i = 1; i < releaseTime.length; i++) {
    const time = releaseTime[i] - releaseTime[i - 1];

    if (time > maxTime || (time === maxTime && keysPressed[i] > maxKey)) {
      maxTime = time;
      maxKey = keysPressed[i];
    }
  }
  console.log("maxKey", maxKey);
  return maxKey;
}

let releasedTime = [9, 20, 49, 50];
let keysPressed = "cbcd";

temp(releasedTime, keysPressed);
