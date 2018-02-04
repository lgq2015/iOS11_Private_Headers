/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightReceiver.framework/SpotlightReceiver
 */

@interface CSRecieverConnection : CSXPCConnection {
    NSArray * _INIntentClassNames;
    NSArray * _bundleIDs;
    NSArray * _contentTypes;
    NSObject<SpotlightReceiver> * _receiver;
    int  _supportedJobs;
    bool  _wantsIndexUpdates;
    bool  _wantsInteractions;
    bool  _wantsUAs;
}

@property (nonatomic, copy) NSArray *INIntentClassNames;
@property (nonatomic, copy) NSArray *bundleIDs;
@property (nonatomic, copy) NSArray *contentTypes;
@property (nonatomic, readonly) NSObject<SpotlightReceiver> *receiver;
@property (nonatomic, readonly) int supportedJobs;
@property (nonatomic) bool wantsIndexUpdates;
@property (nonatomic) bool wantsInteractions;
@property (nonatomic) bool wantsUAs;

- (void).cxx_destruct;
- (id)INIntentClassNames;
- (int)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (bool)allowClientConnection:(id)arg1;
- (id)bundleIDs;
- (id)contentTypes;
- (int)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (int)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 domains:(id)arg3 deletes:(id)arg4;
- (int)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (int)handleSetup:(id)arg1;
- (int)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4;
- (id)initWithReceiver:(id)arg1 forServiceName:(id)arg2;
- (bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (int)purgeFromBundle:(id)arg1 identifiers:(id)arg2;
- (id)receiver;
- (void)setBundleIDs:(id)arg1;
- (void)setContentTypes:(id)arg1;
- (void)setINIntentClassNames:(id)arg1;
- (void)setWantsIndexUpdates:(bool)arg1;
- (void)setWantsInteractions:(bool)arg1;
- (void)setWantsUAs:(bool)arg1;
- (int)supportedJobs;
- (bool)wantsIndexUpdates;
- (bool)wantsInteractions;
- (bool)wantsUAs;

@end
