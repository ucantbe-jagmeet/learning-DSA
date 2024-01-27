function temp(s) {
    let strArr = s.split("");
    let num = 0;

    for (let i = 0; i < strArr.length; i++) {
        switch (strArr[i]) {
            case 'I':
                if (String(strArr[i + 1]) === 'V' || String(strArr[i + 1]) === 'X') {
                    num -= 1;
                } else {
                    num += 1;
                }
                break;

            case 'X':
                if (String(strArr[i + 1]) === 'L' || String(strArr[i + 1]) === "C") {
                    num -= 10;
                } else {
                    num += 10;
                }
                break;

            case 'C':
                if (String(strArr[i + 1]) === 'D' || String(strArr[i + 1]) === 'M') {
                    num -= 100;
                } else {
                    num += 100;
                }
                break;

            case 'V':
                num += 5;
                break;

            case 'L':
                num += 50;
                break;

            case 'D':
                num += 500;
                break;

            case 'M':
                num += 1000;
                break;
        }
    }

    return num;
}

console.log(temp("LVIII"));