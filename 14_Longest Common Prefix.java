class Solution {
    public String longestCommonPrefix(String[] strs) {

        // Edge case
        if (strs == null || strs.length == 0) {
            return "";
        }

        // Step 1: Find minimum length
        int minLength = Integer.MAX_VALUE;
        for (String str : strs) {
            minLength = Math.min(minLength, str.length());
        }

        // Step 2: Compare characters
        int i = 0;
        while (i < minLength) {
            char current = strs[0].charAt(i);

            for (String str : strs) {
                if (str.charAt(i) != current) {
                    return strs[0].substring(0, i);
                }
            }
            i++;
        }

        // Step 3: All matched till minLength
        return strs[0].substring(0, i);
    }
}
