/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary * _shareAcceptationByItemID;
}

@property (nonatomic, readonly) bool isPrivateZone;
@property (nonatomic, readonly) bool isSharedZone;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) BRCSharedServerZone *sharedZone;

- (void).cxx_destruct;
- (void)addAcceptOperation:(id)arg1 forItemID:(id)arg2;
- (id)asSharedClientZone;
- (bool)isSharedZone;
- (id)ownerName;
- (void)removeAllShareAcceptationSidefaults;
- (id)rootItemID;
- (void)setServerZone:(id)arg1;
- (id)shareAcceptOperationForItemID:(id)arg1;
- (struct PQLResultSet { Class x1; }*)shareAcceptationSidefaultEnumerator;
- (id)sharedZone;

@end
