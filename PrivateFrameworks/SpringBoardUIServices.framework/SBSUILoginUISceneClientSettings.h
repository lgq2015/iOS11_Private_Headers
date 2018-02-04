/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUILoginUISceneClientSettings : UIApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long rotationMode;
@property (nonatomic, readonly, copy) NSString *statusBarUserNameOverride;
@property (readonly) Class superclass;

- (long long)idleTimerMode;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)rotationMode;
- (id)statusBarUserNameOverride;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
