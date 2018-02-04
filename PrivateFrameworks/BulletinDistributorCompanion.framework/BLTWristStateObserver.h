/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTWristStateObserver : NSObject <MCProfileConnectionObserver> {
    bool  _isWristDetectDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWristDetectDisabled;
@property (readonly) Class superclass;

- (bool)_isWristDetectionDisabled;
- (void)_updateWristDetectSetting;
- (bool)_wristDetectionDisabledPreference;
- (bool)_wristDetectionEnabledRestriction;
- (void)dealloc;
- (id)init;
- (bool)isWristDetectDisabled;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
