/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageAnchorAttachmentMigrator : NSObject {
    NSMutableArray * _charIndexPlacementIndexArray;
}

@property (nonatomic, retain) NSMutableArray *charIndexPlacementIndexArray;

- (void).cxx_destruct;
- (id)charIndexPlacementIndexArray;
- (id)didCopyFromSourceWPStorage:(id)arg1 toTemporaryStorage:(id)arg2 copiedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)didInsertIntoDestinationWPStorage:(id)arg1 insertionLocation:(unsigned long long)arg2 dolcContext:(id)arg3 storageTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSWPStorageActionGroup, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_2_1_1; struct TSWPStorageActionGroup {} *x_2_1_2; struct __compressed_pair<TSWPStorageActionGroup *, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_3_2_1; } x_2_1_3; } x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct TSWPStorageActionGroup { int x_6_1_1; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_2_2_1; struct TSWPStorageAction {} *x_2_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_2_2_3; } x_6_1_2; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_2_1; struct TSWPStorageAction {} *x_3_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_3_2_3; } x_6_1_3; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_4_2_1; struct TSWPStorageAction {} *x_4_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_4_2_3; } x_6_1_4; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_5_2_1; struct TSWPStorageAction {} *x_5_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_5_2_3; } x_6_1_5; } x6; }*)arg4 changeSession:(id)arg5;
- (void)setCharIndexPlacementIndexArray:(id)arg1;

@end
