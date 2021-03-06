/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest {
    CKDPUserPrivacySettings * _userPrivacySettings;
}

@property (nonatomic, retain) CKDPUserPrivacySettings *userPrivacySettings;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)generateRequestOperations;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setUserPrivacySettings:(id)arg1;
- (id)userPrivacySettings;

@end
