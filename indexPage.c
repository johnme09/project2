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

void printTrieContents(struct trieNode *currentNode, char *previousCharacters);

int freeTrieMemory(struct trieNode *currentNode);

int getText(const char *srcAddr, char *buffer, const int bufSize);

int main(int argc, char **argv)
{
  /* TODO: write the (simple) main function
if(argc < 2){
printf("USAGE: %s URL\n", argv[0]);
return -1;
}
  /* argv[1] will be the URL to index, if argc > 1 */
  indexPage(argv[1]);
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

void printTrieContents(struct trieNode *currentNode, char *previousCharacters)
{
  if (currentNode == NULL)
  {
    return;
  }
  int stringLength = strlen(previousCharacters);
  if (currentNode->count)
  {
    printf("%s", previousCharacters);
  }
  previousCharacters[stringLength + 1] = '\0';
  previousCharacters[stringLength] = 'a';
  printTrieContents(currentNode->aChild, previousCharacters);

  previousCharacters[stringLength] = 'b';
  printTrieContents(currentNode->bChild, previousCharacters);

  previousCharacters[stringLength] = 'c';
  printTrieContents(currentNode->cChild, previousCharacters);

  previousCharacters[stringLength] = 'd';
  printTrieContents(currentNode->dChild, previousCharacters);

  previousCharacters[stringLength] = 'e';
  printTrieContents(currentNode->eChild, previousCharacters);

  previousCharacters[stringLength] = 'f';
  printTrieContents(currentNode->fChild, previousCharacters);

  previousCharacters[stringLength] = 'g';
  printTrieContents(currentNode->gChild, previousCharacters);

  previousCharacters[stringLength] = 'h';
  printTrieContents(currentNode->hChild, previousCharacters);

  previousCharacters[stringLength] = 'i';
  printTrieContents(currentNode->iChild, previousCharacters);

  previousCharacters[stringLength] = 'j';
  printTrieContents(currentNode->jChild, previousCharacters);

  previousCharacters[stringLength] = 'k';
  printTrieContents(currentNode->kChild, previousCharacters);

  previousCharacters[stringLength] = 'l';
  printTrieContents(currentNode->lChild, previousCharacters);

  previousCharacters[stringLength] = 'm';
  printTrieContents(currentNode->mChild, previousCharacters);

  previousCharacters[stringLength] = 'n';
  printTrieContents(currentNode->nChild, previousCharacters);

  previousCharacters[stringLength] = 'o';
  printTrieContents(currentNode->oChild, previousCharacters);

  previousCharacters[stringLength] = 'p';
  printTrieContents(currentNode->pChild, previousCharacters);

  previousCharacters[stringLength] = 'q';
  printTrieContents(currentNode->qChild, previousCharacters);

  previousCharacters[stringLength] = 'r';
  printTrieContents(currentNode->rChild, previousCharacters);

  previousCharacters[stringLength] = 's';
  printTrieContents(currentNode->sChild, previousCharacters);

  previousCharacters[stringLength] = 't';
  printTrieContents(currentNode->tChild, previousCharacters);

  previousCharacters[stringLength] = 'u';
  printTrieContents(currentNode->uChild, previousCharacters);

  previousCharacters[stringLength] = 'v';
  printTrieContents(currentNode->vChild, previousCharacters);

  previousCharacters[stringLength] = 'w';
  printTrieContents(currentNode->wChild, previousCharacters);

  previousCharacters[stringLength] = 'x';
  printTrieContents(currentNode->xChild, previousCharacters);

  previousCharacters[stringLength] = 'y';
  printTrieContents(currentNode->yChild, previousCharacters);

  previousCharacters[stringLength] = 'z';
  printTrieContents(currentNode->zChild, previousCharacters);
}

int freeTrieMemory(struct trieNode *currentNode)
{
  if (currentNode == NULL)
  {
    return 1;
  }
  int count = 0;
  count += freeTrieMemory((*currentNode).aChild);
  count += freeTrieMemory((*currentNode).bChild);
  count += freeTrieMemory((*currentNode).cChild);
  count += freeTrieMemory((*currentNode).dChild);
  count += freeTrieMemory((*currentNode).eChild);
  count += freeTrieMemory((*currentNode).fChild);
  count += freeTrieMemory((*currentNode).gChild);
  count += freeTrieMemory((*currentNode).hChild);
  count += freeTrieMemory((*currentNode).iChild);
  count += freeTrieMemory((*currentNode).jChild);
  count += freeTrieMemory((*currentNode).kChild);
  count += freeTrieMemory((*currentNode).lChild);
  count += freeTrieMemory((*currentNode).mChild);
  count += freeTrieMemory((*currentNode).nChild);
  count += freeTrieMemory((*currentNode).oChild);
  count += freeTrieMemory((*currentNode).pChild);
  count += freeTrieMemory((*currentNode).qChild);
  count += freeTrieMemory((*currentNode).rChild);
  count += freeTrieMemory((*currentNode).sChild);
  count += freeTrieMemory((*currentNode).tChild);
  count += freeTrieMemory((*currentNode).uChild);
  count += freeTrieMemory((*currentNode).vChild);
  count += freeTrieMemory((*currentNode).wChild);
  count += freeTrieMemory((*currentNode).xChild);
  count += freeTrieMemory((*currentNode).yChild);
  count += freeTrieMemory((*currentNode).zChild);
  if (count == 26)
  {
    free(currentNode);
  }
  else
  {
    freeTrieMemory(currentNode);
  }
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
