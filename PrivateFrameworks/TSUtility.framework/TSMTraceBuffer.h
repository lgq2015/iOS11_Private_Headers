/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSMTraceBuffer : NSObject {
    bool  mActive;
    long long  mBufferID;
    long long  mBufferSize;
    TSMTraceController * mController;
    long long  mCurrentIndex;
    struct __CFData { } * mData;
    NSFileHandle * mFileHandle;
    unsigned int  mFilters;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  mLock;
    bool  mSynchronizedAccess;
    NSString * mTag;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) long long bufferID;
@property (nonatomic, readonly) long long bufferSize;
@property (nonatomic, retain) TSMTraceController *controller;
@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic, readonly) unsigned int*filters;
@property (nonatomic) bool synchronizedAccess;
@property (nonatomic, readonly) NSString *tag;

+ (id)bufferWithTag:(id)arg1 size:(long long)arg2;

- (bool)active;
- (long long)bufferID;
- (long long)bufferSize;
- (id)controller;
- (void)dealloc;
- (id)fileHandle;
- (unsigned int)filterForModule:(int)arg1;
- (unsigned int*)filters;
- (void)flush;
- (id)initWithTag:(id)arg1 size:(long long)arg2;
- (void)setBufferID:(long long)arg1;
- (void)setController:(id)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setFilter:(unsigned int)arg1 forModule:(int)arg2;
- (void)setSynchronizedAccess:(bool)arg1;
- (void)start;
- (void)stop;
- (bool)synchronizedAccess;
- (id)tag;
- (void)writeTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1 withFilter:(unsigned int)arg2;

@end
