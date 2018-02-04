/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSMTraceController : NSObject {
    NSMutableArray * mBuffers;
    NSDictionary * mBuildInfo;
    unsigned int  mFilterCache;
    long long  mLastBufferID;
    int  mModuleCache;
    NSString * mTraceDirectory;
}

@property (nonatomic, readonly) NSString *traceDirectory;

+ (void)addBuffer:(id)arg1;
+ (long long)addBufferWithTag:(id)arg1 size:(long long)arg2;
+ (long long)addBufferWithTag:(id)arg1 size:(long long)arg2 synchronized:(bool)arg3;
+ (id)bufferByID:(long long)arg1;
+ (void)closeBufferWithID:(long long)arg1;
+ (void)flushAllBuffers;
+ (bool)setup;
+ (void)shutdown;
+ (void)startTracing;
+ (void)stopTracing;
+ (id)traceDirectory;

- (long long)addBuffer:(id)arg1;
- (id)bufferByID:(long long)arg1;
- (id)buffers;
- (void)closeBuffer:(id)arg1;
- (void)dealloc;
- (void)flushAllBuffers;
- (id)init;
- (void)p_buffer:(id)arg1 changedModule:(int)arg2 toFilter:(unsigned int)arg3 from:(unsigned int)arg4;
- (id)p_createTraceDirectory;
- (long long)p_newBufferID;
- (void)p_writeBuildInfoToFile:(id)arg1;
- (void)startTracing;
- (void)stopTracing;
- (id)traceDirectory;
- (void)writeTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1 withFilter:(unsigned int)arg2;

@end
