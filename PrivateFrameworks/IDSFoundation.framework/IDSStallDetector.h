/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSStallDetector : NSObject {
    double  _byteMovementDelayThreshold;
    NSMutableArray * _bytesHistory;
    NSMutableArray * _bytesTimestamps;
    unsigned long long  _consumeDelayThreshold;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _stallDetectedBlock;
    id /* block */  _stallWarningBlock;
    bool  _verboseLogging;
}

@property (nonatomic) double byteMovementDelayThreshold;
@property (nonatomic) unsigned long long consumeDelayThreshold;
@property (nonatomic) bool verboseLogging;

+ (id)detectorWithName:(id)arg1;
+ (id)newDetectorWithName:(id)arg1 stallDetectedBlock:(id /* block */)arg2 stallWarningBlock:(id /* block */)arg3;
+ (void)removeDetectorWithName:(id)arg1;

- (void).cxx_destruct;
- (bool)byteMovementCheckForEvent:(id)arg1;
- (double)byteMovementDelayThreshold;
- (void)consumeBytes:(int)arg1;
- (unsigned long long)consumeDelayThreshold;
- (bool)consumeTimeCheckForEvent:(id)arg1 produceTime:(unsigned long long)arg2 consumeTime:(unsigned long long)arg3;
- (void)forceTriggerStallDetectedBlockWithEventName:(id)arg1;
- (void)produceBytes:(int)arg1;
- (void)reset;
- (void)setByteMovementDelayThreshold:(double)arg1;
- (void)setConsumeDelayThreshold:(unsigned long long)arg1;
- (void)setVerboseLogging:(bool)arg1;
- (bool)verboseLogging;

@end
