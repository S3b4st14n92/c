#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

int main() {
  char string[] = "Hallo Welt!";
  unsigned char digest[MD5_DIGEST_LENGTH];
  MD5_CTX ctx;

  MD5_Init(&ctx);
  MD5_Update(&ctx, string, strlen(string));
  MD5_Final(digest, &ctx);

  for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    printf("%02x", digest[i]);
  }
  printf("\n");

  return 0;
}