/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryConfiguration : NSObject {
    unsigned long long  _maximumRequestCharacterCount;
    NSString * _multipleDeviceFetchChangesThrottlingPolicyString;
    NSString * _multipleDeviceSaveChangesThrottlingPolicyString;
    NSString * _singleDeviceFetchChangesThrottlingPolicyString;
    NSString * _singleDeviceSaveChangesThrottlingPolicyString;
    NSString * _syncCircleSizeRetrievalThrottlingPolicyString;
    double  _syncWindow;
}

@property unsigned long long maximumRequestCharacterCount;
@property (retain) NSString *multipleDeviceFetchChangesThrottlingPolicyString;
@property (retain) NSString *multipleDeviceSaveChangesThrottlingPolicyString;
@property (readonly) bool shouldBatchSaveRecords;
@property (readonly) bool shouldUseLongLivedOperationsToSaveRecords;
@property (retain) NSString *singleDeviceFetchChangesThrottlingPolicyString;
@property (retain) NSString *singleDeviceSaveChangesThrottlingPolicyString;
@property (retain) NSString *syncCircleSizeRetrievalThrottlingPolicyString;
@property double syncWindow;

- (void).cxx_destruct;
- (void)_applyBuiltInConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (id)_builtInConfiguration;
- (id)_sharedBuiltInConfiguration;
- (void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (void)applyRemoteConfiguration:(id)arg1;
- (id)init;
- (unsigned long long)maximumRequestCharacterCount;
- (id)multipleDeviceFetchChangesThrottlingPolicyString;
- (id)multipleDeviceSaveChangesThrottlingPolicyString;
- (id)platformBuiltInConfiguration;
- (id)remoteConfiguration;
- (void)setMaximumRequestCharacterCount:(unsigned long long)arg1;
- (void)setMultipleDeviceFetchChangesThrottlingPolicyString:(id)arg1;
- (void)setMultipleDeviceSaveChangesThrottlingPolicyString:(id)arg1;
- (void)setSingleDeviceFetchChangesThrottlingPolicyString:(id)arg1;
- (void)setSingleDeviceSaveChangesThrottlingPolicyString:(id)arg1;
- (void)setSyncCircleSizeRetrievalThrottlingPolicyString:(id)arg1;
- (void)setSyncWindow:(double)arg1;
- (bool)shouldBatchSaveRecords;
- (bool)shouldUseLongLivedOperationsToSaveRecords;
- (id)singleDeviceFetchChangesThrottlingPolicyString;
- (id)singleDeviceSaveChangesThrottlingPolicyString;
- (id)syncCircleSizeRetrievalThrottlingPolicyString;
- (double)syncWindow;

@end
