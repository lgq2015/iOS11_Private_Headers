/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncUpOperationBuilder : NSObject {
    NSMutableSet * _chainedParentID;
    BRCUserDefaults * _defaults;
    BRCSyncUpOperation * _op;
    BRCAccountSession * _session;
}

@property (nonatomic, retain) NSMutableSet *chainedParentID;
@property (nonatomic, retain) BRCUserDefaults *defaults;
@property (nonatomic, retain) BRCSyncUpOperation *op;
@property (nonatomic, retain) BRCAccountSession *session;

+ (bool)shouldPCSChainItemID:(id)arg1 withParentItemID:(id)arg2 givenChainedParentID:(id)arg3 inZone:(id)arg4 canOptimisticallyChain:(bool)arg5 andGetIsChained:(bool*)arg6 defaults:(id)arg7;

- (void).cxx_destruct;
- (float)addDeletionOfDirectory:(id)arg1;
- (float)addDeletionOfDocument:(id)arg1;
- (float)addDeletionOfFinderBookmark:(id)arg1;
- (float)addDeletionOfItem:(id)arg1;
- (float)addDeletionOfRecordID:(id)arg1 etag:(id)arg2 previousZoneEtag:(id)arg3;
- (float)addDeletionOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfAlias:(id)arg1;
- (float)addEditOfDirectory:(id)arg1;
- (float)addEditOfDocument:(id)arg1;
- (float)addEditOfFinderBookmark:(id)arg1;
- (float)addEditOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfSymlink:(id)arg1;
- (float)addItem:(id)arg1;
- (id)chainedParentID;
- (bool)checkIfSyncAllowedInSharedZoneForItem:(id)arg1;
- (id)defaults;
- (float)fakeSyncForItem:(id)arg1 inZone:(id)arg2;
- (void)handleDeletionOfSharedItem:(id)arg1;
- (void)handleEditOfSharedItem:(id)arg1;
- (id)op;
- (void)prepareAppLibraryRootSyncUpForItem:(id)arg1;
- (id)session;
- (void)setChainedParentID:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setOp:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)shouldPCSChainDirectory:(id)arg1;
- (bool)shouldPCSChainItem:(id)arg1;
- (bool)shouldPCSChainItem:(id)arg1 canOptimisticallyChain:(bool)arg2 andGetIsChained:(bool*)arg3;

@end
