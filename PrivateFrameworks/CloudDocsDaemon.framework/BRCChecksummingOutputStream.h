/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCChecksummingOutputStream : NSOutputStream {
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
    }  _ctx;
    bool  _isOpen;
    unsigned char  _sig;
}

@property (nonatomic, readonly) NSData *signature;

+ (id)checksummingOutputStreamWithTag:(unsigned char)arg1;

- (void)close;
- (bool)hasSpaceAvailable;
- (id)initWithTag:(unsigned char)arg1;
- (void)open;
- (id)signature;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end