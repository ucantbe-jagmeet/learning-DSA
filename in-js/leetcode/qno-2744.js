var maximumNumberOfStringPairs = function (words) {
    let maxPairs = 0;
    const wordSet = new Set();

    for (let i = 0; i < words.length; i++) {
        const w = words[i][0] > words[i][1]
            ? words[i][1] + words[i][0]
            : words[i];

        if (wordSet.has(w)) {
            maxPairs++;
            wordSet.delete(w);
        } else {
            wordSet.add(w);
        }
    }
    return maxPairs;
};

console.log(maximumNumberOfStringPairs);