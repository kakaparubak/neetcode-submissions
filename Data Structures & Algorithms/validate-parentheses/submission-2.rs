impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut stack: Vec<char> = Vec::new();
        for ch in s.chars() {
            if ch == '[' || ch == '{' || ch == '(' {
                stack.push(ch);
            } else {
                if stack.len() == 0 {return false};

                if stack[stack.len() - 1] == '[' && ch == ']' {
                    stack.pop();
                }
                else if stack[stack.len() - 1] == '(' && ch == ')' {
                    stack.pop();
                }
                else if stack[stack.len() - 1] == '{' && ch == '}' {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
        if stack.len() != 0 {return false} else {return true};
    }
}
