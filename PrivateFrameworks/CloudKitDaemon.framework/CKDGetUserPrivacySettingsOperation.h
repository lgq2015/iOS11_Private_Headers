/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserPrivacySettingsOperation : CKDOperation {
    long long  _discoverable;
}

@property (nonatomic) long long discoverable;

- (void)_handleRetrievedPrivacySettings:(id)arg1;
- (id)activityCreate;
- (long long)discoverable;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void)setDiscoverable:(long long)arg1;

@end
