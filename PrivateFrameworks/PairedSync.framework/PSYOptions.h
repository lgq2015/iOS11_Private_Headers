/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYOptions : NSObject <NSSecureCoding> {
    NSURL * _activityInfoDirectory;
    bool  _dryRun;
    NSArray * _jobs;
    bool  _resetDeviceSyncState;
    bool  _resumePendingJobs;
    unsigned long long  _syncSessionType;
    unsigned long long  _terminationJobCount;
    NSArray * _testInputs;
}

@property (nonatomic, copy) NSURL *activityInfoDirectory;
@property (nonatomic) bool dryRun;
@property (nonatomic, copy) NSArray *jobs;
@property (getter=shouldResetDeviceSyncState, nonatomic) bool resetDeviceSyncState;
@property (getter=shouldResumePendingJobs, nonatomic) bool resumePendingJobs;
@property (nonatomic) unsigned long long syncSessionType;
@property (nonatomic) unsigned long long terminationJobCount;
@property (nonatomic, copy) NSArray *testInputs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityInfoDirectory;
- (id)description;
- (bool)dryRun;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)jobs;
- (void)setActivityInfoDirectory:(id)arg1;
- (void)setDryRun:(bool)arg1;
- (void)setJobs:(id)arg1;
- (void)setResetDeviceSyncState:(bool)arg1;
- (void)setResumePendingJobs:(bool)arg1;
- (void)setSyncSessionType:(unsigned long long)arg1;
- (void)setTerminationJobCount:(unsigned long long)arg1;
- (void)setTestInputs:(id)arg1;
- (bool)shouldResetDeviceSyncState;
- (bool)shouldResumePendingJobs;
- (unsigned long long)syncSessionType;
- (unsigned long long)terminationJobCount;
- (id)testInputs;

@end
