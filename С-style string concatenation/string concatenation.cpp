unsigned strlen(const char *str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str+=1;
    }
    return count;
}

void strcat(char* to, const char* from)
{
    int len1 = strlen(to);
    int len2 = strlen(from);
    for (int i = 0; i < len2+1; i++)
    {
        to[len1] = from[i];
        len1++;
    }
}
