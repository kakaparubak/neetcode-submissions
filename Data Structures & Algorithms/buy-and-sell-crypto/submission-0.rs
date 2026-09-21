impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let vecsize = prices.len();
        let mut i = 0;
        let mut j = 1;
        
        let mut max_prof = 0;
        while i < vecsize - 1 && j < vecsize {
            if prices[i] >= prices[j] {
                i = j;
                j += 1;
            } else {
                max_prof = if prices[j] - prices[i] > max_prof {
                    prices[j] - prices[i]
                } else {
                    max_prof
                };
                j += 1;
            }
        }

        return max_prof;
    }
}
