function temp(names, heights) {
    const people = names.map((name, index) => ({name, height: heights[index]}));
    return people.sort((a, b) => b.height - a.height).map(({name}) => name);
}

temp(  ["Mary","John","Emma"], [180,165,170]);
