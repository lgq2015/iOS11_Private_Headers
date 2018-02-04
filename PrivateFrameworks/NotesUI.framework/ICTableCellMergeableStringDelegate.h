/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICTableCellMergeableStringDelegate : NSObject <TTMergeableStringDelegate> {
    <ICTableCellMergeableStringObserving> * _changeObserver;
    NSUUID * _columnID;
    unsigned long long  _editingCount;
    NSUUID * _rowID;
    NSMutableArray * _undoCommands;
}

@property (nonatomic, readonly) <ICTableCellMergeableStringObserving> *changeObserver;
@property (nonatomic, readonly) NSUUID *columnID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long editingCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *rowID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *undoCommands;

- (void).cxx_destruct;
- (void)addUndoCommand:(id)arg1;
- (void)beginEditing;
- (id)changeObserver;
- (id)columnID;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (unsigned long long)editingCount;
- (void)endEditing;
- (id)init;
- (id)initWithTableCellChangeObserver:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;
- (id)rowID;
- (void)setEditingCount:(unsigned long long)arg1;
- (void)setUndoCommands:(id)arg1;
- (id)undoCommands;
- (bool)wantsUndoCommands;

@end
