/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {
    id /* block */  _activeOverrideTypesChangedActiveQuietModeAssertionCountHandler;
    id /* block */  _activeOverrideTypesChangedHandler;
    NSXPCConnection * _connection;
    id /* block */  _overrideStateChangeHandler;
    id /* block */  _overrideStatusChangeHandler;
    id /* block */  _overridesChangedHandler;
    id /* block */  _overridesEffectiveWhileUnlockedChangedHandler;
    id /* block */  _privilegedSenderGroupChangedHandler;
    id /* block */  _privilegedSenderTypesChangedHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (void)initialize;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2 activeQuietModeAssertionCount:(unsigned long long)arg3;
- (void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesChanged:(id)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesEffectiveWhileUnlockedChanged:(bool)arg1 source:(unsigned long long)arg2;
- (void)dealloc;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithCompletion:(id /* block */)arg1;
- (void)getBehaviorOverridesEnabledAndEffectiveDateWithCompletion:(id /* block */)arg1;
- (void)getBehaviorOverridesEnabledWithCompletion:(id /* block */)arg1;
- (void)getBehaviorOverridesWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(id /* block */)arg1;
- (void)getPrivilegedSenderTypesWithCompletion:(id /* block */)arg1;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)arg1;
- (void)getSectionInfoForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoWithCompletion:(id /* block */)arg1;
- (void)getSectionOrderRuleWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)requestQuietModeOverrideAssertionWithCompletion:(id /* block */)arg1;
- (void)setActiveBehaviorOverrideTypesChangeHandler:(id /* block */)arg1;
- (void)setActiveBehaviorOverrideTypesWithSourceChangeActiveQuietModeAssertionCountHandler:(id /* block */)arg1;
- (void)setActiveBehaviorOverrideTypesWithSourceChangeHandler:(id /* block */)arg1;
- (void)setBehaviorOverrideStateChangeHandler:(id /* block */)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(id)arg2 source:(unsigned long long)arg3;
- (void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrideStatusChangeHandler:(id /* block */)arg1;
- (void)setBehaviorOverrideStatusWithSourceChangeHandler:(id /* block */)arg1;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesChangeHandler:(id /* block */)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeHandler:(id /* block */)arg1;
- (void)setBehaviorOverridesEnabled:(bool)arg1;
- (void)setBehaviorOverridesWithSourceChangeHandler:(id /* block */)arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (void)setOrderedSectionIDs:(id)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderAddressBookGroupRecordIDWithSourceChangeHandler:(id /* block */)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderTypesWithSourceChangeHandler:(id /* block */)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setSectionOrderRule:(long long)arg1;
- (void)updateSectionInfoForSectionID:(id)arg1 withHandler:(id /* block */)arg2;

@end
