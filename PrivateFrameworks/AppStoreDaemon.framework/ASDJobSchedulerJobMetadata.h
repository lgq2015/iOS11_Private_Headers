/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobSchedulerJobMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _accountIdentifier;
    NSString * _bundleID;
    NSNumber * _externalPriority;
    NSNumber * _itemID;
    NSString * _jobState;
    NSString * _jobType;
    NSError * _lastError;
    NSNumber * _lastSoftFailureTimestamp;
    NSNumber * _priority;
    NSNumber * _priorityBucket;
    NSString * _skippedReason;
    long long  _softFailureCount;
    NSNumber * _softFailureTimeout;
    NSNumber * _timestamp;
}

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSString *bundleID;
@property (copy) NSNumber *externalPriority;
@property (copy) NSNumber *itemID;
@property (copy) NSString *jobState;
@property (copy) NSString *jobType;
@property (copy) NSError *lastError;
@property (copy) NSNumber *lastSoftFailureTimestamp;
@property (copy) NSNumber *priority;
@property (copy) NSNumber *priorityBucket;
@property (copy) NSString *skippedReason;
@property (nonatomic) long long softFailureCount;
@property (copy) NSNumber *softFailureTimeout;
@property (copy) NSNumber *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalPriority;
- (id)initWithCoder:(id)arg1;
- (id)itemID;
- (id)jobState;
- (id)jobType;
- (id)lastError;
- (id)lastSoftFailureTimestamp;
- (id)priority;
- (id)priorityBucket;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setExternalPriority:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setJobState:(id)arg1;
- (void)setJobType:(id)arg1;
- (void)setLastError:(id)arg1;
- (void)setLastSoftFailureTimestamp:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setPriorityBucket:(id)arg1;
- (void)setSkippedReason:(id)arg1;
- (void)setSoftFailureCount:(long long)arg1;
- (void)setSoftFailureTimeout:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)skippedReason;
- (long long)softFailureCount;
- (id)softFailureTimeout;
- (id)timestamp;

@end
