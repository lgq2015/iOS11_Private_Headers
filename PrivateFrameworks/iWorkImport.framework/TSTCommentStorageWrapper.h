/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCommentStorageWrapper : NSObject <TSSPropertyCommandSerializing, TSTCellDiffing> {
    TSDCommentStorage * _commentStorage;
}

@property (nonatomic, readonly) TSDCommentStorage *commentStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellDiffProperties;

- (void).cxx_destruct;
- (void)applyToCell:(id)arg1;
- (id)commentStorage;
- (void)didInitFromSOS;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (id)initWithCommentStorage:(id)arg1;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;

@end
