/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDroppedSample : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pts;
    NSString * _reason;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } pts;
@property (readonly) NSString *reason;

+ (id)newDroppedSampleWithReason:(id)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

- (id)_initDroppedSampleWithReason:(id)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })pts;
- (id)reason;

@end