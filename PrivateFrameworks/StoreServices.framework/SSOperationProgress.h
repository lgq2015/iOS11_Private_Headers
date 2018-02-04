/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSOperationProgress : NSObject <NSCopying, SSXPCCoding> {
    bool  _canPause;
    double  _changeRate;
    long long  _currentValue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _estimatedTimeRemaining;
    long long  _maxValue;
    long long  _normalizedCurrentValue;
    long long  _normalizedMaxValue;
    long long  _operationType;
    NSMutableArray * _snapshotTimes;
    NSMutableArray * _snapshotValues;
    long long  _units;
}

@property bool canPause;
@property double changeRate;
@property long long currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double estimatedTimeRemaining;
@property (readonly) unsigned long long hash;
@property long long maxValue;
@property long long normalizedCurrentValue;
@property long long normalizedMaxValue;
@property long long operationType;
@property (readonly) Class superclass;
@property long long units;

- (void)_updateStatisticsFromSnapshots;
- (bool)canPause;
- (double)changeRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (long long)currentValue;
- (void)dealloc;
- (id)description;
- (double)estimatedTimeRemaining;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)maxValue;
- (long long)normalizedCurrentValue;
- (long long)normalizedMaxValue;
- (long long)operationType;
- (void)resetSnapshots;
- (void)setCanPause:(bool)arg1;
- (void)setChangeRate:(double)arg1;
- (void)setCurrentValue:(long long)arg1;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setMaxValue:(long long)arg1;
- (void)setNormalizedCurrentValue:(long long)arg1;
- (void)setNormalizedMaxValue:(long long)arg1;
- (void)setOperationType:(long long)arg1;
- (void)setUnits:(long long)arg1;
- (void)snapshot;
- (long long)units;

@end
