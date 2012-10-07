#include <stdio.h>

int main(int argc, char *argv[])
{
  int ages[] = {23, 43, 12, 89, 2};
  char *names[] = {
    "Alan",
    "Frank",
    "Mary",
    "John",
    "Lisa"
  };

  int count = sizeof(ages) / sizeof(int);
  for(int i = 0; i < count; ++i) {
    printf("%s has %d years alive\n", names[i], ages[i]);
  }

  printf("---\n");

  int *curr_age = ages;
  char **curr_name = names;

  for(int i = 0; i < count; ++i){
    printf("%s has %d years alive\n", 
      *(curr_name+i), *(curr_age+i));
  }

  printf("---\n");

  for(int i = 0; i < count; ++i){
    printf("%s has %d years alive\n", 
      curr_name[i], curr_age[i]);
  }

  printf("---\n"); 

  for(curr_name = names, curr_age = ages; (curr_age - ages) < count; curr_age++, curr_name++){
    printf("%s lived %d years so far.\n", 
      *curr_name, *curr_age);
  }

  return 0;
}