/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface SFUFileDataRepresentation : SFUDataRepresentation {
    SFUCryptoKey * mCryptoKey;
    bool  mDeleteFileWhenDone;
    long long  mFileLength;
    unsigned int  mFileType;
    bool  mHasFileAttributes;
    NSString * mPath;
    long long  mPlaintextDataLength;
    int  mSharedFd;
}

- (long long)dataLength;
- (void)dealloc;
- (void)deleteFileWhenDone;
- (id)description;
- (long long)encodedLength;
- (unsigned int)fileType;
- (bool)hasSameLocationAs:(id)arg1;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)inputStream;
- (bool)isCryptoKeyIdenticalToKey:(id)arg1;
- (bool)isEncrypted;
- (bool)isReadable;
- (id)path;
- (void)readFileAttributes;
- (void)setFileType:(unsigned int)arg1;

@end
