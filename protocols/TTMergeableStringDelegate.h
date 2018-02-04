/* made by EzioChiu.
 */

@protocol TTMergeableStringDelegate <NSObject>

@required

- (void)addUndoCommand:(id)arg1;
- (void)beginEditing;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (bool)wantsUndoCommands;

@end
