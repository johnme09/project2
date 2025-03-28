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

int addWordOccurrence(const char *word, const int wordLength, struct trieNode *currentNode);

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

int addWordOccurrence(const char *word, const int wordLength, struct trieNode *currentNode)
{
  char firstChar = word[0];
  switch (firstChar)
  {
  case '\0':
    currentNode->count += 1;
    break;
  case 'a':
    if (currentNode->aChild == NULL)
    {
      currentNode->aChild = malloc(sizeof(struct trieNode));
      if (currentNode->aChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->aChild);
    break;
  case 'b':
    if (currentNode->bChild == NULL)
    {
      currentNode->bChild = malloc(sizeof(struct trieNode));
      if (currentNode->bChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->bChild);
    break;
  case 'c':
    if (currentNode->cChild == NULL)
    {
      currentNode->cChild = malloc(sizeof(struct trieNode));
      if (currentNode->cChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->cChild);
    break;
  case 'd':
    if (currentNode->dChild == NULL)
    {
      currentNode->dChild = malloc(sizeof(struct trieNode));
      if (currentNode->dChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->dChild);
    break;
  case 'e':
    if (currentNode->eChild == NULL)
    {
      currentNode->eChild = malloc(sizeof(struct trieNode));
      if (currentNode->eChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->eChild);
    break;
  case 'f':
    if (currentNode->fChild == NULL)
    {
      currentNode->fChild = malloc(sizeof(struct trieNode));
      if (currentNode->fChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->fChild);
    break;
  case 'g':
    if (currentNode->gChild == NULL)
    {
      currentNode->gChild = malloc(sizeof(struct trieNode));
      if (currentNode->gChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->gChild);
    break;
  case 'h':
    if (currentNode->hChild == NULL)
    {
      currentNode->hChild = malloc(sizeof(struct trieNode));
      if (currentNode->hChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->hChild);
    break;
  case 'i':
    if (currentNode->iChild == NULL)
    {
      currentNode->iChild = malloc(sizeof(struct trieNode));
      if (currentNode->iChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->iChild);
    break;
  case 'j':
    if (currentNode->jChild == NULL)
    {
      currentNode->jChild = malloc(sizeof(struct trieNode));
      if (currentNode->jChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->jChild);
    break;
  case 'k':
    if (currentNode->kChild == NULL)
    {
      currentNode->kChild = malloc(sizeof(struct trieNode));
      if (currentNode->kChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->kChild);
    break;
  case 'l':
    if (currentNode->lChild == NULL)
    {
      currentNode->lChild = malloc(sizeof(struct trieNode));
      if (currentNode->lChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->lChild);
    break;
  case 'm':
    if (currentNode->mChild == NULL)
    {
      currentNode->mChild = malloc(sizeof(struct trieNode));
      if (currentNode->mChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->mChild);
    break;
  case 'n':
    if (currentNode->nChild == NULL)
    {
      currentNode->nChild = malloc(sizeof(struct trieNode));
      if (currentNode->nChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->nChild);
    break;
  case 'o':
    if (currentNode->oChild == NULL)
    {
      currentNode->oChild = malloc(sizeof(struct trieNode));
      if (currentNode->oChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->oChild);
    break;
  case 'p':
    if (currentNode->pChild == NULL)
    {
      currentNode->pChild = malloc(sizeof(struct trieNode));
      if (currentNode->pChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->pChild);
    break;
  case 'q':
    if (currentNode->qChild == NULL)
    {
      currentNode->qChild = malloc(sizeof(struct trieNode));
      if (currentNode->qChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->qChild);
    break;
  case 'r':
    if (currentNode->rChild == NULL)
    {
      currentNode->rChild = malloc(sizeof(struct trieNode));
      if (currentNode->rChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->rChild);
    break;
  case 's':
    if (currentNode->sChild == NULL)
    {
      currentNode->sChild = malloc(sizeof(struct trieNode));
      if (currentNode->sChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->sChild);
    break;
  case 't':
    if (currentNode->tChild == NULL)
    {
      currentNode->tChild = malloc(sizeof(struct trieNode));
      if (currentNode->tChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->tChild);
    break;
  case 'u':
    if (currentNode->uChild == NULL)
    {
      currentNode->uChild = malloc(sizeof(struct trieNode));
      if (currentNode->uChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->uChild);
    break;
  case 'v':
    if (currentNode->vChild == NULL)
    {
      currentNode->vChild = malloc(sizeof(struct trieNode));
      if (currentNode->vChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->vChild);
    break;
  case 'w':
    if (currentNode->wChild == NULL)
    {
      currentNode->wChild = malloc(sizeof(struct trieNode));
      if (currentNode->wChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->wChild);
    break;
  case 'x':
    if (currentNode->xChild == NULL)
    {
      currentNode->xChild = malloc(sizeof(struct trieNode));
      if (currentNode->xChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->xChild);
    break;
  case 'y':
    if (currentNode->yChild == NULL)
    {
      currentNode->yChild = malloc(sizeof(struct trieNode));
      if (currentNode->yChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->yChild);
    break;
  case 'z':
    if (currentNode->zChild == NULL)
    {
      currentNode->zChild = malloc(sizeof(struct trieNode));
      if (currentNode->zChild == NULL)
      {
        return -1;
      }
    }
    addWordOccurrence(word + 1, wordLength - 1, currentNode->zChild);
    break;
  }
  return 0;
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
    return 0;
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
