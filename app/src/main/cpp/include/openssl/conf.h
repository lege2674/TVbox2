/*
 * WARNING: do not edit!
 * Generated by Makefile from openssl-3.1.4/include/openssl/conf.h.in
 *
 * Copyright 1995-2022 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */



#ifndef  OPENSSL_CONF_H
# define OPENSSL_CONF_H
# pragma once

# include <openssl/macros.h>
# ifndef OPENSSL_NO_DEPRECATED_3_0
#  define HEADER_CONF_H
# endif

# include <openssl/bio.h>
# include <openssl/lhash.h>
# include <openssl/safestack.h>
# include <openssl/e_os2.h>
# include <openssl/types.h>
# include <openssl/conferr.h>
# ifndef OPENSSL_NO_STDIO
#  include <stdio.h>
# endif

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct {
    char *section;
    char *name;
    char *value;
} CONF_VALUE;

SKM_DEFINE_STACK_OF_INTERNAL(CONF_VALUE, CONF_VALUE, CONF_VALUE)
#define sk_CONF_VALUE_num(sk) OPENSSL_sk_num(ossl_check_const_CONF_VALUE_sk_type(sk))
#define sk_CONF_VALUE_value(sk, idx) ((CONF_VALUE *)OPENSSL_sk_value(ossl_check_const_CONF_VALUE_sk_type(sk), (idx)))
#define sk_CONF_VALUE_new(cmp) ((STACK_OF(CONF_VALUE) *)OPENSSL_sk_new(ossl_check_CONF_VALUE_compfunc_type(cmp)))
#define sk_CONF_VALUE_new_null() ((STACK_OF(CONF_VALUE) *)OPENSSL_sk_new_null())
#define sk_CONF_VALUE_new_reserve(cmp, n) ((STACK_OF(CONF_VALUE) *)OPENSSL_sk_new_reserve(ossl_check_CONF_VALUE_compfunc_type(cmp), (n)))
#define sk_CONF_VALUE_reserve(sk, n) OPENSSL_sk_reserve(ossl_check_CONF_VALUE_sk_type(sk), (n))
#define sk_CONF_VALUE_free(sk) OPENSSL_sk_free(ossl_check_CONF_VALUE_sk_type(sk))
#define sk_CONF_VALUE_zero(sk) OPENSSL_sk_zero(ossl_check_CONF_VALUE_sk_type(sk))
#define sk_CONF_VALUE_delete(sk, i) ((CONF_VALUE *)OPENSSL_sk_delete(ossl_check_CONF_VALUE_sk_type(sk), (i)))
#define sk_CONF_VALUE_delete_ptr(sk, ptr) ((CONF_VALUE *)OPENSSL_sk_delete_ptr(ossl_check_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_type(ptr)))
#define sk_CONF_VALUE_push(sk, ptr) OPENSSL_sk_push(ossl_check_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_type(ptr))
#define sk_CONF_VALUE_unshift(sk, ptr) OPENSSL_sk_unshift(ossl_check_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_type(ptr))
#define sk_CONF_VALUE_pop(sk) ((CONF_VALUE *)OPENSSL_sk_pop(ossl_check_CONF_VALUE_sk_type(sk)))
#define sk_CONF_VALUE_shift(sk) ((CONF_VALUE *)OPENSSL_sk_shift(ossl_check_CONF_VALUE_sk_type(sk)))
#define sk_CONF_VALUE_pop_free(sk, freefunc) OPENSSL_sk_pop_free(ossl_check_CONF_VALUE_sk_type(sk),ossl_check_CONF_VALUE_freefunc_type(freefunc))
#define sk_CONF_VALUE_insert(sk, ptr, idx) OPENSSL_sk_insert(ossl_check_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_type(ptr), (idx))
#define sk_CONF_VALUE_set(sk, idx, ptr) ((CONF_VALUE *)OPENSSL_sk_set(ossl_check_CONF_VALUE_sk_type(sk), (idx), ossl_check_CONF_VALUE_type(ptr)))
#define sk_CONF_VALUE_find(sk, ptr) OPENSSL_sk_find(ossl_check_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_type(ptr))
#define sk_CONF_VALUE_find_ex(sk, ptr) OPENSSL_sk_find_ex(ossl_check_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_type(ptr))
#define sk_CONF_VALUE_find_all(sk, ptr, pnum) OPENSSL_sk_find_all(ossl_check_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_type(ptr), pnum)
#define sk_CONF_VALUE_sort(sk) OPENSSL_sk_sort(ossl_check_CONF_VALUE_sk_type(sk))
#define sk_CONF_VALUE_is_sorted(sk) OPENSSL_sk_is_sorted(ossl_check_const_CONF_VALUE_sk_type(sk))
#define sk_CONF_VALUE_dup(sk) ((STACK_OF(CONF_VALUE) *)OPENSSL_sk_dup(ossl_check_const_CONF_VALUE_sk_type(sk)))
#define sk_CONF_VALUE_deep_copy(sk, copyfunc, freefunc) ((STACK_OF(CONF_VALUE) *)OPENSSL_sk_deep_copy(ossl_check_const_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_copyfunc_type(copyfunc), ossl_check_CONF_VALUE_freefunc_type(freefunc)))
#define sk_CONF_VALUE_set_cmp_func(sk, cmp) ((sk_CONF_VALUE_compfunc)OPENSSL_sk_set_cmp_func(ossl_check_CONF_VALUE_sk_type(sk), ossl_check_CONF_VALUE_compfunc_type(cmp)))
DEFINE_LHASH_OF_INTERNAL(CONF_VALUE);
#define lh_CONF_VALUE_new(hfn, cmp) ((LHASH_OF(CONF_VALUE) *)OPENSSL_LH_new(ossl_check_CONF_VALUE_lh_hashfunc_type(hfn), ossl_check_CONF_VALUE_lh_compfunc_type(cmp)))
#define lh_CONF_VALUE_free(lh) OPENSSL_LH_free(ossl_check_CONF_VALUE_lh_type(lh))
#define lh_CONF_VALUE_flush(lh) OPENSSL_LH_flush(ossl_check_CONF_VALUE_lh_type(lh))
#define lh_CONF_VALUE_insert(lh, ptr) ((CONF_VALUE *)OPENSSL_LH_insert(ossl_check_CONF_VALUE_lh_type(lh), ossl_check_CONF_VALUE_lh_plain_type(ptr)))
#define lh_CONF_VALUE_delete(lh, ptr) ((CONF_VALUE *)OPENSSL_LH_delete(ossl_check_CONF_VALUE_lh_type(lh), ossl_check_const_CONF_VALUE_lh_plain_type(ptr)))
#define lh_CONF_VALUE_retrieve(lh, ptr) ((CONF_VALUE *)OPENSSL_LH_retrieve(ossl_check_CONF_VALUE_lh_type(lh), ossl_check_const_CONF_VALUE_lh_plain_type(ptr)))
#define lh_CONF_VALUE_error(lh) OPENSSL_LH_error(ossl_check_CONF_VALUE_lh_type(lh))
#define lh_CONF_VALUE_num_items(lh) OPENSSL_LH_num_items(ossl_check_CONF_VALUE_lh_type(lh))
#define lh_CONF_VALUE_node_stats_bio(lh, out) OPENSSL_LH_node_stats_bio(ossl_check_const_CONF_VALUE_lh_type(lh), out)
#define lh_CONF_VALUE_node_usage_stats_bio(lh, out) OPENSSL_LH_node_usage_stats_bio(ossl_check_const_CONF_VALUE_lh_type(lh), out)
#define lh_CONF_VALUE_stats_bio(lh, out) OPENSSL_LH_stats_bio(ossl_check_const_CONF_VALUE_lh_type(lh), out)
#define lh_CONF_VALUE_get_down_load(lh) OPENSSL_LH_get_down_load(ossl_check_CONF_VALUE_lh_type(lh))
#define lh_CONF_VALUE_set_down_load(lh, dl) OPENSSL_LH_set_down_load(ossl_check_CONF_VALUE_lh_type(lh), dl)
#define lh_CONF_VALUE_doall(lh, dfn) OPENSSL_LH_doall(ossl_check_CONF_VALUE_lh_type(lh), ossl_check_CONF_VALUE_lh_doallfunc_type(dfn))


