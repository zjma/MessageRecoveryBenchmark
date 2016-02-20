#include <stdint.h>
#include <openssl/evp.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

unsigned char *_P[2] ={
    "\xB1\x0B\x8F\x96\xA0\x80\xE0\x1D\xDE\x92\xDE\x5E\xAE\x5D\x54\xEC\x52\xC9\x9F\xBC\xFB\x06\xA3\xC6\x9A\x6A\x9D\xCA\x52\xD2\x3B\x61\x60\x73\xE2\x86\x75\xA2\x3D\x18\x98\x38\xEF\x1E\x2E\xE6\x52\xC0\x13\xEC\xB4\xAE\xA9\x06\x11\x23\x24\x97\x5C\x3C\xD4\x9B\x83\xBF\xAC\xCB\xDD\x7D\x90\xC4\xBD\x70\x98\x48\x8E\x9C\x21\x9A\x73\x72\x4E\xFF\xD6\xFA\xE5\x64\x47\x38\xFA\xA3\x1A\x4F\xF5\x5B\xCC\xC0\xA1\x51\xAF\x5F\x0D\xC8\xB4\xBD\x45\xBF\x37\xDF\x36\x5C\x1A\x65\xE6\x8C\xFD\xA7\x6D\x4D\xA7\x08\xDF\x1F\xB2\xBC\x2E\x4A\x43\x71",//128B
    "\x87\xA8\xE6\x1D\xB4\xB6\x66\x3C\xFF\xBB\xD1\x9C\x65\x19\x59\x99\x8C\xEE\xF6\x08\x66\x0D\xD0\xF2\x5D\x2C\xEE\xD4\x43\x5E\x3B\x00\xE0\x0D\xF8\xF1\xD6\x19\x57\xD4\xFA\xF7\xDF\x45\x61\xB2\xAA\x30\x16\xC3\xD9\x11\x34\x09\x6F\xAA\x3B\xF4\x29\x6D\x83\x0E\x9A\x7C\x20\x9E\x0C\x64\x97\x51\x7A\xBD\x5A\x8A\x9D\x30\x6B\xCF\x67\xED\x91\xF9\xE6\x72\x5B\x47\x58\xC0\x22\xE0\xB1\xEF\x42\x75\xBF\x7B\x6C\x5B\xFC\x11\xD4\x5F\x90\x88\xB9\x41\xF5\x4E\xB1\xE5\x9B\xB8\xBC\x39\xA0\xBF\x12\x30\x7F\x5C\x4F\xDB\x70\xC5\x81\xB2\x3F\x76\xB6\x3A\xCA\xE1\xCA\xA6\xB7\x90\x2D\x52\x52\x67\x35\x48\x8A\x0E\xF1\x3C\x6D\x9A\x51\xBF\xA4\xAB\x3A\xD8\x34\x77\x96\x52\x4D\x8E\xF6\xA1\x67\xB5\xA4\x18\x25\xD9\x67\xE1\x44\xE5\x14\x05\x64\x25\x1C\xCA\xCB\x83\xE6\xB4\x86\xF6\xB3\xCA\x3F\x79\x71\x50\x60\x26\xC0\xB8\x57\xF6\x89\x96\x28\x56\xDE\xD4\x01\x0A\xBD\x0B\xE6\x21\xC3\xA3\x96\x0A\x54\xE7\x10\xC3\x75\xF2\x63\x75\xD7\x01\x41\x03\xA4\xB5\x43\x30\xC1\x98\xAF\x12\x61\x16\xD2\x27\x6E\x11\x71\x5F\x69\x38\x77\xFA\xD7\xEF\x09\xCA\xDB\x09\x4A\xE9\x1E\x1A\x15\x97"//256 B
};

