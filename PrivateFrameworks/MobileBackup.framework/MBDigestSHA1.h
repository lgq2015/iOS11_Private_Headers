/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDigestSHA1 : MBDigest {
    struct CC_SHA1state_st { 
        unsigned int h0; 
        unsigned int h1; 
        unsigned int h2; 
        unsigned int h3; 
        unsigned int h4; 
        unsigned int Nl; 
        unsigned int Nh; 
        unsigned int data[16]; 
        int num; 
    }  _context;
}

- (id)final;
- (void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2;
- (id)init;
- (void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end
