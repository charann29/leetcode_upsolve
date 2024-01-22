class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Step 1: Use an unordered_map to store lists of anagrams based on their character count representation
        unordered_map<string, vector<string>> m;

        // Step 2: Iterate through each string in the input vector
        for (int i = 0; i < strs.size(); i++) {
            // Step 3: Calculate the count of each character in the string
            string key = getKey(strs[i]);
            
            // Step 4: Update the unordered_map with the original string associated with its character count representation
            m[key].push_back(strs[i]);
        }
        
        // Step 5: Prepare the final result as a vector of vectors containing anagram groups
        vector<vector<string>> result;
        for (auto it = m.begin(); it != m.end(); it++) {
            // Append each group of anagrams to the final result
            result.push_back(it->second);
        }

        // Step 6: Return the final result
        return result;
    }

private:
    // Helper function to calculate the character count representation of a string
    string getKey(string str) {
        vector<int> count(26);
        
        // Count the occurrences of each character
        for (int j = 0; j < str.size(); j++) {
            count[str[j] - 'a']++;
        }
        
        // Create a key by concatenating the counts with '#' as a separator
        string key = "";
        for (int i = 0; i < count.size(); i++) {
            key.append(to_string(count[i]) + '#');
        }
        
        return key;
    }
};