/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudThrottlingPolicy : NSObject {
    unsigned long long  _currentBatchCount;
    unsigned long long  _currentLevelIndex;
    NSTimer * _policyResetTimer;
    NSDate * _policyStartDate;
    double  _resetInterval;
    NSArray * _throttlingLevels;
}

@property (nonatomic, readonly) double batchInterval;
@property (nonatomic) unsigned long long currentBatchCount;
@property (nonatomic, readonly) ICCloudThrottlingLevel *currentLevel;
@property (nonatomic) unsigned long long currentLevelIndex;
@property (retain) NSTimer *policyResetTimer;
@property (retain) NSDate *policyStartDate;
@property double resetInterval;
@property (nonatomic, retain) NSArray *throttlingLevels;

+ (void)resetSavedPolicyState;

- (void).cxx_destruct;
- (double)batchInterval;
- (void)changeLevelIfNecessary;
- (unsigned long long)currentBatchCount;
- (id)currentLevel;
- (unsigned long long)currentLevelIndex;
- (void)dealloc;
- (void)incrementBatchCount;
- (id)init;
- (id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2;
- (void)loadSavedPolicyState;
- (id)policyResetTimer;
- (id)policyStartDate;
- (double)resetInterval;
- (void)resetPolicy;
- (void)savePolicyState;
- (void)setCurrentBatchCount:(unsigned long long)arg1;
- (void)setCurrentLevelIndex:(unsigned long long)arg1;
- (void)setPolicyResetTimer:(id)arg1;
- (void)setPolicyStartDate:(id)arg1;
- (void)setResetInterval:(double)arg1;
- (void)setThrottlingLevels:(id)arg1;
- (void)startPolicyResetTimer;
- (id)throttlingLevels;

@end
