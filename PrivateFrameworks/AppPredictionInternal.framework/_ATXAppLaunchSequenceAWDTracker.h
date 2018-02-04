/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchSequenceAWDTracker : NSObject {
    _ATXDuetHelper * _duetHelper;
    unsigned long long  _maxLength;
    double  _sameLaunchGapSeconds;
    double  _sessionGapSeconds;
}

@property (nonatomic, readonly) unsigned long long maxLength;

+ (id)_defaultLaunchSequenceTimestampPath;
+ (id)_randomlyClipSequence:(id)arg1 maxLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_addBundleId:(id)arg1 buffer:(id)arg2;
- (void)_emitAndResetLaunchSequenceBuffer:(id)arg1;
- (id)_queryStartTime;
- (id)_readTimestamp;
- (void)_writeTimestamp:(id)arg1;
- (id)init;
- (id)initWithMaxLength:(unsigned long long)arg1 sessionGapSeconds:(double)arg2 sameLaunchGapSeconds:(double)arg3 duetHelper:(id)arg4;
- (void)logSampledLaunchSequences;
- (unsigned long long)maxLength;
- (void)postLaunchSequence:(id)arg1;

@end
