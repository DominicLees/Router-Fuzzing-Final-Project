typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef enum Elf32_GPRMask_MIPS {
    gpr_zero=1,
    gpr_at=2,
    gpr_v0=4,
    gpr_v1=8,
    gpr_a0=16,
    gpr_a1=32,
    gpr_a2=64,
    gpr_a3=128,
    gpr_t0=256,
    gpr_t1=512,
    gpr_t2=1024,
    gpr_t3=2048,
    gpr_t4=4096,
    gpr_t5=8192,
    gpr_t6=16384,
    gpr_t7=32768,
    gpr_s0=65536,
    gpr_s1=131072,
    gpr_s2=262144,
    gpr_s3=524288,
    gpr_s4=1048576,
    gpr_s5=2097152,
    gpr_s6=4194304,
    gpr_s7=8388608,
    gpr_t8=16777216,
    gpr_t9=33554432,
    gpr_k0=67108864,
    gpr_k1=134217728,
    gpr_gp=268435456,
    gpr_sp=536870912,
    gpr_fp=1073741824,
    gpr_ra=2147483648
} Elf32_GPRMask_MIPS;

typedef ushort sa_family_t;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[40];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef enum __priority_which {
    PRIO_PROCESS=0,
    PRIO_PGRP=1,
    PRIO_USER=2
} __priority_which;

typedef enum __priority_which __priority_which_t;

typedef struct stat stat, *Pstat;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    ulong __unused4;
    ulong __unused5;
};

typedef struct stack_st stack_st, *Pstack_st;

typedef struct stack_st _STACK;

struct stack_st {
    int num;
    char **data;
    int sorted;
    int num_alloc;
    int (*comp)(void *, void *);
};

typedef union _union_181 _union_181, *P_union_181;

typedef struct bn_gencb_st bn_gencb_st, *Pbn_gencb_st;

typedef struct bn_gencb_st BN_GENCB;

union _union_181 {
    void (*cb_1)(int, int, void *);
    int (*cb_2)(int, int, BN_GENCB *);
};

struct bn_gencb_st {
    uint ver;
    void *arg;
    union _union_181 cb;
};

typedef struct timeval timeval, *Ptimeval;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef __time_t time_t;

typedef struct addrinfo addrinfo, *Paddrinfo;

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef struct sockaddr sockaddr, *Psockaddr;

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr *ai_addr;
    char *ai_canonname;
    struct addrinfo *ai_next;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef struct stack_st_void stack_st_void, *Pstack_st_void;

struct stack_st_void {
    _STACK stack;
};

typedef struct in_addr in_addr, *Pin_addr;

typedef uint uint32_t;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};

#define __WORDSIZE 32

#define __GLIBC_HAVE_LONG_LONG 1

typedef struct _IO_FILE FILE;

typedef long __fd_mask;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[32];
};

typedef uint __id_t;

typedef __id_t id_t;

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef struct rsa_st rsa_st, *Prsa_st;

typedef struct rsa_st RSA;

typedef struct rsa_meth_st rsa_meth_st, *Prsa_meth_st;

typedef struct bignum_st bignum_st, *Pbignum_st;

typedef struct bignum_st BIGNUM;

typedef struct bignum_ctx bignum_ctx, *Pbignum_ctx;

typedef struct bignum_ctx BN_CTX;

typedef struct bn_mont_ctx_st bn_mont_ctx_st, *Pbn_mont_ctx_st;

typedef struct bn_mont_ctx_st BN_MONT_CTX;

typedef struct rsa_meth_st RSA_METHOD;

typedef struct engine_st engine_st, *Pengine_st;

typedef struct engine_st ENGINE;

typedef struct crypto_ex_data_st crypto_ex_data_st, *Pcrypto_ex_data_st;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct bn_blinding_st bn_blinding_st, *Pbn_blinding_st;

typedef struct bn_blinding_st BN_BLINDING;

struct crypto_ex_data_st {
    struct stack_st_void *sk;
    int dummy;
};

struct bignum_st {
    ulong *d;
    int top;
    int dmax;
    int neg;
    int flags;
};

struct rsa_meth_st {
    char *name;
    int (*rsa_pub_enc)(int, uchar *, uchar *, RSA *, int);
    int (*rsa_pub_dec)(int, uchar *, uchar *, RSA *, int);
    int (*rsa_priv_enc)(int, uchar *, uchar *, RSA *, int);
    int (*rsa_priv_dec)(int, uchar *, uchar *, RSA *, int);
    int (*rsa_mod_exp)(BIGNUM *, BIGNUM *, RSA *, BN_CTX *);
    int (*bn_mod_exp)(BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *, BN_CTX *, BN_MONT_CTX *);
    int (*init)(RSA *);
    int (*finish)(RSA *);
    int flags;
    char *app_data;
    int (*rsa_sign)(int, uchar *, uint, uchar *, uint *, RSA *);
    int (*rsa_verify)(int, uchar *, uint, uchar *, uint, RSA *);
    int (*rsa_keygen)(RSA *, int, BIGNUM *, BN_GENCB *);
};

struct engine_st {
};

struct bn_blinding_st {
};

struct bignum_ctx {
};

struct rsa_st {
    int pad;
    long version;
    RSA_METHOD *meth;
    ENGINE *engine;
    BIGNUM *n;
    BIGNUM *e;
    BIGNUM *d;
    BIGNUM *p;
    BIGNUM *q;
    BIGNUM *dmp1;
    BIGNUM *dmq1;
    BIGNUM *iqmp;
    CRYPTO_EX_DATA ex_data;
    int references;
    int flags;
    BN_MONT_CTX *_method_mod_n;
    BN_MONT_CTX *_method_mod_p;
    BN_MONT_CTX *_method_mod_q;
    char *bignum_data;
    BN_BLINDING *blinding;
    BN_BLINDING *mt_blinding;
};

struct bn_mont_ctx_st {
    int ri;
    BIGNUM RR;
    BIGNUM N;
    BIGNUM Ni;
    ulong n0[2];
    int flags;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef void (*__sighandler_t)(int);

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_MIPS {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_MIPS_LIBLIST=1879048192,
    SHT_MIPS_MSYM=1879048193,
    SHT_MIPS_CONFLICT=1879048194,
    SHT_MIPS_GPTAB=1879048195,
    SHT_MIPS_UCODE=1879048196,
    SHT_MIPS_DEBUG=1879048197,
    SHT_MIPS_REGINFO=1879048198,
    SHT_MIPS_PACKAGE=1879048199,
    SHT_MIPS_PACKSYM=1879048200,
    SHT_MIPS_RELD=1879048201,
    =1879048203,
    SHT_MIPS_CONTENT=1879048204,
    SHT_MIPS_OPTIONS=1879048205,
    SHT_MIPS_SHDR=1879048208,
    SHT_MIPS_FDESC=1879048209,
    SHT_MIPS_EXTSYM=1879048210,
    SHT_MIPS_DENSE=1879048211,
    SHT_MIPS_PDESC=1879048212,
    SHT_MIPS_LOCSYM=1879048213,
    SHT_MIPS_AUXSYM=1879048214,
    SHT_MIPS_OPTSYM=1879048215,
    SHT_MIPS_LOCSTR=1879048216,
    SHT_MIPS_LINE=1879048217,
    SHT_MIPS_RFDESC=1879048218,
    SHT_MIPS_DELTASYM=1879048219,
    SHT_MIPS_DELTAINST=1879048220,
    SHT_MIPS_DELTACLASS=1879048221,
    SHT_MIPS_DWARF=1879048222,
    SHT_MIPS_DELTADECL=1879048223,
    SHT_MIPS_SYMBOL_LIB=1879048224,
    SHT_MIPS_EVENTS=1879048225,
    SHT_MIPS_TRANSLATE=1879048226,
    SHT_MIPS_PIXIE=1879048227,
    SHT_MIPS_XLATE=1879048228,
    SHT_MIPS_XLATE_DEBUG=1879048229,
    SHT_MIPS_WHIRL=1879048230,
    SHT_MIPS_EH_REGION=1879048231,
    SHT_MIPS_XLATE_OLD=1879048232,
    SHT_MIPS_PDR_EXCEPTION=1879048233,
    SHT_MIPS_ABIFLAGS=1879048234,
    SHT_MIPS_PSPREL=1879048352
} Elf_SectionHeaderType_MIPS;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_MIPS sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_RegInfo_MIPS Elf32_RegInfo_MIPS, *PElf32_RegInfo_MIPS;

struct Elf32_RegInfo_MIPS {
    enum Elf32_GPRMask_MIPS ri_gprmask;
    dword field1_0x4[4];
    dword ri_gp_value;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_MIPS {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_MIPS_REGINFO=1879048192,
    PT_MIPS_RTPROC=1879048193,
    PT_MIPS_OPTIONS=1879048194,
    PT_MIPS_ABIFLAGS=1879048195,
    PT_MIPS_PSPREL1=1879048352,
    PT_MIPS_PSPREL2=1879048353
} Elf_ProgramHeaderType_MIPS;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_MIPS p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef enum Elf32_DynTag_MIPS {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_MIPS_RLD_VERSION=1879048193,
    DT_MIPS_TIME_STAMP=1879048194,
    DT_MIPS_ICHECKSUM=1879048195,
    DT_MIPS_IVERSION=1879048196,
    DT_MIPS_FLAGS=1879048197,
    DT_MIPS_BASE_ADDRESS=1879048198,
    DT_MIPS_MSYM=1879048199,
    DT_MIPS_CONFLICT=1879048200,
    DT_MIPS_LIBLIST=1879048201,
    DT_MIPS_LOCAL_GOTNO=1879048202,
    DT_MIPS_CONFLICTNO=1879048203,
    DT_MIPS_LIBLISTNO=1879048208,
    DT_MIPS_SYMTABNO=1879048209,
    DT_MIPS_UNREFEXTNO=1879048210,
    DT_MIPS_GOTSYM=1879048211,
    DT_MIPS_HIPAGENO=1879048212,
    DT_MIPS_RLD_MAP=1879048214,
    DT_MIPS_DELTA_CLASS=1879048215,
    DT_MIPS_DELTA_CLASS_NO=1879048216,
    DT_MIPS_DELTA_INSTANCE=1879048217,
    DT_MIPS_DELTA_INSTANCE_NO=1879048218,
    DT_MIPS_DELTA_RELOC=1879048219,
    DT_MIPS_DELTA_RELOC_NO=1879048220,
    DT_MIPS_DELTA_SYM=1879048221,
    DT_MIPS_DELTA_SYM_NO=1879048222,
    DT_MIPS_DELTA_CLASSSYM=1879048224,
    DT_MIPS_DELTA_CLASSSYM_NO=1879048225,
    DT_MIPS_CXX_FLAGS=1879048226,
    DT_MIPS_PIXIE_INIT=1879048227,
    DT_MIPS_SYMBOL_LIB=1879048228,
    DT_MIPS_LOCALPAGE_GOTIDX=1879048229,
    DT_MIPS_LOCAL_GOTIDX=1879048230,
    DT_MIPS_HIDDEN_GOTIDX=1879048231,
    DT_MIPS_PROTECTED_GOTIDX=1879048232,
    DT_MIPS_OPTIONS=1879048233,
    DT_MIPS_INTERFACE=1879048234,
    DT_MIPS_DYNSTR_ALIGN=1879048235,
    DT_MIPS_INTERFACE_SIZE=1879048236,
    DT_MIPS_RLD_TEXT_RESOLVE_ADDR=1879048237,
    DT_MIPS_PERF_SUFFIX=1879048238,
    DT_MIPS_COMPACT_SIZE=1879048239,
    DT_MIPS_GP_VALUE=1879048240,
    DT_MIPS_AUX_DYNAMIC=1879048241,
    DT_MIPS_PLTGOT=1879048242,
    DT_MIPS_RWPLT=1879048244,
    DT_MIPS_RLD_MAP_REL=1879048245,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_MIPS;

typedef struct Elf32_Dyn_MIPS Elf32_Dyn_MIPS, *PElf32_Dyn_MIPS;

struct Elf32_Dyn_MIPS {
    enum Elf32_DynTag_MIPS d_tag;
    dword d_val;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00402e6c();
  iVar1 = FUN_00412bc0();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 main(int param_1,int param_2)

{
  undefined *puVar1;
  size_t sVar2;
  int iVar3;
  id_t __who;
  char *__s;
  
  if (param_1 == 1) {
    g_http_rootDir = &DAT_0041354c;
  }
  else {
    g_http_rootDir = *(undefined **)(param_2 + 4);
  }
  puVar1 = g_http_rootDir;
  sVar2 = strlen(g_http_rootDir);
  if ((int)sVar2 < 0x21) {
    if (puVar1[sVar2 - 1] == '/') {
      iVar3 = daemon(1,1);
      if (-1 < iVar3) {
        __who = getpid();
        iVar3 = setpriority(PRIO_PROCESS,__who,-10);
        if (iVar3 < 0) {
          perror("httpd setpriority error...\n");
        }
        http_init_main();
        return 0;
      }
      fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_main.c",0x68);
      perror("");
      __s = "#error && exit: make deamon failed\n";
    }
    else {
      fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_main.c",0x5e);
      perror("");
      __s = "#error && exit: must end width \'/\'\n";
    }
  }
  else {
    fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_main.c",0x59);
    perror("");
    __s = "#error && exit: root dir too long\n";
  }
  fputs(__s,_stderr);
                    // WARNING: Subroutine does not return
  exit(-1);
}



void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  code *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = _fini;
  local_c = param_1;
  __uClibc_main(main,param_2,&stack0x00000004,_init);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00402df4)

void FUN_00402da0(void)

{
  if (DAT_0042b960 == '\0') {
    __deregister_frame_info(&DWORD_0041a6dc);
    DAT_0042b960 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00402eb8)
// WARNING: Removing unreachable block (ram,0x00402ec8)

void FUN_00402e6c(void)

{
  __register_frame_info(&DWORD_0041a6dc,&DAT_0042b968);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_init_configByMsg(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint local_210 [2];
  undefined1 auStack_208 [2];
  undefined1 auStack_206 [6];
  char local_200;
  short local_1fe;
  char local_1fc;
  short local_1fa;
  char local_1f8;
  short local_1f6;
  char local_1f4 [2];
  short local_1f2;
  undefined1 auStack_1c4 [33];
  undefined1 auStack_1a3 [28];
  undefined1 auStack_187 [128];
  undefined1 auStack_107 [255];
  
  msg_recv(&g_http_msgFd,local_210);
  if (local_210[0] == 0x7f0) {
    http_filter_setConfig(auStack_206,local_1f4);
    return 0;
  }
  if (local_210[0] < 0x7f1) {
    if (local_210[0] == 0x7eb) {
      puVar1 = &g_http_noipDnsDomain;
      puVar2 = auStack_187;
    }
    else {
      if (0x7eb < local_210[0]) {
        if (local_210[0] != 0x7ee) {
          if (local_210[0] != 0x7ef) goto LAB_00403238;
          http_auth_setEntry(1,auStack_1c4,auStack_1a3);
          puVar2 = auStack_1c4;
          puVar1 = g_username;
          uVar3 = 0x20;
          goto LAB_0040320c;
        }
        http_parser_set_charset(auStack_206);
        http_inetd_delListenSocket(0);
        if (local_200 == '\0') {
LAB_0040304c:
          if (local_1fc == '\0') goto LAB_00403088;
          uVar4 = 2;
          uVar5 = 2;
          uVar3 = 2;
        }
        else {
          if ((local_1fc == '\0') || (local_1fa != local_1fe)) {
            http_inetd_addListenSocket(0,local_1fe,5,http_parser_main,0,1,1);
            goto LAB_0040304c;
          }
          uVar4 = 0;
          uVar5 = 1;
          uVar3 = 5;
        }
        http_inetd_addListenSocket(0,local_1fa,uVar3,http_parser_main,0,uVar4,uVar5);
LAB_00403088:
        if (local_1f8 != '\0') {
          if ((local_1f4[0] != '\0') && (local_1f2 == local_1f6)) {
            http_inetd_addListenSocket(0,local_1f2,5,http_parser_main,1,0,1);
            return 0;
          }
          http_inetd_addListenSocket(0,local_1f6,5,http_parser_main,1,1,1);
        }
        if (local_1f4[0] != '\0') {
          http_inetd_addListenSocket(0,local_1f2,2,http_parser_main,1,2,2);
          return 0;
        }
        return 0;
      }
      if (local_210[0] != 0x7e8) goto LAB_00403238;
      puVar1 = &g_http_dynDnsDomain;
      puVar2 = auStack_187;
    }
  }
  else {
    if (local_210[0] == 0x82e) {
      cstr_strncpy(&g_http_cmxDnsDomain,auStack_187,0x80);
      puVar1 = &DAT_00440fe4;
    }
    else {
      if (local_210[0] < 0x82f) {
        if (local_210[0] == 0x7f1) {
          http_parser_set_challenge(auStack_208);
          return 0;
        }
LAB_00403238:
        fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_init.c",0x317);
        perror("");
        fputs("#msg: Invalid msg type!\n",_stderr);
        fflush(_stderr);
        return 0xffffffff;
      }
      if (local_210[0] != 0x82f) {
        if (local_210[0] != 0x830) goto LAB_00403238;
        puVar1 = &DAT_00441164;
        puVar2 = auStack_187;
        goto LAB_00403208;
      }
      cstr_strncpy(&DAT_00441064,auStack_187,0x80);
      puVar1 = &DAT_004410e4;
    }
    puVar2 = auStack_107;
  }
LAB_00403208:
  uVar3 = 0x80;
LAB_0040320c:
  cstr_strncpy(puVar1,puVar2,uVar3);
  return 0;
}



void http_getModelInfo(undefined4 param_1,undefined4 param_2)

{
  cstr_strncpy(param_1,&DAT_0042b9a0,0x40);
  cstr_strncpy(param_2,&DAT_0042b9e0,0x100);
  return;
}



undefined4 FUN_00403314(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *local_fc8;
  undefined4 local_fc4;
  undefined2 local_fc0;
  undefined2 local_fbe;
  undefined2 local_fbc;
  undefined2 local_fba;
  undefined2 local_fb8;
  undefined2 local_fb6;
  undefined2 local_fb4;
  char acStack_fb0 [4004];
  
  memset(acStack_fb0,0,4000);
  local_fc0 = 0;
  local_fbe = 0;
  local_fbc = 0;
  local_fba = 0;
  local_fb8 = 0;
  local_fb6 = 0;
  local_fb4 = 0;
  local_fc4 = 0;
  local_fc8 = (char *)0x0;
  strcpy(acStack_fb0,"modelName\ndescription\n");
  iVar1 = rdp_getObj(0,"IGD_DEV_INFO",&local_fc0,acStack_fb0);
  uVar3 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = http_parser_argIllustrate(acStack_fb0,10,&local_fc4,&local_fc8);
    if (local_fc8 != (char *)0x0) {
      strcpy(&DAT_0042b9a0,local_fc8);
      http_parser_argIllustrate(uVar2,10,&local_fc4,&local_fc8);
      if (local_fc8 != (char *)0x0) {
        uVar3 = 0;
        strcpy(&DAT_0042b9e0,local_fc8);
      }
    }
  }
  return uVar3;
}



undefined4 http_init_main(void)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  
  http_inetd_init();
  http_parser_init();
  http_auth_init();
  http_alias_init();
  http_session_init();
  http_menu_init();
  http_cgi_init();
  http_cgi_gdpr_init();
  http_tool_init();
  for (piVar2 = &g_http_alias_conf_admin; *piVar2 != 0; piVar2 = piVar2 + 1) {
    http_alias_addEntryByArg(0,*piVar2,0,0,g_http_author_admin);
  }
  ppuVar3 = &g_http_alias_conf_default;
  while( true ) {
    if (*ppuVar3 == (undefined *)0x0) break;
    http_alias_addEntryByArg(0,*ppuVar3,0,0,g_http_author_default);
    ppuVar3 = ppuVar3 + 1;
  }
  http_alias_addEntryByArg(2,"/cgi/conf.bin",0,http_rpm_backup,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/confencode",0,http_rpm_confencode,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/confup",0,http_rpm_restore,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/bnr",0,http_rpm_conferr,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/softup",0,http_rpm_update,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/softburn",0,http_rpm_softerr,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/log",0,http_rpm_log_main,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/info",0,http_rpm_info,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/lanMac",0,http_rpm_lanMac,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/auth",0,http_rpm_auth_main,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/pvc",0,http_rpm_autoPvc,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/ansi",0,http_rpm_ansi,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/logout",0,http_rpm_logout,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/route",0,http_rpm_routeTbl,g_http_author_default);
  http_alias_addEntryByArg
            (2,"/cgi/updateWlThroughput",0,http_rpm_updateWlThroughput,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/getParm",0,http_rpm_getParm,g_http_author_default);
  http_alias_addEntryByArg(2,"/cgi/login",0,http_rpm_login,g_http_author_default);
  http_file_init();
  iVar1 = http_inetd_setMsgCtl();
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  signal(0xd,(__sighandler_t)&DAT_00000001);
  dm_shmInit(0);
  FUN_00403314();
  http_inetd_main();
  return 0;
}



void FUN_00403900(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(int *)(iVar1 + 4) = param_1[1];
  *(int *)param_1[1] = iVar1;
  iVar1 = *param_2;
  *(int **)(iVar1 + 4) = param_1;
  *param_1 = iVar1;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



undefined4 FUN_00403938(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint __fd;
  
  __fd = *(uint *)(param_1 + 8);
  uVar1 = __fd;
  if (__fd == DAT_0043ffd0) {
    do {
      DAT_0043ffd0 = uVar1;
      if ((int)DAT_0043ffd0 < 1) break;
      uVar1 = DAT_0043ffd0 - 1;
    } while (((uint)(&DAT_0042bae0)[DAT_0043ffd0 >> 5] >> (DAT_0043ffd0 & 0x1f) & 1) == 0);
  }
  (&DAT_0042bae0)[__fd >> 5] = (&DAT_0042bae0)[__fd >> 5] & ~(1 << (__fd & 0x1f));
  *(int *)(param_1 + 0x1014) = param_1 + 0x14;
  *(int *)(param_1 + 0x1018) = param_1 + 0x14;
  if (*(FILE **)(param_1 + 0x101c) == (FILE *)0x0) {
    close(__fd);
  }
  else {
    fclose(*(FILE **)(param_1 + 0x101c));
    *(undefined4 *)(param_1 + 0x101c) = 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 4);
  FUN_00403900(param_1,&PTR_LOOP_0042b028);
  DAT_0043ffd8 = DAT_0043ffd8 + -1;
  if (DAT_0043ffd8 < 10) {
    DAT_0043ffd4 = 0;
  }
  return uVar2;
}



undefined4 http_inetd_init(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = &DAT_0042bae0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != &DAT_0042bb60);
  memset(&DAT_0042bb60,0,0x60);
  memset(&DAT_0042bbc0,0,0x14410);
  iVar3 = 0;
  puVar1 = (undefined4 *)PTR_LOOP_0042b024;
  do {
    iVar2 = iVar3 + 1;
    PTR_LOOP_0042b024 = (undefined *)(&DAT_0042bb60 + iVar3 * 6);
    *puVar1 = PTR_LOOP_0042b024;
    (&DAT_0042bb64)[iVar3 * 6] = puVar1;
    *(undefined ***)PTR_LOOP_0042b024 = &PTR_LOOP_0042b020;
    iVar3 = iVar2;
    puVar1 = (undefined4 *)PTR_LOOP_0042b024;
  } while (iVar2 != 4);
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    puVar1 = &DAT_0042bbc0 + iVar3 * 0x40d;
    *(undefined4 **)PTR_LOOP_0042b02c = puVar1;
    (&DAT_0042bbc4)[iVar3 * 0x40d] = PTR_LOOP_0042b02c;
    *puVar1 = &PTR_LOOP_0042b028;
    iVar3 = iVar2;
    PTR_LOOP_0042b02c = (undefined *)puVar1;
  } while (iVar2 != 0x14);
  return 0;
}



// WARNING: Heritage AFTER dead removal. Example location: r0x00442008 : 0x00403c5c
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

undefined4
http_inetd_addListenSocket
          (undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  FILE *__fd;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  code *pcVar5;
  undefined4 local_40;
  sockaddr local_3c;
  
  puVar1 = PTR_LOOP_0042b020;
  if (param_5 != 0) {
    return 0;
  }
  if (((undefined **)PTR_LOOP_0042b020 == &PTR_LOOP_0042b020) ||
     (PTR_LOOP_0042b020 == (undefined *)0x0)) {
    fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x270);
    perror("");
    pcVar4 = "#msg: listen sock list full, index = %d\n";
  }
  else {
    __fd = (FILE *)socket(2,2,6);
    if (__fd != (FILE *)0xffffffff) {
      fcntl((int)__fd,2,1);
      local_40 = 1;
      iVar2 = setsockopt((int)__fd,0xffff,4,&local_40,4);
      if (iVar2 == -1) {
        fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x28b);
        perror("");
        pcVar4 = "#msg: setsockopt failed, index = %d\n";
      }
      else {
        local_3c.sa_family = 2;
        local_3c.sa_data._0_2_ =
             (ushort)((param_2 & 0xffff) >> 8) | (ushort)((param_2 & 0xffff) << 8);
        local_3c.sa_data._2_4_ = param_1;
        iVar2 = bind((int)__fd,&local_3c,0x10);
        if (iVar2 != -1) {
          iVar2 = listen((int)__fd,param_3 & 0xffff);
          if (iVar2 == -1) {
            fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x2ae);
            perror("");
            fprintf(_stderr,"#msg: listen failed, index = %d\n",param_7);
            fflush(_stderr);
          }
          (&DAT_0042bae0)[(uint)__fd >> 5] =
               (&DAT_0042bae0)[(uint)__fd >> 5] | 1 << ((uint)__fd & 0x1f);
          pFVar3 = __fd;
          if ((int)__fd < (int)DAT_0043ffd0) {
            pFVar3 = DAT_0043ffd0;
          }
          DAT_0043ffd0 = pFVar3;
          *(FILE **)(puVar1 + 0xc) = __fd;
          *(undefined4 *)(puVar1 + 0x14) = param_6;
          *(undefined4 *)(puVar1 + 0x10) = param_4;
          *(undefined4 *)(puVar1 + 8) = param_7;
          FUN_00403900(puVar1,&PTR_LOOP_0042b030);
          return 0;
        }
        fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x2a6);
        perror("");
        pcVar4 = "#msg: bind failed, index = %d\n";
      }
      fprintf(_stderr,pcVar4,param_7);
      fflush(_stderr);
      pcVar5 = close;
      goto LAB_00403f14;
    }
    fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x27d);
    perror("");
    pcVar4 = "#msg: socket failed, index = %d\n";
  }
  fprintf(_stderr,pcVar4,param_7);
  pcVar5 = fflush;
  __fd = _stderr;
LAB_00403f14:
  (*pcVar5)(__fd);
  return 0xffffffff;
}



int http_inetd_delListenSocket(undefined *param_1)

{
  undefined *puVar1;
  undefined *__fd;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = (undefined **)PTR_LOOP_0042b030;
  do {
    if (ppuVar2 == &PTR_LOOP_0042b030) {
      return -(uint)(param_1 != (undefined *)0x0);
    }
    if ((ppuVar2[2] == param_1) || (ppuVar3 = ppuVar2, param_1 == (undefined *)0x0)) {
      __fd = ppuVar2[3];
      (&DAT_0042bae0)[(uint)__fd >> 5] =
           (&DAT_0042bae0)[(uint)__fd >> 5] & ~(1 << ((uint)__fd & 0x1f));
      puVar1 = __fd;
      if (__fd == DAT_0043ffd0) {
        do {
          DAT_0043ffd0 = puVar1;
          if ((int)DAT_0043ffd0 < 1) break;
          puVar1 = DAT_0043ffd0 + -1;
        } while (((uint)(&DAT_0042bae0)[(uint)DAT_0043ffd0 >> 5] >> ((uint)DAT_0043ffd0 & 0x1f) & 1)
                 == 0);
      }
      close((int)__fd);
      ppuVar3 = (undefined **)ppuVar2[1];
      FUN_00403900(ppuVar2,&PTR_LOOP_0042b020);
      if (param_1 != (undefined *)0x0) {
        return 0;
      }
    }
    ppuVar2 = (undefined **)*ppuVar3;
  } while( true );
}



undefined4 http_inetd_setMsgCtl(void)

