/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
    <SFUInputStream> * mBaseStream;
    SFUCryptor * mCryptor;
    long long  mOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;

@end