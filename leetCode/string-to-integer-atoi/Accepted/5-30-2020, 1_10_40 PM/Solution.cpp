// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string str) {
    int i = 0;
    while(str[i] != '\0' && str[i] == ' ') i++;
    int state = 0;
    if(str[i] == '+') i++;
    else if(str[i] == '-')
    {
        i++;
        state = 1;
    }
    
    if(str[i] == '\0' || str[i] < '0' || str[i] > '9')
        return 0;
    
    int num = 0;
    while(str[i] >= '0' || str[i] <= '9')
    {
        num += str[i] - '0';
        if(str[i+1] != '\0' && (str[i+1] >= '0' && str[i+1] <= '9'))
        	i++;
        else
        	if(state)
        		return num *= -1;
        	else return num;

        if(num > INT_MAX/10)
        	if(state)
        		return INT_MIN;
        	else return INT_MAX;
        
        if(num == INT_MAX/10)
            if(str[i] == '8' || str[i] == '9')
                if(state)
        		    return INT_MIN;
        	    else 
					return INT_MAX;
        	
        num *= 10;
    }
    
    if(state)
		return	num *= -1;
	else return num;
    }
};