{
  uint uVar1;
  
  msg_init(&g_http_msgFd);
  msg_srvInit(8,&g_http_msgFd);
  uVar1 = g_http_msgFd;
  (&DAT_0042bae0)[g_http_msgFd >> 5] =
       (&DAT_0042bae0)[g_http_msgFd >> 5] | 1 << (g_http_msgFd & 0x1f);
  if ((int)DAT_0043ffd0 < (int)uVar1) {
    DAT_0043ffd0 = uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void http_inetd_main(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  FILE *pFVar4;
  ssize_t sVar5;
  FILE *pFVar6;
  time_t tVar7;
  undefined **ppuVar8;
  char *__s;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  timeval local_cc;
  fd_set fStack_c4;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  
  do {
    iVar9 = 4;
    iVar11 = 2;
LAB_00404194:
    local_cc.tv_sec = 10;
    local_cc.tv_usec = 0;
    memcpy(&fStack_c4,&DAT_0042bae0,0x80);
    iVar2 = select((int)((int)&DAT_0043ffd0->_flags + 1),&fStack_c4,(fd_set *)0x0,(fd_set *)0x0,
                   &local_cc);
    if (iVar2 == -1) break;
    if (iVar2 != 0) goto LAB_0040429c;
  } while( true );
  piVar3 = __errno_location();
  if (*piVar3 != 4) {
    if (*piVar3 != 9) {
      fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x35b);
      perror("");
      fputs("#error && exit: select error return, may be no memory\n",_stderr);
                    // WARNING: Subroutine does not return
      exit(-1);
    }
LAB_0040429c:
    if (((uint)fStack_c4.fds_bits[g_http_msgFd >> 5] >> (g_http_msgFd & 0x1f) & 1) == 0) {
      local_3c = 0;
      local_34 = iVar11;
      local_30 = iVar9;
      iVar2 = iVar9;
      do {
        local_40 = 0;
        if (0 < iVar11) {
          iVar9 = 0;
          for (ppuVar8 = (undefined **)PTR_LOOP_0042b030; puVar10 = PTR_LOOP_0042b028,
              ppuVar8 != &PTR_LOOP_0042b030; ppuVar8 = (undefined **)*ppuVar8) {
            puVar14 = ppuVar8[3];
            local_40 = (uint)puVar14 >> 5;
            local_38 = (uint)puVar14 & 0x1f;
            if (((uint)fStack_c4.fds_bits[(uint)puVar14 >> 5] >> ((uint)puVar14 & 0x1f) & 1) != 0) {
              iVar11 = iVar11 + -1;
              if (((undefined **)PTR_LOOP_0042b028 == &PTR_LOOP_0042b028) ||
                 (PTR_LOOP_0042b028 == (undefined *)0x0)) {
                fputs("#Msg: data list already full\n",_stderr);
                pcVar15 = fflush;
                pFVar6 = _stderr;
LAB_004048d0:
                (*pcVar15)(pFVar6);
LAB_004048dc:
                fStack_c4.fds_bits[local_40] =
                     fStack_c4.fds_bits[local_40] & ~(1 << (local_38 & 0x1f));
              }
              else {
                if (*(undefined ***)PTR_LOOP_0042b028 == &PTR_LOOP_0042b028) {
                  fputs("#Msg: data list will be full\n",_stderr);
                  fflush(_stderr);
                  DAT_0043ffd4 = 1;
                }
                local_dc = 1;
                iVar9 = ioctl((int)puVar14,0x667e,&local_dc);
                if (iVar9 != 0) {
                  fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0xca);
                  perror("");
                  fprintf(_stderr,"#msg: ioctl accept nonblock fail, index = %d\n",ppuVar8[2]);
                  fflush(_stderr);
                }
                pFVar6 = (FILE *)accept((int)puVar14,(sockaddr *)0x0,(socklen_t *)0x0);
                local_dc = 0;
                iVar9 = ioctl((int)puVar14,0x667e,&local_dc);
                if (iVar9 != 0) {
                  fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0xd2);
                  perror("");
                  fprintf(_stderr,"#msg: ioctl accept block fail, index = %d\n",ppuVar8[2]);
                  fflush(_stderr);
                }
                if (pFVar6 == (FILE *)0xffffffff) goto LAB_004048dc;
                if (DAT_0043ffd4 != 0) {
                  local_d0 = 10000;
                  local_d4 = 0;
                  iVar9 = setsockopt((int)pFVar6,0xffff,0x1006,&local_d4,8);
                  if (iVar9 == -1) {
                    fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0xe7);
                    perror("");
                    __s = "#msg: test data rcv timeout fail\n";
                  }
                  else {
                    sVar5 = recv((int)pFVar6,&uStack_e0,1,2);
                    if (0 < sVar5) goto LAB_00404638;
                    fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0xed);
                    perror("");
                    __s = "#msg: full one recv no data\n";
                  }
LAB_004047a4:
                  fputs(__s,_stderr);
                  fflush(_stderr);
                  pcVar15 = close;
                  goto LAB_004048d0;
                }
LAB_00404638:
                local_2c = (undefined4 *)0x8;
                local_d4 = 3;
                local_d0 = 0;
                iVar9 = setsockopt((int)pFVar6,0xffff,0x1006,&local_d4,8);
                if (iVar9 == -1) {
                  fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0xfd);
                  perror("");
                  __s = "#msg: setsockopt rcv timeout fail\n";
                  goto LAB_004047a4;
                }
                iVar9 = setsockopt((int)pFVar6,0xffff,0x1005,&local_d4,(socklen_t)local_2c);
                if (iVar9 == -1) {
                  fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x104);
                  perror("");
                  __s = "#msg: setsockopt snd timeout fail\n";
                  goto LAB_004047a4;
                }
                local_dc = 1;
                iVar9 = setsockopt((int)pFVar6,6,1,&local_dc,4);
                if (iVar9 == -1) {
                  fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x10c);
                  perror("");
                  __s = "#msg: setsockopt nodelay fail\n";
                  goto LAB_004047a4;
                }
                fcntl((int)pFVar6,2,1);
                (&DAT_0042bae0)[(uint)pFVar6 >> 5] =
                     (&DAT_0042bae0)[(uint)pFVar6 >> 5] | 1 << ((uint)pFVar6 & 0x1f);
                pFVar4 = pFVar6;
                if ((int)pFVar6 < (int)DAT_0043ffd0) {
                  pFVar4 = DAT_0043ffd0;
                }
                puVar14 = ppuVar8[4];
                DAT_0043ffd0 = pFVar4;
                *(FILE **)(puVar10 + 8) = pFVar6;
                *(undefined **)(puVar10 + 0x10) = puVar14;
                tVar7 = time((time_t *)0x0);
                *(time_t *)(puVar10 + 0xc) = tVar7 + 0x1e;
                puVar10[0x1024] = 0xff;
                *(undefined4 *)(puVar10 + 0x1020) = 0xffffffff;
                puVar14 = ppuVar8[5];
                *(undefined4 *)(puVar10 + 0x1030) = 0;
                *(undefined **)(puVar10 + 0x102c) = puVar14;
                http_stream_streamInit(puVar10 + 0x14);
                iVar9 = *(int *)puVar10;
                *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(puVar10 + 4);
                **(int **)(puVar10 + 4) = iVar9;
                *(undefined **)PTR_LOOP_0042b03c = puVar10;
                *(undefined **)(puVar10 + 4) = PTR_LOOP_0042b03c;
                *(undefined ***)puVar10 = &PTR_LOOP_0042b038;
                PTR_LOOP_0042b03c = puVar10;
                DAT_0043ffd8 = DAT_0043ffd8 + 1;
              }
              iVar9 = 1;
            }
            if ((iVar11 == 0) || (DAT_0043ffd4 != 0)) {
              local_40 = iVar9;
              FUN_00403900(&PTR_LOOP_0042b030,ppuVar8);
              goto LAB_00404958;
            }
          }
          local_40 = iVar9;
        }
LAB_00404958:
        ppuVar8 = (undefined **)PTR_LOOP_0042b038;
        if ((0 < iVar2) || (DAT_0043ffd4 != 0)) {
          for (; ppuVar8 != &PTR_LOOP_0042b038; ppuVar8 = (undefined **)*ppuVar8) {
            puVar10 = ppuVar8[2];
            uVar13 = (uint)puVar10 >> 5;
            uVar12 = (uint)puVar10 & 0x1f;
            if (((uint)fStack_c4.fds_bits[uVar13] >> uVar12 & 1) == 0) {
              puVar10 = ppuVar8[3];
              local_2c = &uStack_e0 + uVar13;
              tVar7 = time((time_t *)0x0);
              if ((int)puVar10 < tVar7) {
                local_2c[7] = local_2c[7] & ~(1 << uVar12);
LAB_00404cdc:
                ppuVar8 = (undefined **)FUN_00403938(ppuVar8);
              }
LAB_00404cec:
              if (iVar2 == 0) {
                local_3c = 1;
                if (ppuVar8 != &PTR_LOOP_0042b038) {
                  FUN_00403900(&PTR_LOOP_0042b038,ppuVar8);
                }
                goto LAB_00404d34;
              }
            }
            else {
              local_d8 = 1;
              iVar9 = ioctl((int)puVar10,0x667e,&local_d8);
              iVar2 = iVar2 + -1;
              if (iVar9 != 0) {
                local_2c = (undefined4 *)&stderr;
                fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x3b2);
                perror("");
                fputs("#msg: ioctl data nonblock fail\n",(FILE *)*local_2c);
                fflush((FILE *)*local_2c);
              }
              sVar5 = recv((int)puVar10,(void *)((int)&uStack_e0 + 1),1,2);
              if (sVar5 < 1) {
                local_40 = 1;
                bVar1 = local_3c == 0;
                fStack_c4.fds_bits[uVar13] = fStack_c4.fds_bits[uVar13] & ~(1 << uVar12);
                if (bVar1) goto LAB_00404cdc;
                goto LAB_00404cec;
              }
              local_d8 = 0;
              iVar9 = ioctl((int)puVar10,0x667e,&local_d8);
              if (iVar9 != 0) {
                local_2c = (undefined4 *)&stderr;
                fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x3c8);
                perror("");
                fputs("#msg: ioctl data block fail\n",(FILE *)*local_2c);
                fflush((FILE *)*local_2c);
              }
              if (ppuVar8[0x407] != (undefined *)0x0) {
LAB_00404c18:
                iVar9 = (*(code *)ppuVar8[4])(ppuVar8);
                if ((iVar9 == 0) || (DAT_0043ffd4 != 0)) {
                  fStack_c4.fds_bits[uVar13] = fStack_c4.fds_bits[uVar13] & ~(1 << uVar12);
                  ppuVar8 = (undefined **)FUN_00403938(ppuVar8);
                }
                else {
                  tVar7 = time((time_t *)0x0);
                  ppuVar8[3] = (undefined *)(tVar7 + 0x1e);
                }
                local_40 = 1;
                goto LAB_00404cec;
              }
              pFVar6 = fdopen((int)puVar10,"ab");
              ppuVar8[0x407] = (undefined *)pFVar6;
              if (pFVar6 != (FILE *)0x0) goto LAB_00404c18;
              fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_inetd.c",0x413);
              perror("");
              fputs("#msg: fdopen failed\n",_stderr);
              fflush(_stderr);
              fStack_c4.fds_bits[uVar13] = fStack_c4.fds_bits[uVar13] & ~(1 << uVar12);
              ppuVar8 = (undefined **)FUN_00403938(ppuVar8);
              local_40 = 1;
            }
          }
          local_3c = 1;
        }
LAB_00404d34:
      } while (local_40 != 0);
      if (iVar11 == 0) {
        iVar9 = local_30 + (uint)(local_30 < 0x20);
        iVar11 = local_34 + 2;
      }
      else {
        bVar1 = iVar11 == local_34;
        iVar9 = local_30;
        iVar11 = local_34;
        if (bVar1) {
          iVar11 = 2;
        }
      }
      if (iVar2 == 0) {
        if (iVar9 < 0x20) {
          iVar9 = iVar9 + 2;
        }
      }
      else if ((iVar2 == iVar9) && (4 < iVar9)) {
        iVar9 = iVar9 >> 1;
      }
    }
    else {
      http_init_configByMsg();
    }
  }
  goto LAB_00404194;
}



char * FUN_00404da0(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if ((param_1[sVar1 - 1] == '\"') && (*param_1 == '\"')) {
    param_1[sVar1 - 1] = '\0';
    param_1 = param_1 + 1;
  }
  return param_1;
}



undefined * http_parser_getEnv(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)PTR_LOOP_0042b0b0;
  while( true ) {
    if (ppuVar2 == &PTR_LOOP_0042b0b0) {
      return (undefined *)0x0;
    }
    iVar1 = strcmp(ppuVar2[2],param_1);
    if (iVar1 == 0) break;
    ppuVar2 = (undefined **)*ppuVar2;
  }
  return ppuVar2[3];
}



void http_parser_set_charset(undefined4 param_1)

{
  cstr_strncpy(&DAT_0042b040,param_1,6);
  return;
}



void http_parser_get_charset(int param_1)

{
  if (param_1 != 0) {
    cstr_strncpy(param_1,&DAT_0042b040,6);
    return;
  }
  return;
}



void http_parser_set_challenge(undefined4 param_1)

{
  cstr_strncpy(s_SERVER_0042b048,param_1,0x60);
  return;
}



char * http_parser_argIllustrate(char *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  
  *param_3 = param_1;
  *param_4 = 0;
  bVar2 = false;
  do {
    while( true ) {
      pcVar3 = param_1;
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        return pcVar3;
      }
      if ((cVar1 != '=') || (bVar2)) break;
      *pcVar3 = '\0';
      bVar2 = true;
      *param_4 = pcVar3 + 1;
      param_1 = pcVar3 + 1;
    }
    param_1 = pcVar3 + 1;
  } while (cVar1 != param_2);
  *pcVar3 = '\0';
  return pcVar3 + 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void http_parser_argStrToList(char *param_1,char param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_30;
  int local_2c [2];
  
  if ((undefined **)PTR_LOOP_0042b0b0 != &PTR_LOOP_0042b0b0) {
    *(undefined **)(PTR_LOOP_0042b0b8 + 4) = PTR_LOOP_0042b0b4;
    *(undefined **)PTR_LOOP_0042b0b4 = PTR_LOOP_0042b0b8;
    PTR_LOOP_0042b0b8 = PTR_LOOP_0042b0b0;
    PTR_LOOP_0042b0b0 = (undefined *)&PTR_LOOP_0042b0b0;
    *(undefined ***)(PTR_LOOP_0042b0b8 + 4) = &PTR_LOOP_0042b0b8;
    PTR_LOOP_0042b0b4 = (undefined *)&PTR_LOOP_0042b0b0;
  }
  if (param_1 != (char *)0x0) {
    while (puVar1 = PTR_LOOP_0042b0b8, *param_1 != '\0') {
      if (((undefined **)PTR_LOOP_0042b0b8 == &PTR_LOOP_0042b0b8) ||
         (PTR_LOOP_0042b0b8 == (undefined *)0x0)) {
        fputs("#Msg: arg list full\n",_stderr);
        fflush(_stderr);
        return;
      }
      param_1 = (char *)http_parser_argIllustrate(param_1,(int)param_2,&local_30,local_2c);
      *(undefined4 *)(puVar1 + 8) = local_30;
      if (local_2c[0] == 0) {
        *(char **)(puVar1 + 0xc) = "";
      }
      else {
        if (param_3 != 0) {
          http_tool_argUnEscape();
        }
        *(int *)(puVar1 + 0xc) = local_2c[0];
      }
      iVar2 = *(int *)puVar1;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(puVar1 + 4);
      **(int **)(puVar1 + 4) = iVar2;
      *(undefined **)PTR_LOOP_0042b0b4 = puVar1;
      *(undefined **)(puVar1 + 4) = PTR_LOOP_0042b0b4;
      *(undefined ***)puVar1 = &PTR_LOOP_0042b0b0;
      PTR_LOOP_0042b0b4 = puVar1;
    }
  }
  return;
}



bool FUN_00405130(char *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_2370;
  undefined4 local_236c;
  undefined4 local_2368;
  undefined2 local_2364;
  undefined2 local_2362;
  undefined2 local_2360;
  undefined2 local_235e;
  undefined2 local_235c;
  undefined2 local_235a;
  undefined2 local_2358;
  char acStack_2354 [1024];
  char acStack_1f54 [4000];
  char acStack_fb4 [4004];
  char *local_10;
  
  local_2368 = 0;
  local_236c = 0;
  local_2364 = 0;
  local_2362 = 0;
  local_2360 = 0;
  local_235e = 0;
  local_235c = 0;
  local_235a = 0;
  local_2358 = 0;
  local_2370 = 0;
  memset(acStack_2354,0,0x400);
  iVar1 = strncmp(param_1,"Basic ",6);
  bVar4 = false;
  if (iVar1 == 0) {
    local_10 = param_1 + 6;
    DAT_00440f62 = 1;
    sVar2 = strlen(local_10);
    b64_decode(acStack_2354,0x400,local_10,sVar2);
    memset(acStack_1f54,0,4000);
    memset(acStack_fb4,0,4000);
    strcpy(acStack_fb4,"adminName\nadminPwd\n");
    iVar1 = rdp_getObj(0,"USER_CFG",&local_2364,acStack_fb4);
    if (iVar1 == 0) {
      uVar3 = http_parser_argIllustrate(acStack_fb4,10,&local_2370,&local_2368);
      http_parser_argIllustrate(uVar3,10,&local_2370,&local_236c);
      sprintf(acStack_1f54,"%s:%s",local_2368,local_236c);
      iVar1 = strcmp(acStack_2354,acStack_1f54);
      if (iVar1 == 0) {
        return true;
      }
    }
    memset(acStack_1f54,0,4000);
    memset(acStack_fb4,0,4000);
    strcpy(acStack_fb4,"userName\nuserPwd\n");
    iVar1 = rdp_getObj(0,"USER_CFG",&local_2364,acStack_fb4);
    bVar4 = false;
    if (iVar1 == 0) {
      uVar3 = http_parser_argIllustrate(acStack_fb4,10,&local_2370,&local_2368);
      http_parser_argIllustrate(uVar3,10,&local_2370,&local_236c);
      sprintf(acStack_1f54,"%s:%s",local_2368,local_236c);
      iVar1 = strcmp(acStack_2354,acStack_1f54);
      bVar4 = iVar1 == 0;
    }
  }
  return bVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * http_parser_illMultiObj
                 (int *param_1,undefined1 *param_2,undefined1 *param_3,char *param_4,uint param_5,
                 int *param_6)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_40;
  char *local_3c;
  size_t local_38;
  int local_34;
  char *local_30;
  
  uVar9 = param_1[6];
  iVar10 = *param_1;
  local_38 = strlen(&DAT_0043ffe0);
  *param_2 = 0;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  local_34 = iVar10 + 0x14;
  *param_4 = '\0';
  bVar1 = false;
  pcVar8 = (char *)0x0;
LAB_00405738:
  do {
    if (uVar9 == 0) {
LAB_00405740:
      param_1[6] = uVar9;
      return (char *)0xffffffff;
    }
    uVar2 = param_5 - 1;
    if (uVar9 < param_5) {
      uVar2 = uVar9;
    }
    iVar7 = 0x400;
    if ((int)uVar2 < 0x400) {
      iVar7 = uVar2 + 1;
    }
    pcVar3 = (char *)http_stream_fgets(*(undefined4 *)(iVar10 + 8),local_34,param_4,iVar7);
    if ((int)pcVar3 < 1) goto LAB_00405740;
    uVar9 = uVar9 - (int)pcVar3;
    if (!bVar1) {
      if ((param_4 + (int)pcVar3)[-1] != '\n') goto LAB_00405740;
      local_30 = pcVar3;
      http_tool_stripLine(param_4,pcVar3);
      pcVar3 = local_30;
    }
    if (*param_6 == 0) {
      pcVar3 = strstr(param_4,&DAT_0043ffe0);
      if (pcVar3 != (char *)0x0) {
        *param_6 = 1;
      }
    }
    else {
      if (bVar1) {
        if (((int)local_38 < (int)(pcVar3 + -1)) &&
           (local_30 = pcVar3, pcVar4 = strstr(param_4,&DAT_0043ffe0), pcVar3 = local_30,
           pcVar4 != (char *)0x0)) {
          do {
            pcVar5 = pcVar4;
            pcVar4 = pcVar5 + -1;
            if (pcVar4 <= pcVar8) goto LAB_00405594;
          } while (*pcVar4 == '-');
          if ((*pcVar4 == '\n') && (pcVar5[-2] == '\r')) {
            pcVar5[-2] = '\0';
            param_1[6] = uVar9;
            return pcVar5 + (-2 - (int)pcVar8);
          }
        }
LAB_00405594:
        param_4 = param_4 + (int)pcVar3;
        param_5 = param_5 - (int)pcVar3;
      }
      else {
        pcVar8 = param_4;
        if (*param_4 != '\0') {
          pcVar8 = strchr(param_4,0x3a);
          if (pcVar8 == (char *)0x0) {
            local_30 = &stderr;
            fputs("#Msg: invad multipart hdr\n",_stderr);
            fflush(*(FILE **)local_30);
            pcVar8 = (char *)0x0;
          }
          else {
            *pcVar8 = '\0';
            pcVar8 = pcVar8 + 1;
            iVar7 = http_tool_strcmpWeek(param_4,"Content-Disposition");
            if (iVar7 == 0) {
LAB_0040571c:
              if (*pcVar8 != '\0') {
                pcVar8 = (char *)http_parser_argIllustrate(pcVar8,0x3b,&local_3c,&local_40);
                local_3c = (char *)http_tool_stripBlank(local_3c);
                local_30 = local_3c;
                iVar7 = strcmp(local_3c,"name");
                if (iVar7 != 0) break;
                local_40 = http_tool_stripBlank(local_40);
                local_40 = FUN_00404da0(local_40);
                puVar6 = param_2;
                goto LAB_00405708;
              }
            }
          }
          goto LAB_00405738;
        }
      }
      bVar1 = true;
    }
  } while( true );
  if ((param_3 != (undefined1 *)0x0) && (iVar7 = strcmp(local_30,"filename"), iVar7 == 0)) {
    local_40 = http_tool_stripBlank(local_40);
    local_40 = FUN_00404da0(local_40);
    puVar6 = param_3;
LAB_00405708:
    cstr_strncpy(puVar6,local_40,0x100);
  }
  goto LAB_0040571c;
}



void http_parser_dropContent(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_1010 [4100];
  
  uVar3 = param_1[6];
  do {
    if (uVar3 == 0) {
      return;
    }
    uVar2 = uVar3;
    if (0x1000 < uVar3) {
      uVar2 = 0x1000;
    }
    iVar1 = http_stream_fread(*(undefined4 *)(*param_1 + 8),*param_1 + 0x14,auStack_1010,uVar2);
    uVar3 = uVar3 - iVar1;
  } while (0 < iVar1);
  param_1[7] = 0;
  return;
}



void http_parser_makeHeader(int *param_1,uint param_2)

{
  char *__s;
  int iVar1;
  
  iVar1 = *param_1;
  if (param_1[0xb] != 1) {
    if (param_2 == 0) {
      param_2 = 200;
    }
    fprintf(*(FILE **)(iVar1 + 0x101c),"HTTP/1.1 %d %s\r\n",
            *(undefined4 *)(&DAT_0042ae68 + (uint)(byte)(&DAT_00413e90)[param_2 & 0x3f] * 8),
            (&PTR_DAT_0042ae6c)[(uint)(byte)(&DAT_00413e90)[param_2 & 0x3f] * 2]);
    if (param_2 != 200) {
      param_1[0xf] = (int)g_http_file_pTypeHTML;
    }
    fprintf(*(FILE **)(iVar1 + 0x101c),"Content-Type: %s; charset=%s\r\n",
            *(undefined4 *)(param_1[0xf] + 4),&DAT_0042b040);
    if (param_2 == 0x191) {
      fprintf(*(FILE **)(iVar1 + 0x101c),"WWW-Authenticate: Basic realm=\"%s\"\r\n",
              s_SERVER_0042b048);
    }
    if (param_1[8] == 1) {
      fputs("Transfer-Encoding: chunked\r\n",*(FILE **)(iVar1 + 0x101c));
    }
    else {
      fprintf(*(FILE **)(iVar1 + 0x101c),"Content-Length: %d\r\n",param_1[6]);
    }
    if (((char)param_1[0x11] == '\0') || (param_2 == 0x196)) {
      fputs("Set-Cookie: JSESSIONID=deleted; Expires=Thu, 01 Jan 1970 00:00:01 GMT; Path=/; HttpOnly\r\n"
            ,*(FILE **)(*param_1 + 0x101c));
    }
    if ((param_2 != 200) && (param_2 != 0x130)) {
      param_1[7] = 0;
    }
    if (param_1[7] == 0) {
      __s = "Connection: close\r\n";
    }
    else {
      __s = "Connection: keep-alive\r\n";
    }
    fputs(__s,*(FILE **)(iVar1 + 0x101c));
    if ((char *)param_1[10] != (char *)0x0) {
      fprintf(*(FILE **)(iVar1 + 0x101c),(char *)param_1[10]);
    }
    fputs("\r\n",*(FILE **)(iVar1 + 0x101c));
    param_1[0xb] = 1;
  }
  return;
}



