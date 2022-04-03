void clean_stdin(void);
void clean_stdin(void) 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}