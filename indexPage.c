/* File: indexPage.c */
/* Author: Britton Wolfe */
/* Date: September 3rd, 2010 */

/* This program indexes a web page, printing out the counts of words on that page */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* TODO: structure definitions */
struct trieNode
{
  int count;
  struct trieNode *aChild;
  struct trieNode *bChild;
  struct trieNode *cChild;
  struct trieNode *dChild;
  struct trieNode *eChild;
  struct trieNode *fChild;
  struct trieNode *gChild;
  struct trieNode *hChild;
  struct trieNode *iChild;
  struct trieNode *jChild;
  struct trieNode *kChild;
  struct trieNode *lChild;
  struct trieNode *mChild;
  struct trieNode *nChild;
  struct trieNode *oChild;
  struct trieNode *pChild;
  struct trieNode *qChild;
  struct trieNode *rChild;
  struct trieNode *sChild;
  struct trieNode *tChild;
  struct trieNode *uChild;
  struct trieNode *vChild;
  struct trieNode *wChild;
  struct trieNode *xChild;
  struct trieNode *yChild;
  struct trieNode *zChild;
};

/* NOTE: int return values can be used to indicate errors (typically non-zero)
   or success (typically zero return value) */

/* TODO: change this return type */
void indexPage(const char *url);

int addWordOccurrence(const char *word, const int wordLength
                      /* TODO: other parameters you need */);

void printTrieContents(/* TODO: any parameters you need */);

int freeTrieMemory(/* TODO: any parameters you need */);

int getText(const char *srcAddr, char *buffer, const int bufSize);

int main(int argc, char **argv)
{
  /* TODO: write the (simple) main function

  /* argv[1] will be the URL to index, if argc > 1 */

  return 0;
}

/* TODO: define the functions corresponding to the above prototypes */

/* TODO: change this return type */
void indexPage(const char *url)
{
}

int addWordOccurrence(const char *word, const int wordLength
                      /* TODO: other parameters you need */)
{
}

void printTrieContents(/* TODO: any parameters you need */)
{
}

int freeTrieMemory(/* TODO: any parameters you need */)
{
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