void FUN_00405a0c(uint param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  code *pcVar9;
  undefined1 auStack_4a0 [64];
  char acStack_460 [64];
  undefined1 auStack_420 [256];
  int aiStack_320 [64];
  char acStack_220 [516];
  
  memset(acStack_220,0,0x200);
  memset(auStack_4a0,0,0x40);
  memset(auStack_420,0,0x100);
  iVar5 = *param_2;
  if (param_1 == 3) {
    if ((param_2[0xd] == 1) || (uVar7 = 1, param_2[0xd] != 2)) {
      uVar7 = 0;
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
LAB_00405da0:
    bVar1 = false;
LAB_00405ae8:
    pcVar8 = (char *)param_2[3];
    iVar2 = strcmp(pcVar8,"/");
    if (iVar2 != 0) {
      pcVar3 = strstr(pcVar8,"/frame");
      if (pcVar3 == (char *)0x0) {
        pcVar8 = strstr(pcVar8,"/main");
        if (pcVar8 == (char *)0x0) {
          param_1 = 0x196;
          goto LAB_00405cf0;
        }
      }
    }
    if (((DAT_00440f62 != '\0') && (DAT_00440f60 != '\0')) && (!bVar1)) {
      g_http_authUsrInfo = g_http_authUsrInfo + 1;
    }
    uVar4 = 0;
    strcpy(acStack_460,g_http_rootDir);
    strcat(acStack_460,"frame/login.htm");
    if (9 < g_http_authUsrInfo) {
      if (DAT_00440f58 == '\0') {
        http_session_delEntry(param_2);
        DAT_00440f58 = '\x01';
        os_getSysUpTime(&DAT_00440f5c);
      }
      else {
        iVar5 = os_getSysUpTime(&DAT_004400e0);
        if ((iVar5 == 0) && (uVar4 = DAT_004400e0 - DAT_00440f5c, 0x1c20 < uVar4)) {
          g_http_authUsrInfo = 1;
          DAT_00440f58 = '\0';
        }
      }
    }
    http_getModelInfo(auStack_4a0,auStack_420);
    iVar5 = strcmp(g_username,"admin");
    sprintf(acStack_220,
            "<script type=\"text/javascript\"> var authTimes=%d; var forbidTime=%d; var modelName=\"%s\"; var modelDesc=\"%s\"; var forbidAdminLogin=%d; var forbidUserLogin=%d; var usernameIsAdmin=%d;</script>"
            ,(uint)g_http_authUsrInfo,uVar4,auStack_4a0,auStack_420,uVar6,uVar7,(uint)(iVar5 == 0));
    pcVar8 = acStack_460;
    pcVar3 = acStack_220;
    pcVar9 = http_file_rpmRep;
    uVar6 = 200;
  }
  else {
    if (param_1 == 4) {
      uVar7 = 0;
      uVar6 = 0;
      bVar1 = true;
      goto LAB_00405ae8;
    }
    if (param_1 == 0x191) {
      uVar7 = 0;
      uVar6 = 0;
      goto LAB_00405da0;
    }
LAB_00405cf0:
    iVar2 = sprintf((char *)aiStack_320,
                    "<html><head><title>%d %s</title></head><body><center><h1>%d %s</h1></center></body></html>"
                    ,*(undefined4 *)
                      (&DAT_0042ae68 + (uint)(byte)(&DAT_00413e90)[param_1 & 0x3f] * 8),
                    (&PTR_DAT_0042ae6c)[(uint)(byte)(&DAT_00413e90)[param_1 & 0x3f] * 2],
                    *(undefined4 *)(&DAT_0042ae68 + (uint)(byte)(&DAT_00413e90)[param_1 & 0x3f] * 8)
                    ,(&PTR_DAT_0042ae6c)[(uint)(byte)(&DAT_00413e90)[param_1 & 0x3f] * 2]);
    param_2[6] = iVar2;
    param_2[0xf] = (int)g_http_file_pTypeHTML;
    http_parser_makeHeader(param_2,param_1);
    pcVar3 = (char *)param_2[6];
    uVar6 = *(undefined4 *)(iVar5 + 0x101c);
    pcVar9 = fwrite;
    param_2 = aiStack_320;
    pcVar8 = &DAT_00000001;
  }
  (*pcVar9)(param_2,pcVar8,pcVar3,uVar6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_parser_main(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint local_a08;
  uint local_a04;
  uint local_a00;
  undefined4 local_9fc;
  char *local_9f8;
  socklen_t local_9f4;
  undefined2 local_9f0;
  undefined2 local_9ee;
  undefined2 local_9ec;
  undefined2 local_9ea;
  undefined2 local_9e8;
  undefined2 local_9e6;
  undefined2 local_9e4;
  undefined2 local_9e0;
  undefined2 local_9de;
  undefined2 local_9dc;
  undefined2 local_9da;
  undefined2 local_9d8;
  undefined2 local_9d6;
  undefined2 local_9d4;
  char local_9d0 [16];
  size_t local_9c0 [4];
  char local_9b0 [16];
  sockaddr sStack_9a0;
  undefined1 auStack_990 [12];
  char local_984;
  undefined1 auStack_978 [20];
  char acStack_964 [20];
  undefined1 auStack_950 [2];
  char local_94e;
  undefined1 auStack_94d [16];
  undefined1 auStack_93d [89];
  int local_8e4;
  undefined4 local_8e0;
  undefined4 local_8dc;
  char *local_8d8;
  char *local_8d4;
  char *local_8d0;
  long local_8cc;
  undefined4 local_8c8;
  char *local_8b4;
  int local_8b0;
  code *local_8ac;
  undefined *local_8a8;
  undefined4 local_860;
  char local_85c [1055];
  char acStack_43d [1029];
  uint local_38;
  char *local_34;
  undefined **local_30;
  
  memset(&DAT_004400e4,0,0x200);
  iVar5 = http_filter_fillMac(param_1);
  uVar19 = 0;
  if (iVar5 == 0) {
    uVar18 = 0;
    uVar14 = 0;
    do {
      uVar6 = uVar14 + 1;
      uVar14 = (uint)*(byte *)(param_1 + uVar14 + 0x1024) << ((uVar14 & 3) << 3);
      uVar19 = uVar19 | (int)uVar14 >> 0x1f;
      uVar18 = uVar18 | uVar14;
      uVar14 = uVar6;
    } while (uVar6 != 6);
    bVar2 = false;
  }
  else {
    bVar2 = true;
    fputs("#Msg: Can not get MAC\n",_stderr);
    uVar19 = 0;
    uVar18 = 0;
    fflush(_stderr);
  }
  memset(&local_8e4,0,0x88);
  local_8c8 = 1;
  local_8b0 = -1;
  local_8a8 = g_http_file_pTypeJs;
  if (bVar2) {
    uVar18 = *(uint *)(param_1 + 0x1020);
    uVar19 = 0;
  }
  local_8e4 = param_1;
  iVar5 = gdpr_getSystemGDPREntry(&local_860);
  if (iVar5 == 0) {
    *(undefined4 *)(local_860 + 4) = 0;
    iVar5 = *(int *)(local_860 + 8) * 0x10;
    if ((*(uint *)(g_login + iVar5) == uVar18) && (*(uint *)(g_login + iVar5 + 4) == uVar19)) {
      *(undefined4 *)(local_860 + 4) = 2;
    }
  }
  else {
    iVar5 = gdpr_getNewSystemGDPREntry(&local_860);
    uVar14 = 0x193;
    if (iVar5 != 0) goto LAB_004074a0;
    *(undefined4 *)(local_860 + 4) = 0;
    *(int *)(local_860 + 8) = local_8b0;
  }
  iVar20 = param_1 + 0x14;
  DAT_00440f60 = 0;
  DAT_00440f62 = 0;
  pcVar8 = acStack_43d + 1;
  iVar5 = http_stream_fgets(*(undefined4 *)(param_1 + 8),iVar20,pcVar8,0x400);
  if (iVar5 < 1) {
LAB_00407490:
    uVar14 = 0x198;
    goto LAB_004074a0;
  }
  uVar14 = 0x19e;
  if (acStack_43d[iVar5] != '\n') goto LAB_004074a0;
  http_tool_stripLine(pcVar8,iVar5);
  pcVar7 = strchr(pcVar8,0x20);
  if (pcVar7 == (char *)0x0) {
LAB_004061e0:
    uVar14 = 400;
  }
  else {
    iVar5 = memcmp(pcVar8,&DAT_00413b14,(int)pcVar7 - (int)pcVar8);
    if (iVar5 == 0) {
      local_8e0 = 1;
    }
    else {
      iVar5 = memcmp(pcVar8,&DAT_00413b18,(int)pcVar7 - (int)pcVar8);
      uVar14 = 0x195;
      if (iVar5 != 0) goto LAB_004074a0;
      local_8e0 = 2;
    }
    do {
      pcVar8 = pcVar7;
      cVar1 = pcVar8[1];
      pcVar7 = pcVar8 + 1;
    } while (cVar1 == ' ');
    iVar5 = memcmp(pcVar7,"http://",7);
    if (iVar5 == 0) {
      pcVar7 = strchr(pcVar8 + 8,0x2f);
      if (pcVar7 == (char *)0x0) goto LAB_004061e0;
      *pcVar7 = '/';
      local_8d0 = pcVar8 + 8;
      pcVar8 = pcVar7;
    }
    else {
      uVar14 = 400;
      pcVar8 = pcVar7;
      if (cVar1 != '/') goto LAB_004074a0;
    }
    for (; *pcVar7 != ' '; pcVar7 = pcVar7 + 1) {
      uVar14 = 400;
      if (*pcVar7 == '\\') goto LAB_004074a0;
    }
    pcVar7 = strstr(pcVar8,"../");
    uVar14 = 400;
    if ((pcVar7 == (char *)0x0) &&
       (local_8d8 = pcVar8, pcVar8 = strchr(pcVar8,0x20), pcVar8 != (char *)0x0)) {
      *pcVar8 = '\0';
      do {
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 == ' ');
      sVar9 = strlen(pcVar8);
      iVar5 = memcmp(pcVar8,"HTTP/1.1",sVar9);
      if (iVar5 == 0) {
        local_8dc = 2;
      }
      else {
        iVar5 = memcmp(pcVar8,"HTTP/1.0",sVar9);
        uVar14 = 0x1f9;
        if (iVar5 != 0) goto LAB_004074a0;
        local_8dc = 1;
      }
      local_8d4 = strchr(local_8d8,0x3f);
      if (local_8d4 == (char *)0x0) {
        local_8d4 = (char *)0x0;
      }
      else {
        *local_8d4 = '\0';
        local_8d4 = local_8d4 + 1;
      }
      uVar14 = 0;
      do {
        do {
          while( true ) {
            while( true ) {
              iVar5 = http_stream_fgets(*(undefined4 *)(param_1 + 8),iVar20,local_85c,0x400);
              if (iVar5 < 1) goto LAB_00407490;
              if (local_85c[iVar5 + -1] == '\n') break;
              fputs("#Msg: header line len overflow\n",_stderr);
              fflush(_stderr);
            }
            http_tool_stripLine(local_85c,iVar5);
            if (local_85c[0] == '\0') {
              iVar5 = http_filter_checkClientType(local_8e4);
              if (((iVar5 != 1) ||
                  (iVar5 = http_filter_doFilter(&local_8e4), pcVar8 = local_8d8, iVar5 != 1)) ||
                 ((local_8b4 == (char *)0x0 &&
                  (((iVar5 = strcmp(local_8d8,"/"), iVar5 != 0 &&
                    (pcVar7 = strstr(pcVar8,"domain-redirect.htm"), pcVar7 == (char *)0x0)) &&
                   (pcVar8 = strstr(pcVar8,"qr.htm"), pcVar8 == (char *)0x0)))))) {
                uVar14 = 0x193;
                goto LAB_004074a0;
              }
              iVar5 = http_alias_fillTarget(&local_8e4);
              pcVar8 = local_8d8;
              if (iVar5 == 0) {
                uVar14 = 0x194;
                goto LAB_004074a0;
              }
              pcVar7 = strstr(local_8d8,"img/login");
              if (((pcVar7 == (char *)0x0) &&
                  (pcVar7 = strstr(pcVar8,"domain-redirect.htm"), pcVar7 == (char *)0x0)) &&
                 ((pcVar7 = strstr(pcVar8,"js/"), pcVar7 == (char *)0x0 &&
                  ((pcVar7 = strstr(pcVar8,"/cgi"), pcVar7 == (char *)0x0 &&
                   (pcVar8 = strstr(pcVar8,"qr.htm"), pcVar8 == (char *)0x0)))))) {
                if (DAT_00440f58 != '\0') {
                  iVar20 = os_getSysUpTime(&DAT_004400e0);
                  if ((iVar20 == 0) && (0x1c20 < DAT_004400e0 - DAT_00440f5c)) {
                    g_http_authUsrInfo = 0;
                    DAT_00440f5c = 0;
                    DAT_00440f58 = '\0';
                  }
                  else if ((*(uint *)(g_login + local_8b0 * 0x10) != 0 ||
                            *(uint *)(g_login + local_8b0 * 0x10 + 4) != 0) &&
                          ((*(uint *)(g_login + local_8b0 * 0x10) != uVar18 ||
                           (*(uint *)(g_login + local_8b0 * 0x10 + 4) != uVar19))))
                  goto LAB_00407480;
                }
                iVar20 = http_author_hasAuthor(&local_8e4,iVar5);
                if (iVar20 == 0) {
                  os_getSysUpTime(&DAT_00440f54);
                  uVar14 = 0x191;
                  goto LAB_004074a0;
                }
                g_http_authUsrInfo = 0;
                iVar20 = os_getSysUpTime(&DAT_004400e0);
                if ((iVar20 == 0) && (600 < DAT_004400e0 - DAT_00440f54)) {
                  iVar5 = local_8b0 * 0x10;
                  *(undefined4 *)(g_login + iVar5) = 0;
                  *(undefined4 *)(g_login + iVar5 + 8) = 0;
                  *(undefined4 *)(g_login + iVar5 + 4) = 0;
                  *(undefined4 *)(g_login + iVar5 + 0xc) = 0;
                  iVar5 = gdpr_getSystemGDPREntry(&local_860);
                  if (iVar5 != -1) {
                    gdpr_releaseSystemGDPREntry();
                  }
                  aes_free_KeyandIv();
                  http_session_delEntry(&local_8e4);
                  os_getSysUpTime(&DAT_00440f54);
                  uVar14 = 4;
                  goto LAB_004074a0;
                }
                os_getSysUpTime(&DAT_00440f54);
              }
              if ((local_8ac == http_file_main) &&
                 (iVar5 = http_alias_doAlias(&local_8e4,iVar5), iVar5 == -1)) {
                uVar14 = 500;
              }
              else {
                if (((local_8ac != http_cgi_main) && (local_8ac != http_cgi_gdpr_main)) &&
                   (local_8ac != http_rpm_ansi)) {
                  http_parser_argStrToList(local_8d4,0x26,1);
                }
                do {
                  pcVar4 = local_8ac;
                  if (local_8ac == (code *)0x0) {
                    if (uVar14 != 0xffffffff) {
                      return local_8c8;
                    }
                    return 0;
                  }
                  local_8ac = (code *)0x0;
                  uVar14 = (*pcVar4)(&local_8e4);
                  fflush(*(FILE **)(param_1 + 0x101c));
                  if (uVar14 == 0xffffffff) {
                    return 0;
                  }
                } while (uVar14 == 0);
              }
              goto LAB_004074a0;
            }
            local_9f4 = 0x10;
            local_9b0[0] = '\0';
            local_9b0[1] = '\0';
            local_9b0[2] = '\0';
            local_9b0[3] = '\0';
            local_9b0[4] = '\0';
            local_9b0[5] = '\0';
            local_9b0[6] = '\0';
            local_9b0[7] = '\0';
            local_9b0[8] = '\0';
            local_9b0[9] = '\0';
            local_9b0[10] = '\0';
            local_9b0[0xb] = '\0';
            local_9b0[0xc] = '\0';
            local_9b0[0xd] = '\0';
            local_9b0[0xe] = '\0';
            local_9b0[0xf] = '\0';
            local_9c0[0] = 0;
            local_9c0[1] = 0;
            local_9c0[2] = 0;
            local_9c0[3] = 0;
            local_9f8 = (char *)0x0;
            local_9fc = 0;
            if (((local_85c[0] != ' ') && (local_85c[0] != '\t')) &&
               (pcVar8 = strchr(local_85c,0x3a), pcVar8 != (char *)0x0)) break;
LAB_00407524:
            uVar14 = 0xffffffff;
switchD_004067b4_default:
            uVar6 = uVar14 + 1;
            if (uVar18 == 0 && uVar19 == 0) goto LAB_00407278;
LAB_0040745c:
            if (1 < uVar6) goto LAB_004074a0;
          }
          *pcVar8 = '\0';
          ppuVar15 = &PTR_s_Authorization_0042aef8;
          iVar5 = 0;
          while (*ppuVar15 != (undefined *)0x0) {
            local_30 = ppuVar15;
            iVar10 = http_tool_strcmpWeek(local_85c);
            ppuVar15 = local_30 + 2;
            if (iVar10 == 0) break;
            iVar5 = iVar5 + 1;
          }
          if (((&PTR_s_Authorization_0042aef8)[iVar5 * 2] == (undefined *)0x0) ||
             (iVar10 = http_tool_strcmpWeek((&PTR_s_Authorization_0042aef8)[iVar5 * 2],local_85c),
             iVar10 != 0)) goto LAB_00407524;
          do {
            do {
              pcVar8 = pcVar8 + 1;
              cVar1 = *pcVar8;
            } while (cVar1 == ' ');
          } while (cVar1 == '\t');
          if (cVar1 == '\0') {
            uVar14 = -(uint)((&DAT_0042aefc)[iVar5 * 2] != 8) | 0x193;
            goto switchD_004067b4_default;
          }
          uVar14 = 0xffffffff;
          switch((&DAT_0042aefc)[iVar5 * 2]) {
          case 1:
          case 7:
            break;
          case 2:
            iVar5 = memcmp(pcVar8,"close",5);
            if (iVar5 == 0) {
              local_8c8 = 0;
            }
            break;
          case 3:
            if ((local_8d0 == (char *)0x0) && (DAT_004400e4 == '\0')) {
              puVar16 = &DAT_004402e4;
              local_8d0 = pcVar8;
              goto LAB_004069f0;
            }
            if (DAT_004400e4 != '\0') {
              local_8d0 = pcVar8;
              cstr_strncpy(&DAT_004402e4,pcVar8,0x200);
              pcVar8 = &DAT_004400e4;
              goto switchD_004067b4_caseD_8;
            }
            break;
          case 4:
            pcVar7 = strstr(pcVar8,"multipart/form-data");
            if (pcVar8 == pcVar7) {
              pcVar7 = strstr(pcVar8,"boundary=");
              pcVar8 = pcVar7 + 9;
              if (pcVar7 != (char *)0x0) {
                do {
                  while (pcVar7 = pcVar8, *pcVar7 == ' ') {
                    pcVar8 = pcVar7 + 1;
                  }
                  pcVar8 = pcVar7 + 1;
                } while (*pcVar7 == '\t');
                pcVar8 = strchr(pcVar7,0x3b);
                if (pcVar8 != (char *)0x0) {
                  *pcVar8 = '\0';
                }
                strcpy(&DAT_0043ffe0,pcVar7);
              }
            }
            break;
          case 5:
            lVar11 = atol(pcVar8);
            if (lVar11 != 0) {
              local_8cc = lVar11;
            }
            break;
          case 6:
            while (*pcVar8 != '\0') {
              pcVar8 = (char *)http_parser_argIllustrate(pcVar8,0x3b,&local_9f8,&local_9fc);
              pcVar7 = local_9f8;
              if (*local_9f8 != '\0') {
                do {
                  local_9f8 = pcVar7;
                  pcVar7 = local_9f8 + 1;
                } while (*local_9f8 == ' ');
                iVar5 = http_tool_strcmpWeek(local_9f8,"JSESSIONID");
                if (iVar5 == 0) {
                  DAT_00440f62 = 1;
                  http_session_doSession(local_9fc,&local_8e4);
                  if (local_8b0 != -1) {
                    DAT_00440f60 = 1;
                  }
                }
              }
            }
            break;
          case 8:
switchD_004067b4_caseD_8:
            local_8b4 = pcVar8;
            if (DAT_004402e4 == '\0') {
              puVar16 = &DAT_004400e4;
LAB_004069f0:
              cstr_strncpy(puVar16,pcVar8,0x200);
            }
            else {
              iVar5 = getsockname(*(int *)(local_8e4 + 8),&sStack_9a0,&local_9f4);
              if (iVar5 != 0) {
                fputs("#Msg: getsockname error\n",_stderr);
                uVar14 = 0x193;
                fflush(_stderr);
                goto switchD_004067b4_default;
              }
              cnet_addrNumToStr(sStack_9a0.sa_data._2_4_,local_9b0);
              uVar14 = strlen(local_9b0);
              pcVar7 = (char *)0x0;
              local_9c0[0] = strlen("tplinklogin.net");
              local_9c0[1] = strlen("tplinkwifi.net");
              local_9c0[2] = strlen("tplinkap.net");
              local_9c0[3] = strlen("tplinkrepeater.net");
              pcVar8 = local_8b4;
              iVar5 = memcmp(local_8b4,"http://",7);
              if (iVar5 == 0) {
                pcVar7 = pcVar8 + 7;
              }
              local_9d0[0] = '\0';
              local_9d0[1] = '\0';
              local_9d0[2] = '\0';
              local_9d0[3] = '\0';
              local_9d0[4] = '\0';
              local_9d0[5] = '\0';
              local_9d0[6] = '\0';
              local_9d0[7] = '\0';
              local_9d0[8] = '\0';
              local_9d0[9] = '\0';
              local_9d0[10] = '\0';
              local_9d0[0xb] = '\0';
              local_9d0[0xc] = '\0';
              local_9d0[0xd] = '\0';
              local_9d0[0xe] = '\0';
              local_9d0[0xf] = '\0';
              if (pcVar7 == (char *)0x0) {
LAB_00407530:
                uVar14 = 0x193;
                goto switchD_004067b4_default;
              }
              pcVar8 = strdup(pcVar7);
              if (pcVar8 == (char *)0x0) {
                fputs("#Msg: strdup error\n",_stderr);
                fflush(_stderr);
              }
              else {
                local_30 = (undefined **)0x410000;
                pcVar12 = strtok(pcVar8,"/");
                pcVar12 = strtok(pcVar12,":");
                iVar5 = cnet_addrStrToNum(pcVar12,&local_a00);
                if (iVar5 == 0) {
                  local_9e0 = 0;
                  local_9de = 0;
                  local_38 = local_a00;
                  local_9dc = 0;
                  local_9da = 0;
                  local_9d8 = 0;
                  local_9d6 = 0;
                  local_9d4 = 0;
                  local_a04 = 0;
                  local_a08 = 0;
                  do {
                    do {
                      iVar5 = rdp_getNextObjStruct("LAN_IP_INTF",&local_9e0,0x6c,auStack_950);
                      if (iVar5 != 0) {
LAB_00406cfc:
                        local_9e0 = 0;
                        local_9de = 0;
                        local_9dc = 0;
                        local_9da = 0;
                        local_9d8 = 0;
                        local_9d6 = 0;
                        local_9d4 = 0;
                        iVar5 = rdp_getObjStruct("HTTP_CFG",&local_9e0,0x18,auStack_990);
                        if (iVar5 != 0) {
                          cdbg_perror("getRemoteHost",0x1a2,iVar5);
                        }
                        if (local_984 == '\0') goto LAB_00406e38;
                        local_9f0 = 0;
                        local_9ee = 0;
                        local_9ec = 0;
                        local_9ea = 0;
                        local_9e8 = 0;
                        local_9e6 = 0;
                        local_9e4 = 0;
                        iVar5 = rdp_getObjStruct("APP_CFG",&local_9f0,0x26,auStack_978);
                        if (iVar5 != 0) {
                          cdbg_perror("getRemoteHost",0x1aa,iVar5);
                        }
                        strcpy(local_9d0,acStack_964);
                        if (local_9d0[0] != '\0') {
                          sVar9 = strlen(local_9d0);
                          iVar5 = strncmp(pcVar7,local_9d0,sVar9);
                          if (iVar5 == 0) goto LAB_00406e38;
                        }
                        free(pcVar8);
                        goto switchD_004067b4_caseD_1;
                      }
                    } while (local_94e == '\0');
                    iVar5 = cnet_addrStrToNum(auStack_94d,&local_a04);
                    if (iVar5 != 0) {
                      uVar17 = 0x1d1;
LAB_00406c94:
                      cdbg_printf(8,"isValidIp",uVar17,
                                  "Error ocurrs in convertint the IPs to num format!");
                      goto LAB_00406cfc;
                    }
                    iVar5 = cnet_addrStrToNum(auStack_93d,&local_a08);
                    if (iVar5 != 0) {
                      uVar17 = 0x1d6;
                      goto LAB_00406c94;
                    }
                  } while (((local_38 ^ local_a04) & local_a08) != 0);
                }
LAB_00406e38:
                free(pcVar8);
                iVar5 = strcmp(pcVar7,&DAT_004402e4);
                if (iVar5 != 0) {
                  iVar5 = strncmp(pcVar7,local_9b0,uVar14);
                  if (iVar5 == 0) {
LAB_00406ee8:
                    sVar9 = strlen(pcVar7);
                    if (sVar9 <= uVar14) break;
LAB_00407148:
                    if (((pcVar7[uVar14] != '/') && (pcVar7[uVar14] != ':')) &&
                       (iVar5 = strcmp(local_8d8,"/"), iVar5 != 0)) goto LAB_00407530;
                  }
                  else {
                    pcVar8 = "tplinklogin.net";
                    pcVar12 = (char *)0x0;
                    local_34 = (char *)0x10;
                    do {
                      uVar14 = *(size_t *)((int)local_9c0 + (int)pcVar12);
                      local_30 = (undefined **)pcVar8;
                      iVar5 = strncmp(pcVar7,pcVar8,uVar14);
                      pcVar12 = pcVar12 + 4;
                      if (iVar5 == 0) goto LAB_00406ee8;
                      pcVar8 = (char *)(local_30 + 8);
                    } while (pcVar12 != local_34);
                    if (g_http_dynDnsDomain == '\0') {
LAB_00406f48:
                      if (g_http_noipDnsDomain != '\0') {
                        local_34 = &g_http_noipDnsDomain;
                        uVar14 = strlen(&g_http_noipDnsDomain);
                        iVar5 = strncmp(pcVar7,local_34,uVar14);
                        if (iVar5 == 0) goto LAB_00407128;
                      }
                      if (g_http_cmxDnsDomain != '\0') {
                        local_34 = &g_http_cmxDnsDomain;
                        uVar14 = strlen(&g_http_cmxDnsDomain);
                        iVar5 = strncmp(pcVar7,local_34,uVar14);
                        if (iVar5 == 0) goto LAB_00407128;
                      }
                      if (DAT_00440fe4 != '\0') {
                        uVar14 = strlen(&DAT_00440fe4);
                        iVar5 = strncmp(pcVar7,&DAT_00440fe4,uVar14);
                        if (iVar5 == 0) goto LAB_00407128;
                      }
                      if (DAT_00441064 != '\0') {
                        uVar14 = strlen(&DAT_00441064);
                        iVar5 = strncmp(pcVar7,&DAT_00441064,uVar14);
                        if (iVar5 == 0) goto LAB_00407128;
                      }
                      if (DAT_004410e4 != '\0') {
                        uVar14 = strlen(&DAT_004410e4);
                        iVar5 = strncmp(pcVar7,&DAT_004410e4,uVar14);
                        if (iVar5 == 0) goto LAB_00407128;
                      }
                      if (DAT_00441164 != '\0') {
                        uVar14 = strlen(&DAT_00441164);
                        iVar5 = strncmp(pcVar7,&DAT_00441164,uVar14);
                        if (iVar5 == 0) goto LAB_00407128;
                      }
                      pcVar8 = local_8d8;
                      iVar5 = strcmp(local_8d8,"/");
                      if ((iVar5 != 0) &&
                         (pcVar7 = strstr(pcVar8,"domain-redirect.htm"), pcVar7 == (char *)0x0)) {
                        pcVar8 = strstr(pcVar8,"qr.htm");
                        uVar14 = 0x193;
                        if (pcVar8 == (char *)0x0) goto switchD_004067b4_default;
                      }
                    }
                    else {
                      local_34 = &g_http_dynDnsDomain;
                      uVar14 = strlen(&g_http_dynDnsDomain);
                      iVar5 = strncmp(pcVar7,local_34,uVar14);
                      if (iVar5 != 0) goto LAB_00406f48;
LAB_00407128:
                      sVar9 = strlen(pcVar7);
                      if (uVar14 < sVar9) goto LAB_00407148;
                    }
                  }
                }
              }
            }
            break;
          default:
            goto switchD_004067b4_default;
          }
switchD_004067b4_caseD_1:
          pcVar8 = local_8d8;
          pcVar7 = strstr(local_8d8,"img/login");
          uVar14 = 0;
          if (pcVar7 != (char *)0x0) goto switchD_004067b4_default;
          pcVar7 = strstr(pcVar8,"domain-redirect.htm");
          uVar14 = 0;
          if (((pcVar7 != (char *)0x0) || (pcVar7 = strstr(pcVar8,"js/"), pcVar7 != (char *)0x0)) ||
             ((pcVar7 = strstr(pcVar8,"/cgi"), pcVar7 != (char *)0x0 ||
              (pcVar8 = strstr(pcVar8,"qr.htm"), pcVar8 != (char *)0x0))))
          goto switchD_004067b4_default;
LAB_00407278:
          os_getSysUpTime(&DAT_004400e0);
          iVar5 = http_filter_doFilter(&local_8e4);
          uVar3 = DAT_004400e0;
        } while (iVar5 != 1);
        iVar5 = local_8b0 * 0x10;
        if (local_8b0 != -1) {
          puVar13 = (uint *)(g_login + iVar5);
          if (*puVar13 == 0 && *(uint *)(g_login + iVar5 + 4) == 0) {
            *puVar13 = uVar18;
            *(uint *)(g_login + iVar5 + 4) = uVar19;
            *(uint *)(g_login + iVar5 + 8) = DAT_004400e0;
          }
          else {
            if ((*puVar13 == uVar18) &&
               (uVar6 = uVar14 + 1, *(uint *)(g_login + iVar5 + 4) == uVar19)) goto LAB_0040745c;
            iVar5 = local_8b0 * 0x10;
            puVar13 = (uint *)(g_login + iVar5);
            if ((-*(int *)(g_login + iVar5 + 0xc) ==
                 (uint)(DAT_004400e0 < DAT_004400e0 - *(int *)(g_login + iVar5 + 8))) &&
               (DAT_004400e0 - *(int *)(g_login + iVar5 + 8) < 0x259)) {
              uVar14 = 3;
              goto LAB_004074a0;
            }
            *puVar13 = uVar18;
            *(uint *)(g_login + iVar5 + 4) = uVar19;
            *(uint *)(g_login + iVar5 + 8) = uVar3;
          }
          puVar13[3] = 0;
          uVar6 = uVar14 + 1;
          goto LAB_0040745c;
        }
      } while ((g_login._16_4_ == 0 && g_login._20_4_ == 0) ||
              ((g_login._16_4_ == uVar18 && (g_login._20_4_ == uVar19))));
      if ((-g_login._28_4_ == (uint)(DAT_004400e0 < DAT_004400e0 - g_login._24_4_)) &&
         (DAT_004400e0 - g_login._24_4_ < 0x259)) {
        do {
          while( true ) {
            iVar5 = http_stream_fgets(*(undefined4 *)(param_1 + 8),iVar20,local_85c,0x400);
            if (iVar5 < 1) goto LAB_00407490;
            if (local_85c[iVar5 + -1] == '\n') break;
            fputs("#Msg: header line len overflow\n",_stderr);
            fflush(_stderr);
          }
          http_tool_stripLine(local_85c,iVar5);
        } while (local_85c[0] != '\0');
        uVar14 = 3;
      }
      else {
        g_login._24_4_ = DAT_004400e0;
        g_login._28_4_ = 0;
        g_login._16_4_ = uVar18;
        g_login._20_4_ = uVar19;
LAB_00407480:
        uVar14 = 0x191;
      }
    }
  }
LAB_004074a0:
  FUN_00405a0c(uVar14,&local_8e4);
  fflush(*(FILE **)(param_1 + 0x101c));
  return local_8c8;
}



undefined4 http_parser_init(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    puVar1 = &DAT_004404e4 + iVar2 * 4;
    iVar3 = iVar2 + 1;
    *(undefined4 **)PTR_LOOP_0042b0bc = puVar1;
    (&DAT_004404e8)[iVar2 * 4] = PTR_LOOP_0042b0bc;
    *puVar1 = &PTR_LOOP_0042b0b8;
    iVar2 = iVar3;
    PTR_LOOP_0042b0bc = (undefined *)puVar1;
  } while (iVar3 != 0x28);
  DAT_0043ffe0 = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int http_io_output(int *param_1,char *param_2)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  
  sVar2 = strlen(param_2);
  param_1[6] = sVar2;
  if (0x7ff < sVar2) {
    fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_io.c",0x47);
    perror("");
    fputs("#error && exit: CGI buffer overflow!\n",_stderr);
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  http_parser_makeHeader(param_1,0);
  if (param_1[8] == 0) {
    sVar2 = fwrite(param_2,1,param_1[6],*(FILE **)(*param_1 + 0x101c));
    bVar1 = sVar2 != param_1[6];
  }
  else {
    iVar3 = fprintf(*(FILE **)(*param_1 + 0x101c),"%x\r\n");
    if (iVar3 < 1) {
      return -1;
    }
    uVar4 = fprintf(*(FILE **)(*param_1 + 0x101c),"%s\r\n",param_2);
    bVar1 = uVar4 <= (uint)param_1[6];
  }
  return -(uint)bVar1;
}



void http_stream_streamInit(int param_1)

{
  *(int *)(param_1 + 0x1000) = param_1;
  *(int *)(param_1 + 0x1004) = param_1;
  return;
}



int http_stream_fgets(int param_1,void *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ssize_t sVar4;
  char *pcVar5;
  
  iVar2 = 0;
  pcVar5 = param_3;
  if (param_4 != 0) {
    while (param_4 + -1 != 0) {
      pcVar3 = *(char **)((int)param_2 + 0x1000);
      if (pcVar3 < *(char **)((int)param_2 + 0x1004)) {
        cVar1 = *pcVar3;
        *pcVar5 = cVar1;
        *(char **)((int)param_2 + 0x1000) = pcVar3 + 1;
        if (((cVar1 == '\n') && (param_3 < pcVar5)) && (pcVar5[-1] == '\r')) {
          pcVar5 = pcVar5 + 1;
          break;
        }
        param_4 = param_4 + -1;
        pcVar5 = pcVar5 + 1;
      }
      else {
        *(void **)((int)param_2 + 0x1000) = param_2;
        sVar4 = read(param_1,param_2,0x1000);
        if (sVar4 == 0) {
          return 0;
        }
        if (sVar4 < 0) {
          return -1;
        }
        *(int *)((int)param_2 + 0x1004) = *(int *)((int)param_2 + 0x1000) + sVar4;
      }
    }
    iVar2 = 0;
    if (param_3 < pcVar5) {
      *pcVar5 = '\0';
      iVar2 = (int)pcVar5 - (int)param_3;
    }
  }
  return iVar2;
}



int http_stream_fread(int param_1,void *param_2,void *param_3,uint param_4)

{
  uint __n;
  uint uVar1;
  
  __n = *(int *)((int)param_2 + 0x1004) - *(int *)((int)param_2 + 0x1000);
  while( true ) {
    if (param_4 <= __n) {
      memcpy(param_3,*(void **)((int)param_2 + 0x1000),param_4);
      *(uint *)((int)param_2 + 0x1000) = *(int *)((int)param_2 + 0x1000) + param_4;
      *(undefined1 *)((int)param_3 + param_4) = 0;
      return (int)((int)param_3 + param_4) - (int)param_3;
    }
    memcpy(param_3,*(void **)((int)param_2 + 0x1000),__n);
    *(void **)((int)param_2 + 0x1000) = param_2;
    uVar1 = read(param_1,param_2,0x1000);
    if (uVar1 == 0) break;
    param_4 = param_4 - __n;
    if ((int)uVar1 < 0) {
      return -1;
    }
    *(uint *)((int)param_2 + 0x1004) = *(int *)((int)param_2 + 0x1000) + uVar1;
    __n = uVar1;
  }
  return 0;
}



undefined4 http_auth_setEntry(int param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  char local_30;
  undefined1 auStack_2f [14];
  undefined1 local_21;
  
  local_30 = '\0';
  memset(auStack_2f,0,0x1f);
  if (*param_2 != '\0') {
    cstr_strncpy(&local_30,param_3,0x10);
    local_21 = 0;
    sVar1 = strlen(&local_30);
    b64_encode(&DAT_00440770 + param_1 * 0x2d,0x2d,&local_30,sVar1);
  }
  return 0;
}



undefined4 FUN_00407a50(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__s1;
  
  __s1 = &DAT_00440770;
  iVar2 = 0;
  do {
    iVar1 = strcmp(__s1,param_1);
    iVar3 = iVar2 + 1;
    if (iVar1 == 0) {
      *(int *)(param_2 + 0x34) = iVar2;
      break;
    }
    __s1 = __s1 + 0x2d;
    iVar2 = iVar3;
  } while (iVar3 != 4);
  return *(undefined4 *)(param_2 + 0x34);
}



undefined4 http_auth_doAuth_login(undefined4 param_1,undefined4 param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *__s1;
  char acStack_68 [15];
  undefined1 local_59;
  char acStack_48 [48];
  
  memset(acStack_68,0,0x20);
  memset(acStack_48,0,0x2e);
  cstr_strncpy(acStack_68,param_2,0x10);
  local_59 = 0;
  __s1 = &DAT_00440770;
  sVar1 = strlen(acStack_68);
  b64_encode(acStack_48,0x2d,acStack_68,sVar1);
  iVar3 = 0;
  do {
    iVar2 = strcmp(__s1,acStack_48);
    iVar4 = iVar3 + 1;
    if (iVar2 == 0) {
      *(int *)(param_3 + 0x34) = iVar3;
      break;
    }
    __s1 = __s1 + 0x2d;
    iVar3 = iVar4;
  } while (iVar4 != 4);
  return *(undefined4 *)(param_3 + 0x34);
}



undefined4 http_auth_init(void)

{
  undefined *__s;
  
  __s = &DAT_00440770;
  do {
    memset(__s,0xff,0xf);
    __s[0xf] = 0;
    __s = __s + 0x2d;
  } while (__s != (undefined *)0x440824);
  return 0;
}



byte http_author_hasAuthor(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(uint *)(param_1 + 0x34) < 4) {
    bVar1 = **(byte **)(param_2 + 0x18) >> (*(uint *)(param_1 + 0x34) & 0x1f) & 1;
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00407ca0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_28;
  sockaddr sStack_24;
  
  local_28 = 0x10;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1020) == -1) {
    iVar1 = getpeername(*(int *)(param_1 + 8),&sStack_24,&local_28);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1020) = sStack_24.sa_data._2_4_;
    }
    else {
      uVar2 = 0xffffffff;
      fputs("#Msg: getpeername error\n",_stderr);
      fflush(_stderr);
    }
  }
  return uVar2;
}



void http_filter_fillType(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [16];
  
  if (*(int *)(param_1 + 0x1030) == 0) {
    if (*(int *)(param_1 + 0x1020) == -1) {
      FUN_00407ca0();
    }
    cnet_addrNumToStr(*(undefined4 *)(param_1 + 0x1020),auStack_18);
    iVar1 = rdp_netChkIpInAllLanSubnet(auStack_18);
    if (iVar1 != 1) {
      iVar1 = 2;
    }
    *(int *)(param_1 + 0x1030) = iVar1;
  }
  return;
}



undefined4 http_filter_fillMac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x1020) == -1) {
    FUN_00407ca0();
  }
  uVar2 = 0;
  cnet_addrNumToStr(*(undefined4 *)(param_1 + 0x1020),auStack_38);
  if (*(char *)(param_1 + 0x1024) == -1) {
    iVar1 = os_getMacByIp(auStack_38,&local_28);
    if (iVar1 == 0) {
      cnet_macStrToEth(&local_28,param_1 + 0x1024);
    }
    else {
      *(undefined1 *)(param_1 + 0x1024) = 0xff;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



bool http_filter_checkClientType(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x1030) == 0) {
    http_filter_fillType();
  }
  bVar1 = true;
  if (*(int *)(param_1 + 0x102c) != 0) {
    bVar1 = *(int *)(param_1 + 0x102c) == *(int *)(param_1 + 0x1030);
  }
  return bVar1;
}



bool http_filter_doFilter(int *param_1)

{
  uint uVar1;
  undefined4 *__s2;
  int iVar2;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0x1030) == 1) {
    if (DAT_00440830 == 0) {
      return true;
    }
    if (DAT_00440830 == 1) {
      uVar1 = *(uint *)(iVar2 + 0x1020) ^ DAT_00440838;
      goto LAB_00408008;
    }
    if (DAT_00440830 != 2) {
      return false;
    }
    if (*(char *)(iVar2 + 0x1024) == -1) {
      http_filter_fillMac(iVar2);
    }
    __s2 = &DAT_00440838;
  }
  else {
    if (*(int *)(iVar2 + 0x1030) != 2) {
      return false;
    }
    if (DAT_00440834 == 0) {
      return true;
    }
    if (DAT_00440834 == 1) {
      uVar1 = *(uint *)(iVar2 + 0x1020) ^ DAT_0044084c;
      goto LAB_00408008;
    }
    if (DAT_00440834 != 2) {
      return false;
    }
    if (*(char *)(iVar2 + 0x1024) == -1) {
      http_filter_fillMac(iVar2);
    }
    __s2 = &DAT_0044084c;
  }
  uVar1 = memcmp((void *)(iVar2 + 0x1024),__s2,6);
