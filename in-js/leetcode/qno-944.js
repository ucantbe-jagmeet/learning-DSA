function temp(strs) {
    let count = 0;

    Array.from({ length: strs[0].length }).forEach((_, colIndex) => {
        const columnChars = strs.map(str => str[colIndex]);

        const isInvalidColumn = columnChars.some((char, index) => 
            index < strs.length - 1 && char > columnChars[index + 1]);

        if (isInvalidColumn) {
            count++;
        }
    });

    console.log(count);
    return count;
}
temp(["cba","daf","ghi"])