unsigned char *_G[2] ={
    "\xA4\xD1\xCB\xD5\xC3\xFD\x34\x12\x67\x65\xA4\x42\xEF\xB9\x99\x05\xF8\x10\x4D\xD2\x58\xAC\x50\x7F\xD6\x40\x6C\xFF\x14\x26\x6D\x31\x26\x6F\xEA\x1E\x5C\x41\x56\x4B\x77\x7E\x69\x0F\x55\x04\xF2\x13\x16\x02\x17\xB4\xB0\x1B\x88\x6A\x5E\x91\x54\x7F\x9E\x27\x49\xF4\xD7\xFB\xD7\xD3\xB9\xA9\x2E\xE1\x90\x9D\x0D\x22\x63\xF8\x0A\x76\xA6\xA2\x4C\x08\x7A\x09\x1F\x53\x1D\xBF\x0A\x01\x69\xB6\xA2\x8A\xD6\x62\xA4\xD1\x8E\x73\xAF\xA3\x2D\x77\x9D\x59\x18\xD0\x8B\xC8\x85\x8F\x4D\xCE\xF9\x7C\x2A\x24\x85\x5E\x6E\xEB\x22\xB3\xB2\xE5",// 128 bytes
    "\x3F\xB3\x2C\x9B\x73\x13\x4D\x0B\x2E\x77\x50\x66\x60\xED\xBD\x48\x4C\xA7\xB1\x8F\x21\xEF\x20\x54\x07\xF4\x79\x3A\x1A\x0B\xA1\x25\x10\xDB\xC1\x50\x77\xBE\x46\x3F\xFF\x4F\xED\x4A\xAC\x0B\xB5\x55\xBE\x3A\x6C\x1B\x0C\x6B\x47\xB1\xBC\x37\x73\xBF\x7E\x8C\x6F\x62\x90\x12\x28\xF8\xC2\x8C\xBB\x18\xA5\x5A\xE3\x13\x41\x00\x0A\x65\x01\x96\xF9\x31\xC7\x7A\x57\xF2\xDD\xF4\x63\xE5\xE9\xEC\x14\x4B\x77\x7D\xE6\x2A\xAA\xB8\xA8\x62\x8A\xC3\x76\xD2\x82\xD6\xED\x38\x64\xE6\x79\x82\x42\x8E\xBC\x83\x1D\x14\x34\x8F\x6F\x2F\x91\x93\xB5\x04\x5A\xF2\x76\x71\x64\xE1\xDF\xC9\x67\xC1\xFB\x3F\x2E\x55\xA4\xBD\x1B\xFF\xE8\x3B\x9C\x80\xD0\x52\xB9\x85\xD1\x82\xEA\x0A\xDB\x2A\x3B\x73\x13\xD3\xFE\x14\xC8\x48\x4B\x1E\x05\x25\x88\xB9\xB7\xD2\xBB\xD2\xDF\x01\x61\x99\xEC\xD0\x6E\x15\x57\xCD\x09\x15\xB3\x35\x3B\xBB\x64\xE0\xEC\x37\x7F\xD0\x28\x37\x0D\xF9\x2B\x52\xC7\x89\x14\x28\xCD\xC6\x7E\xB6\x18\x4B\x52\x3D\x1D\xB2\x46\xC3\x2F\x63\x07\x84\x90\xF0\x0E\xF8\xD6\x47\xD1\x48\xD4\x79\x54\x51\x5E\x23\x27\xCF\xEF\x98\xC5\x82\x66\x4B\x4C\x0F\x6C\xC4\x16\x59"//256 bytes
};

unsigned char *_Q[2] = {
    "\xF5\x18\xAA\x87\x81\xA8\xDF\x27\x8A\xBA\x4E\x7D\x64\xB7\xCB\x9D\x49\x46\x23\x53",// 20 bytes
    "\x8C\xF8\x36\x42\xA7\x09\xA0\x97\xB4\x47\x99\x76\x40\x12\x9D\xA2\x99\xB1\xA4\x7D\x1E\xB3\x75\x0B\xA3\x08\xB0\xFE\x64\xF5\xFB\xD3"//32 bytes
};

BN_CTX *bnctx = NULL;

static unsigned char AESKEY[32];
static unsigned char *IV = "0123456789abcdef";
static unsigned char tmpbuf[1024];

static EVP_MD_CTX *hasher;
static EVP_CIPHER_CTX *crypter;

int InitCrypt()
{
    crypter = EVP_CIPHER_CTX_new();
    hasher = EVP_MD_CTX_create();
    bnctx = BN_CTX_new();
    assert(bnctx != NULL);
    assert(crypter!=NULL);
    assert(hasher!=NULL);
}

