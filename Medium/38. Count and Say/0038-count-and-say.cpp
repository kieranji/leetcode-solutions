class Solution {
public:
    string countAndSay(int n) {
        string current = "1";

        for (int round = 1; round < n; round++) {
            string next = "";

            int index = 0;

            while (index < current.length()) {
                char digit = current[index];
                int count = 0;

                // 统计从 index 开始，有多少个连续相同字符
                while (index < current.length() &&
                       current[index] == digit) {
                    count++;
                    index++;
                }

                // 先加入数量，再加入字符
                next += to_string(count);
                next += digit;
            }

            current = next;
        }

        return current;
    }
};
