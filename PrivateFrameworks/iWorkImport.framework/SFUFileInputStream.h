/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface SFUFileInputStream : NSObject <SFUInputStream> {
    long long  mCurrentOffset;
    long long  mEndOffset;
    int  mFd;
    bool  mIsCachingDisabled;
    long long  mStartOffset;
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
- (id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3;
- (id)initWithPath:(id)arg1 offset:(long long)arg2;
- (id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;

@end
