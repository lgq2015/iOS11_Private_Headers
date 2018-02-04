/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTStrokeRunArray : NSObject {
    unsigned int  mAllocCount;
    unsigned int  mCount;
    bool  mHasCustomStrokes;
    unsigned int  mLastLookup;
    double  mMaxWidth;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  mRWLock;
    struct TSTStrokeRun { unsigned int x1; unsigned int x2; id x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 2; } * mStrokes;
}

@property (nonatomic, readonly) double maxWidth;

- (void)dealloc;
- (id)description;
- (id)initWithCount:(unsigned int)arg1;
- (double)maxWidth;

@end
