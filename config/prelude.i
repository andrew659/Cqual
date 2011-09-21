typedef unsigned int size_t;
typedef unsigned long __u_long;
typedef __u_long __ino_t;		 
typedef long int __off_t;		 
struct dirent
  {
    __ino_t d_ino;
    __off_t d_off;
    unsigned short int d_reclen;
unsigned char d_type;
    char d_name[256];		 
  };
typedef unsigned short int sa_family_t;
struct sockaddr
  {
    sa_family_t  sa_family ;	 
    char sa_data[14];		 
  };
struct hostent
{
  char *h_name;			 
  char **h_aliases;		 
  int h_addrtype;		 
  int h_length;			 
  char **h_addr_list;		 
};
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef unsigned int socklen_t;
struct __dirstream;
typedef struct __dirstream DIR;
int printf(const char $untainted * format, ...);
int sprintf(char $_1_2 * str, const char $untainted * format, $_1 ...);
int snprintf(char $_1_2 * str, size_t size, const char $untainted * format,
	     $_1 ...);
int fprintf(FILE *stream, const char $untainted * format, ...);
char $tainted $_1 * fgets(char $tainted $_1* s, int size, FILE *stream);
int fputs(const char * s, FILE *stream);
int fscanf(FILE *stream, const char $untainted * format, ...);
int fread(void $tainted * ptr, int  size,  int  nitems,  FILE
     *stream);
char * gets(char * s);
int puts(const char * s);
int scanf( const char $untainted * format,...);
int sscanf( const char $_1 * str, const char $untainted * format, $_1_2 ...);
int strcmp(const char $_1 * s1, const char $_2 * s2);
char $_1_2 * strcpy(char $_1_2 * s1, const char $_1 * s2);
char $_1_2 * strncpy(char $_1_2 * s1, const char $_1 * s2, int);
int vprintf(const char $untainted * format, va_list ap);
int vfprintf(FILE *stream,  const char $untainted * format, va_list ap);
int vfscanf(FILE *stream, const char $untainted * format, va_list ap);
int vsprintf(char $_1 * str, const char $untainted * format, va_list ap);
int vsnprintf(char $_1 * str, size_t size, const char $untainted * format, va_list ap);
int vscanf( const char $untainted * format, va_list ap);
int vsscanf( const char * str, const char $untainted * format, va_list ap);
double atof(const char * s);
$tainted char * getenv(const char *name);
int read(int fildes, void $tainted * buf, int nbyte);
int recv(int s, void $tainted * buf, int len, int flags);
int recvfrom(int s, void $tainted * buf, int  len,  int  flags,
     struct sockaddr *from, socklen_t *fromlen);
struct hostent *gethostbyname(const char *name){
 struct hostent h;
 h.h_name = (char $tainted *)"";
 h.h_aliases = (char $tainted **)0;
 h.h_addr_list = (char $tainted **)0;
 return &h;
}
struct hostent *gethostbyaddr(const char *addr, int len, int type){
 struct hostent h;
 h.h_name = (char $tainted *)"";
 h.h_aliases = (char $tainted **)0;
 h.h_addr_list = (char $tainted **)0;
 return &h;
}
void syslog(int priority, const char $untainted * message,  ...);
char $_1_2 * strcat(char $_1_2 *s1, const char $_2 *s2);
char $_1_2 *strncat(char $_1_2 *s1, const char $_2 *s2, size_t n);
char $_1_2 *strdup(const char $_1 *s1);
char $_1_2 *strpbrk(const char $_1 *s1, const char *s2);
char $_1_2 *strstr(const char $_1 * s1, const char *s2);
char $_1_2 *strtok(char $_1 * s1, const char *s2);
char $_1 * strchr(const char $_1 * s, int c);
char $_1 * strrchr(const char $_1 * s, int c);
void $_1 * calloc(size_t nobj, size_t size); 
void $_1 * malloc(size_t size); 
void $_1 * realloc(void $_1 * p, size_t size);
void free(void $_1 * p);
void $_1_2 * memccpy(void $_1_2 * s1, const void  $_1 *s2, int c, size_t n);
void $_1 * memchr(const void $_1 * s, int c, size_t n);
void $_1_2 * memcpy(void $_1_2 * s1, const void  $_1 *s2, size_t n);
void $_1_2 * memmove(void $_1_2 * s1, const void  $_1 *s2, size_t n);
void $_1 * memset(void $_1 * s, int c, size_t n);
struct dirent *readdir(DIR *x) {
	struct dirent *HACK;
	HACK->d_name[1]=(char $tainted)0;
	return HACK;
};
 
void setproctitle(const char $untainted *fmt, ...);