struct conf_st;
struct conf_method_st;
typedef struct conf_method_st CONF_METHOD;

# ifndef OPENSSL_NO_DEPRECATED_3_0
#  include <openssl/conftypes.h>
# endif

/* Module definitions */
typedef struct conf_imodule_st CONF_IMODULE;
typedef struct conf_module_st CONF_MODULE;

STACK_OF(CONF_MODULE);
STACK_OF(CONF_IMODULE);

/* DSO module function typedefs */
typedef int conf_init_func (CONF_IMODULE *md, const CONF *cnf);
typedef void conf_finish_func (CONF_IMODULE *md);

# define CONF_MFLAGS_IGNORE_ERRORS       0x1
# define CONF_MFLAGS_IGNORE_RETURN_CODES 0x2
# define CONF_MFLAGS_SILENT              0x4
# define CONF_MFLAGS_NO_DSO              0x8
# define CONF_MFLAGS_IGNORE_MISSING_FILE 0x10
# define CONF_MFLAGS_DEFAULT_SECTION     0x20

int CONF_set_default_method(CONF_METHOD *meth);
void CONF_set_nconf(CONF *conf, LHASH_OF(CONF_VALUE) *hash);
LHASH_OF(CONF_VALUE) *CONF_load(LHASH_OF(CONF_VALUE) *conf, const char *file,
                                long *eline);
