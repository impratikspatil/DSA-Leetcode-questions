class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        if (n2 > n1)
        {
            swap(num1, num2);
        }
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        string ans;
        int sum, rem, carry =0;
        while (j >= 0)
        {
            sum = (num1[i] - '0') + (num2[j] - '0') + carry;
            if (sum >= 10)
            {
                char c = to_string(sum)[1];
                ans.push_back(c);
                sum /= 10;
                carry = sum;
            }
            else
            {
                char c = to_string(sum)[0];
                ans.push_back(c);
                sum /= 10;
                carry = sum;
            }
            i--;
            j--;
        }
        while (i >= 0)
        {
            sum = (num1[i] - '0') + carry;
            if (sum >= 10)
            {
                char c = to_string(sum)[1];
                ans.push_back(c);
                sum /= 10;
                carry = sum;
            }
            else
            {
                char c = to_string(sum)[0];
                ans.push_back(c);
                sum /= 10;
                carry = sum;
            }
            i--;
        }   
        if (carry)
        {
            ans.push_back(to_string(carry)[0]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};