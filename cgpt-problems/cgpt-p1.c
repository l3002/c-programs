// find the Least common ancestor for two given nodes.

#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

struct TreeNode{
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

int findpath(struct TreeNode *root,struct TreeNode *x, char *ans, int c){
  if(root == x){
    ans[c] = '\0';
    return c;
  }
  if(root == NULL){
    return 0;
  }

  int ln = findpath(root->left, x, ans, c+1);
  int rn = findpath(root->right, x, ans, c+1);
  if(rn){
    ans[c] = '1';
    return rn;
  }
  if(ln){
    ans[c] = '0';
    return ln;
  }
  return 0;
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode *q){
  char ppath[MAX];
  char qpath[MAX];
  
  int ppl = findpath(root, p, ppath, 0);
  int qpl = findpath(root, q, qpath, 0);

  int i = 0,j = 0;
  struct TreeNode *ans = root;
  while(i < ppl && j < qpl && ppath[i] == qpath[j]){
    if(ppath[i] == '1'){
      ans = ans->right;
    }
    else{
      ans = ans->left;
    }
    i++;
    j++;
  }

  return ans;
}

int main(int argc, char *argv[])
{
  struct TreeNode *x = (struct TreeNode *) malloc(sizeof(struct TreeNode *));
  struct TreeNode *y = (struct TreeNode *) malloc(sizeof(struct TreeNode *));
  struct TreeNode *z = (struct TreeNode *) malloc(sizeof(struct TreeNode *));
  struct TreeNode *a = (struct TreeNode *) malloc(sizeof(struct TreeNode *));
  struct TreeNode *b = (struct TreeNode *) malloc(sizeof(struct TreeNode *));
  struct TreeNode *c = (struct TreeNode *) malloc(sizeof(struct TreeNode *));
  struct TreeNode *d = (struct TreeNode *) malloc(sizeof(struct TreeNode *));
  struct TreeNode *e = (struct TreeNode *) malloc(sizeof(struct TreeNode *));
  
  x->left = y;
  y->right = z;
  y->left = a;
  z->left = NULL;
  z->right = NULL;
  a->left = b;
  a->right = NULL;
  x->right = c;
  c->right = d;
  c->left = NULL;
  d->left = e;
  d->right = NULL;
  d->val = 342;
  e->left = NULL;
  e->right = NULL;

  lowestCommonAncestor(x, b, z);
  struct TreeNode* lca = lowestCommonAncestor(x, d, e);

  printf("lca data %d\n",lca->val);

  return 0;
}
