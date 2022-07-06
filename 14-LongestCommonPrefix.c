char * longestCommonPrefix(char ** strs, int strsSize){
    //counter to interate through the strings.
    int n = 0, minLength = 200;
    
    //goal: keep iterating untill either a) reaching the end of a string or b) leading characters arent the same anymore
    
    for(int i = 0; i < strsSize; i++)
    {
        int c = 0;
        while(strs[i][c] != '\0')
        {
            c++;
        }
        if(c < minLength)
        {
            minLength = c;
        }
    }
    
    
    for(int i = 0; i < minLength; i++)
    {
        char c = strs[strsSize - 1][i];
        for(int j = 0; j < strsSize - 1; j++)
        {
            if(c != strs[j][i])
            {
                i = minLength;
                n--;
                break;
            }
        }
        n++;
    }
    
    char* prefix = (char*)malloc(sizeof(char) * (n+1));
    strncpy(prefix, strs[strsSize-1], n);
    prefix[n] = '\0';

    
    return prefix;
}