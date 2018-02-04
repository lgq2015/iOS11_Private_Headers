/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKGroup : NSObject {
    PKCatalogGroup * _catalogGroup;
    <PKGroupDelegate> * _delegate;
    unsigned long long  _frontmostPassIndex;
    bool  _local;
    NSMutableDictionary * _passesByUniqueID;
}

@property (nonatomic) <PKGroupDelegate> *delegate;
@property (nonatomic) unsigned long long frontmostPassIndex;
@property (nonatomic, readonly) NSNumber *groupID;
@property (getter=isLocal, nonatomic) bool local;

- (void).cxx_destruct;
- (unsigned long long)_indexOfUniqueID:(id)arg1;
- (void)_insertPass:(id)arg1 atIndex:(unsigned long long)arg2 notify:(bool)arg3;
- (void)_moveUniqueID:(id)arg1 toIndex:(unsigned long long)arg2 notify:(bool)arg3;
- (void)_removeUniqueID:(id)arg1 notify:(bool)arg2;
- (void)_updatePass:(id)arg1 notify:(bool)arg2;
- (bool)containsOnlyUniqueID:(id)arg1;
- (bool)containsPasses;
- (id)copyCatalogGroup;
- (id)delegate;
- (id)description;
- (void)enumerateUniqueIDsWithHandler:(id /* block */)arg1;
- (unsigned long long)frontmostPassIndex;
- (id)groupID;
- (void)handleUserPassDelete:(id)arg1;
- (unsigned long long)indexForPassUniqueID:(id)arg1;
- (id)initWithCatalogGroup:(id)arg1 passes:(id)arg2;
- (bool)isLocal;
- (id)passAtIndex:(unsigned long long)arg1;
- (unsigned long long)passCount;
- (id)passWithUniqueID:(id)arg1;
- (id)passes;
- (void)setDelegate:(id)arg1;
- (void)setFrontmostPassIndex:(unsigned long long)arg1;
- (void)setLocal:(bool)arg1;
- (void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(bool)arg3;

@end
