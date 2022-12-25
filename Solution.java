
public class Solution {

    public int maxJump(int[] stones) {
        int minCost = stones[1];
        for (int i = 1; i < stones.length - 1; ++i) {
            minCost = Math.max(minCost, stones[i + 1] - stones[i - 1]);
        }
        return minCost;
    }
}
