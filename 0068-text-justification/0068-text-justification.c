char** fullJustify(char** words, int wordsSize, int maxWidth, int* returnSize) {
    char** lines = malloc(sizeof(char*) * wordsSize);
    int i = 0, count = 0;
    while (i < wordsSize) {
        int j = i, width = 0;
        while (j < wordsSize && width + (int)strlen(words[j]) + (j - i) <= maxWidth) width += strlen(words[j++]);
        int gaps = j - i - 1, pos = 0;
        char* line = malloc(maxWidth + 1);
        if (j == wordsSize || gaps == 0) {
            for (int k = i; k < j; k++) {
                if (k > i) line[pos++] = ' ';
                int len = strlen(words[k]);
                memcpy(line + pos, words[k], len);
                pos += len;
            }
            while (pos < maxWidth) line[pos++] = ' ';
        } else {
            int spaces = (maxWidth - width) / gaps, extra = (maxWidth - width) % gaps;
            for (int k = i; k < j; k++) {
                int len = strlen(words[k]);
                memcpy(line + pos, words[k], len);
                pos += len;
                if (k < j - 1) for (int s = 0; s < spaces + (k - i < extra ? 1 : 0); s++) line[pos++] = ' ';
            }
        }
        line[maxWidth] = '\0';
        lines[count++] = line;
        i = j;
    }
    *returnSize = count;
    return lines;
}
