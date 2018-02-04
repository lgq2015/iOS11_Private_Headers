/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (id)_baseFollowUpItemWithContext:(id)arg1;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpActionForRepair;
- (id)_followUpForOfflineSecretChangeWithContext:(id)arg1;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)arg1;
- (id)_followUpForRepairWithContext:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (id)_offlineSecretChangeFollowUpAction;
- (id)followUpItemWithContext:(id)arg1;
- (id)identifierForContext:(id)arg1;
- (unsigned long long)secretType;

@end