int CleanCrypt()
{
    BN_CTX_free(bnctx);
    EVP_MD_CTX_cleanup(hasher);
    EVP_MD_CTX_destroy(hasher);

    EVP_CIPHER_CTX_free(crypter);
}

int DoSHA256(const unsigned char *msg, int msglen, unsigned char *dst)
{
    int r;

    EVP_DigestInit_ex(hasher, EVP_sha256(), NULL);
    EVP_DigestUpdate(hasher, msg, msglen);
    EVP_DigestFinal_ex(hasher, dst, &r);
    assert(r==32);
    return 0;
}

int DoAES256CBC_fixIV(unsigned char *key,
        const unsigned char *ptxt, int plen,
        unsigned char *ctxt, int *clen)
{
    int len = 0;
    EVP_EncryptInit_ex(crypter, EVP_aes_256_cbc(), NULL, key, IV);
    EVP_EncryptUpdate(crypter, ctxt, &len, ptxt, plen);
    *clen = len;
    EVP_EncryptFinal_ex(crypter, ctxt+len, &len);
    *clen += len;
    return 0;
}

int DoAES256CBC_DEC_fixIV(char *key,
        const char *ctxt, int clen,
        char *ptxt, int *plen)
{
    int len = 0;
    EVP_DecryptInit_ex(crypter, EVP_aes_256_cbc(), NULL, key, IV);
    EVP_DecryptUpdate(crypter, ptxt, &len, ctxt, clen);
    *plen = len;
    EVP_DecryptFinal_ex(crypter, ptxt+len, &len);
    *plen += len;
    return 0;
}

int VHash(const unsigned char *msg, int msglen,
        unsigned char *dst, int dstlen)
{
    int buflen;
    assert(dstlen <= msglen);

    /* key:= SHA256(msg)*/
    int ret;

    ret = DoSHA256(msg, msglen, AESKEY);
    assert(ret==0);
    
    /* Encrypt msg to tmpbuf */
    DoAES256CBC_fixIV(AESKEY, msg, dstlen, tmpbuf, &buflen);
    assert(buflen >= dstlen);

    /* Resize tmpbuf to dst */
    memcpy(dst, tmpbuf, dstlen);

    return 0;
}


int BN2LenBin(BIGNUM *bn, unsigned char *buf, int len)
{
    int bytelen_bn = BN_num_bytes(bn);
    assert(bytelen_bn <= len);
    BN_bn2bin(bn, &buf[len-bytelen_bn]);
    memset(buf, 0, len-bytelen_bn);
    return 0;
}


int BinXor(const unsigned char *s0, const unsigned char *s1, unsigned char *d, int len)
{
    assert(len>=0);
    assert(s0!=NULL);
    assert(s1!=NULL);
    assert(d!=NULL);
    int i;
    for (i=0;i<len;++i){
        d[i]=s0[i]^s1[i];
    }
    return 0;
}


size_t bitlen2bytelen(size_t bitlen)
{
    return (bitlen+7)/8;
}


int AES128CBC_fixIV_cipher_len(int bytelen_plain)
{
    int b=1+bytelen_plain/16;
    return 16*b;
}

void hexdump(const unsigned char *where, size_t howmany)
{
    int i;
    for (i=0; i< howmany; i++)
    {
        printf("%d ", where[i]);
    }
    printf("\n");

}


static unsigned char prgbuf[64];

int PRG(const unsigned char *seed, size_t bytelen_seed,
        unsigned char *product, size_t bytelen_need)
{
    size_t req = bytelen_need;
    unsigned char *p = product;

    int low = 0;

    DoSHA256(seed, bytelen_seed, prgbuf);
    while (req > 0)
    {
        int crtneed = (req<32)?req:32;
        memcpy(p, prgbuf+(low*32), crtneed);
        req -= crtneed;
        p += crtneed;
        if (req == 0) break;
        DoSHA256(prgbuf+(low*32), 32, prgbuf+((1-low)*32));
        low = 1-low;
    }
    return 0;
}