LAB_00408008:
  return uVar1 == 0;
}



void http_filter_setConfig(char *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == '\0') {
    DAT_00440830 = 0;
    uVar1 = DAT_00440830;
  }
  else {
    iVar2 = cnet_addrStrToNum(param_1,&DAT_00440838);
    uVar1 = 1;
    if (iVar2 != 0) {
      iVar2 = cnet_macStrToEth(param_1,&DAT_00440838);
      uVar1 = 2;
      if (iVar2 != 0) {
        cstr_strncpy(&DAT_00440838,param_1,0x12);
        uVar1 = DAT_00440830;
      }
    }
  }
  DAT_00440830 = uVar1;
  if (*param_2 == '\0') {
    DAT_00440834 = 0;
    uVar1 = DAT_00440834;
  }
  else {
    iVar2 = cnet_addrStrToNum(param_2,&DAT_0044084c);
    uVar1 = 1;
    if (iVar2 != 0) {
      iVar2 = cnet_macStrToEth(param_2,&DAT_0044084c);
      uVar1 = 2;
      if (iVar2 != 0) {
        cstr_strncpy(&DAT_0044084c,param_2,0x12);
        return;
      }
    }
  }
  DAT_00440834 = uVar1;
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: r0x00442008 : 0x00408230
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

undefined4
http_alias_addEntryByArg(uint param_1,char *param_2,char *param_3,int param_4,char *param_5)

{
  undefined *puVar1;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  
  if (param_2 == (char *)0x0) {
    fputs("#Msg: alias entry none src\n",_stderr);
    fflush(_stderr);
    return 0xffffffff;
  }
  if (param_3 != (char *)0x0) {
    sVar3 = strlen(param_3);
    sVar4 = strlen(param_2);
    if (0x20 < sVar3 - sVar4) {
      fprintf(_stderr,"#file: %s;line: %d; error = ","src/http_alias.c",0x92);
      perror("");
      fputs("#error && exit: alias increase length too long, have to enlarge the HTTP_ALIAS_LEN\n",
            _stderr);
                    // WARNING: Subroutine does not return
      exit(-1);
    }
  }
  puVar5 = (undefined4 *)malloc(0x1c);
  puVar5[2] = param_1;
  puVar5[3] = param_2;
  puVar5[4] = param_3;
  if (param_4 == 0) {
    puVar5[5] = &LAB_00408160;
    if (param_1 < 2) {
      puVar5[5] = http_file_main;
    }
  }
  else {
    puVar5[5] = param_4;
  }
  if (param_5 == (char *)0x0) {
    ppuVar6 = &g_http_author_all;
  }
  else {
    if (*param_5 != '\0') {
      puVar5[6] = param_5;
      goto LAB_00408318;
    }
    ppuVar6 = &g_http_author_none;
  }
  puVar5[6] = *ppuVar6;
LAB_00408318:
  puVar1 = PTR_LOOP_0042b0e4;
  puVar2 = puVar5;
  *(undefined4 **)PTR_LOOP_0042b0e4 = puVar5;
  PTR_LOOP_0042b0e4 = (undefined *)puVar2;
  puVar5[1] = puVar1;
  *puVar5 = &g_http_alias_list;
  return 0;
}



undefined ** http_alias_getAlias(char *param_1)

{
  size_t __n;
  int iVar1;
  char *pcVar2;
  char *__s2;
  undefined **ppuVar3;
  
  ppuVar3 = (undefined **)g_http_alias_list;
  do {
    if (ppuVar3 == &g_http_alias_list) {
      return (undefined **)0x0;
    }
    if (ppuVar3[2] < (undefined *)0x5) {
      pcVar2 = ppuVar3[3];
      switch(ppuVar3[2]) {
      default:
        __s2 = param_1;
LAB_00408468:
        iVar1 = strcmp(pcVar2,__s2);
        if (iVar1 == 0) {
          return ppuVar3;
        }
        break;
      case (undefined *)0x1:
      case (undefined *)0x3:
        pcVar2 = strstr(param_1,pcVar2);
        if (param_1 == pcVar2) {
          return ppuVar3;
        }
        break;
      case (undefined *)0x4:
        __n = strlen(pcVar2);
        iVar1 = memcmp(param_1,pcVar2,__n);
        pcVar2 = param_1 + __n;
        if (iVar1 == 0) {
          iVar1 = strcmp(pcVar2,".cgi");
          __s2 = ".htm";
          if (iVar1 == 0) {
            return ppuVar3;
          }
          goto LAB_00408468;
        }
      }
    }
    ppuVar3 = (undefined **)*ppuVar3;
  } while( true );
}



int http_alias_fillTarget(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  char *__haystack;
  int iVar5;
  undefined4 local_30 [5];
  
  __haystack = *(char **)(param_1 + 0xc);
  iVar1 = http_alias_getAlias(__haystack);
  memcpy(local_30,&PTR_s__cgi_getParm_0042b0d0,0x10);
  if (*(int *)(param_1 + 0x34) == -1) {
    pcVar2 = strstr(__haystack,"cgi/");
    iVar5 = 0;
    if (pcVar2 == (char *)0x0) goto LAB_0040858c;
    do {
      iVar3 = strcmp(*(char **)((int)local_30 + iVar5),__haystack);
      iVar5 = iVar5 + 4;
      if (iVar3 == 0) goto LAB_0040858c;
    } while (iVar5 != 0x10);
LAB_00408634:
    iVar1 = 0;
  }
  else {
LAB_0040858c:
    if (iVar1 == 0) {
      return 0;
    }
    switch(*(undefined4 *)(iVar1 + 8)) {
    case 0:
    case 1:
    case 2:
    case 3:
      break;
    case 4:
      sVar4 = strlen(*(char **)(iVar1 + 0xc));
      iVar5 = strcmp(__haystack + sVar4,".cgi");
      if (iVar5 != 0) {
        iVar5 = strcmp(__haystack + sVar4,".htm");
        if (iVar5 == 0) {
          *(code **)(param_1 + 0x38) = http_file_main;
          return iVar1;
        }
        goto LAB_00408634;
      }
      break;
    default:
      goto switchD_004085bc_default;
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x14);
  }
switchD_004085bc_default:
  return iVar1;
}



undefined4 http_alias_doAlias(int param_1,int param_2)

{
  undefined *puVar1;
  size_t __n;
  size_t sVar2;
  void *__dest;
  char *__s;
  
  puVar1 = g_http_rootDir;
  __s = *(char **)(param_2 + 0x10);
  if (__s == (char *)0x0) {
    __n = strlen(g_http_rootDir);
    __dest = (void *)(*(int *)(param_1 + 0xc) + (1 - __n));
    *(void **)(param_1 + 0xc) = __dest;
    __s = puVar1;
  }
  else {
    __n = strlen(__s);
    sVar2 = strlen(*(char **)(param_2 + 0xc));
    __dest = (void *)(*(int *)(param_1 + 0xc) + (sVar2 - __n));
    *(void **)(param_1 + 0xc) = __dest;
  }
  memcpy(__dest,__s,__n);
  return 0;
}



undefined4 http_alias_init(void)

{
  return 0;
}



undefined ** FUN_00408740(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  
  pcVar2 = strrchr(param_1,0x2e);
  if (pcVar2 != (char *)0x0) {
    sVar3 = strlen(pcVar2 + 1);
    uVar4 = sVar3 ^ (byte)pcVar2[1] & 0x1f;
    if (uVar4 < 0x20) {
      bVar1 = (&DAT_004140d4)[uVar4];
      iVar5 = http_tool_strcmpWeek(pcVar2 + 1,(&PTR_DAT_0042af40)[(uint)bVar1 * 2]);
      if (iVar5 == 0) {
        return &PTR_DAT_0042af40 + (uint)bVar1 * 2;
      }
    }
  }
  return (undefined **)g_http_file_pTypeDefault;
}



undefined4 http_file_rpmRep(int *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  int __fd;
  char acStack_1140 [17];
  undefined1 auStack_112f [119];
  stat sStack_10b8;
  undefined1 auStack_1020 [4100];
  
  memcpy(acStack_1140,"/var/tmp/pc/web/",0x11);
  __fd = -1;
  memset(auStack_112f,0,0x70);
  sVar1 = strlen(acStack_1140);
  strncat(acStack_1140,param_2 + 5,0x80 - sVar1);
  iVar2 = stat(acStack_1140,&sStack_10b8);
  if ((iVar2 == 0) && ((sStack_10b8.st_nlink & 0xf000) == 0x8000)) {
    __fd = open(acStack_1140,0);
  }
  iVar2 = FUN_00408740(acStack_1140);
  param_1[0xf] = iVar2;
  if (__fd == -1) {
    iVar2 = stat(param_2,&sStack_10b8);
    if (iVar2 != 0) {
      return 0x194;
    }
    if ((sStack_10b8.st_nlink & 0xf000) != 0x8000) {
      return 0x194;
    }
    __fd = open(param_2,0);
    if (__fd == -1) {
      return 500;
    }
  }
  http_parser_dropContent(param_1);
  sVar1 = 0;
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
  }
  param_1[6] = sVar1 + sStack_10b8.st_blocks;
  iVar2 = FUN_00408740(param_2);
  param_1[0xf] = iVar2;
  http_parser_makeHeader(param_1,param_4);
  do {
    sVar1 = read(__fd,auStack_1020,0x1000);
    if (sVar1 == 0) {
      if (param_3 != (char *)0x0) {
        sVar1 = strlen(param_3);
        sVar1 = fwrite(param_3,1,sVar1,*(FILE **)(*param_1 + 0x101c));
        sVar3 = strlen(param_3);
        if (sVar1 != sVar3) break;
      }
      close(__fd);
      return 0;
    }
    sVar3 = fwrite(auStack_1020,1,sVar1,*(FILE **)(*param_1 + 0x101c));
  } while (sVar3 == sVar1);
  close(__fd);
  return 0xffffffff;
}