# ifndef OPENSSL_NO_STDIO
LHASH_OF(CONF_VALUE) *CONF_load_fp(LHASH_OF(CONF_VALUE) *conf, FILE *fp,
                                   long *eline);
# endif
LHASH_OF(CONF_VALUE) *CONF_load_bio(LHASH_OF(CONF_VALUE) *conf, BIO *bp,
                                    long *eline);
STACK_OF(CONF_VALUE) *CONF_get_section(LHASH_OF(CONF_VALUE) *conf,
                                       const char *section);
char *CONF_get_string(LHASH_OF(CONF_VALUE) *conf, const char *group,
                      const char *name);
long CONF_get_number(LHASH_OF(CONF_VALUE) *conf, const char *group,
                     const char *name);
void CONF_free(LHASH_OF(CONF_VALUE) *conf);
#ifndef OPENSSL_NO_STDIO
int CONF_dump_fp(LHASH_OF(CONF_VALUE) *conf, FILE *out);
#endif
int CONF_dump_bio(LHASH_OF(CONF_VALUE) *conf, BIO *out);
#ifndef OPENSSL_NO_DEPRECATED_1_1_0
OSSL_DEPRECATEDIN_1_1_0 void OPENSSL_config(const char *config_name);
#endif

#ifndef OPENSSL_NO_DEPRECATED_1_1_0
# define OPENSSL_no_config() \
    OPENSSL_init_crypto(OPENSSL_INIT_NO_LOAD_CONFIG, NULL)
#endif

/*
 * New conf code.  The semantics are different from the functions above. If
 * that wasn't the case, the above functions would have been replaced
 */

CONF *NCONF_new_ex(OSSL_LIB_CTX *libctx, CONF_METHOD *meth);
OSSL_LIB_CTX *NCONF_get0_libctx(const CONF *conf);
CONF *NCONF_new(CONF_METHOD *meth);
CONF_METHOD *NCONF_default(void);
#ifndef OPENSSL_NO_DEPRECATED_3_0
OSSL_DEPRECATEDIN_3_0 CONF_METHOD *NCONF_WIN32(void);
#endif
void NCONF_free(CONF *conf);
void NCONF_free_data(CONF *conf);

int NCONF_load(CONF *conf, const char *file, long *eline);
# ifndef OPENSSL_NO_STDIO
int NCONF_load_fp(CONF *conf, FILE *fp, long *eline);
# endif
int NCONF_load_bio(CONF *conf, BIO *bp, long *eline);
STACK_OF(OPENSSL_CSTRING) *NCONF_get_section_names(const CONF *conf);
STACK_OF(CONF_VALUE) *NCONF_get_section(const CONF *conf,
                                        const char *section);
char *NCONF_get_string(const CONF *conf, const char *group, const char *name);
int NCONF_get_number_e(const CONF *conf, const char *group, const char *name,
                       long *result);
#ifndef OPENSSL_NO_STDIO
int NCONF_dump_fp(const CONF *conf, FILE *out);
#endif
int NCONF_dump_bio(const CONF *conf, BIO *out);

#define NCONF_get_number(c,g,n,r) NCONF_get_number_e(c,g,n,r)

/* Module functions */

int CONF_modules_load(const CONF *cnf, const char *appname,
                      unsigned long flags);
int CONF_modules_load_file_ex(OSSL_LIB_CTX *libctx, const char *filename,
                              const char *appname, unsigned long flags);
int CONF_modules_load_file(const char *filename, const char *appname,
                           unsigned long flags);
void CONF_modules_unload(int all);
void CONF_modules_finish(void);
#ifndef OPENSSL_NO_DEPRECATED_1_1_0
# define CONF_modules_free() while(0) continue
#endif
int CONF_module_add(const char *name, conf_init_func *ifunc,
                    conf_finish_func *ffunc);

const char *CONF_imodule_get_name(const CONF_IMODULE *md);
const char *CONF_imodule_get_value(const CONF_IMODULE *md);
void *CONF_imodule_get_usr_data(const CONF_IMODULE *md);
void CONF_imodule_set_usr_data(CONF_IMODULE *md, void *usr_data);
CONF_MODULE *CONF_imodule_get_module(const CONF_IMODULE *md);
unsigned long CONF_imodule_get_flags(const CONF_IMODULE *md);
void CONF_imodule_set_flags(CONF_IMODULE *md, unsigned long flags);
void *CONF_module_get_usr_data(CONF_MODULE *pmod);
void CONF_module_set_usr_data(CONF_MODULE *pmod, void *usr_data);

char *CONF_get1_default_config_file(void);

int CONF_parse_list(const char *list, int sep, int nospc,
                    int (*list_cb) (const char *elem, int len, void *usr),
                    void *arg);

void OPENSSL_load_builtin_modules(void);


# ifdef  __cplusplus
}
# endif
#endif
