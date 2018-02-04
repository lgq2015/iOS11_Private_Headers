/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering> {
    CNCache * _cache;
    <CNUIUserActionDiscoveringEnvironment> * _discoveringEnvironment;
}

@property (nonatomic, readonly) CNCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNUIUserActionDiscoveringEnvironment> *discoveringEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)applicationProxiesForIntent:(id)arg1 environment:(id)arg2;
+ (bool)isSkypeAvailableWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (id)_targetsForActionType:(id)arg1;
- (id)cache;
- (void)dealloc;
- (id)discoveringEnvironment;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)observableForTargetsChangedForActionType:(id)arg1 schedulerProvider:(id)arg2;
- (void)resetTargetsForActionType:(id)arg1;
- (id)targetForTextWithMessages;
- (id)targetForTextWithSkype;
- (id)targetForVideoWithFaceTime;
- (id)targetForVideoWithSkype;
- (id)targetForVoiceWithFaceTime;
- (id)targetForVoiceWithSkype;
- (id)targetForVoiceWithTelephony;
- (id)targetsForActionType:(id)arg1;
- (id)targetsForEmail;
- (id)targetsForPay;
- (id)targetsForSendMessageIntent;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForStartVideoCallIntent;
- (id)targetsForText;
- (id)targetsForVideo;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetsForVoice;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)thirdPartyTargetsForBundleIdentifier:(id)arg1;

@end