void http_file_main(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  addrinfo *local_c0;
  char acStack_bc [16];
  addrinfo aStack_ac;
  char acStack_8c [132];
  
  memset(&aStack_ac,0,0x20);
  aStack_ac.ai_family = 2;
  pcVar1 = strstr(*(char **)(param_1 + 0xc),"domain-redirect.htm");
  if (pcVar1 != (char *)0x0) {
    iVar2 = getaddrinfo("tplinklogin.net",(char *)0x0,&aStack_ac,&local_c0);
    if ((iVar2 == 0) &&
       (pcVar1 = inet_ntop(local_c0->ai_family,local_c0->ai_addr->sa_data + 2,acStack_bc,0x10),
       pcVar1 != (char *)0x0)) {
      sprintf(acStack_8c,"<script type=\"text/javascript\">var urlip=\"%s\";</script>",acStack_bc);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      pcVar1 = acStack_8c;
      goto LAB_00408b88;
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  pcVar1 = (char *)0x0;
LAB_00408b88:
  http_file_rpmRep(param_1,uVar3,pcVar1,0);
  return;
}



undefined4 http_file_init(void)

{
  undefined *__src;
  size_t sVar1;
  char *__dest;
  char *__dest_00;
  
  __src = g_http_rootDir;
  sVar1 = strlen(g_http_rootDir);
  __dest = (char *)malloc(sVar1 + 0xb);
  strcpy(__dest,__src);
  __dest_00 = __dest + sVar1;
  if (__dest_00[-1] != '/') {
    *__dest_00 = '/';
    __dest_00 = __dest_00 + 1;
  }
  strcpy(__dest_00,"index.htm");
  http_alias_addEntryByArg(0,&DAT_00413550,__dest,0,g_http_author_default);
  http_alias_addEntryByArg(1,&DAT_00413550,0,0,g_http_author_default);
  return 0;
}



undefined * http_tool_getAnsi(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  ppuVar3 = (undefined **)PTR_LOOP_0042b100;
  while( true ) {
    if (ppuVar3 == &PTR_LOOP_0042b100) {
      return (undefined *)0x0;
    }
    iVar1 = strcmp(ppuVar3[2],param_1);
    if (iVar1 == 0) break;
    ppuVar3 = (undefined **)*ppuVar3;
  }
  puVar2 = *ppuVar3;
  *(undefined **)(puVar2 + 4) = ppuVar3[1];
  *(undefined **)ppuVar3[1] = puVar2;
  *(undefined ***)PTR_LOOP_0042b10c = ppuVar3;
  ppuVar3[1] = PTR_LOOP_0042b10c;
  *ppuVar3 = (undefined *)&PTR_LOOP_0042b108;
  PTR_LOOP_0042b10c = (undefined *)ppuVar3;
  return ppuVar3[3];
}



int http_tool_strcmpWeek(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = (int)*param_1;
    iVar2 = (int)*param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (iVar1 != iVar2) {
      if ((iVar1 - 0x41U & 0xff) < 0x1a) {
        if (iVar2 - iVar1 != 0x20) {
          return iVar2 - iVar1;
        }
      }
      else if ((0x19 < (iVar2 - 0x41U & 0xff)) || (iVar2 - iVar1 != -0x20)) {
        return iVar2 - iVar1;
      }
    }
    if (iVar1 == 0) {
      return iVar2;
    }
  } while (iVar2 != 0);
  return -iVar1;
}



void http_tool_stripLine(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((0 < param_2) && (pcVar1 = (char *)(param_1 + param_2 + -1), *pcVar1 == '\n')) {
    if ((param_2 != 1) && (pcVar2 = (char *)(param_1 + param_2 + -2), *pcVar2 == '\r')) {
      *pcVar2 = '\0';
      return;
    }
    *pcVar1 = '\0';
  }
  return;
}



char * http_tool_stripBlank(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  
  sVar1 = strlen(param_1);
  pcVar2 = param_1 + (sVar1 - 1);
  do {
    while (pcVar3 = param_1, *pcVar3 == ' ') {
      param_1 = pcVar3 + 1;
    }
    param_1 = pcVar3 + 1;
  } while (*pcVar3 == '\t');
  for (; ((*pcVar2 == ' ' || (*pcVar2 == '\t')) && (pcVar2 != pcVar3)); pcVar2 = pcVar2 + -1) {
  }
  pcVar2[1] = '\0';
  return pcVar3;
}



void http_tool_jsEscape(char *param_1,char *param_2)

{
  char cVar1;
  
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    if (((cVar1 == '\'') || (cVar1 == '\\')) || (cVar1 == '\"')) {
      *param_2 = '\\';
      param_2 = param_2 + 1;
    }
    *param_2 = cVar1;
    param_2 = param_2 + 1;
  }
  *param_2 = '\0';
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_tool_argUnEscape(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char local_28;
  char local_27;
  undefined1 local_26;
  
  pcVar4 = param_1 + 1;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      pcVar4[-1] = '\0';
      return 0;
    }
    if (cVar1 == '%') {
      local_28 = pcVar3[1];
      local_27 = pcVar3[2];
      if (((*(ushort *)(___ctype_b + local_28 * 2) & 0x10) == 0) ||
         ((*(ushort *)(___ctype_b + local_27 * 2) & 0x10) == 0)) {
        *param_1 = '\0';
        return 0xffffffff;
      }
      local_26 = 0;
      lVar2 = strtol(&local_28,(char **)0x0,0x10);
      pcVar4[-1] = (char)lVar2;
      pcVar3 = pcVar3 + 3;
    }
    else if (cVar1 == '+') {
      pcVar4[-1] = ' ';
      pcVar3 = pcVar3 + 1;
    }
    else {
      pcVar4[-1] = cVar1;
      pcVar3 = pcVar3 + 1;
    }
    pcVar4 = pcVar4 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void http_tool_ansiStrToList(char *param_1,char param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_28;
  int local_24;
  
  if ((undefined **)PTR_LOOP_0042b100 != &PTR_LOOP_0042b100) {
    *(undefined **)(PTR_LOOP_0042b108 + 4) = PTR_LOOP_0042b104;
    *(undefined **)PTR_LOOP_0042b104 = PTR_LOOP_0042b108;
    PTR_LOOP_0042b108 = PTR_LOOP_0042b100;
    PTR_LOOP_0042b100 = (undefined *)&PTR_LOOP_0042b100;
    *(undefined ***)(PTR_LOOP_0042b108 + 4) = &PTR_LOOP_0042b108;
    PTR_LOOP_0042b104 = (undefined *)&PTR_LOOP_0042b100;
  }
  if (param_1 != (char *)0x0) {
    while (puVar1 = PTR_LOOP_0042b108, *param_1 != '\0') {
      if (((undefined **)PTR_LOOP_0042b108 == &PTR_LOOP_0042b108) ||
         (PTR_LOOP_0042b108 == (undefined *)0x0)) {
        fputs("#Msg: arg list full\n",_stderr);
        fflush(_stderr);
        return;
      }
      param_1 = (char *)http_parser_argIllustrate(param_1,(int)param_2,&local_28,&local_24);
      *(undefined4 *)(puVar1 + 8) = local_28;
      if (local_24 == 0) {
        *(char **)(puVar1 + 0xc) = "";
      }
      else {
        http_tool_argUnEscape();
        *(int *)(puVar1 + 0xc) = local_24;
      }
      iVar2 = *(int *)puVar1;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(puVar1 + 4);
      **(int **)(puVar1 + 4) = iVar2;
      *(undefined **)PTR_LOOP_0042b104 = puVar1;
      *(undefined **)(puVar1 + 4) = PTR_LOOP_0042b104;
      *(undefined ***)puVar1 = &PTR_LOOP_0042b100;
      PTR_LOOP_0042b104 = puVar1;
    }
  }
  return;
}



void http_tool_init(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    puVar1 = &DAT_00440860 + iVar2 * 4;
    iVar3 = iVar2 + 1;
    *(undefined4 **)PTR_LOOP_0042b10c = puVar1;
    (&DAT_00440864)[iVar2 * 4] = PTR_LOOP_0042b10c;
    *puVar1 = &PTR_LOOP_0042b108;
    iVar2 = iVar3;
    PTR_LOOP_0042b10c = (undefined *)puVar1;
  } while (iVar3 != 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00409250(int *param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  FILE *__stream;
  char *pcVar4;
  int iVar5;
  undefined **ppuVar6;
  char acStack_828 [24];
  char local_810 [2024];
  char *local_28;
  
  iVar5 = *param_1;
  strcpy(acStack_828,"var menulist=new Array( ");
  pcVar4 = local_810;
  for (ppuVar6 = (undefined **)g_http_alias_list; ppuVar6 != &g_http_alias_list;
      ppuVar6 = (undefined **)*ppuVar6) {
    local_28 = ppuVar6[3];
    pcVar1 = strrchr(local_28,0x2f);
    if (pcVar1 != (char *)0x0) {
      local_28 = pcVar1 + 1;
    }
    iVar3 = http_author_hasAuthor(param_1,ppuVar6);
    if ((iVar3 != 0) &&
       ((pcVar1 = "\"%s.htm\",", ppuVar6[2] == (undefined *)0x4 ||
        (pcVar1 = "\"%s\",", ppuVar6[2] == (undefined *)0x0)))) {
      iVar3 = sprintf(pcVar4,pcVar1,local_28);
      pcVar4 = pcVar4 + iVar3;
    }
  }
  builtin_strncpy(pcVar4 + -1,");\n",4);
  sVar2 = strlen(acStack_828);
  iVar3 = aes_enBufToFile("/var/tmp/enMenu",acStack_828,sVar2,param_1[0x21] + 0x20,
                          param_1[0x21] + 0x41,0,0);
  param_1[6] = iVar3;
  http_parser_makeHeader(param_1,0);
  memset(acStack_828,0,0x800);
  __stream = fopen("/var/tmp/enMenu","r");
  if (__stream == (FILE *)0x0) {
    fprintf(_stderr,"Open MENU_EN_TMP_FILE %s Error \n","/var/tmp/enMenu");
  }
  while (pcVar4 = fgets(acStack_828,0x800,__stream), pcVar4 != (char *)0x0) {
    sVar2 = strlen(acStack_828);
    fwrite(acStack_828,1,sVar2,*(FILE **)(iVar5 + 0x101c));
  }
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return 0;
}



void http_menu_init(void)

{
  http_alias_addEntryByArg(4,"/frame/menu",0,FUN_00409250,g_http_author_default);
  return;
}



int FUN_00409520(int param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_898 [132];
  char acStack_814 [2052];
  
  pcVar1 = (char *)http_parser_getEnv("testarg");
  iVar4 = -1;
  if ((pcVar1 != (char *)0x0) && (sVar2 = strlen(pcVar1), sVar2 < 0x41)) {
    http_tool_jsEscape(pcVar1,auStack_898);
    sprintf(acStack_814,"var testarg=\"%s\";\n",auStack_898);
    piVar5 = *(int **)(param_1 + 0x84);
    if ((piVar5 == (int *)0x0) ||
       ((*piVar5 != 1 ||
        (pcVar1 = strstr(*(char **)(param_1 + 0xc),"/cgi_gdpr"), pcVar1 == (char *)0x0)))) {
      iVar4 = http_io_output(param_1,acStack_814);
      iVar4 = -(uint)(iVar4 == -1);
    }
    else {
      pcVar1 = (char *)http_buf_getptr(piVar5[7],0);
      sVar2 = strlen(acStack_814);
      iVar4 = 0;
      strncpy(pcVar1,acStack_814,sVar2);
      iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
      sVar2 = strlen(acStack_814);
      *(size_t *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + sVar2;
      sVar2 = strlen(acStack_814);
      http_buf_incrpos(iVar3,sVar2);
    }
  }
  return iVar4;
}



undefined4 FUN_004096c0(void)

{
  int iVar1;
  
  iVar1 = rdp_updateFirmware(DAT_004408e4,DAT_004408e8);
  if (iVar1 == 0) {
    rdp_action("ACT_REBOOT",0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  DAT_004408e0 = iVar1;
  iVar1 = cmem_updateFirmwareBufFree(DAT_004408e4);
  if (iVar1 < 0) {
    cdbg_printf(8,"http_rpm_softburn",0xd0,"Detach big buffer error\n");
  }
  DAT_004408e4 = 0;
  return 0;
}



int http_rpm_update(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined4 local_a38;
  undefined1 auStack_a34 [256];
  char acStack_934 [256];
  char acStack_834 [2052];
  int local_30;
  
  local_a38 = 0;
  DAT_004408e0 = 0;
  if (*(int *)(*param_1 + 0x1030) == 2) {
    DAT_004408e0 = 0x1162b;
    iVar2 = 0x193;
  }
  else {
    uVar7 = param_1[6];
    iVar2 = cmem_getUpdateBufSize();
    if (iVar2 + 0x40bb8U < uVar7) {
      DAT_004408e0 = 0x1162b;
      iVar2 = 0x19d;
    }
    else {
      if ((DAT_004408e4 == (undefined1 *)0x0) &&
         (DAT_004408e4 = (undefined1 *)cmem_updateFirmwareBufAlloc(),
         DAT_004408e4 == (undefined1 *)0x0)) {
        DAT_004408e0 = 0x232a;
        return 500;
      }
      puVar9 = DAT_004408e4;
      uVar3 = cmem_getUpdateBufSize();
      bVar1 = false;
      while ((param_1[6] != 0 &&
             (iVar2 = http_parser_illMultiObj(param_1,acStack_934,0,puVar9,uVar3,&local_a38),
             -1 < iVar2))) {
        local_30 = iVar2;
        iVar2 = strcmp(acStack_934,"filename");
        if (iVar2 == 0) {
          DAT_004408e8 = local_30;
          bVar1 = true;
          puVar9 = auStack_a34;
          uVar3 = 0x100;
        }
      }
      if (bVar1) {
        param_1[0xe] = (int)FUN_004096c0;
        puVar6 = &DAT_00413c50;
      }
      else {
        DAT_004408e0 = 0x1162b;
        iVar2 = cmem_updateFirmwareBufFree(DAT_004408e4);
        if (iVar2 < 0) {
          cdbg_printf(8,"http_rpm_update",0xa4,"Detach big buffer error\n");
        }
        DAT_004408e4 = (undefined1 *)0x0;
        puVar6 = &DAT_004142c8;
      }
      sprintf(acStack_834,"<html><head></head><body>%s</body></html>",puVar6);
      piVar8 = (int *)param_1[0x21];
      param_1[7] = 0;
      param_1[0xf] = (int)g_http_file_pTypeHTML;
      if (((piVar8 == (int *)0x0) || (*piVar8 != 1)) ||
         (pcVar4 = strstr((char *)param_1[3],"/cgi_gdpr"), pcVar4 == (char *)0x0)) {
        iVar2 = http_io_output(param_1,acStack_834);
        iVar2 = -(uint)(iVar2 == -1);
      }
      else {
        pcVar4 = (char *)http_buf_getptr(piVar8[7],0);
        sVar5 = strlen(acStack_834);
        strncpy(pcVar4,acStack_834,sVar5);
        iVar2 = *(int *)(param_1[0x21] + 0x1c);
        sVar5 = strlen(acStack_834);
        *(size_t *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + sVar5;
        sVar5 = strlen(acStack_834);
        http_buf_incrpos(iVar2,sVar5);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



int http_rpm_softerr(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  char local_810;
  undefined1 auStack_80f [2051];
  
  local_810 = '\0';
  memset(auStack_80f,0,0x7ff);
  uVar1 = DAT_004408e0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  sprintf(&local_810,"$.ret=%d;\n",uVar1);
  piVar5 = *(int **)(param_1 + 0x84);
  if (((piVar5 == (int *)0x0) || (*piVar5 != 1)) ||
     (pcVar2 = strstr(*(char **)(param_1 + 0xc),"/cgi_gdpr"), pcVar2 == (char *)0x0)) {
    iVar4 = http_io_output(param_1,&local_810);
    iVar4 = -(uint)(iVar4 == -1);
  }
  else {
    pcVar2 = (char *)http_buf_getptr(piVar5[7],0);
    sVar3 = strlen(&local_810);
    strncpy(pcVar2,&local_810,sVar3);
    iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
    sVar3 = strlen(&local_810);
    *(size_t *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + sVar3;
    sVar3 = strlen(&local_810);
    http_buf_incrpos(iVar4,sVar3);
    iVar4 = 0;
  }
  return iVar4;
}



undefined4 FUN_00409c10(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = rdp_restoreCfg(DAT_004408f4,DAT_004408f8);
  DAT_004408f0 = iVar1;
  iVar2 = rdp_configBufFree(DAT_004408f4);
  if (iVar2 < 0) {
    cdbg_printf(8,"http_rpm_confburn",0xf6,"Detach big buffer error\n");
  }
  DAT_004408f4 = 0;
  if (iVar1 == 0) {
    rdp_action("ACT_REBOOT",0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return 0;
}



undefined4 http_rpm_backup(int *param_1)

{
  void *pvVar1;
  int iVar2;
  uint __n;
  void *__ptr;
  uint local_20 [3];
  
  local_20[0] = rdp_getConfigBufSize();
  pvVar1 = (void *)rdp_configBufAlloc();
  if (pvVar1 == (void *)0x0) {
    cdbg_printf(8,"http_rpm_backup",0x65,"Attach big buffer error\n");
  }
  rdp_backupCfg(pvVar1,local_20);
  param_1[0xf] = (int)g_http_file_pTypeBIN;
  param_1[6] = local_20[0];
  http_parser_makeHeader(param_1,0);
  __ptr = pvVar1;
  while( true ) {
    if (local_20[0] == 0) break;
    __n = local_20[0];
    if (0x1000 < local_20[0]) {
      __n = 0x1000;
    }
    fwrite(__ptr,1,__n,*(FILE **)(*param_1 + 0x101c));
    __ptr = (void *)((int)__ptr + __n);
    local_20[0] = local_20[0] - __n;
  }
  iVar2 = rdp_configBufFree(pvVar1);
  if (iVar2 < 0) {
    cdbg_printf(8,"http_rpm_backup",0x79,"Detach big buffer error\n");
  }
  return 0;
}



int http_rpm_restore(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 local_a38;
  undefined1 auStack_a34 [256];
  char acStack_934 [256];
  char acStack_834 [2052];
  int local_30;
  
  local_a38 = 0;
  DAT_004408f0 = 0;
  if (*(int *)(*param_1 + 0x1030) == 2) {
    DAT_004408f0 = 0x11635;
    iVar2 = 0x193;
  }
  else {
    iVar2 = rdp_getConfigBufSize();
    if (iVar2 + 0x40bb8U < (uint)param_1[6]) {
      DAT_004408f0 = 0x11635;
      iVar2 = 0x19d;
    }
    else if ((DAT_004408f4 == (undefined1 *)0x0) &&
            (DAT_004408f4 = (undefined1 *)rdp_configBufAlloc(), DAT_004408f4 == (undefined1 *)0x0))
    {
      cdbg_printf(8,"http_rpm_restore",0xaf,"Attach big buffer error\n");
      DAT_004408f0 = 0x232a;
      iVar2 = 500;
    }
    else {
      bVar1 = false;
      puVar8 = DAT_004408f4;
      while ((param_1[6] != 0 &&
             (iVar3 = http_parser_illMultiObj(param_1,acStack_934,0,puVar8,iVar2,&local_a38),
             -1 < iVar3))) {
        local_30 = iVar3;
        iVar3 = strcmp(acStack_934,"filename");
        if (iVar3 == 0) {
          DAT_004408f8 = local_30;
          bVar1 = true;
          puVar8 = auStack_a34;
          iVar2 = 0x100;
        }
      }
      if (bVar1) {
        param_1[0xe] = (int)FUN_00409c10;
        puVar6 = &DAT_00413c50;
      }
      else {
        DAT_004408f0 = 0x11635;
        iVar2 = rdp_configBufFree(DAT_004408f4);
        if (iVar2 < 0) {
          cdbg_printf(8,"http_rpm_restore",0xce,"Detach big buffer error\n");
        }
        DAT_004408f4 = (undefined1 *)0x0;
        puVar6 = &DAT_004142c8;
      }
      sprintf(acStack_834,"<html><head></head><body>%s</body></html>",puVar6);
      piVar7 = (int *)param_1[0x21];
      param_1[7] = 0;
      param_1[0xf] = (int)g_http_file_pTypeHTML;
      if (((piVar7 == (int *)0x0) || (*piVar7 != 1)) ||
         (pcVar4 = strstr((char *)param_1[3],"/cgi_gdpr"), pcVar4 == (char *)0x0)) {
        iVar2 = http_io_output(param_1,acStack_834);
        iVar2 = -(uint)(iVar2 == -1);
      }
      else {
        pcVar4 = (char *)http_buf_getptr(piVar7[7],0);
        sVar5 = strlen(acStack_834);
        strncpy(pcVar4,acStack_834,sVar5);
        iVar2 = *(int *)(param_1[0x21] + 0x1c);
        sVar5 = strlen(acStack_834);
        *(size_t *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + sVar5;
        sVar5 = strlen(acStack_834);
        http_buf_incrpos(iVar2,sVar5);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



int http_rpm_conferr(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  char local_810;
  undefined1 auStack_80f [2051];
  
  local_810 = '\0';
  memset(auStack_80f,0,0x7ff);
  uVar1 = DAT_004408f0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  sprintf(&local_810,"$.ret=%d;\n",uVar1);
  piVar5 = *(int **)(param_1 + 0x84);
  if (((piVar5 == (int *)0x0) || (*piVar5 != 1)) ||
     (pcVar2 = strstr(*(char **)(param_1 + 0xc),"/cgi_gdpr"), pcVar2 == (char *)0x0)) {
    iVar4 = http_io_output(param_1,&local_810);
    iVar4 = -(uint)(iVar4 == -1);
  }
  else {
    pcVar2 = (char *)http_buf_getptr(piVar5[7],0);
    sVar3 = strlen(&local_810);
    strncpy(pcVar2,&local_810,sVar3);
    iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
    sVar3 = strlen(&local_810);
    *(size_t *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + sVar3;
    sVar3 = strlen(&local_810);
    http_buf_incrpos(iVar4,sVar3);
    iVar4 = 0;
  }
  return iVar4;
}



// WARNING: Removing unreachable block (ram,0x0040a3ac)

undefined4 http_rpm_confencode(int *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint __n;
  char *__ptr;
  int local_30 [2];
  size_t local_28;
  
  local_30[0] = rdp_getConfigBufSize();
  iVar2 = rdp_configBufAlloc();
  if (iVar2 == 0) {
    uVar4 = 0x140;
    pcVar5 = "Attach big buffer error\n";
  }
  else {
    rdp_backupCfg(iVar2,local_30);
    iVar1 = local_30[0];
    local_28 = (uint)(local_30[0] * 7) / 5;
    pcVar5 = (char *)malloc(local_28);
    if (pcVar5 != (char *)0x0) {
      memset(pcVar5,0,local_28);
      param_1[0xf] = (int)g_http_file_pTypeDefault;
      cen_base64Encode(iVar2,iVar1,pcVar5);
      sVar3 = strlen(pcVar5);
      param_1[6] = sVar3;
      http_parser_makeHeader(param_1,0);
      sVar3 = strlen(pcVar5);
      __ptr = pcVar5;
      for (; sVar3 != 0; sVar3 = sVar3 - __n) {
        __n = sVar3;
        if (0x1000 < sVar3) {
          __n = 0x1000;
        }
        fwrite(__ptr,1,__n,*(FILE **)(*param_1 + 0x101c));
        __ptr = __ptr + __n;
      }
      iVar2 = rdp_configBufFree(iVar2);
      if (iVar2 < 0) {
        cdbg_printf(8,"http_rpm_confencode",0x161,"Detach big buffer error\n");
      }
      free(pcVar5);
      return 0;
    }
    uVar4 = 0x14a;
    pcVar5 = "malloc big buffer error\n";
  }
  cdbg_printf(8,"http_rpm_confencode",uVar4,pcVar5);
  return 0x19d;
}



int http_rpm_log_main(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *__ptr;
  int iVar4;
  int iVar5;
  size_t sVar6;
  FILE *pFVar7;
  undefined1 *__ptr_00;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 local_2038;
  undefined1 *local_2034;
  uint local_2030;
  uint local_202c;
  undefined2 local_2028;
  undefined2 local_2026;
  undefined2 local_2024;
  undefined2 local_2022;
  undefined2 local_2020;
  undefined2 local_201e;
  undefined2 local_201c;
  undefined2 local_2018;
  undefined2 local_2016;
  undefined2 local_2014;
  undefined2 local_2012;
  undefined2 local_2010;
  undefined2 local_200e;
  undefined2 local_200c;
  undefined2 local_200a;
  char acStack_2008 [68];
  char local_1fc4;
  undefined1 auStack_1fc3 [2047];
  char local_17c4;
  undefined1 auStack_17c3 [2047];
  char acStack_fc4 [23];
  undefined1 auStack_fad [3981];
  
  local_2028 = 0;
  local_2026 = 0;
  local_2024 = 0;
  local_2022 = 0;
  local_2020 = 0;
  local_201e = 0;
  local_201c = 0;
  local_17c4 = '\0';
  memset(auStack_17c3,0,0x7ff);
  memcpy(acStack_fc4,"logHeadPos\nlogTailPos\n",0x17);
  memset(auStack_fad,0,0xf89);
  local_202c = 0;
  local_2030 = 1;
  local_2034 = (undefined1 *)0x0;
  local_1fc4 = '\0';
  iVar11 = *param_1;
  memset(auStack_1fc3,0,0x7ff);
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 0;
  __ptr[1] = 0;
  iVar4 = http_parser_getEnv(&DAT_004153d0);
  iVar5 = http_parser_getEnv(&DAT_004153d4);
  bVar1 = iVar5 != 0;
  local_2018 = 2;
  local_2016 = 0;
  local_2014 = 0;
  local_2012 = 0;
  local_2010 = 0;
  local_200e = 0;
  local_200c = 0;
  local_200a = 0;
  strncpy(acStack_2008,"deviceLog",0x40);
  iVar5 = rdp_getParamValue(&local_2018,4,&local_2034);
  if (iVar5 == 0) {
    iVar5 = os_semVGet(0x61ac,&local_2038);
    if (iVar5 < 0) {
      uVar8 = 0x72;
LAB_0040a754:
      pcVar9 = "Take syslog semaphore error\n";
      goto LAB_0040a75c;
    }
    iVar5 = os_semVTake(local_2038);
    if (iVar5 < 0) {
      uVar8 = 0x78;
      goto LAB_0040a754;
    }
    if (iVar4 != 0) {
      strcpy(acStack_fc4,"logHeadPos=0\nlogTailPos=1\n");
      iVar4 = rdp_setObj(1,"SYSLOG_CFG",&local_2028,acStack_fc4,2);
      uVar8 = 0xffffffff;
      if (iVar4 == 0) {
        *local_2034 = 10;
        *local_2034 = 0;
        cmmlog(5,3,"Clear log.");
        uVar8 = 0;
      }
      iVar4 = os_semVGive(local_2038);
      if (iVar4 < 0) {
        cdbg_printf(8,"http_rpm_log_main",0xa3,"Give syslog semaphore error\n");
      }
      goto LAB_0040a89c;
    }
    iVar4 = rdp_getObj(1,"SYSLOG_CFG",&local_2028,acStack_fc4);
    bVar2 = true;
    if (iVar4 != 0) goto LAB_0040a9a8;
    sscanf(acStack_fc4,"logHeadPos=%d\nlogTailPos=%d",&local_202c,&local_2030);
    if (local_202c < local_2030) {
      iVar4 = local_2030 - 1;
    }
    else {
      iVar4 = local_2030 + 0x7fff;
    }
    param_1[6] = iVar4 - local_202c;
    iVar4 = 0;
  }
  else {
    uVar8 = 0x6b;
    pcVar9 = "Get log pool failed\n";
LAB_0040a75c:
    cdbg_printf(8,"http_rpm_log_main",uVar8,pcVar9);
    bVar2 = false;
    if (iVar4 != 0) {
      uVar8 = 0xffffffff;
LAB_0040a89c:
      sprintf(&local_17c4,"$.ret=%d;\n",uVar8);
      piVar10 = (int *)param_1[0x21];
      if (((piVar10 == (int *)0x0) || (*piVar10 != 1)) ||
         (pcVar9 = strstr((char *)param_1[3],"/cgi_gdpr"), pcVar9 == (char *)0x0)) {
        iVar4 = http_io_output(param_1,&local_17c4);
        iVar4 = -(uint)(iVar4 == -1);
      }
      else {
        pcVar9 = (char *)http_buf_getptr(piVar10[7],0);
        sVar6 = strlen(&local_17c4);
        strncpy(pcVar9,&local_17c4,sVar6);
        iVar4 = *(int *)(param_1[0x21] + 0x1c);
        sVar6 = strlen(&local_17c4);
        *(size_t *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + sVar6;
        sVar6 = strlen(&local_17c4);
        http_buf_incrpos(iVar4,sVar6);
        iVar4 = 0;
      }
      return iVar4;
    }
LAB_0040a9a8:
    param_1[6] = 0;
    if ((bVar2) && (iVar4 = os_semVGive(local_2038), iVar4 < 0)) {
      cdbg_printf(8,"http_rpm_log_main",0xb3,"Give syslog semaphore error\n");
    }
    if (bVar1) {
      return 500;
    }
    iVar4 = -1;
  }
  param_1[0xf] = (int)g_http_file_pTypeDefault;
  if (bVar1) {
    param_1[10] = (int)"Content-Disposition: attachment; filename=\"log.txt\"\r\n";
    http_parser_makeHeader(param_1,0);
  }
  else {
    iVar12 = param_1[6];
    iVar5 = sprintf(&local_17c4,"%d\r\n",iVar4);
    param_1[6] = iVar5 + iVar12;
    if (iVar4 != 0) {
      return 0;
    }
  }
  uVar3 = local_202c;
  if (local_202c < local_2030) {
    if (!bVar1) {
      iVar4 = local_2030 - 1;
      sVar6 = strlen(&local_17c4);
      iVar4 = aes_enBufToFile("/var/tmp/enlog",&local_17c4,sVar6,param_1[0x21] + 0x20,
                              param_1[0x21] + 0x41,local_2034 + uVar3 + 1,iVar4 - uVar3);
      param_1[6] = iVar4;
      http_parser_makeHeader(param_1,0);
      memset(&local_1fc4,0,0x800);
      pFVar7 = fopen("/var/tmp/enlog","r");
      if (pFVar7 != (FILE *)0x0) {
        cdbg_printf(8,"http_rpm_log_main",0xe8,"Open LOG_EN_TMP_FILE %s Error \n","/var/tmp/enlog");
      }
      while (pcVar9 = fgets(&local_1fc4,0x800,pFVar7), pcVar9 != (char *)0x0) {
        sVar6 = strlen(&local_1fc4);
        fwrite(&local_1fc4,1,sVar6,*(FILE **)(iVar11 + 0x101c));
      }
      if (pFVar7 != (FILE *)0x0) {
        fclose(pFVar7);
      }
      goto LAB_0040ae18;
    }
    __ptr_00 = local_2034 + local_202c + 1;
    sVar6 = (local_2030 - 1) - local_202c;
  }
  else {
    if (!bVar1) {
      sVar6 = strlen(&local_17c4);
      aes_argList_add(__ptr,&local_17c4,sVar6);
      aes_argList_add(__ptr,local_2034 + local_202c + 1,0x7fff - local_202c);
      aes_argList_add(__ptr,local_2034,local_2030);
      iVar4 = aes_enBufToFile_ByArgList
                        ("/var/tmp/enlog",__ptr,param_1[0x21] + 0x20,param_1[0x21] + 0x41);
      param_1[6] = iVar4;
      http_parser_makeHeader(param_1,0);
      memset(&local_1fc4,0,0x800);
      pFVar7 = fopen("/var/tmp/enlog","r");
      if (pFVar7 != (FILE *)0x0) {
        cdbg_printf(8,"http_rpm_log_main",0x10e,"Open LOG_EN_TMP_FILE %s Error \n","/var/tmp/enlog")
        ;
      }
      while (pcVar9 = fgets(&local_1fc4,0x800,pFVar7), pcVar9 != (char *)0x0) {
        sVar6 = strlen(&local_1fc4);
        fwrite(&local_1fc4,1,sVar6,*(FILE **)(iVar11 + 0x101c));
      }
      if (pFVar7 != (FILE *)0x0) {
        fclose(pFVar7);
      }
      aes_argList_flush(__ptr);
      free(__ptr);
      goto LAB_0040ae18;
    }
    fwrite(local_2034 + local_202c + 1,1,0x7fff - local_202c,*(FILE **)(iVar11 + 0x101c));
    __ptr_00 = local_2034;
    sVar6 = local_2030;
  }
  fwrite(__ptr_00,1,sVar6,*(FILE **)(iVar11 + 0x101c));
LAB_0040ae18:
  os_semVGive(local_2038);
  return 0;
}



int FUN_0040ae80(int param_1,undefined4 param_2,ushort *param_3,char *param_4)

{
  size_t __n;
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  char acStack_60 [64];
  undefined4 local_20;
  
  local_20 = param_2;
  __n = strlen(param_4);
  iVar1 = sprintf(acStack_60,"[%d,%d,%d,%d,%d,%d]%d\n",(uint)*param_3,(uint)param_3[1],
                  (uint)param_3[2],(uint)param_3[3],(uint)param_3[4],(uint)param_3[5],local_20);
  iVar2 = fprintf(*(FILE **)(param_1 + 0x101c),"%x\r\n%s",iVar1 + __n + 1,acStack_60);
  sVar3 = fwrite(param_4,1,__n,*(FILE **)(param_1 + 0x101c));
  sVar4 = fwrite(&DAT_00416ce0,1,3,*(FILE **)(param_1 + 0x101c));
  return ((int)(iVar1 + __n + 5) < (int)(sVar4 + sVar3 + iVar2)) - 1;
}



bool checkOidAuth(char *param_1,undefined *param_2)

{
  int iVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined1 auStack_c8 [13];
  char local_bb;
  
  local_d8 = 0;
  local_d6 = 0;
  local_d4 = 0;
  local_d2 = 0;
  local_d0 = 0;
  local_ce = 0;
  local_cc = 0;
  ppuVar3 = &PTR_s_SYS_MODE_0042afa4;
  while ((iVar1 = strcmp(*ppuVar3,param_1), iVar1 != 0 || (ppuVar3[1] != param_2))) {
    ppuVar3 = ppuVar3 + 3;
    if (ppuVar3 == (undefined **)0x42b004) {
      iVar1 = rdp_getObjStruct("MULTIMODE",&local_d8,0xb0,auStack_c8);
      bVar2 = false;
      if (((iVar1 == 0) && (local_bb != '\0')) && (iVar1 = strcmp("/cgi/auth",param_1), iVar1 == 0))
      {
        bVar2 = param_2 == (undefined *)0x8;
      }
      return bVar2;
    }
  }
  return true;
}



// WARNING: Type propagation algorithm not settling

undefined4 http_parseDescStr(char *param_1,undefined4 *param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_40 [12];
  
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  if ((((param_1 == (char *)0x0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (ushort *)0x0))
     || (param_4 == (ushort *)0x0)) {
    uVar5 = 0x1c3;
  }
  else {
    *param_2 = param_1;
    pcVar2 = strchr(param_1,0x23);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      iVar3 = sscanf(pcVar2 + 1,"%u,%u,%u,%u,%u,%u#%u,%u,%u,%u,%u,%u",local_40 + 6,local_40 + 7,
                     local_40 + 8,local_40 + 9,local_40 + 10,local_40 + 0xb,local_40,local_40 + 1,
                     local_40 + 2,local_40 + 3,local_40 + 4,local_40 + 5);
      if (iVar3 != 0xc) {
        printf("Parameter num is %d\n",iVar3);
        return 0xffffffff;
      }
      for (iVar3 = 0; (iVar4 = *(int *)((int)(local_40 + 6) + iVar3), iVar4 != 0 && (iVar3 != 0x1c))
          ; iVar3 = iVar3 + 4) {
        uVar1 = *param_3;
        if (uVar1 < 6) {
          param_3[uVar1 + 1] = (ushort)iVar4;
          *param_3 = uVar1 + 1;
        }
      }
      for (iVar3 = 0; (*(int *)((int)local_40 + iVar3) != 0 && (iVar3 != 0x1c)); iVar3 = iVar3 + 4)
      {
        uVar1 = *param_4;
        if (uVar1 < 6) {
          param_4[uVar1 + 1] = (ushort)*(int *)((int)local_40 + iVar3);
          *param_4 = uVar1 + 1;
        }
      }
      return 0;
    }
    uVar5 = 0x1cc;
  }
  cdbg_printf(8,"http_parseDescStr",uVar5,"param NULL return.");
  return 0x115c7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_cgi_main(int *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int local_10e0;
  char *local_10dc;
  int local_10d8;
  undefined1 auStack_10d4 [4];
  char *local_10d0;
  undefined4 local_10cc;
  undefined4 local_10c8;
  undefined4 local_10c4;
  undefined2 local_10c0;
  undefined4 local_10bc;
  undefined4 local_10b8;
  undefined4 local_10b4;
  undefined2 local_10b0;
  char acStack_10ac [19];
  char acStack_1099 [65];
  char acStack_1058 [128];
  char local_fd8 [4000];
  int local_38;
  int local_34;
  char *local_30;
  int local_2c;
  
  pcVar13 = (char *)param_1[4];
  param_1[0xf] = (int)g_http_file_pTypeDefault;
  param_1[8] = 1;
  iVar12 = param_1[6];
  iVar9 = *param_1;
  http_parser_makeHeader(param_1,0);
  local_34 = 0;
  if (pcVar13 != (char *)0x0) {
    bVar1 = false;
    uVar7 = 0;
    iVar10 = 0;
LAB_0040bbc8:
    while( true ) {
      if (*pcVar13 == '\0') {
        if (bVar1) {
          if (uVar7 == 3) {
            uVar7 = 0;
          }
          else {
            uVar7 = rdp_saveCfg();
          }
        }
        else {
          uVar7 = uVar7 & -(uint)(uVar7 != 3);
        }
        goto LAB_0040bc4c;
      }
      if (iVar12 == 0) goto switchD_0040b840_default;
      pcVar13 = (char *)http_parser_argIllustrate(pcVar13,0x26,&local_10d0,auStack_10d4);
      uVar11 = 0;
      if ((local_10d0 != (char *)0x0) && (uVar11 = atoi(local_10d0), uVar11 != 0)) {
        uVar11 = uVar11 & -(uint)(uVar11 < 9);
      }
      pcVar8 = acStack_1099 + 1;
      iVar2 = http_stream_fgets(*(undefined4 *)(*param_1 + 8),*param_1 + 0x14,pcVar8,0x40);
      if (iVar2 < 1) break;
      iVar12 = iVar12 - iVar2;
      if (acStack_1099[iVar2] != '\n') {
        pcVar13 = "#Msg: ini header format error or too long\n";
        goto LAB_0040b568;
      }
      if ((acStack_1099[1] != '[') || (pcVar3 = strchr(pcVar8,0x5d), pcVar3 == (char *)0x0)) {
        pcVar13 = "#Msg: not a ini header\n";
LAB_0040b724:
        fputs(pcVar13,_stderr);
        uVar7 = 0x11563;
        fflush(_stderr);
        goto LAB_0040bc4c;
      }
      if ((char *)0x7e < pcVar3 + (-2 - (int)pcVar8)) {
        pcVar13 = "#Msg: desc len error\n";
        goto LAB_0040b724;
      }
      *pcVar3 = '\0';
      strcpy(acStack_1058,acStack_1099 + 2);
      iVar2 = sscanf(pcVar3 + 1,"%d,%d",&local_10d8,&local_10e0);
      if (iVar2 != 2) {
        pcVar13 = "#Msg: ini header tail arg error\n";
        goto LAB_0040b724;
      }
      if ((local_10d8 < 0) || (local_10e0 < 0)) {
        fputs("#Msg: action num or list len error\n",_stderr);
        fflush(_stderr);
      }
      local_fd8[0] = '\0';
      local_38 = 4000;
      pcVar8 = local_fd8;
      for (iVar2 = 0; iVar2 < local_10e0; iVar2 = iVar2 + 1) {
        iVar4 = http_stream_fgets(*(undefined4 *)(*param_1 + 8),*param_1 + 0x14,pcVar8,local_38);
        if (iVar4 < 1) {
          pcVar13 = "#Msg: attr list io error or list len error\n";
          goto LAB_0040b568;
        }
        iVar12 = iVar12 - iVar4;
        if (pcVar8[iVar4 + -1] != '\n') {
          pcVar13 = "#Msg: attr list format error or too long\n";
          goto LAB_0040b724;
        }
        if (pcVar8[iVar4 + -2] == '\r') {
          pcVar8[iVar4 + -2] = '\n';
          pcVar8[iVar4 + -1] = '\0';
          iVar4 = iVar4 + -1;
        }
        if (*pcVar8 == '\\') {
          local_30 = (char *)(iVar4 - 2U);
          local_2c = iVar4;
          memmove(pcVar8,pcVar8 + 1,iVar4 - 2U);
          pcVar8[(int)local_30] = '\0';
          local_30 = pcVar8 + (int)local_30;
          pcVar3 = (char *)http_tool_getAnsi(pcVar8);
          if (pcVar3 == (char *)0x0) {
            fputs("#Msg: ansi arg not found\n",_stderr);
            uVar7 = 0x11569;
            fflush(_stderr);
            goto LAB_0040bc4c;
          }
          iVar4 = local_2c + -1;
          *local_30 = '=';
          local_30 = pcVar3;
          local_2c = iVar4;
          strcpy(pcVar8 + iVar4,pcVar3);
          sVar5 = strlen(local_30);
          iVar4 = sVar5 + local_2c + 1;
          pcVar8[sVar5 + local_2c] = '\n';
          pcVar8[iVar4] = '\0';
        }
        local_38 = local_38 - iVar4;
        if ((local_38 == 0) && (iVar2 != local_10e0 + -1)) {
          pcVar13 = "#Msg: list len error, not enough attr\n";
          goto LAB_0040b724;
        }
        pcVar8 = pcVar8 + iVar4;
      }
      if (local_10d8 != iVar10) {
        pcVar13 = "#Msg: actIndex not correct\n";
        goto LAB_0040b724;
      }
      local_10bc = 0;
      local_10b8 = 0;
      local_10b4 = 0;
      local_10b0 = 0;
      local_10cc = 0;
      local_10c8 = 0;
      local_10c4 = 0;
      local_10c0 = 0;
      local_10d8 = http_parseDescStr(acStack_1058,&local_10dc,&local_10bc,&local_10cc);
      uVar7 = 0;
      if (local_10d8 != 0) goto LAB_0040bc4c;
      iVar2 = checkOidAuth(local_10dc,uVar11);
      if (iVar2 == 0) {
        cdbg_printf(8,"http_cgi_main",0x333,"checkOidAuth(oid %s) is FALSE \n",local_10dc);
        goto LAB_0040bc40;
      }
      switch(uVar11) {
      case 1:
        uVar7 = rdp_getObj(1,local_10dc,&local_10bc,local_fd8);
        if ((int)uVar7 < 1) goto code_r0x0040b868;
        goto LAB_0040bc4c;
      case 2:
        uVar7 = rdp_setObj(1,local_10dc,&local_10bc,local_fd8,2);
        if (uVar7 - 2 < 2) {
          local_34 = 1;
        }
        if (((int)uVar7 < 1) || (uVar7 == 2)) goto LAB_0040bbb8;
        bVar1 = true;
        if (uVar7 != 3) goto LAB_0040bc4c;
        break;
      case 3:
        uVar7 = rdp_createObj(1,local_10dc,&local_10cc,&local_10bc);
        if (0 < (int)uVar7) goto LAB_0040bc4c;
        uVar7 = rdp_setObj(1,local_10dc,&local_10bc,local_fd8,3);
        if (0 < (int)uVar7) {
          rdp_destroyObj();
          goto LAB_0040bc4c;
        }
        uVar7 = rdp_getObj(1,local_10dc,&local_10bc,local_fd8);
        if (0 < (int)uVar7) goto LAB_0040bc4c;
        iVar2 = FUN_0040ae80(iVar9,iVar10,(int)&local_10bc + 2,local_fd8);
        bVar1 = true;
        if (iVar2 != 0) goto LAB_0040bc40;
        break;
      case 4:
        uVar7 = rdp_setObj(1,local_10dc,&local_10bc,local_fd8,4);
        if ((0 < (int)uVar7) || (uVar7 = rdp_destroyObj(1,local_10dc,&local_10bc), 0 < (int)uVar7))
        goto LAB_0040bc4c;
LAB_0040bbb8:
        bVar1 = true;
        break;
      case 5:
        while (uVar7 = rdp_getNextObj(1,local_10dc,&local_10bc,local_fd8), uVar7 != 0x264e) {
          if (0 < (int)uVar7) goto LAB_0040bc4c;
          iVar2 = FUN_0040ae80(iVar9,iVar10,(int)&local_10bc + 2,local_fd8);
          if (iVar2 != 0) {
            uVar7 = 0x115c7;
            goto LAB_0040bc4c;
          }
        }
        goto LAB_0040bbc0;
      case 6:
        while (uVar7 = rdp_getNextObjSub(1,local_10dc,&local_10cc,&local_10bc,local_fd8),
              uVar7 != 0x264e) {
          if (0 < (int)uVar7) goto LAB_0040bc4c;
          iVar2 = FUN_0040ae80(iVar9,iVar10,(int)&local_10bc + 2,local_fd8);
          if (iVar2 != 0) {
            uVar7 = 0x115c7;
            goto LAB_0040bc4c;
          }
        }
LAB_0040bbc0:
        uVar7 = 0;
        break;
      case 7:
        if (local_10dc == (char *)0x0) {
          uVar7 = 0x11567;
          goto LAB_0040bc4c;
        }
        uVar7 = rdp_action(local_10dc,&local_10bc);
        if (0 < (int)uVar7) goto LAB_0040bc4c;
        iVar2 = strcmp(local_10dc,"ACT_REBOOT");
        if (iVar2 == 0) {
          param_1[7] = 0;
        }
        break;
      case 8:
        if ((((local_10dc == (char *)0x0) || (iVar2 = http_alias_getAlias(local_10dc), iVar2 == 0))
            || (*(code **)(iVar2 + 0x14) == http_file_main)) ||
           (*(code **)(iVar2 + 0x14) == http_cgi_main)) {
          uVar7 = 0x11568;
          goto LAB_0040bc4c;
        }
        local_10d8 = sprintf(acStack_10ac,"[cgi]%d\n",iVar10);
        local_10d8 = fprintf(*(FILE **)(iVar9 + 0x101c),"%x\r\n%s\r\n",local_10d8,acStack_10ac);
        if (local_10d8 < 0xc) goto LAB_0040bc40;
        http_parser_argStrToList(local_fd8,10,0);
        uVar7 = 0;
        local_10d8 = (**(code **)(iVar2 + 0x14))(param_1);
        if (local_10d8 != 0) {
          param_1[7] = 0;
        }
        break;
      default:
        goto switchD_0040b840_default;
      }
      iVar10 = iVar10 + 1;
    }
    pcVar13 = "#Msg: ini header io error or no content left\n";
LAB_0040b568:
    fputs(pcVar13,_stderr);
    fflush(_stderr);
    goto LAB_0040bc40;
  }
switchD_0040b840_default:
  uVar7 = 0x11566;
LAB_0040bc4c:
  param_1[6] = iVar12;
  http_parser_dropContent(param_1);
  local_10d8 = sprintf(acStack_10ac,"[error]%d",uVar7);
  fprintf(*(FILE **)(iVar9 + 0x101c),"%x\r\n%s\r\n",local_10d8,acStack_10ac);
  fwrite("0\r\n\r\n",1,5,*(FILE **)(iVar9 + 0x101c));
  if (uVar7 == 0x115c7) {
    param_1[7] = 0;
    uVar6 = 0x115c7;
  }
  else {
    uVar6 = 0;
    if (local_34 != 0) {
      fflush(*(FILE **)(iVar9 + 0x101c));
      rdp_action("ACT_REBOOT",0);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  return uVar6;
code_r0x0040b868:
  iVar2 = FUN_0040ae80(iVar9,iVar10,(int)&local_10bc + 2,local_fd8);
  iVar10 = iVar10 + 1;
  if (iVar2 != 0) goto LAB_0040bc40;
  goto LAB_0040bbc8;
LAB_0040bc40:
  uVar7 = 0x115c7;
  goto LAB_0040bc4c;
}



void http_cgi_init(void)

{
  http_alias_addEntryByArg(2,&DAT_00413b90,0,http_cgi_main,g_http_author_default);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int b64_decode(byte *param_1,int param_2,byte *param_3,size_t param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar2 = 0;
  if (param_3 != (byte *)0x0) {
    if ((int)param_4 < 0) {
      param_4 = strlen((char *)param_3);
    }
    while ((0 < (int)param_4 && ((*(ushort *)(___ctype_b + (uint)*param_3 * 2) & 0x20) != 0))) {
      param_4 = param_4 - 1;
      param_3 = param_3 + 1;
    }
    pbVar3 = param_3 + (param_4 - 1);
    while ((param_3 <= pbVar3 &&
           (bVar1 = *pbVar3, pbVar3 = pbVar3 + -1,
           (*(ushort *)(___ctype_b + (uint)bVar1 * 2) & 0x20) != 0))) {
      param_4 = param_4 - 1;
    }
    iVar2 = -1;
    if (((param_4 & 3) == 0) &&
       (pbVar3 = param_1,
       ((int)(((uint)((int)param_4 >> 0x1f) >> 0x1e) + param_4) >> 2) * 3 < param_2)) {
      for (; 0 < (int)param_4; param_4 = param_4 - 4) {
        if ((((char)*param_3 < '\0') || ((char)(&DAT_00416f90)[*param_3] == -1)) ||
           ((char)param_3[1] < '\0')) {
          return -1;
        }
        uVar5 = (uint)(char)(&DAT_00416f90)[param_3[1]];
        if (uVar5 == 0xffffffff) {
          return -1;
        }
        *pbVar3 = (byte)((int)(uVar5 & 0x30) >> 4) |
                  (byte)((int)(char)(&DAT_00416f90)[*param_3] << 2);
        bVar1 = param_3[2];
        pbVar6 = pbVar3 + 1;
        if ((bVar1 == 0x3d) && (param_3[3] == 0x3d)) {
LAB_0040bfe4:
          return (int)pbVar6 - (int)param_1;
        }
        if ((char)bVar1 < '\0') {
          return -1;
        }
        uVar4 = (uint)(char)(&DAT_00416f90)[bVar1];
        if (uVar4 == 0xffffffff) {
          return -1;
        }
        pbVar3[1] = (byte)((int)(uVar4 & 0x3c) >> 2) | (byte)(uVar5 << 4);
        bVar1 = param_3[3];
        pbVar6 = pbVar3 + 2;
        if (bVar1 == 0x3d) goto LAB_0040bfe4;
        if ((char)bVar1 < '\0') {
          return -1;
        }
        if ((&DAT_00416f90)[bVar1] == 0xff) {
          return -1;
        }
        pbVar3[2] = (&DAT_00416f90)[bVar1] | (byte)(uVar4 << 6);
        param_3 = param_3 + 4;
        pbVar3 = pbVar3 + 3;
      }
      iVar2 = (int)pbVar3 - (int)param_1;
    }
  }
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x0040c01c)

int b64_encode(char *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = 0;
  if ((param_3 != (byte *)0x0) && (iVar2 = -1, pcVar3 = param_1, (param_4 + 2) / 3 << 2 < param_2))
  {
    for (; 0 < param_4; param_4 = param_4 + -3) {
      uVar5 = (*param_3 & 3) * 0x10;
      *pcVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*param_3 >> 2];
      if (param_4 == 1) {
        pcVar3[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar5];
        pcVar3[2] = '=';
LAB_0040c0c8:
        pcVar3[3] = '=';
        pcVar3 = pcVar3 + 4;
        break;
      }
      uVar4 = (param_3[1] & 0xf) * 4;
      pcVar3[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [uVar5 | param_3[1] >> 4];
      if (param_4 == 2) {
        pcVar3[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar4];
        goto LAB_0040c0c8;
      }
      bVar1 = param_3[2];
      param_3 = param_3 + 3;
      pcVar3[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [uVar4 | bVar1 >> 6];
      pcVar3[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1 & 0x3f];
      pcVar3 = pcVar3 + 4;
    }
    *pcVar3 = '\0';
    iVar2 = (int)pcVar3 - (int)param_1;
  }
  return iVar2;
}



// WARNING: Type propagation algorithm not settling

int http_rpm_auth_main(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *pcVar4;
  int *piVar5;
  char *local_1818;
  int local_1814 [2];
  undefined2 local_180c;
  undefined2 local_180a;
  undefined2 local_1808;
  undefined2 local_1806;
  undefined2 local_1804;
  undefined2 local_1802;
  undefined2 local_1800;
  undefined1 auStack_17fc [68];
  char local_17b8 [2048];
  char acStack_fb8 [4000];
  char *local_18;
  
  local_17b8[0] = '\0';
  memset(local_17b8 + 1,0,0x7ff);
  local_1814[1] = 0;
  local_1814[0] = 0;
  local_1818 = (char *)0x0;
  local_180c = 0;
  local_180a = 0;
  local_1808 = 0;
  local_1806 = 0;
  local_1804 = 0;
  local_1802 = 0;
  local_1800 = 0;
  if (1 < *(int *)(param_1 + 0x34) - 1U) {
    cdbg_printf(8,"http_rpm_auth_main",0x59,"pData->uid ERR, %d",*(int *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  if (*(int *)(param_1 + 0x34) == 1) {
    pcVar4 = "adminName\nadminPwd\n";
  }
  else {
    pcVar4 = "userName\nuserPwd\n";
  }
  strcpy(acStack_fb8,pcVar4);
  iVar1 = rdp_getObj(0,"USER_CFG",&local_180c,acStack_fb8);
  pcVar4 = local_17b8;
  if (iVar1 == 0) {
    uVar2 = http_parser_argIllustrate(acStack_fb8,10,local_1814 + 1,local_1814);
    http_parser_argIllustrate(uVar2,10,local_1814 + 1,&local_1818);
    if ((local_1814[0] == 0) || (local_1818 == (char *)0x0)) {
      pcVar4 = local_17b8;
      iVar1 = 0x11640;
    }
    else {
      pcVar4 = (char *)http_parser_getEnv("oldPwd");
      if (pcVar4 == (char *)0x0) {
        http_tool_jsEscape(local_1814[0],auStack_17fc);
        iVar1 = sprintf(local_17b8,"var curName=\"%s\";\n",auStack_17fc);
        pcVar4 = local_17b8 + iVar1;
        iVar1 = 0;
      }
      else {
        iVar1 = strcmp(pcVar4,local_1818);
        if (iVar1 == 0) {
          local_18 = (char *)http_parser_getEnv("name");
          pcVar4 = (char *)http_parser_getEnv(&DAT_00417114);
          if ((((local_18 == (char *)0x0) || (pcVar4 == (char *)0x0)) || (*local_18 == '\0')) ||
             (*pcVar4 == '\0')) {
            pcVar4 = local_17b8;
            iVar1 = 0x11642;
          }
          else {
            if (*(int *)(param_1 + 0x34) == 1) {
              pcVar4 = "adminName=%s\nadminPwd=%s\n";
            }
            else {
              pcVar4 = "userName=%s\nuserPwd=%s\n";
            }
            sprintf(acStack_fb8,pcVar4);
            iVar1 = rdp_setObj(0,"USER_CFG",&local_180c,acStack_fb8,2);
            pcVar4 = local_17b8;
          }
        }
        else {
          pcVar4 = local_17b8;
          iVar1 = 0x11641;
        }
      }
    }
  }
  sprintf(pcVar4,"$.ret=%d;\n",iVar1);
  piVar5 = *(int **)(param_1 + 0x84);
  if (((piVar5 == (int *)0x0) || (*piVar5 != 1)) ||
     (pcVar4 = strstr(*(char **)(param_1 + 0xc),"/cgi_gdpr"), pcVar4 == (char *)0x0)) {
    iVar1 = http_io_output(param_1,local_17b8);
    iVar1 = -(uint)(iVar1 == -1);
  }
  else {
    pcVar4 = (char *)http_buf_getptr(piVar5[7],0);
    sVar3 = strlen(local_17b8);
    strncpy(pcVar4,local_17b8,sVar3);
    iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
    sVar3 = strlen(local_17b8);
    *(size_t *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + sVar3;
    sVar3 = strlen(local_17b8);
    http_buf_incrpos(iVar1,sVar3);
    iVar1 = 0;
  }
  return iVar1;
}



int http_rpm_ansi(int param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  char acStack_810 [2052];
  
  cstr_strncpy(&DAT_00440900,*(undefined4 *)(param_1 + 0x10),0x400);
  http_tool_ansiStrToList(&DAT_00440900,0x26);
  strcpy(acStack_810,"<html><head></head><body>OK</body></html>");
  piVar4 = *(int **)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined **)(param_1 + 0x3c) = g_http_file_pTypeHTML;
  if (((piVar4 == (int *)0x0) || (*piVar4 != 1)) ||
     (pcVar1 = strstr(*(char **)(param_1 + 0xc),"/cgi_gdpr"), pcVar1 == (char *)0x0)) {
    iVar3 = http_io_output(param_1,acStack_810);
    iVar3 = -(uint)(iVar3 == -1);
  }
  else {
    pcVar1 = (char *)http_buf_getptr(piVar4[7],0);
    sVar2 = strlen(acStack_810);
    strncpy(pcVar1,acStack_810,sVar2);
    iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
    sVar2 = strlen(acStack_810);
    *(size_t *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + sVar2;
    sVar2 = strlen(acStack_810);
    http_buf_incrpos(iVar3,sVar2);
    iVar3 = 0;
  }
  return iVar3;
}



int http_rpm_info(int *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_838 [16];
  char acStack_828 [20];
  char acStack_814 [2052];
  
  iVar7 = *param_1;
  http_filter_fillType(iVar7);
  if (param_1[0xd] == 1) {
    pcVar4 = "Admin";
  }
  else {
    pcVar4 = "User";
  }
  iVar1 = sprintf(acStack_814,"var userType=\"%s\";\n",pcVar4);
  iVar2 = sprintf(acStack_814 + iVar1,"var bSecured=%d;\n",0);
  pcVar4 = acStack_814 + iVar1 + iVar2;
  if (*(int *)(iVar7 + 0x1030) == 1) {
    iVar1 = sprintf(pcVar4,"var clientLocal=%d;\n",1);
    pcVar4 = pcVar4 + iVar1;
    iVar1 = http_filter_fillMac(iVar7);
    if (iVar1 != 0) {
      uVar5 = 0x11649;
      goto LAB_0040c820;
    }
    cnet_macToStr(iVar7 + 0x1024,acStack_828,1);
  }
  else {
    iVar1 = sprintf(pcVar4,"var clientLocal=%d;\n",0);
    pcVar4 = pcVar4 + iVar1;
    strcpy(acStack_828,"00:00:00:00:00:00");
  }
  cnet_addrNumToStr(*(undefined4 *)(iVar7 + 0x1020),auStack_838);
  iVar7 = sprintf(pcVar4,"var clientIp=\"%s\";\n",auStack_838);
  iVar1 = sprintf(pcVar4 + iVar7,"var clientMac=\"%s\";\n",acStack_828);
  pcVar4 = pcVar4 + iVar7 + iVar1;
  uVar5 = 0;
LAB_0040c820:
  sprintf(pcVar4,"$.ret=%d;\n",uVar5);
  piVar6 = (int *)param_1[0x21];
  if (((piVar6 == (int *)0x0) || (*piVar6 != 1)) ||
     (pcVar4 = strstr((char *)param_1[3],"/cgi_gdpr"), pcVar4 == (char *)0x0)) {
    iVar7 = http_io_output(param_1,acStack_814);
    iVar7 = -(uint)(iVar7 == -1);
  }
  else {
    pcVar4 = (char *)http_buf_getptr(piVar6[7],0);
    sVar3 = strlen(acStack_814);
    strncpy(pcVar4,acStack_814,sVar3);
    iVar7 = *(int *)(param_1[0x21] + 0x1c);
    sVar3 = strlen(acStack_814);
    *(size_t *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + sVar3;
    sVar3 = strlen(acStack_814);
    http_buf_incrpos(iVar7,sVar3);
    iVar7 = 0;
  }
  return iVar7;
}



int http_rpm_lanMac(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint local_17f8;
  char *local_17f4;
  char *local_17f0;
  undefined1 auStack_17ec [4];
  undefined2 local_17e8;
  undefined2 local_17e6;
  undefined2 local_17e4;
  undefined2 local_17e2;
  undefined2 local_17e0;
  undefined2 local_17de;
  undefined2 local_17dc;
  char acStack_17d8 [16];
  char acStack_17c8 [23];
  char local_17b1 [2025];
  char local_fc8;
  undefined1 auStack_fc7 [3999];
  
  local_17e8 = 0;
  local_17e6 = 0;
  local_17e4 = 0;
  local_17e2 = 0;
  local_17e0 = 0;
  local_17de = 0;
  local_17dc = 0;
  local_fc8 = '\0';
  memset(auStack_fc7,0,3999);
  iVar7 = 4;
  pcVar1 = (char *)http_parser_getEnv(&DAT_00417a3c);
  if (pcVar1 != (char *)0x0) {
    iVar7 = atoi(pcVar1);
    if (iVar7 < 1) {
      iVar7 = 4;
    }
    else if (10 < iVar7) {
      iVar7 = 10;
    }
  }
  strcpy(acStack_17c8,"var lanMacs=new Array( ");
  pcVar1 = local_17b1;
  for (iVar8 = 0; iVar8 < iVar7; iVar8 = iVar8 + 1) {
    do {
      do {
        strcpy(&local_fc8,"ip\nmac\n");
        iVar2 = rdp_getNextObj(0,"ARP_ENTRY",&local_17e8,&local_fc8);
        if (iVar2 == 0x264e) goto LAB_0040cb84;
        uVar3 = http_parser_argIllustrate(&local_fc8,10,auStack_17ec,&local_17f0);
        http_parser_argIllustrate(uVar3,10,auStack_17ec,&local_17f4);
        pcVar4 = strstr(acStack_17c8,local_17f4);
      } while (pcVar4 != (char *)0x0);
      sscanf(local_17f0,"%u",&local_17f8);
      sprintf(acStack_17d8,"%d.%d.%d.%d",local_17f8 >> 0x18,(local_17f8 << 8) >> 0x18,
              (local_17f8 << 0x10) >> 0x18,local_17f8 & 0xff);
      iVar2 = rdp_netChkIpInAllLanSubnet(acStack_17d8);
    } while (iVar2 != 1);
    iVar2 = sprintf(pcVar1,"\"%s\",",local_17f4);
    pcVar1 = pcVar1 + iVar2;
  }
LAB_0040cb84:
  builtin_strncpy(pcVar1 + -1,");\n",4);
  sprintf(pcVar1 + 2,"$.ret=%d;\n",0);
  piVar6 = *(int **)(param_1 + 0x84);
  if (((piVar6 == (int *)0x0) || (*piVar6 != 1)) ||
     (pcVar1 = strstr(*(char **)(param_1 + 0xc),"/cgi_gdpr"), pcVar1 == (char *)0x0)) {
    iVar7 = http_io_output(param_1,acStack_17c8);
    iVar7 = -(uint)(iVar7 == -1);
  }
  else {
    pcVar1 = (char *)http_buf_getptr(piVar6[7],0);
    sVar5 = strlen(acStack_17c8);
    strncpy(pcVar1,acStack_17c8,sVar5);
    iVar7 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
    sVar5 = strlen(acStack_17c8);
    *(size_t *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + sVar5;
    sVar5 = strlen(acStack_17c8);
    http_buf_incrpos(iVar7,sVar5);
    iVar7 = 0;
  }
  return iVar7;
}



int http_rpm_autoPvc(int *param_1)

{
  undefined **ppuVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  int *piVar6;
  char acStack_818 [2048];
  undefined4 local_18;
  int local_14;
  
  ppuVar1 = (undefined **)http_parser_getEnv("encapType");
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR_DAT_00417a7c;
  }
  pcVar2 = (char *)http_parser_getEnv("linkType");
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "Bridge";
  }
  iVar3 = http_filter_fillMac(*param_1);
  local_14 = 0;
  if (iVar3 == 0) {
    local_14 = *param_1 + 0x1024;
  }
  local_18 = http_parser_getEnv("ipAddr");
  uVar4 = http_parser_getEnv("gwAddr");
  uVar4 = rdp_autoPvc_startSearch(ppuVar1,pcVar2,local_14,local_18,uVar4);
  sprintf(acStack_818,"$.ret=%d;\n",uVar4);
  piVar6 = (int *)param_1[0x21];
  if (((piVar6 == (int *)0x0) || (*piVar6 != 1)) ||
     (pcVar2 = strstr((char *)param_1[3],"/cgi_gdpr"), pcVar2 == (char *)0x0)) {
    iVar3 = http_io_output(param_1,acStack_818);
    iVar3 = -(uint)(iVar3 == -1);
  }
  else {
    pcVar2 = (char *)http_buf_getptr(piVar6[7],0);
    sVar5 = strlen(acStack_818);
    strncpy(pcVar2,acStack_818,sVar5);
    iVar3 = *(int *)(param_1[0x21] + 0x1c);
    sVar5 = strlen(acStack_818);
    *(size_t *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + sVar5;
    sVar5 = strlen(acStack_818);
    http_buf_incrpos(iVar3,sVar5);
    iVar3 = 0;
  }
  return iVar3;
}



undefined4 http_rpm_logout(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34) * 0x10;
  *(undefined4 *)(g_login + iVar1) = 0;
  *(undefined4 *)(g_login + iVar1 + 4) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    gdpr_releaseSystemGDPREntry();
  }
  aes_free_KeyandIv();
  *(undefined4 *)(param_1 + 0x84) = 0;
  http_session_delEntry();
  return 0;
}



undefined4 FUN_0040cf70(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_1f68;
  undefined2 local_1f66;
  undefined2 local_1f64;
  undefined2 local_1f62;
  undefined2 local_1f60;
  undefined2 local_1f5e;
  undefined2 local_1f5c;
  char acStack_1f58 [4000];
  char acStack_fb8 [4004];
  
  memset(acStack_fb8,0,4000);
  memset(acStack_1f58,0,4000);
  local_1f68 = 0;
  local_1f66 = 0;
  local_1f64 = 0;
  local_1f62 = 0;
  local_1f60 = 0;
  local_1f5e = 0;
  local_1f5c = 0;
  strcpy(acStack_fb8,"WANAccessType\n");
  while( true ) {
    iVar2 = rdp_getNextObj(1,"WAN_COMMON_INTF_CFG",&local_1f68,acStack_fb8);
    if (iVar2 != 0) {
      return 0;
    }
    pcVar1 = strstr(acStack_fb8,"Ethernet");
    if (pcVar1 != (char *)0x0) break;
    strcpy(acStack_fb8,"WANAccessType\n");
  }
  strcpy(acStack_1f58,"X_TP_lastUsedIntf\n");
  iVar2 = rdp_getObj(1,"WAN_ETH_INTF",&local_1f68,acStack_1f58);
  if (iVar2 == 0) {
    pcVar1 = strstr(acStack_1f58,"ipoe");
    if (pcVar1 != (char *)0x0) {
      return 1;
    }
    uVar3 = 0xbe;
    pcVar1 = "Get WAN_ETH_INTF param %s\n";
  }
  else {
    uVar3 = 0xb6;
    pcVar1 = "Get WAN_ETH_INTF param %s failed!\n";
  }
  cdbg_printf(8,"curWANConnIsIP",uVar3,pcVar1,acStack_1f58);
  return 0;
}



undefined4 http_rpm_routeTbl(int *param_1)

{
  FILE *__stream;
  FILE *__s;
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  FILE *__stream_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  in_addr local_18d8;
  in_addr local_18d4;
  in_addr local_18d0;
  undefined1 auStack_18cc [4];
  undefined1 auStack_18c8 [4];
  undefined1 auStack_18c4 [4];
  undefined1 auStack_18c0 [4];
  undefined1 auStack_18bc [4];
  undefined1 auStack_18b8 [4];
  uint local_18b4;
  char acStack_18b0 [64];
  char acStack_1870 [16];
  char acStack_1860 [16];
  char acStack_1850 [16];
  char acStack_1840 [16];
  char local_1830;
  undefined1 auStack_182f [2047];
  char acStack_1030 [4096];
  size_t local_30;
  
  iVar7 = *param_1;
  local_1830 = '\0';
  memset(auStack_182f,0,0x7ff);
  __stream = fopen("/proc/net/route","r");
  __s = fopen("/var/tmp/route","w+");
  memset(acStack_1030,0,0x1000);
  if ((__stream == (FILE *)0x0) || (__s == (FILE *)0x0)) {
    cdbg_printf(8,"http_rpm_routeTbl",0xe2,"fopen failed, %s(0x%x), %s(0x%x)","/proc/net/route",
                __stream,"/var/tmp/route",__s);
    iVar4 = -1;
  }
  else {
    iVar4 = fscanf(__stream,"%*[^\n]\n");
    iVar4 = iVar4 >> 0x1f;
  }
  iVar6 = 0x40;
  iVar5 = 0;
  do {
    if (iVar4 == -1) break;
    memset(acStack_1870,0,0x40);
    iVar4 = fscanf(__stream,"%63s%lx%lx%X%d%d%d%lx%d%d%d\n",acStack_18b0,&local_18d0,&local_18d4,
                   &local_18b4,auStack_18b8,auStack_18bc,auStack_18c0,&local_18d8,auStack_18c4,
                   auStack_18c8,auStack_18cc);
    if (iVar4 < 0) {
      iVar1 = feof(__stream);
      iVar4 = -1;
      if (iVar1 == 0) goto LAB_0040d320;
    }
    else {
LAB_0040d320:
      iVar4 = 1;
      if ((local_18b4 & 1) != 0) {
        pcVar2 = inet_ntoa(local_18d0);
        strncpy(acStack_1870,pcVar2,0xf);
        pcVar2 = inet_ntoa(local_18d8);
        strncpy(acStack_1860,pcVar2,0xf);
        pcVar2 = inet_ntoa(local_18d4);
        strncpy(acStack_1850,pcVar2,0xf);
        pcVar2 = strstr(acStack_18b0,"br");
        if (pcVar2 == (char *)0x0) {
          pcVar2 = strstr(acStack_18b0,"ppp");
          if (pcVar2 == (char *)0x0) {
            pcVar2 = strstr(acStack_18b0,"eth");
            if ((pcVar2 == (char *)0x0) &&
               (pcVar2 = strstr(acStack_18b0,"apcli"), pcVar2 == (char *)0x0)) {
              pcVar2 = strstr(acStack_18b0,"apclii");
              if (pcVar2 == (char *)0x0) {
                cdbg_printf(8,"getProcSysRouteInfo",0x95,"Unknow interface --- dev name:%s\n",
                            acStack_18b0);
                iVar4 = -1;
                goto LAB_0040d578;
              }
            }
            iVar4 = FUN_0040cf70();
            if (iVar4 == 0) {
              pcVar2 = "Public";
            }
            else {
              pcVar2 = "Internet";
            }
          }
          else {
            pcVar2 = "Internet";
          }
        }
        else {
          pcVar2 = "LAN";
        }
        strcpy(acStack_1840,pcVar2);
        sprintf(&local_1830,"%s,%s,%s,%s\r\n",acStack_1870,acStack_1860,acStack_1850,acStack_1840);
        sVar3 = strlen(&local_1830);
        fwrite(&local_1830,sVar3,1,__s);
        sVar3 = strlen(&local_1830);
        iVar5 = sVar3 + iVar5;
        iVar4 = 0;
      }
    }
LAB_0040d578:
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  param_1[0xf] = (int)g_http_file_pTypeDefault;
  sprintf(&local_1830,"%d\r\n",0);
  param_1[6] = 0;
  if (iVar5 != 0) {
    fseek(__s,0,0);
    sVar3 = fread(acStack_1030,1,0x1000,__s);
    if (sVar3 != 0) {
      local_30 = strlen(&local_1830);
      iVar4 = param_1[0x21];
      sVar3 = strlen(acStack_1030);
      iVar4 = aes_enBufToFile("/var/tmp/enroute",&local_1830,local_30,iVar4 + 0x20,iVar4 + 0x41,
                              acStack_1030,sVar3);
      param_1[6] = iVar4;
    }
  }
  http_parser_makeHeader(param_1,0);
  if (iVar5 != 0) {
    memset(acStack_1030,0,0x1000);
    __stream_00 = fopen("/var/tmp/enroute","r");
    if (__stream_00 == (FILE *)0x0) {
      cdbg_printf(8,"http_rpm_routeTbl",0x11d,"Open TMP_EN_ROUTE_TBL %s Error \n","/var/tmp/enroute"
                 );
    }
    sVar3 = fread(acStack_1030,1,0x1000,__stream_00);
    if (sVar3 != 0) {
      sVar3 = strlen(acStack_1030);
      fwrite(acStack_1030,1,sVar3,*(FILE **)(iVar7 + 0x101c));
    }
    if (__stream_00 != (FILE *)0x0) {
      fclose(__stream_00);
    }
  }
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  if (__s != (FILE *)0x0) {
    fclose(__s);
  }
  return 0;
}



undefined4 FUN_0040d7c0(int *param_1)

{
  FILE *__stream;
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char acStack_1098 [128];
  char acStack_1018 [2048];
  char acStack_818 [2048];
  
  memset(acStack_818,0,0x800);
  iVar4 = *param_1;
  memset(acStack_1018,0,0x800);
  memset(acStack_1098,0,0x80);
  snprintf(acStack_1098,0x80,"ifconfig %s",&DAT_0041944c);
  __stream = popen(acStack_1098,"r");
  sVar1 = 0;
  if (__stream != (FILE *)0x0) {
    do {
      pcVar2 = fgets(acStack_818 + sVar1,0x7ff - sVar1,__stream);
      if (pcVar2 == (char *)0x0) break;
      sVar1 = strlen(acStack_818);
    } while (sVar1 < 0x7ff);
    pclose(__stream);
  }
  pcVar2 = strstr(acStack_818,"RX bytes:");
  lVar6 = 0;
  if (pcVar2 != (char *)0x0) {
    lVar6 = atoll(pcVar2 + 9);
  }
  pcVar2 = strstr(acStack_818,"TX bytes:");
  lVar7 = 0;
  if (pcVar2 != (char *)0x0) {
    lVar7 = atoll(pcVar2 + 9);
  }
  param_1[0xf] = (int)g_http_file_pTypeDefault;
  iVar5 = param_1[6];
  iVar3 = sprintf(acStack_1018,"%lld:%lld\n\r\n",(int)lVar7,(int)((ulonglong)lVar7 >> 0x20),lVar6);
  param_1[6] = iVar3 + iVar5;
  http_parser_makeHeader(param_1,0);
  sVar1 = strlen(acStack_1018);
  fwrite(acStack_1018,1,sVar1,*(FILE **)(iVar4 + 0x101c));
  return 0;
}



undefined4 http_rpm_updateWlThroughput(int *param_1)

{
  FILE *__stream;
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char acStack_1098 [128];
  char acStack_1018 [2048];
  char acStack_818 [2048];
  
  memset(acStack_818,0,0x800);
  iVar4 = *param_1;
  memset(acStack_1018,0,0x800);
  memset(acStack_1098,0,0x80);
  snprintf(acStack_1098,0x80,"ifconfig %s",&DAT_0041944c);
  __stream = popen(acStack_1098,"r");
  sVar1 = 0;
  if (__stream != (FILE *)0x0) {
    do {
      pcVar2 = fgets(acStack_818 + sVar1,0x7ff - sVar1,__stream);
      if (pcVar2 == (char *)0x0) break;
      sVar1 = strlen(acStack_818);
    } while (sVar1 < 0x7ff);
    pclose(__stream);
  }
  pcVar2 = strstr(acStack_818,"RX bytes:");
  lVar6 = 0;
  if (pcVar2 != (char *)0x0) {
    lVar6 = atoll(pcVar2 + 9);
  }
  pcVar2 = strstr(acStack_818,"TX bytes:");
  lVar7 = 0;
  if (pcVar2 != (char *)0x0) {
    lVar7 = atoll(pcVar2 + 9);
  }
  param_1[0xf] = (int)g_http_file_pTypeDefault;
  iVar5 = param_1[6];
  iVar3 = sprintf(acStack_1018,"%lld:%lld\n\r\n",(int)lVar7,(int)((ulonglong)lVar7 >> 0x20),lVar6);
  param_1[6] = iVar3 + iVar5;
  http_parser_makeHeader(param_1,0);
  sVar1 = strlen(acStack_1018);
  fwrite(acStack_1018,1,sVar1,*(FILE **)(iVar4 + 0x101c));
  return 0;
}



size_t FUN_0040da20(char *param_1,char *param_2,undefined4 *param_3)

{
  size_t __n;
  int iVar1;
  size_t sVar2;
  
  sVar2 = 0;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    __n = strlen(param_2);
    iVar1 = strncmp(param_1,param_2,__n);
    if (iVar1 == 0) {
      sVar2 = __n;
    }
    *param_3 = param_1 + sVar2;
  }
  return sVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040dabc(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  char *__src;
  undefined4 uVar3;
  int iVar4;
  
  http_parser_argStrToList(param_2,0x26,1);
  pcVar1 = (char *)http_parser_getEnv("h");
  iVar2 = http_parser_getEnv(&DAT_00413844);
  if ((pcVar1 == (char *)0x0) || (iVar2 == 0)) {
    fputs(" pLoginHash  or pSeq: Error \n",_stderr);
LAB_0040dc28:
    uVar3 = 0xffffffff;
  }
  else {
    strncpy((char *)(*(int *)(param_1 + 0x84) + 0xca),pcVar1,0x20);
    iVar4 = *(int *)(param_1 + 0x84);
    uVar3 = str2num(iVar2);
    *(undefined4 *)(iVar4 + 0xec) = uVar3;
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
    if ((iVar2 == 0) || (iVar2 == 3)) {
      pcVar1 = (char *)http_parser_getEnv(&DAT_00419498);
      __src = (char *)http_parser_getEnv(&DAT_0041949c);
      if ((pcVar1 == (char *)0x0) || (__src == (char *)0x0)) {
        fputs("#Msg:  pAesKey : Error \n",_stderr);
        fflush(_stderr);
        goto LAB_0040dc28;
      }
      strncpy((char *)(*(int *)(param_1 + 0x84) + 0x88),pcVar1,0x20);
      strncpy((char *)(*(int *)(param_1 + 0x84) + 0xa9),__src,0x20);
      iVar2 = comp2String(*(int *)(param_1 + 0x84) + 0x88,*(int *)(param_1 + 0x84) + 0x20);
      if ((iVar2 == 0) &&
         (iVar2 = comp2String(*(int *)(param_1 + 0x84) + 0xa9,*(int *)(param_1 + 0x84) + 0x41),
         iVar2 == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0xc) = 1;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0xc) = 0;
      }
    }
    iVar2 = *(int *)(param_1 + 0x84);
    uVar3 = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      iVar2 = comp2String(iVar2 + 0xca,iVar2 + 0x62);
      if (iVar2 == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10) = 1;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10) = 0;
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040dd18(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = http_seq_getSeq();
  iVar3 = *(int *)(param_1 + 0x84);
  if (*(int *)(iVar3 + 4) == 2) {
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  uVar2 = 0;
  if (iVar1 + param_2 != *(int *)(iVar3 + 0xec)) {
    fputs("Sequence number is not mathed  \n",_stderr);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 FUN_0040dda4(int *param_1)

{
  undefined4 uVar1;
  void *__s;
  size_t __n;
  undefined4 *puVar2;
  void *__src;
  int iVar3;
  int iVar4;
  size_t __size;
  undefined4 local_5d0;
  undefined1 auStack_5cc [36];
  undefined1 auStack_5a8 [388];
  undefined1 auStack_424 [1028];
  
  iVar4 = param_1[0x21];
  iVar3 = *param_1;
  puVar2 = *(undefined4 **)(iVar4 + 0x1c);
  memset(auStack_5cc,0,0x21);
  memset(auStack_5a8,0,0x181);
  __n = puVar2[3];
  local_5d0 = 0;
  __src = (void *)*puVar2;
  if (0x17f < (int)__n) {
    memcpy(auStack_5cc,(void *)(iVar4 + 0xf0),0x20);
    for (; 0x180 < (int)__n; __n = __n - 0x180) {
      memset(auStack_424,0,0x401);
      local_5d0 = 0x180;
      aes_cbc_encrypt_intface(__src,auStack_5a8,&local_5d0,param_1[0x21] + 0x20,auStack_5cc,1);
      uVar1 = b64_encode(auStack_424,0x400,auStack_5a8,local_5d0);
      __src = (void *)((int)__src + 0x180);
      fprintf(*(FILE **)(iVar3 + 0x101c),"%x\r\n",uVar1);
      fprintf(*(FILE **)(iVar3 + 0x101c),"%s\r\n",auStack_424);
      memset(auStack_5a8,0,0x181);
    }
    __size = __n + 1;
    __s = malloc(__size);
    memset(__s,0,__size);
    memcpy(__s,__src,__n);
    gdpr_cleanOutBuff(param_1[0x21]);
    memcpy((void *)*puVar2,__s,__n);
    puVar2[1] = __n;
    puVar2[3] = __n;
    memset(auStack_424,0,0x401);
    memset(__s,0,__size);
    free(__s);
    memcpy((void *)(param_1[0x21] + 0xf0),auStack_5cc,0x20);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040e038(int param_1,undefined4 param_2,ushort *param_3,char *param_4)

{
  char *__dest;
  size_t __n;
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  char acStack_60 [64];
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
  __dest = (char *)http_buf_getptr(iVar4,0);
  __n = strlen(param_4);
  iVar1 = sprintf(acStack_60,"[%d,%d,%d,%d,%d,%d]%d\n",(uint)*param_3,(uint)param_3[1],
                  (uint)param_3[2],(uint)param_3[3],(uint)param_3[4],(uint)param_3[5],param_2);
  strcpy(__dest,acStack_60);
  strncat(__dest,param_4,__n);
  strcat(__dest,"\n");
  sVar2 = strlen(__dest);
  if ((int)(__n + iVar1) < (int)sVar2) {
    *(size_t *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + sVar2;
    http_buf_incrpos(iVar4,sVar2);
    FUN_0040dda4(param_1);
    uVar3 = 0;
  }
  else {
    fputs("#Msg: HTTP_ERR_IO : output_collect ?? \n",_stderr);
    fflush(_stderr);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



undefined4 FUN_0040e1f4(int *param_1)

{
  int iVar1;
  size_t __n;
  undefined4 *puVar2;
  int iVar3;
  void *__src;
  size_t local_778;
  undefined1 auStack_774 [36];
  undefined1 auStack_750 [404];
  undefined1 auStack_5bc [404];
  undefined1 auStack_428 [1036];
  
  iVar1 = *param_1;
  puVar2 = *(undefined4 **)(param_1[0x21] + 0x1c);
  memset(auStack_428,0,0x401);
  memset(auStack_774,0,0x21);
  memset(auStack_5bc,0,0x191);
  memset(auStack_750,0,0x191);
  local_778 = 0;
  if (puVar2[3] != 0) {
    FUN_0040dda4(param_1);
    __n = puVar2[3];
    __src = (void *)*puVar2;
    iVar3 = param_1[0x21];
    local_778 = __n;
    memcpy(auStack_774,(void *)(iVar3 + 0xf0),0x20);
    if (__n != 0) {
      memset(auStack_428,0,0x401);
      memcpy(auStack_5bc,__src,__n);
      aes_tmp_encrypt_buf_nopadding_new(auStack_5bc,auStack_750,&local_778,iVar3 + 0x20,auStack_774)
      ;
      local_778 = b64_encode(auStack_428,0x400,auStack_750,local_778);
      fprintf(*(FILE **)(iVar1 + 0x101c),"%x\r\n",local_778);
      fprintf(*(FILE **)(iVar1 + 0x101c),"%s\r\n",auStack_428);
    }
    memset(auStack_428,0,0x401);
    fwrite("0\r\n\r\n",1,5,*(FILE **)(iVar1 + 0x101c));
    updateString(param_1[0x21] + 0xf0,param_1[0x21] + 0x41,0x21);
  }
  return 0;
}



int FUN_0040e408(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)http_buf_getptr(param_1,0);
  iVar4 = 0;
  pcVar3 = param_2;
  if (param_3 != 0) {
    while (param_3 = param_3 + -1, param_3 != 0) {
      cVar1 = *pcVar2;
      if (cVar1 != '\0') {
        *pcVar3 = cVar1;
        if (((cVar1 == '\n') && (param_2 < pcVar3)) && (pcVar3[-1] == '\r')) {
          pcVar3 = pcVar3 + 1;
          break;
        }
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    iVar4 = 0;
    if (param_2 < pcVar3) {
      iVar4 = (int)pcVar3 - (int)param_2;
      *pcVar3 = '\0';
      http_buf_incrpos(param_1,iVar4);
    }
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040e4f4(undefined4 param_1,char *param_2,char *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 local_78;
  char local_74;
  char acStack_73 [67];
  char *local_30;
  
  memset(&local_74,0,0x40);
  iVar1 = FUN_0040e408(param_1,&local_74,0x40);
  if (iVar1 < 1) {
    pcVar4 = "#Msg: ini header io error or no content left\n";
  }
  else {
    *param_4 = *param_4 - iVar1;
    if (*(char *)((int)&local_78 + iVar1 + 3) == '\n') {
      if ((local_74 == '[') && (pcVar4 = strchr(&local_74,0x5d), pcVar4 != (char *)0x0)) {
        if (pcVar4 + (-2 - (int)&local_74) < (char *)0x7f) {
          *pcVar4 = '\0';
          strcpy(param_3,acStack_73);
          iVar1 = sscanf(pcVar4 + 1,"%d,%d",param_5,&local_78);
          if (iVar1 == 2) {
            if ((*param_5 < 0) || (local_78 < 0)) {
              fputs("#Msg: action num or list len error\n",_stderr);
              fflush(_stderr);
            }
            *param_2 = '\0';
            iVar6 = 4000;
            iVar1 = 0;
            while( true ) {
              if (local_78 <= iVar1) {
                return 0;
              }
              iVar2 = FUN_0040e408(param_1,param_2,iVar6);
              if (iVar2 < 1) break;
              *param_4 = *param_4 - iVar2;
              if (param_2[iVar2 + -1] != '\n') {
                pcVar4 = "#Msg: attr list format error or too long\n";
                goto LAB_0040e888;
              }
              if (param_2[iVar2 + -2] == '\r') {
                param_2[iVar2 + -2] = '\n';
                param_2[iVar2 + -1] = '\0';
                iVar2 = iVar2 + -1;
              }
              if (*param_2 == '\\') {
                memmove(param_2,param_2 + 1,iVar2 - 2U);
                local_30 = param_2 + (iVar2 - 2U);
                *local_30 = '\0';
                pcVar4 = (char *)http_tool_getAnsi(param_2);
                if (pcVar4 == (char *)0x0) {
                  fputs("#Msg: ansi arg not found\n",_stderr);
                  fflush(_stderr);
                  return 0x11569;
                }
                *local_30 = '=';
                strcpy(param_2 + iVar2 + -1,pcVar4);
                sVar3 = strlen(pcVar4);
                iVar5 = sVar3 + iVar2 + -1;
                iVar2 = iVar5 + 1;
                param_2[iVar5] = '\n';
                param_2[iVar2] = '\0';
              }
              iVar6 = iVar6 - iVar2;
              if ((iVar6 == 0) && (iVar1 != local_78 + -1)) {
                pcVar4 = "#Msg: list len error, not enough attr\n";
                goto LAB_0040e888;
              }
              param_2 = param_2 + iVar2;
              iVar1 = iVar1 + 1;
            }
            pcVar4 = "#Msg: attr list io error or list len error\n";
            goto LAB_0040e5b0;
          }
          pcVar4 = "#Msg: ini header tail arg error\n";
        }
        else {
          pcVar4 = "#Msg: desc len error\n";
        }
      }
      else {
        pcVar4 = "#Msg: not a ini header\n";
      }
LAB_0040e888:
      fputs(pcVar4,_stderr);
      fflush(_stderr);
      return 0x11563;
    }
    pcVar4 = "#Msg: ini header format error or too long\n";
  }
LAB_0040e5b0:
  fputs(pcVar4,_stderr);
  fflush(_stderr);
  return 0x115c7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_cgi_gdpr_main(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  size_t sVar4;
  size_t sVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint local_30f0;
  char *local_30ec;
  char *local_30e8;
  char *local_30e4;
  int local_30e0;
  size_t local_30dc;
  undefined1 auStack_30d8 [4];
  char *local_30d4;
  undefined4 local_30d0;
  undefined4 local_30cc;
  undefined4 local_30c8;
  undefined2 local_30c4;
  undefined4 local_30c0;
  undefined4 local_30bc;
  undefined4 local_30b8;
  undefined2 local_30b4;
  char local_30b0 [84];
  undefined1 auStack_305c [128];
  undefined1 auStack_2fdc [4000];
  undefined1 auStack_203c [4096];
  undefined1 auStack_103c [4100];
  uint local_38;
  int local_34;
  char *local_30;
  int local_2c;
  
  local_30e0 = param_1[6];
  iVar8 = param_1[0x21];
  iVar14 = *param_1;
  if (param_1[0xd] != *(int *)(iVar8 + 8)) {
    *(undefined4 *)(iVar8 + 4) = 3;
  }
  iVar8 = aes_getKey(iVar8 + 0x20,iVar8 + 0x41);
  if (iVar8 != 0) {
    fputs("#Msg: aes_getKey isn\'t OK !! no Aes Key and Iv now \n",_stderr);
    fflush(_stderr);
  }
  puVar3 = g_http_file_pTypeDefault;
  puVar13 = *(undefined4 **)(param_1[0x21] + 0x18);
  iVar12 = *(int *)(param_1[0x21] + 0x1c);
  param_1[8] = 1;
  param_1[0xf] = (int)puVar3;
  memset(auStack_203c,0,0x1000);
  memset(auStack_103c,0,0x1000);
  iVar8 = http_stream_fgets(*(undefined4 *)(*param_1 + 8),*param_1 + 0x14,auStack_203c,0x1000);
  if (iVar8 < 1) {
LAB_0040eb90:
    fputs("#Msg: ini header io error or no content left\n",_stderr);
    fflush(_stderr);
    goto LAB_0040ee0c;
  }
  local_30e0 = local_30e0 - iVar8;
  iVar8 = FUN_0040da20(auStack_203c,"sign=",&local_30e8);
  pcVar7 = local_30e8;
  if (iVar8 == 0) {
LAB_0040ead8:
    fputs("#Msg: cgi_gdpr request no signature\n",_stderr);
    fflush(_stderr);
    iVar8 = param_1[0xd] * 0x20;
    *(undefined4 *)(g_login + iVar8) = 0;
    *(undefined4 *)(g_login + iVar8 + 4) = 0;
    *(undefined4 *)(g_login + iVar8 + 8) = 0;
    *(undefined4 *)(g_login + iVar8 + 0xc) = 0;
  }
  else {
    sVar4 = strlen(local_30e8);
    http_tool_stripLine(pcVar7,sVar4);
    iVar8 = http_rsa_decrypt(local_30e8,auStack_103c,0x81,1);
    if (iVar8 != -1) {
      iVar8 = FUN_0040dabc(param_1,auStack_103c);
      if (iVar8 == 0) {
        memset(auStack_203c,0,0x1000);
        memset(auStack_103c,0,0x1000);
        iVar8 = http_stream_fgets(*(undefined4 *)(*param_1 + 8),*param_1 + 0x14,auStack_103c,0x1000)
        ;
        if (iVar8 < 1) goto LAB_0040eb90;
        local_30e0 = local_30e0 - iVar8;
        iVar8 = FUN_0040da20(auStack_103c,"data=",&local_30ec);
        pcVar7 = local_30ec;
        if (iVar8 == 0) {
          fputs("#Msg: cgi_gdpr request no data\n",_stderr);
          fflush(_stderr);
          goto LAB_0040f760;
        }
        sVar4 = strlen(local_30ec);
        http_tool_stripLine(pcVar7,sVar4);
        local_30 = local_30ec;
        sVar4 = strlen(local_30ec);
        local_30f0 = b64_decode(auStack_203c,0x1000,local_30,sVar4);
        iVar8 = FUN_0040dd18(param_1,sVar4);
        iVar11 = param_1[0x21];
        if (iVar8 == 0) {
          *(undefined4 *)(iVar11 + 0x14) = 1;
        }
        else {
          *(undefined4 *)(iVar11 + 0x14) = 0;
        }
        if (*(int *)(iVar11 + 0x14) == 0) {
          pcVar7 = "#Msg: 2 pData->pGDPREntry->SeqMatchFlag == HTTP_FALSE\n";
          goto LAB_0040ec9c;
        }
        memset(auStack_103c,0,0x1000);
        if (*(int *)(iVar11 + 4) == 2) {
          iVar8 = aes_tmp_decrypt_buf_nopadding_new
                            (auStack_203c,auStack_103c,&local_30f0,iVar11 + 0x20,iVar11 + 0x41);
          if (iVar8 == 0) {
LAB_0040ed74:
            if (local_30f0 <= (uint)(puVar13[2] - puVar13[1])) {
              memcpy((void *)*puVar13,auStack_103c,local_30f0);
              puVar13[3] = local_30f0;
LAB_0040f760:
              local_30e0 = puVar13[3];
              *(undefined4 *)param_1[0x21] = 1;
              memset(local_30b0 + 0x14,0,0x40);
              iVar8 = FUN_0040e408(puVar13,local_30b0 + 0x14,0x40);
              local_34 = 0;
              local_30e0 = local_30e0 - iVar8;
              bVar2 = false;
              bVar1 = false;
              sVar4 = 0;
              pcVar7 = local_30b0 + 0x14;
              uVar10 = 0;
LAB_0040f480:
              do {
                if (*pcVar7 == '\0') {
                  if (bVar1) {
                    if (uVar10 == 3) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = rdp_saveCfg();
                    }
                  }
                  else {
                    uVar10 = uVar10 & -(uint)(uVar10 != 3);
                  }
                  goto LAB_0040f514;
                }
                if (local_30e0 == 0) {
                  uVar10 = 0x11566;
                  goto LAB_0040f514;
                }
                pcVar7 = (char *)http_parser_argIllustrate(pcVar7,0x26,&local_30d4,auStack_30d8);
                local_38 = 0;
                if ((local_30d4 != (char *)0x0) && (local_38 = atoi(local_30d4), local_38 != 0)) {
                  local_38 = local_38 & -(uint)(local_38 < 9);
                }
                uVar10 = FUN_0040e4f4(puVar13,auStack_2fdc,auStack_305c,&local_30e0,&local_30dc);
                if (uVar10 != 0) goto LAB_0040f514;
                if (local_30dc != sVar4) {
                  fputs("#Msg: actIndex not correct\n",_stderr);
                  uVar10 = 0x11563;
                  fflush(_stderr);
                  goto LAB_0040f514;
                }
                local_30c0 = 0;
                local_30bc = 0;
                local_30b8 = 0;
                local_30b4 = 0;
                local_30d0 = 0;
                local_30cc = 0;
                local_30c8 = 0;
                local_30c4 = 0;
                local_30dc = http_parseDescStr(auStack_305c,&local_30e4,&local_30c0,&local_30d0);
                if (local_30dc != 0) goto LAB_0040f514;
                if (*(int *)(param_1[0x21] + 4) == 2) {
                  if (*(int *)(param_1[0x21] + 0x10) == 0) {
                    pcVar7 = "#Msg: HashMatchFlag  out\n";
                    goto LAB_0040efc8;
                  }
                }
                else {
                  iVar8 = checkOidAuth(local_30e4,local_38);
                  if (iVar8 == 0) {
                    pcVar7 = "#Msg: checkOidAuth  out\n";
LAB_0040efc8:
                    fputs(pcVar7,_stderr);
                    uVar10 = 0x191;
                    fflush(_stderr);
                    goto LAB_0040f64c;
                  }
                }
                if (local_34 == 0) {
                  iVar8 = strcmp(local_30e4,"/cgi/login");
                  if (iVar8 != 0) {
                    http_parser_makeHeader(param_1,0);
                    goto LAB_0040f044;
                  }
                }
                else {
LAB_0040f044:
                  local_34 = 1;
                }
                local_30b0[0] = '\0';
                local_30b0[1] = '\0';
                local_30b0[2] = '\0';
                local_30b0[3] = '\0';
                local_30b0[4] = '\0';
                local_30b0[5] = '\0';
                local_30b0[6] = '\0';
                local_30b0[7] = '\0';
                local_30b0[8] = '\0';
                local_30b0[9] = '\0';
                local_30b0[10] = '\0';
                local_30b0[0xb] = '\0';
                local_30b0[0xc] = '\0';
                local_30b0[0xd] = '\0';
                local_30b0[0xe] = '\0';
                local_30b0[0xf] = '\0';
                local_30b0[0x10] = '\0';
                local_30b0[0x11] = '\0';
                local_30b0[0x12] = '\0';
                local_30b0[0x13] = '\0';
                uVar9 = 0;
                switch(local_38) {
                case 1:
                  uVar10 = rdp_getObj(1,local_30e4,&local_30c0,auStack_2fdc);
                  if ((int)uVar10 < 1) goto code_r0x0040f0ac;
                  goto LAB_0040f514;
                case 2:
                  uVar10 = rdp_setObj(1,local_30e4,&local_30c0,auStack_2fdc,2);
                  if (uVar10 - 2 < 2) {
                    bVar2 = true;
                  }
                  if (((int)uVar10 < 1) || (uVar10 == 2)) goto LAB_0040f478;
                  bVar1 = true;
                  uVar9 = uVar10;
                  if (uVar10 != 3) goto LAB_0040f514;
                  break;
                case 3:
                  uVar10 = rdp_createObj(1,local_30e4,&local_30d0,&local_30c0);
                  if (0 < (int)uVar10) goto LAB_0040f514;
                  uVar10 = rdp_setObj(1,local_30e4,&local_30c0,auStack_2fdc,3);
                  if (0 < (int)uVar10) {
                    rdp_destroyObj();
                    goto LAB_0040f514;
                  }
                  uVar10 = rdp_getObj(1,local_30e4,&local_30c0,auStack_2fdc);
                  if (0 < (int)uVar10) goto LAB_0040f514;
                  iVar8 = FUN_0040e038(param_1,sVar4,(int)&local_30c0 + 2,auStack_2fdc);
                  bVar1 = true;
                  uVar9 = uVar10;
                  if (iVar8 != 0) goto LAB_0040f508;
                  break;
                case 4:
                  uVar10 = rdp_setObj(1,local_30e4,&local_30c0,auStack_2fdc,4);
                  if ((0 < (int)uVar10) ||
                     (uVar10 = rdp_destroyObj(1,local_30e4,&local_30c0), 0 < (int)uVar10))
                  goto LAB_0040f514;
LAB_0040f478:
                  bVar1 = true;
                  uVar9 = uVar10;
                  break;
                case 5:
                  while (uVar10 = rdp_getNextObj(1,local_30e4,&local_30c0,auStack_2fdc),
                        uVar10 != 0x264e) {
                    if (0 < (int)uVar10) goto LAB_0040f514;
                    iVar8 = FUN_0040e038(param_1,sVar4,(int)&local_30c0 + 2,auStack_2fdc);
                    if (iVar8 != 0) goto LAB_0040f508;
                  }
                  break;
                case 6:
                  while (uVar10 = rdp_getNextObjSub(1,local_30e4,&local_30d0,&local_30c0,
                                                    auStack_2fdc), uVar10 != 0x264e) {
                    if (0 < (int)uVar10) goto LAB_0040f514;
                    iVar8 = FUN_0040e038(param_1,sVar4,(int)&local_30c0 + 2,auStack_2fdc);
                    if (iVar8 != 0) goto LAB_0040f508;
                  }
                  break;
                case 7:
                  if (local_30e4 == (char *)0x0) {
                    uVar10 = 0x11567;
                    goto LAB_0040f514;
                  }
                  uVar10 = rdp_action(local_30e4,&local_30c0);
                  if (0 < (int)uVar10) goto LAB_0040f514;
                  iVar8 = strcmp(local_30e4,"ACT_REBOOT");
                  uVar9 = uVar10;
                  if (iVar8 == 0) {
                    param_1[7] = 0;
                  }
                  break;
                case 8:
                  if ((((local_30e4 == (char *)0x0) ||
                       (iVar8 = http_alias_getAlias(local_30e4), iVar8 == 0)) ||
                      (*(code **)(iVar8 + 0x14) == http_file_main)) ||
                     (*(code **)(iVar8 + 0x14) == http_cgi_gdpr_main)) {
                    uVar10 = 0x11568;
                    goto LAB_0040f514;
                  }
                  local_2c = iVar8;
                  local_30dc = sprintf(local_30b0,"[cgi]%d",sVar4);
                  local_30 = (char *)http_buf_getptr(iVar12,0);
                  sprintf(local_30,"%s\n",local_30b0);
                  local_30dc = strlen(local_30);
                  *(size_t *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + local_30dc;
                  sVar5 = strlen(local_30);
                  http_buf_incrpos(iVar12,sVar5);
                  if ((int)local_30dc < 6) goto LAB_0040f508;
                  http_parser_argStrToList(auStack_2fdc,10,0);
                  local_30dc = (**(code **)(local_2c + 0x14))(param_1);
                  if (local_30dc != 0) {
                    param_1[7] = 0;
                  }
                  break;
                default:
                  uVar10 = 0x191;
                  goto LAB_0040f514;
                }
                sVar4 = sVar4 + 1;
                uVar10 = uVar9;
              } while( true );
            }
            fprintf(_stderr,"pBuf->size(%d) less than realDatalen(%d) Error \n");
          }
        }
        else {
          iVar8 = aes_tmp_decrypt_buf_nopadding_new
                            (auStack_203c,auStack_103c,&local_30f0,iVar11 + 0x88,iVar11 + 0xa9);
          if (iVar8 == 0) goto LAB_0040ed74;
          fputs("aes_tmp_decrypt_buf_nopadding Error \n",_stderr);
        }
LAB_0040ee0c:
        bVar2 = false;
        fputs("#Msg:  getObjData_decrypt Error and goto  tail \n\n",_stderr);
        fflush(_stderr);
        uVar10 = 0x115c7;
        goto LAB_0040f514;
      }
      goto LAB_0040ead8;
    }
    pcVar7 = "#Msg: http_rsa_decrypt  failed\n";
LAB_0040ec9c:
    fputs(pcVar7,_stderr);
    fflush(_stderr);
  }
  bVar2 = false;
  fputs("#Msg:  getObjData_decrypt Error and goto err \n\n",_stderr);
  uVar10 = 0x191;
  fflush(_stderr);
LAB_0040f64c:
  memset(local_30b0 + 0x14,0,0x40);
  if ((param_1[0x21] != 0) &&
     (gdpr_cleanBuff(), *(int *)(*(int *)(param_1[0x21] + 0x1c) + 0xc) != 0)) {
    fputs("#Msg: gdpr_cleanBuff Error \n",_stderr);
    fflush(_stderr);
  }
  param_1[0x21] = 0;
  if (uVar10 == 0x115c7) {
    param_1[7] = 0;
  }
  if (!bVar2) {
    uVar6 = 0;
    if (uVar10 == 0x191) {
      uVar6 = 0x191;
    }
    return uVar6;
  }
  fflush(*(FILE **)(iVar14 + 0x101c));
  rdp_action("ACT_REBOOT",0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
code_r0x0040f0ac:
  iVar8 = FUN_0040e038(param_1,sVar4,(int)&local_30c0 + 2,auStack_2fdc);
  sVar4 = sVar4 + 1;
  if (iVar8 != 0) goto LAB_0040f508;
  goto LAB_0040f480;
LAB_0040f508:
  uVar10 = 0x115c7;
LAB_0040f514:
  param_1[6] = local_30e0;
  http_parser_dropContent(param_1);
  local_30b0[0] = '\0';
  local_30b0[1] = '\0';
  local_30b0[2] = '\0';
  local_30b0[3] = '\0';
  local_30b0[4] = '\0';
  local_30b0[5] = '\0';
  local_30b0[6] = '\0';
  local_30b0[7] = '\0';
  local_30b0[8] = '\0';
  local_30b0[9] = '\0';
  local_30b0[10] = '\0';
  local_30b0[0xb] = '\0';
  local_30b0[0xc] = '\0';
  local_30b0[0xd] = '\0';
  local_30b0[0xe] = '\0';
  local_30b0[0xf] = '\0';
  local_30b0[0x10] = '\0';
  local_30b0[0x11] = '\0';
  local_30b0[0x12] = '\0';
  local_30b0[0x13] = '\0';
  local_30dc = sprintf(local_30b0,"[error]%d",uVar10);
  if (((int *)param_1[0x21] == (int *)0x0) || (*(int *)param_1[0x21] != 1)) {
    fprintf(*(FILE **)(iVar14 + 0x101c),"%x\r\n%s\r\n",local_30dc,local_30b0);
    fwrite("0\r\n\r\n",1,5,*(FILE **)(iVar14 + 0x101c));
  }
  else {
    pcVar7 = (char *)http_buf_getptr(iVar12,0);
    sprintf(pcVar7,"%s\n",local_30b0);
    sVar4 = strlen(pcVar7);
    *(size_t *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + sVar4;
    sVar4 = strlen(pcVar7);
    http_buf_incrpos(iVar12,sVar4);
    FUN_0040e1f4(param_1);
  }
  goto LAB_0040f64c;
}



void http_cgi_gdpr_init(void)

{
  http_alias_addEntryByArg(2,"/cgi_gdpr",0,http_cgi_gdpr_main,g_http_author_default);
  http_rsa_KeyInit();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int comp2String(char *param_1,char *param_2)

{
  int iVar1;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    fputs("CompString HTTP_ERROR\n",_stderr);
    iVar1 = -1;
  }
  else {
    iVar1 = strcmp(param_1,param_2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 updateString(void *param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) {
    fputs("updateString  Error \n",_stderr);
    uVar1 = 0xffffffff;
  }
  else {
    memset(param_1,0,param_3);
    memcpy(param_1,param_2,param_3);
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 gdpr_cleanOutBuff(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (puVar1 = *(undefined4 **)(param_1 + 0x1c), puVar1 == (undefined4 *)0x0)) {
    fputs("gdpr_cleanOutBuff   Error \n",_stderr);
    uVar2 = 0xffffffff;
  }
  else {
    puVar1[3] = 0;
    puVar1[1] = 0;
    memset((void *)*puVar1,0,puVar1[2]);
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040f9e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (puVar1 = *(undefined4 **)(param_1 + 0x18), puVar1 == (undefined4 *)0x0)) {
    fputs("gdpr_cleanInBuff   Error \n",_stderr);
    uVar2 = 0xffffffff;
  }
  else {
    puVar1[3] = 0;
    puVar1[1] = 0;
    memset((void *)*puVar1,0,puVar1[2]);
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 gdpr_cleanBuff(int param_1)

{
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = gdpr_cleanOutBuff(), iVar1 == 0)) &&
     (iVar1 = FUN_0040f9e0(param_1), iVar1 == 0)) {
    return 0;
  }
  fputs("gdpr_cleanBuff  Error \n",_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040fad0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = gdpr_cleanBuff(), iVar1 == 0)) {
    memset((void *)(param_1 + 0x20),0,0x21);
    memset((void *)(param_1 + 0x41),0,0x21);
    memset((void *)(param_1 + 0x62),0,0x21);
    memset((void *)(param_1 + 0x88),0,0x21);
    memset((void *)(param_1 + 0xa9),0,0x21);
    memset((void *)(param_1 + 0xca),0,0x21);
    memset((void *)(param_1 + 0xf0),0,0x21);
    return 0;
  }
  fputs("gdpr_cleanData  Error \n",_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040fbf0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    fputs("updateSeq  Error \n",_stderr);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040fc38(int param_1)

{
  int iVar1;
  char *__s;
  
  if (param_1 == 0) {
    __s = "updateHash  Error \n";
  }
  else {
    iVar1 = updateString(param_1 + 0x62,param_1 + 0xca,0x21);
    if (iVar1 == 0) {
      return 0;
    }
    __s = "updateSeq  Error \n";
  }
  fputs(__s,_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040fcac(int param_1)

{
  int iVar1;
  char *__s;
  
  if (param_1 == 0) {
    __s = "updateKeyAndIv  Error \n";
  }
  else {
    iVar1 = updateString(param_1 + 0x20,param_1 + 0x88,0x21);
    if ((iVar1 == 0) && (iVar1 = updateString(param_1 + 0x41,param_1 + 0xa9,0x21), iVar1 == 0)) {
      return 0;
    }
    __s = "updateSeq  Error \n";
  }
  fputs(__s,_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040fd40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar1 = http_buf_new(0xc00);
    param_1[6] = uVar1;
    uVar1 = http_buf_new(0x800);
    param_1[7] = uVar1;
    param_1[0x3b] = 0;
    param_1[0x45] = 0;
    iVar2 = FUN_0040fad0(param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  fputs("gdpr_initial  Error \n",_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040fdf0(int param_1)

{
  int iVar1;
  char *__s;
  
  if (param_1 == 0) {
    __s = "gdpr_destory  Error \n";
  }
  else {
    iVar1 = FUN_0040fad0();
    if (iVar1 == 0) {
      http_buf_free(*(undefined4 *)(param_1 + 0x18));
      http_buf_free(*(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x114) = 0;
      return 0;
    }
    __s = "gdpr_initial  Error \n";
  }
  fputs(__s,_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040fe90(undefined4 *param_1)

{
  void *__s;
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    __s = malloc(0x118);
    *param_1 = __s;
    if (__s != (void *)0x0) {
      memset(__s,0,0x118);
      iVar1 = FUN_0040fd40(*param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  fputs("gdpr_initial_ptr  Error \n",_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040ff2c(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (iVar1 = FUN_0040fdf0(*param_1), iVar1 == 0)) {
    memset((void *)*param_1,0,0x118);
    free((void *)*param_1);
    *param_1 = 0;
    return 0;
  }
  fputs("gdpr_destory_ptr  Error \n",_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040ffc4(void)

{
  int iVar1;
  
  DAT_00440d00 = malloc(0x118);
  if ((DAT_00440d00 != (void *)0x0) && (iVar1 = FUN_0040fd40(DAT_00440d00), iVar1 != -1)) {
    return 0;
  }
  fputs("gdpr_genSystemGDPREntry  Error \n",_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 gdpr_getSystemGDPREntry(int *param_1)

{
  if (param_1 == (int *)0x0) {
    fputs("gdpr_getSystemGDPREntry  Error \n",_stderr);
  }
  else {
    if (DAT_00440d00 != 0) {
      *param_1 = DAT_00440d00;
      return 0;
    }
    puts("gdpr_getSystemGDPREntry Error");
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 gdpr_getNewSystemGDPREntry(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (iVar1 = FUN_0040ffc4(), iVar1 != -1)) {
    *param_1 = DAT_00440d00;
    puts("gdpr_getNewSystemGDPREntry OK");
    return 0;
  }
  fputs("gdpr_getNewSystemGDPREntry  Error \n",_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 gdpr_releaseSystemGDPREntry(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_00440d00 != (void *)0x0) {
    iVar1 = FUN_0040fdf0();
    if (iVar1 == 0) {
      free(DAT_00440d00);
      DAT_00440d00 = (void *)0x0;
    }
    else {
      uVar2 = 0xffffffff;
      fputs("gdpr_destory_ptr  Error \n",_stderr);
    }
  }
  return uVar2;
}



undefined4 updateSystemGDPREntry(void)

{
  int iVar1;
  
  if ((((DAT_00440d00 != 0) && (iVar1 = FUN_0040fcac(), iVar1 != -1)) &&
      (iVar1 = FUN_0040fc38(DAT_00440d00), iVar1 != -1)) &&
     (iVar1 = updateString(DAT_00440d00 + 0xf0,DAT_00440d00 + 0xa9,0x21), iVar1 != -1)) {
    return 0;
  }
  puts("updateSystemGDPREntry Error");
  return 0xffffffff;
}



int FUN_00410270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_fd0;
  undefined4 local_fcc;
  undefined4 local_fc8;
  undefined2 local_fc4;
  undefined2 local_fc2;
  undefined2 local_fc0;
  undefined2 local_fbe;
  undefined2 local_fbc;
  undefined2 local_fba;
  undefined2 local_fb8;
  char acStack_fb4 [4008];
  
  local_fc4 = 0;
  local_fc2 = 0;
  local_fc0 = 0;
  local_fbe = 0;
  local_fbc = 0;
  local_fba = 0;
  local_fb8 = 0;
  local_fc8 = 0;
  local_fcc = 0;
  local_fd0 = 0;
  memset(acStack_fb4,0,4000);
  strcpy(acStack_fb4,"adminName\nadminPwd\n");
  iVar1 = rdp_getObj(0,"USER_CFG",&local_fc4,acStack_fb4);
  if (iVar1 == 0) {
    uVar2 = http_parser_argIllustrate(acStack_fb4,10,&local_fc8,&local_fcc);
    http_parser_argIllustrate(uVar2,10,&local_fc8,&local_fd0);
    iVar1 = comp2String(param_3,local_fd0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  memset(acStack_fb4,0,4000);
  strcpy(acStack_fb4,"userName\nuserPwd\n");
  iVar1 = rdp_getObj(0,"USER_CFG",&local_fc4,acStack_fb4);
  iVar3 = -1;
  if (iVar1 == 0) {
    uVar2 = http_parser_argIllustrate(acStack_fb4,10,&local_fc8,&local_fcc);
    http_parser_argIllustrate(uVar2,10,&local_fc8,&local_fd0);
    iVar1 = comp2String(param_3,local_fd0);
    iVar3 = (iVar1 == 0) - 1;
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int http_rpm_getParm(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  undefined4 uVar5;
  int *piVar6;
  char *local_fd0;
  char *local_fcc;
  char local_fc8 [12];
  char acStack_fbc [4008];
  
  memset(acStack_fbc,0,4000);
  local_fcc = (char *)0x0;
  local_fd0 = (char *)0x0;
  local_fc8[0] = '\0';
  local_fc8[1] = '\0';
  local_fc8[2] = '\0';
  local_fc8[3] = '\0';
  local_fc8[4] = '\0';
  local_fc8[5] = '\0';
  local_fc8[6] = '\0';
  local_fc8[7] = '\0';
  local_fc8[8] = '\0';
  local_fc8[9] = '\0';
  local_fc8[10] = 0;
  iVar1 = http_rsa_getPubKey(&local_fcc,&local_fd0,0x200);
  if ((((iVar1 == 0) && (local_fcc != (char *)0x0)) && (*local_fcc != '\0')) &&
     ((local_fd0 != (char *)0x0 && (*local_fd0 != '\0')))) {
    uVar5 = http_seq_getRandSeq();
    iVar1 = sprintf(acStack_fbc,"var ee=\"%s\";\n",local_fcc);
    pcVar3 = acStack_fbc + iVar1;
    iVar1 = sprintf(pcVar3,"var nn=\"%s\";\n",local_fd0);
    sprintf(local_fc8,"%u",uVar5);
    iVar2 = sprintf(pcVar3 + iVar1,"var seq=\"%s\";\n",local_fc8);
    pcVar3 = pcVar3 + iVar1 + iVar2;
    uVar5 = 0;
  }
  else {
    fprintf(_stderr,"%s(): Get public key failed.\n","http_rpm_getParm");
    uVar5 = 0xffffffff;
    pcVar3 = acStack_fbc;
  }
  sprintf(pcVar3,"$.ret=%d;\n",uVar5);
  piVar6 = *(int **)(param_1 + 0x84);
  if (((piVar6 == (int *)0x0) || (*piVar6 != 1)) ||
     (pcVar3 = strstr(*(char **)(param_1 + 0xc),"/cgi_gdpr"), pcVar3 == (char *)0x0)) {
    iVar1 = http_io_output(param_1,acStack_fbc);
    iVar1 = -(uint)(iVar1 == -1);
  }
  else {
    pcVar3 = (char *)http_buf_getptr(piVar6[7],0);
    sVar4 = strlen(acStack_fbc);
    strncpy(pcVar3,acStack_fbc,sVar4);
    iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
    sVar4 = strlen(acStack_fbc);
    *(size_t *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + sVar4;
    sVar4 = strlen(acStack_fbc);
    http_buf_incrpos(iVar1,sVar4);
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_rpm_login(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  size_t sVar4;
  char *__format;
  undefined4 uVar5;
  int iVar6;
  char acStack_fb8 [4004];
  
  memset(acStack_fb8,0,4000);
  pcVar1 = (char *)http_parser_getEnv("password");
  pcVar2 = (char *)http_parser_getEnv("username");
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "NULL";
    }
    __format = "%s() %d pConPwd %s.\n";
    uVar5 = 200;
    pcVar2 = pcVar1;
LAB_004107d8:
    fprintf(_stderr,__format,"http_rpm_login",uVar5,pcVar2);
LAB_004107ec:
    uVar5 = 0x11642;
  }
  else {
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      if (pcVar2 == (char *)0x0) {
        pcVar2 = "NULL";
      }
      __format = "%s() %d pConName %s.\n";
      uVar5 = 0xd0;
      goto LAB_004107d8;
    }
    iVar6 = FUN_00410270(param_1,pcVar2,pcVar1);
    if (iVar6 != 0) {
      fprintf(_stderr,"%s() %d checkNamePassword.\n","http_rpm_login",0xd8);
      goto LAB_004107ec;
    }
    iVar6 = aes_set_KeyandIv(*(int *)(param_1 + 0x84) + 0x88,*(int *)(param_1 + 0x84) + 0xa9);
    if (iVar6 == 0) {
      http_auth_doAuth_login(pcVar2,pcVar1,param_1);
      iVar6 = *(int *)(param_1 + 0x84);
      *(undefined4 *)(iVar6 + 4) = 2;
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(param_1 + 0x34);
      updateSystemGDPREntry();
      iVar6 = *(int *)(param_1 + 0x84);
      uVar5 = http_seq_getSeq();
      *(undefined4 *)(iVar6 + 0x84) = uVar5;
      iVar6 = http_session_setEntry(param_1);
      if (iVar6 == 0) {
        sprintf(acStack_fb8,"$.ret=%d;\n",0);
        uVar5 = 0;
        sVar4 = strlen(acStack_fb8);
        *(size_t *)(param_1 + 0x18) = sVar4;
        http_session_genHeader(param_1);
        goto LAB_004109a8;
      }
      fprintf(_stderr,"%s() %d http_session_setEntry failed.\n","http_rpm_login",0xed);
    }
    else {
      fputs("pAesKey : Error  \n",_stderr);
    }
    uVar5 = 0xffffffff;
  }
  g_http_authUsrInfo = g_http_authUsrInfo + '\x01';
  http_seq_genSeq(0x10);
  sprintf(acStack_fb8,"$.ret=%d;\n",uVar5);
LAB_004109a8:
  piVar3 = *(int **)(param_1 + 0x84);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
    iVar6 = http_io_output(param_1,acStack_fb8);
    if (iVar6 == -1) {
      uVar5 = 0xffffffff;
    }
  }
  else {
    pcVar2 = (char *)http_buf_getptr(piVar3[7],0);
    sVar4 = strlen(acStack_fb8);
    strncpy(pcVar2,acStack_fb8,sVar4);
    iVar6 = *(int *)(*(int *)(param_1 + 0x84) + 0x1c);
    sVar4 = strlen(acStack_fb8);
    *(size_t *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + sVar4;
    sVar4 = strlen(acStack_fb8);
    http_buf_incrpos(iVar6,sVar4);
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00410aa0(int param_1)

{
  void *__ptr;
  void *pvVar1;
  size_t __size;
  
  __size = ((int)(((uint)(param_1 >> 0x1f) >> 0x1e) + param_1) >> 2) + 1;
  DAT_0042b320 = param_1;
  __ptr = malloc(__size);
  DAT_00440d10 = __ptr;
  if (__ptr != (void *)0x0) {
    pvVar1 = malloc(__size);
    DAT_00440d14 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      DAT_00440d18 = malloc(__size);
      if (DAT_00440d18 != (void *)0x0) {
        rsa_gdpr_generate_key(param_1,__ptr,pvVar1,DAT_00440d18);
        return 0;
      }
      free(__ptr);
      __ptr = pvVar1;
    }
    free(__ptr);
  }
  fputs("Malloc RSA key buffer failed!\n",_stderr);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00410bd8(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  RSA *r;
  int iVar2;
  
  sVar1 = strlen(param_1);
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    fputs("the input or output is NULL \n",_stderr);
  }
  else {
    r = RSA_new();
    rsa_initial_key(DAT_00440d10,DAT_00440d14,DAT_00440d18,r);
    iVar2 = rsa_tmp_encrypt_bypart(param_1,sVar1,param_2,param_3,r,param_4,DAT_0042b320);
    if (-1 < iVar2) {
      RSA_free(r);
      return 0;
    }
    RSA_free(r);
    fprintf(_stderr,"http_rsa_encrypt %s failed!\n",param_1);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_rsa_decrypt(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  RSA *r;
  int iVar2;
  
  sVar1 = strlen(param_1);
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    fputs("the input or output is NULL \n",_stderr);
  }
  else {
    r = RSA_new();
    rsa_initial_key(DAT_00440d10,DAT_00440d14,DAT_00440d18,r);
    iVar2 = rsa_tmp_decrypt_bypart(param_1,sVar1,param_2,param_3,r,param_4,DAT_0042b320);
    if (-1 < iVar2) {
      RSA_free(r);
      return 0;
    }
    RSA_free(r);
    fprintf(_stderr,"http_rsa_decrypt %s failed!\n",param_1);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_rsa_KeyInit(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00410aa0(0x200);
  uVar2 = 0;
  if (iVar1 != 0) {
    fputs("http_rsa_genKeys init failed!\n",_stderr);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_rsa_getPubKey(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_00440d10 == 0) || (param_3 != DAT_0042b320)) &&
     (iVar1 = FUN_00410aa0(param_3), iVar1 != 0)) {
    fputs("http_rsa_getPubKey generate keys failed!\n",_stderr);
    uVar2 = 0xffffffff;
  }
  else {
    *param_1 = DAT_00440d14;
    *param_2 = DAT_00440d10;
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00410f90(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((DAT_00440d10 == 0) && (iVar1 = FUN_00410aa0(param_4), iVar1 != 0)) {
    fputs("http_rsa_getAllKey generate keys failed!\n",_stderr);
    return 0xffffffff;
  }
  *param_1 = DAT_00440d14;
  *param_2 = DAT_00440d10;
  *param_3 = DAT_00440d18;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00411040(void)

{
  void *__s;
  void *__s_00;
  undefined4 uVar1;
  
  __s = malloc(0x20);
  DAT_00440d20 = __s;
  __s_00 = malloc(0x20);
  DAT_00440d24 = __s_00;
  if ((__s == (void *)0x0) || (__s_00 == (void *)0x0)) {
    fputs("l_pKey or l_pV  is NULL \n",_stderr);
    uVar1 = 0xffffffff;
  }
  else {
    memset(__s,0,0x20);
    memset(__s_00,0,0x20);
    memcpy(__s,l_key,0x20);
    memcpy(__s_00,l_v,0x20);
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 aes_getKey(void *param_1,void *param_2)

{
  void *__src;
  undefined4 uVar1;
  
  __src = DAT_00440d24;
  if ((DAT_00440d20 == (void *)0x0) || (DAT_00440d24 == (void *)0x0)) {
    fputs("aes_getKey failed ",_stderr);
    uVar1 = 0xffffffff;
  }
  else {
    memcpy(param_1,DAT_00440d20,0x20);
    memcpy(param_2,__src,0x20);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 aes_free_KeyandIv(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_00440d20;
  if (DAT_00440d20 != (void *)0x0) {
    memset(DAT_00440d20,0,0x20);
    free(pvVar1);
    DAT_00440d20 = (void *)0x0;
  }
  pvVar1 = DAT_00440d24;
  if (DAT_00440d24 != (void *)0x0) {
    memset(DAT_00440d24,0,0x20);
    free(pvVar1);
    DAT_00440d24 = (void *)0x0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 aes_set_KeyandIv(void *param_1,void *param_2)

{
  int iVar1;
  void *__s;
  void *__s_00;
  
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) &&
     (iVar1 = aes_free_KeyandIv(), iVar1 == 0)) {
    __s = malloc(0x20);
    DAT_00440d20 = __s;
    __s_00 = malloc(0x20);
    DAT_00440d24 = __s_00;
    if ((__s != (void *)0x0) && (__s_00 != (void *)0x0)) {
      memset(__s,0,0x20);
      memset(__s_00,0,0x20);
      memcpy(__s,param_1,0x20);
      memcpy(__s_00,param_2,0x20);
      return 0;
    }
  }
  fputs("Error aes_set_KeyandIv !!!\n",_stderr);
  return 0xffffffff;
}



int aes_enBufToFile(char *param_1,void *param_2,size_t param_3,undefined4 param_4,void *param_5,
                   char *param_6,size_t param_7)

{
  bool bVar1;
  FILE *__s;
  size_t sVar2;
  int iVar3;
  uint __n;
  code *pcVar4;
  size_t local_790;
  undefined1 auStack_78c [36];
  undefined1 auStack_768 [404];
  char local_5d4 [404];
  undefined1 auStack_440 [1032];
  undefined1 *local_38;
  undefined1 *local_34;
  size_t local_30;
  
  memset(local_5d4,0,0x191);
  local_38 = auStack_768;
  memset(local_38,0,0x191);
  memset(auStack_440,0,0x401);
  local_34 = auStack_78c;
  memset(local_34,0,0x21);
  local_790 = 0;
  __s = fopen(param_1,"w");
  if (__s == (FILE *)0x0) {
    printf("open %s fail\n",param_1);
    iVar3 = -1;
  }
  else {
    memcpy(auStack_78c,param_5,0x20);
    iVar3 = 0;
    for (; 0x180 < (int)param_3; param_3 = param_3 - 0x180) {
      local_5d4[0] = '\0';
      local_5d4[1] = '\0';
      local_5d4[2] = '\0';
      local_5d4[3] = '\0';
      local_5d4[4] = '\0';
      local_5d4[5] = '\0';
      local_5d4[6] = '\0';
      local_5d4[7] = '\0';
      local_5d4[8] = '\0';
      local_5d4[9] = '\0';
      local_5d4[10] = '\0';
      local_5d4[0xb] = '\0';
      local_5d4[0xc] = '\0';
      local_5d4[0xd] = '\0';
      local_5d4[0xe] = '\0';
      local_5d4[0xf] = '\0';
      local_5d4[0x10] = 0;
      memcpy(local_5d4,param_2,0x180);
      local_790 = 0x180;
      aes_cbc_encrypt_intface(local_5d4,auStack_768,&local_790,param_4,auStack_78c,1);
      local_30 = b64_encode(auStack_440,0x400,auStack_768,local_790);
      fwrite(auStack_440,local_30,1,__s);
      iVar3 = iVar3 + local_30;
      memset(auStack_440,0,0x400);
      param_2 = (void *)((int)param_2 + 0x180);
      memset(auStack_768,0,0x180);
    }
    if ((int)param_3 < 1) {
      bVar1 = param_7 < 0x181;
    }
    else {
      memset(local_5d4,0,0x180);
      memcpy(local_5d4,param_2,param_3);
      if (param_7 != 0) {
        __n = param_7;
        if (0x180 < param_3 + param_7) {
          __n = 0x180 - param_3;
        }
        strncat(local_5d4,param_6,__n);
        param_6 = param_6 + __n;
        param_7 = param_7 - __n;
        param_3 = param_3 + __n;
      }
      if (((int)param_3 < 0x180) || ((param_3 == 0x180 && (param_7 == 0)))) {
        pcVar4 = aes_tmp_encrypt_buf_nopadding_new;
      }
      else {
        pcVar4 = aes_cbc_encrypt_intface;
      }
      local_790 = param_3;
      (*pcVar4)(local_5d4,auStack_768,&local_790,param_4,auStack_78c);
      sVar2 = b64_encode(auStack_440,0x400,auStack_768,local_790);
      fwrite(auStack_440,sVar2,1,__s);
      iVar3 = iVar3 + sVar2;
      memset(auStack_440,0,0x401);
      memset(auStack_768,0,0x180);
      bVar1 = param_7 < 0x181;
    }
    while( true ) {
      if (bVar1) break;
      memset(local_5d4,0,0x180);
      memcpy(local_5d4,param_6,0x180);
      local_790 = 0x180;
      aes_cbc_encrypt_intface(local_5d4,auStack_768,&local_790,param_4,auStack_78c,1);
      sVar2 = b64_encode(auStack_440,0x400,auStack_768,0x180);
      fwrite(auStack_440,sVar2,1,__s);
      iVar3 = iVar3 + sVar2;
      memset(auStack_440,0,0x400);
      param_7 = param_7 - 0x180;
      memset(auStack_768,0,0x180);
      bVar1 = param_7 < 0x181;
      param_6 = param_6 + 0x180;
    }
    if (param_7 != 0) {
      memset(local_5d4,0,0x180);
      memcpy(local_5d4,param_6,param_7);
      local_790 = param_7;
      aes_tmp_encrypt_buf_nopadding_new(local_5d4,auStack_768,&local_790,param_4,auStack_78c);
      sVar2 = b64_encode(auStack_440,0x400,auStack_768,local_790);
      fwrite(auStack_440,sVar2,1,__s);
      iVar3 = iVar3 + sVar2;
    }
    fclose(__s);
  }
  return iVar3;
}



int aes_enBufToFile_ByArgList(char *param_1,undefined4 *param_2,undefined4 param_3,void *param_4)

{
  FILE *__s;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  size_t sVar5;
  int iVar6;
  code *pcVar7;
  uint local_790;
  undefined1 auStack_78c [36];
  undefined1 auStack_768 [404];
  char local_5d4 [404];
  undefined1 auStack_440 [1032];
  void *local_38;
  void *local_34;
  size_t local_30;
  
  local_34 = param_4;
  memset(local_5d4,0,0x191);
  memset(auStack_768,0,0x191);
  memset(auStack_440,0,0x401);
  memset(auStack_78c,0,0x21);
  local_790 = 0;
  piVar4 = (int *)*param_2;
  __s = fopen(param_1,"w");
  if (__s == (FILE *)0x0) {
    printf("open %s fail\n",param_1);
    iVar1 = -1;
  }
  else {
    memcpy(auStack_78c,local_34,0x20);
    iVar1 = 0;
    while (piVar4 != (int *)0x0) {
      local_38 = (void *)piVar4[2];
      for (sVar5 = piVar4[3]; 0x180 < sVar5; sVar5 = sVar5 - 0x180) {
        local_5d4[0] = '\0';
        local_5d4[1] = '\0';
        local_5d4[2] = '\0';
        local_5d4[3] = '\0';
        local_5d4[4] = '\0';
        local_5d4[5] = '\0';
        local_5d4[6] = '\0';
        local_5d4[7] = '\0';
        local_5d4[8] = '\0';
        local_5d4[9] = '\0';
        local_5d4[10] = '\0';
        local_5d4[0xb] = '\0';
        local_5d4[0xc] = '\0';
        local_5d4[0xd] = '\0';
        local_5d4[0xe] = '\0';
        local_5d4[0xf] = '\0';
        local_5d4[0x10] = 0;
        memcpy(local_5d4,local_38,0x180);
        local_790 = 0x180;
        aes_cbc_encrypt_intface(local_5d4,auStack_768,&local_790,param_3,auStack_78c,1);
        local_30 = b64_encode(auStack_440,0x400,auStack_768,0x180);
        fwrite(auStack_440,local_30,1,__s);
        local_38 = (void *)((int)local_38 + 0x180);
        iVar1 = iVar1 + local_30;
        memset(auStack_440,0,0x400);
        memset(auStack_768,0,0x180);
      }
      if (sVar5 == 0) {
        piVar4 = (int *)*piVar4;
      }
      else {
        memset(local_5d4,0,0x180);
        memcpy(local_5d4,local_38,sVar5);
        piVar3 = (int *)*piVar4;
        local_790 = sVar5;
        if ((int *)*piVar4 == (int *)0x0) {
          aes_tmp_encrypt_buf_nopadding_new(local_5d4,auStack_768,&local_790,param_3,auStack_78c);
          sVar5 = b64_encode(auStack_440,0x400,auStack_768,local_790);
          fwrite(auStack_440,sVar5,1,__s);
          iVar1 = iVar1 + sVar5;
          break;
        }
        while( true ) {
          do {
            piVar4 = piVar3;
            local_34 = (void *)piVar4[2];
            iVar6 = piVar4[3];
            local_30 = sVar5;
            sVar5 = strlen(local_5d4);
            if (0x180 < sVar5 + iVar6) {
              iVar6 = 0x180 - sVar5;
            }
            if (local_5d4[0] == '\0') {
              pcVar7 = memcpy;
            }
            else {
              pcVar7 = strncat;
            }
            (*pcVar7)(local_5d4,local_34,iVar6);
            piVar4[2] = piVar4[2] + iVar6;
            iVar2 = piVar4[3];
            sVar5 = local_30 + iVar6;
            piVar4[3] = iVar2 - iVar6;
            piVar3 = (int *)*piVar4;
            local_790 = sVar5;
          } while ((sVar5 < 0x180) && (piVar3 != (int *)0x0));
          if (piVar3 != (int *)0x0) break;
          if (iVar2 - iVar6 == 0) {
            aes_tmp_encrypt_buf_nopadding_new(local_5d4,auStack_768,&local_790,param_3);
            sVar5 = b64_encode(auStack_440,0x400,auStack_768,local_790);
            piVar4 = (int *)*piVar4;
          }
          else {
            aes_cbc_encrypt_intface(local_5d4,auStack_768,&local_790,param_3,auStack_78c,1);
            sVar5 = b64_encode(auStack_440,0x400,auStack_768,local_790);
          }
          fwrite(auStack_440,sVar5,1,__s);
          iVar1 = iVar1 + sVar5;
          memset(auStack_440,0,0x401);
          memset(auStack_768,0,0x180);
          memset(local_5d4,0,0x180);
          sVar5 = 0;
          piVar3 = piVar4;
          if (piVar4 == (int *)0x0) goto LAB_00411e68;
        }
        aes_cbc_encrypt_intface(local_5d4,auStack_768,&local_790,param_3,auStack_78c,1);
        sVar5 = b64_encode(auStack_440,0x400,auStack_768,local_790);
        fwrite(auStack_440,sVar5,1,__s);
        iVar1 = iVar1 + sVar5;
        memset(auStack_440,0,0x401);
        memset(auStack_768,0,0x180);
        memset(local_5d4,0,0x180);
      }
    }
LAB_00411e68:
    fclose(__s);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 aes_argList_add(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)malloc(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    fputs("malloc is null ",_stderr);
    uVar2 = 0xffffffff;
  }
  else {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    *puVar1 = 0;
    puVar1[1] = 0;
    if (puVar3 == (undefined4 *)0x0) {
      *param_1 = puVar1;
    }
    else {
      do {
        puVar4 = puVar3;
        puVar3 = (undefined4 *)*puVar4;
      } while ((undefined4 *)*puVar4 != (undefined4 *)0x0);
      *puVar4 = puVar1;
      puVar1[1] = puVar4;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 aes_argList_flush(undefined4 *param_1)

{
  undefined4 uVar1;
  int *__ptr;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if ((int *)*param_1 == (int *)0x0) {
    fputs("aes_argList_add Error pAesArgsList is null!",_stderr);
    uVar1 = 0xffffffff;
  }
  else {
    do {
      __ptr = piVar2;
      piVar2 = (int *)*__ptr;
    } while ((int *)*__ptr != (int *)0x0);
    while( true ) {
      piVar2 = (int *)__ptr[1];
      uVar1 = 0;
      if (piVar2 == (int *)0x0) break;
      free(__ptr);
      __ptr = piVar2;
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_00412000(size_t param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
    fputs("m_malloc failed",_stderr);
  }
  else {
    pvVar1 = calloc(1,param_1);
    if (pvVar1 == (void *)0x0) {
      fputs("m_malloc failed",_stderr);
    }
  }
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * http_buf_new(uint param_1)

{
  void *__s;
  undefined4 *puVar1;
  
  if (param_1 < 0x8001) {
    puVar1 = (undefined4 *)FUN_00412000(0x10);
    if (param_1 == 0) {
      *puVar1 = 0;
      puVar1[2] = 0;
    }
    else {
      __s = (void *)FUN_00412000(param_1);
      *puVar1 = __s;
      memset(__s,0,param_1);
      puVar1[2] = param_1;
    }
    puVar1[1] = 0;
    puVar1[3] = 0;
  }
  else {
    puVar1 = (undefined4 *)0x0;
    fputs("buf->size too big",_stderr);
  }
  return puVar1;
}



void http_buf_free(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  memset((void *)*param_1,0,param_1[2]);
  param_1[2] = 0;
  free((void *)*param_1);
  *param_1 = 0;
                    // WARNING: Could not recover jumptable at 0x004121d8. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 http_buf_incrpos(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (((param_2 < 0x8001) &&
      (uVar2 = param_2 + *(int *)(param_1 + 4), uVar2 <= *(uint *)(param_1 + 0xc))) &&
     (-1 < (int)uVar2)) {
    *(uint *)(param_1 + 4) = uVar2;
    uVar1 = 0;
  }
  else {
    fputs("Bad buf_incrpos",_stderr);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int http_buf_getptr(int *param_1,int param_2)

{
  int iVar1;
  
  if ((uint)param_1[3] < (uint)(param_2 + param_1[1])) {
    fputs("Bad buf_getptr",_stderr);
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1 + param_1[1];
  }
  return iVar1;
}



uint FUN_004123b8(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  pbVar4 = (byte *)http_buf_getptr(param_1,4);
  bVar1 = *pbVar4;
  iVar5 = http_buf_getptr(param_1,4);
  bVar2 = *(byte *)(iVar5 + 1);
  iVar5 = http_buf_getptr(param_1,4);
  bVar3 = *(byte *)(iVar5 + 2);
  iVar5 = http_buf_getptr(param_1,4);
  uVar6 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)*(byte *)(iVar5 + 3) | (uint)bVar3 << 8;
  printf("ret: %d \n",uVar6);
  http_buf_incrpos(param_1,4);
  return uVar6;
}



int str2num(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (byte *)0x0) {
    while( true ) {
      bVar1 = *param_1;
      if (bVar1 == 0) break;
      param_1 = param_1 + 1;
      iVar2 = iVar2 * 10 + -0x30 + (uint)bVar1;
    }
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint http_seq_genSeq(uint param_1)

{
  int __fd;
  uint local_18 [3];
  
  local_18[0] = 0;
  __fd = open("/dev/urandom",0);
  if (__fd == -1) {
    fputs("open /dev/urandom error \n",_stderr);
    local_18[0] = 0xffffffff;
  }
  else {
    read(__fd,local_18,4);
    close(__fd);
    local_18[0] = local_18[0] % param_1;
    if (param_1 == 0) {
      trap(0x1c00);
    }
  }
  return local_18[0];
}



int http_seq_getRandSeq(void)

{
  DAT_00440d30 = http_seq_genSeq(0x40000000);
  if (DAT_00440d30 == 0) {
    DAT_00440d30 = DAT_0042b340;
  }
  return DAT_00440d30;
}



undefined4 http_seq_getSeq(void)

{
  return DAT_00440d30;
}



undefined4 FUN_004125d0(char *param_1,int param_2)

{
  int __fd;
  ssize_t sVar1;
  undefined4 uVar2;
  int iVar3;
  char *__s;
  byte local_28 [12];
  
  local_28[0] = 0;
  uVar2 = 0xffffffff;
  if (param_1 != (char *)0x0) {
    __fd = open("/dev/urandom",0);
    if (__fd < 0) {
      perror("Open urandom");
    }
    else {
      __s = param_1;
      for (iVar3 = 0; iVar3 < (param_2 + -1) / 2; iVar3 = iVar3 + 1) {
        sVar1 = read(__fd,local_28,1);
        if (sVar1 < 0) {
          perror("Read urandom");
          return 0xffffffff;
        }
        sprintf(__s,"%02x",(uint)local_28[0]);
        __s = __s + 2;
      }
      param_1[iVar3 * 2] = '\0';
      uVar2 = 0;
      close(__fd);
    }
  }
  return uVar2;
}



undefined4 http_session_genHeader(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined2 local_14;
  
  iVar2 = *param_1;
  local_18 = 0;
  local_14 = 0;
  uVar1 = 0xffffffff;
  if (param_1[0xb] != 1) {
    fprintf(*(FILE **)(iVar2 + 0x101c),"HTTP/1.1 %d %s\r\n",200,&DAT_00413c50);
    http_parser_get_charset(&local_18);
    fprintf(*(FILE **)(iVar2 + 0x101c),"Content-Type: %s; charset=%s\r\n",
            *(undefined4 *)(param_1[0xf] + 4),&local_18);
    if (param_1[8] == 1) {
      fputs("Transfer-Encoding: chunked\r\n",*(FILE **)(iVar2 + 0x101c));
    }
    else {
      fprintf(*(FILE **)(iVar2 + 0x101c),"Content-Length: %d\r\n",param_1[6]);
    }
    if ((char)param_1[0x11] != '\0') {
      fprintf(*(FILE **)(*param_1 + 0x101c),"Set-Cookie: JSESSIONID=%s; Path=/; HttpOnly\r\n",
              param_1 + 0x11);
    }
    fputs("Connection: keep-alive\r\n",*(FILE **)(iVar2 + 0x101c));
    if ((char *)param_1[10] != (char *)0x0) {
      fprintf(*(FILE **)(iVar2 + 0x101c),(char *)param_1[10]);
    }
    fputs("\r\n",*(FILE **)(iVar2 + 0x101c));
    param_1[0xb] = 1;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 http_session_setEntry(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004125d0(&DAT_0044122c,0x20);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = FUN_004125d0(&DAT_0044124c,0x20);
    if (iVar1 == 0) {
      httpClient = *(undefined4 *)(param_1 + 0x34);
      cstr_strncpy(param_1 + 0x44,&DAT_0044122c,0x20);
      uVar2 = 0;
      cstr_strncpy(param_1 + 100,&DAT_0044124c,0x20);
    }
  }
  return uVar2;
}



bool FUN_0041293c(void)

{
  return DAT_0044122c != '\0' && DAT_0044124c != '\0';
}



undefined4 http_session_doSession(char *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = strncmp(param_1,&DAT_0044122c,0x20);
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x34) = httpClient;
      cstr_strncpy(param_2 + 0x44,param_1,0x20);
    }
  }
  return 0;
}



undefined4 FUN_00412a00(char *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = strncmp(param_1,&DAT_0044124c,0x20);
    if (iVar1 == 0) {
      cstr_strncpy(param_2 + 100,&DAT_0044124c,0x20);
      return 0;
    }
  }
  memset((void *)(param_2 + 100),0,0x20);
  return 0xffffffff;
}



undefined4 http_session_init(void)

{
  memset(&httpClient,0,0x44);
  httpClient = 3;
  return 0;
}



undefined4 http_session_delEntry(int param_1)

{
  int iVar1;
  
  iVar1 = strncmp((char *)(param_1 + 0x44),&DAT_0044122c,0x20);
  if (iVar1 == 0) {
    http_session_init();
    memset((char *)(param_1 + 0x44),0,0x20);
  }
  return 0;
}



undefined4 FUN_00412b58(void)

{
  sleep(1);
  sleep(1);
  sleep(1);
  http_session_init();
  return 0;
}



void FUN_00412bc0(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_0042ae54; (code *)*puVar1 != (code *)0xffffffff; puVar1 = puVar1 + -1) {
    (*(code *)*puVar1)();
  }
  return;
}



void cnet_addrStrToNum(void)

{
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  FUN_00402da0();
  return;
}



void rsa_gdpr_generate_key(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void aes_tmp_encrypt_buf_nopadding_new(void)

{
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void rdp_getObj(void)

{
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pvVar1 = (void *)FUN_00402da0();
  return pvVar1;
}



void rdp_saveCfg(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void cstr_strncpy(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void cen_base64Encode(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  piVar1 = (int *)FUN_00402da0();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  sVar1 = FUN_00402da0();
  return sVar1;
}



void rdp_netChkIpInAllLanSubnet(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void rdp_updateFirmware(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pvVar1 = (void *)FUN_00402da0();
  return pvVar1;
}



void rsa_tmp_encrypt_bypart(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint sleep(uint __seconds)

{
  uint uVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  uVar1 = FUN_00402da0();
  return uVar1;
}



void cdbg_perror(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void rdp_action(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long atol(char *__nptr)

{
  long lVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  lVar1 = FUN_00402da0();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pvVar1 = (void *)FUN_00402da0();
  return pvVar1;
}



void rdp_autoPvc_startSearch(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



void cdbg_printf(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void rdp_getConfigBufSize(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  sVar1 = FUN_00402da0();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  sVar1 = FUN_00402da0();
  return sVar1;
}



void msg_recv(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int stat(char *__file,stat *__buf)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  lVar1 = FUN_00402da0();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void os_getMacByIp(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void aes_tmp_decrypt_buf_nopadding_new(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void rdp_getNextObjStruct(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  sVar1 = FUN_00402da0();
  return sVar1;
}



void rsa_initial_key(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pFVar1 = (FILE *)FUN_00402da0();
  return pFVar1;
}



void cmem_getUpdateBufSize(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  _Var1 = FUN_00402da0();
  return _Var1;
}



void rdp_destroyObj(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void rdp_setObj(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void rdp_configBufFree(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pvVar1 = (void *)FUN_00402da0();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pclose(FILE *__stream)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  sVar1 = FUN_00402da0();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pFVar1 = (FILE *)FUN_00402da0();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  tVar1 = FUN_00402da0();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

RSA * RSA_new(void)

{
  RSA *pRVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pRVar1 = (RSA *)FUN_00402da0();
  return pRVar1;
}



void rdp_getObjStruct(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void rdp_createObj(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void rsa_tmp_decrypt_bypart(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void rdp_configBufAlloc(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

longlong atoll(char *__nptr)

{
  int unaff_gp;
  longlong lVar1;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  lVar1 = FUN_00402da0();
  return lVar1;
}



void os_semVTake(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setpriority(__priority_which_t __which,id_t __who,int __prio)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void RSA_free(RSA *r)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void cnet_macStrToEth(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void rdp_backupCfg(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void cmmlog(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void aes_cbc_encrypt_intface(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pvVar1 = (void *)FUN_00402da0();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void dm_shmInit(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  (*(code *)(undefined *)0x0)();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void rdp_getNextObj(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void os_getSysUpTime(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void rdp_restoreCfg(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void cnet_macToStr(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void msg_srvInit(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



void msg_init(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void os_semVGive(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void cmem_updateFirmwareBufAlloc(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



void cnet_addrNumToStr(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int listen(int __fd,int __n)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void rdp_getNextObjSub(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pFVar1 = (FILE *)FUN_00402da0();
  return pFVar1;
}



void rdp_getParamValue(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  p_Var1 = (__sighandler_t)FUN_00402da0();
  return p_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



void cmem_updateFirmwareBufFree(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
  int iVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  iVar1 = FUN_00402da0();
  return iVar1;
}



void os_semVGet(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00402da0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  pcVar1 = (char *)FUN_00402da0();
  return pcVar1;
}



void _fini(void)

{
  FUN_00402da0();
  return;
}


