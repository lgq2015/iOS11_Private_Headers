/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIMutableLoginUISceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long idleTimerMode;
@property (nonatomic) long long rotationMode;
@property (nonatomic, copy) NSString *statusBarUserNameOverride;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)idleTimerMode;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)rotationMode;
- (void)setIdleTimerMode:(long long)arg1;
- (void)setRotationMode:(long long)arg1;
- (void)setStatusBarUserNameOverride:(id)arg1;
- (id)statusBarUserNameOverride;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
