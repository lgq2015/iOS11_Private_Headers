/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIUserActionCallProviderVoiceTarget : CNUIUserActionTarget

- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 group:(long long)arg3 options:(unsigned long long)arg4 discoveringEnvironment:(id)arg5;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)externalAccountIdentifierForContact:(id)arg1 contactStore:(id)arg2;
- (bool)isCallProviderManagedUsingDiscoveringEnvironment:(id)arg1;
- (id)managedBundleIdentifierForContact:(id)arg1 discoveringEnvironment:(id)arg2;

@end
