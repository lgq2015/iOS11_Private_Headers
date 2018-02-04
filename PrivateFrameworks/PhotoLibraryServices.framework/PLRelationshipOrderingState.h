/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRelationshipOrderingState : NSObject {
    id  _foks;
    bool  _isMutable;
    id  _oids;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)findIndexForObjectID:(id)arg1 newOrderValue:(long long)arg2 hasOrderValueConflictWithObjectID:(id*)arg3;
- (unsigned long long)indexForObjectID:(id)arg1;
- (id)initWithObjectIDs:(id)arg1 orderValues:(id)arg2;
- (id)objectIDs;
- (id)orderKeys;
- (bool)setOrderValue:(long long)arg1 forObjectID:(id)arg2 atIndex:(unsigned long long)arg3;

@end
