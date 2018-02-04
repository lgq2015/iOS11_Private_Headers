/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTMergeableStringUndoEditCommand : NSObject <TTMergeableStringUndoCommand> {
    struct vector<TopoIDRange, std::__1::allocator<TopoIDRange> > { struct TopoIDRange {} *x1; struct TopoIDRange {} *x2; struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange> > { struct TopoIDRange {} *x_3_1_1; } x3; } * _deleteRanges;
    struct vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > > { struct pair<TopoIDRange, NSAttributedString *> {} *x1; struct pair<TopoIDRange, NSAttributedString *> {} *x2; struct __compressed_pair<std::__1::pair<TopoIDRange, NSAttributedString *> *, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > > { struct pair<TopoIDRange, NSAttributedString *> {} *x_3_1_1; } x3; } * _insertStrings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<TopoIDRange' */ struct *deleteRanges; /* unknown property attribute:  std::__1::allocator<TopoIDRange> >=^{TopoIDRange}}} */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::pair<TopoIDRange' */ struct *insertStrings; /* unknown property attribute:  NSAttributedString *>}}} */
@property (readonly) Class superclass;

- (bool)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (void)dealloc;
- (struct vector<TopoIDRange, std::__1::allocator<TopoIDRange> > { struct TopoIDRange {} *x1; struct TopoIDRange {} *x2; struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange> > { struct TopoIDRange {} *x_3_1_1; } x3; }*)deleteRanges;
- (id)description;
- (bool)hasTopoIDsThatCanChange;
- (id)init;
- (struct vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > > { struct pair<TopoIDRange, NSAttributedString *> {} *x1; struct pair<TopoIDRange, NSAttributedString *> {} *x2; struct __compressed_pair<std::__1::pair<TopoIDRange, NSAttributedString *> *, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > > { struct pair<TopoIDRange, NSAttributedString *> {} *x_3_1_1; } x3; }*)insertStrings;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg2;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg2;

@end
