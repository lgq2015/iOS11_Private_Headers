/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
    <SFUOutputStream> * mBaseStream;
    bool  mComputeCrc32;
    unsigned int  mCrc32;
    SFUCryptor * mCryptor;
    bool  mIsClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;

- (bool)canCreateInputStream;
- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (unsigned int)crc32;
- (void)dealloc;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(bool)arg3;
- (id)inputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;

@end
