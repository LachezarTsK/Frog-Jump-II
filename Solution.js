
/**
 * @param {number[]} stones
 * @return {number}
 */
var maxJump = function (stones) {
    let minCost = stones[1];
    for (let i = 1; i < stones.length - 1; ++i) {
        minCost = Math.max(minCost, stones[i + 1] - stones[i - 1]);
    }
    return minCost;
};
