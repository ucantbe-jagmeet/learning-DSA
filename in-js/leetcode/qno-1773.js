function temp(items, ruleKey, ruleValue) {
  let ruleIndex = ruleKey === "type" ? 0 : ruleKey === "color" ? 1 : 2;
  return items.filter((item) => item[ruleIndex] === ruleValue).length;
}

temp();
