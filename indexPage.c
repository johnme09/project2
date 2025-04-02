/* File: indexPage.c */
/* Author: Britton Wolfe */
/* Date: September 3rd, 2010 */

/* This program indexes a web page, printing out the counts of words on that page */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* TODO: structure definitions */
struct trieNode
{
  int count;
  struct trieNode *children[26];
};

/* NOTE: int return values can be used to indicate errors (typically non-zero)
   or success (typically zero return value) */

/* TODO: change this return type */
int indexPage(const char *url, struct trieNode *root);

int addWordOccurrence(const char *word, int *wordLength, struct trieNode *currentNode);

void printTrieContents(struct trieNode *currentNode, char *previousCharacters, int depth);

int freeTrieMemory(struct trieNode *currentNode);

int getText(const char *srcAddr, char *buffer, const int bufSize);

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    printf("USAGE: %s URL\n", argv[0]);
    return -1;
  }
  struct trieNode *root = malloc(sizeof(struct trieNode));
  if (root == NULL)
  {
    printf("Memory allocation failed for root node\n");
    return -1;
  }

  root->count = 0;
  for (int i = 0; i < 26; i++)
  {
    root->children[i] = NULL;
  }

  if (indexPage(argv[1], root) != 0)
  {
    return -1;
  }

  char wordBuffer[1000] = "";
  printTrieContents(root, wordBuffer, 0);
  freeTrieMemory(root);

  return 0;
}

/* TODO: define the functions corresponding to the above prototypes */

/* TODO: change this return type */
int indexPage(const char *url, struct trieNode *root)
{
  const int MAX_INDEX = 300000;
  char *buffer = (char *)malloc(sizeof(char) * MAX_INDEX);
  if (buffer == NULL)
  {
    printf("Memory Allocation Failed: buffer\n");
    freeTrieMemory(root);
    return -1;
  }

  int bufferSize = getText(url, buffer, MAX_INDEX);
  if (bufferSize == 0)
  {
    printf("getText failed\n");
    free(buffer);
    freeTrieMemory(root);
    return -1;
  }

  printf("%s\n", url);

  for (int i = 0; i < bufferSize; i++)
  {
    if (!isalpha(buffer[i]))
    {
      buffer[i] = ' ';
    }
    else if (isupper(buffer[i]))
    {
      buffer[i] = tolower(buffer[i]);
    }
  }

  char *word = malloc(sizeof(char) * MAX_INDEX);
  if (word == NULL)
  {
    printf("Memory Allocation Failed: word\n");
    free(buffer);
    freeTrieMemory(root);
    return -1;
  }
  char *bufferCursor = buffer;
  int wordLength = 0;
  int isLetter = 0;
  for (int i = 0; i < bufferSize; i++)
  {

    if (buffer[i] == ' ' || buffer[i] == '\n')
    {
      if (isLetter)
      {
        buffer[i] = '\0';
        printf("\t%s\n", bufferCursor);
        if ((addWordOccurrence(bufferCursor, &wordLength, root)) != 0)
        {
          printf("addWordOccurrence failed\n");
          free(buffer);
          free(word);
          freeTrieMemory(root);
          return -1;
        }
        isLetter = 0;
      }
      bufferCursor = buffer + i + 1;
    }
    else if (buffer[i] >= 'a' || buffer[i] <= 'z')
    {
      isLetter = 1;
    }
  }

  free(word);
  free(buffer);
  return 0;
}

int addWordOccurrence(const char *word, int *wordLength, struct trieNode *currentNode)
{
  char firstChar = word[0];
  if (firstChar == '\0')
  {
    currentNode->count++;
    return 0;
  }
  int charNum = firstChar - 'a';
  if (currentNode->children[charNum] == NULL)
  {
    currentNode->children[charNum] = malloc(sizeof(struct trieNode));
    if (currentNode->children[charNum] == NULL)
    {
      return -1;
    }
    currentNode->children[charNum]->count = 0;
    for (int i = 0; i < 26; i++)
    {
      currentNode->children[charNum]->children[i] = NULL;
    }
  }
  addWordOccurrence(word + 1, wordLength, currentNode->children[charNum]);
  return 0;
}

void printTrieContents(struct trieNode *currentNode, char *previousCharacters, int depth)
{
  if (currentNode == NULL)
  {
    return;
  }
  if (currentNode->count)
  {
    previousCharacters[depth] = '\0';
    printf("%s: %d\n", previousCharacters, currentNode->count);
  }
  for (int i = 0; i < 26; i++)
  {
    previousCharacters[depth] = 'a' + i;
    printTrieContents(currentNode->children[i], previousCharacters, depth + 1);
  }
}

int freeTrieMemory(struct trieNode *currentNode)
{
  if (currentNode == NULL)
  {
    return 0;
  }
  for (int i = 0; i < 26; i++)
  {
    freeTrieMemory(currentNode->children[i]);
  }
  free(currentNode);
  return 0;
}

/* You should not need to modify this function */
int getText(const char *srcAddr, char *buffer, const int bufSize)
{
  FILE *pipe;
  int bytesRead;

  snprintf(buffer, bufSize, "curl -s \"%s\" | python3 getText.py", srcAddr);

  pipe = popen(buffer, "r");
  if (pipe == NULL)
  {
    fprintf(stderr, "ERROR: could not open the pipe for command %s\n",
            buffer);
    return 0;
  }

  bytesRead = fread(buffer, sizeof(char), bufSize - 1, pipe);
  buffer[bytesRead] = '\0';

  pclose(pipe);

  return bytesRead;
}
