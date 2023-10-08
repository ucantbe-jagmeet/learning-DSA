// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract FactorialCalculator {
    function calculateFactorial(uint256 n) public pure returns (uint256) {
        require(n >= 0, "Input must be a non-negative integer");
        uint256 result = 1;
        
        for (uint256 i = 2; i <= n; i++) {
            result *= i;
        }
<<<<<<< HEAD
=======
        
>>>>>>> 3130c5d14b0d675719a8fc11f7f5ece65c5467f6
        return result;
    }
}