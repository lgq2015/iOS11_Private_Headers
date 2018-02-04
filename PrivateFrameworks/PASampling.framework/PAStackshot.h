/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAStackshot : NSObject {
    NSSet * _deadPids;
    double  _machTimestamp;
    PAMicrostackshotData * _microstackshotData;
    unsigned long long  _startOffset;
    NSData * _traceBufData;
    double  _wallTimestamp;
}

@property (readonly) NSSet *deadPids;
@property (readonly) bool isMicrostackshot;
@property (readonly) double machTimestamp;
@property (readonly) PAMicrostackshotData *microstackshotData;
@property (readonly) double wallTimestamp;

- (void).cxx_destruct;
- (id)deadPids;
- (id)initWithTraceData:(id)arg1 machTimestamp:(double)arg2 wallTimestamp:(double)arg3;
- (bool)isMicrostackshot;
- (bool)iterateTasks:(id /* block */)arg1;
- (double)machTimestamp;
- (id)microstackshotData;
- (double)wallTimestamp;

@end
