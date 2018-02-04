/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTMergeableStringUndoAttributeCommand : NSObject <TTMergeableStringUndoCommand> {
    struct vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *> > > { struct pair<TopoIDRange, NSDictionary *> {} *x1; struct pair<TopoIDRange, NSDictionary *> {} *x2; struct __compressed_pair<std::__1::pair<TopoIDRange, NSDictionary *> *, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *> > > { struct pair<TopoIDRange, NSDictionary *> {} *x_3_1_1; } x3; } * _attributeRanges;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::pair<TopoIDRange' */ struct *attributeRanges; /* unknown property attribute:  NSDictionary *>}}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (struct vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *> > > { struct pair<TopoIDRange, NSDictionary *> {} *x1; struct pair<TopoIDRange, NSDictionary *> {} *x2; struct __compressed_pair<std::__1::pair<TopoIDRange, NSDictionary *> *, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *> > > { struct pair<TopoIDRange, NSDictionary *> {} *x_3_1_1; } x3; }*)attributeRanges;
- (void)dealloc;
- (id)description;
- (bool)hasTopoIDsThatCanChange;
- (id)init;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg2;

@end
