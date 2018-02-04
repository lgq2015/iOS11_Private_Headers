/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest {
    NSString * _bundleID;
    long long  _discoverableTrinary;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) long long discoverableTrinary;

- (void).cxx_destruct;
- (id)bundleID;
- (long long)databaseScope;
- (long long)discoverableTrinary;
- (id)generateRequestOperations;
- (id)init;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresTokenRegistration;
- (void)setBundleID:(id)arg1;
- (void)setDiscoverable:(bool)arg1;
- (void)setDiscoverableTrinary:(long long)arg1;

@end
