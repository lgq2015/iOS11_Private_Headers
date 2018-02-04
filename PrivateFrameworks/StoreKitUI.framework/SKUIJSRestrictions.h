/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions> {
    SKUIClientContext * _clientContext;
}

- (void).cxx_destruct;
- (long long)_explicitRestrictionAlertTypeForTypeString:(id)arg1;
- (void)didDisplayExplicitRestrictionAlertOfType:(id)arg1;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1;
- (bool)isRestrictedApp:(id)arg1;
- (void)isRestrictionsPasscodeSet:(id)arg1;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2;
- (void)setAllowExplicitContent;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1 :(id)arg2;

@end