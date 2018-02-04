/* made by EzioChiu.
 */

@protocol DOCTagEditorPresenter <NSObject>

@required

- (bool)delayResizingUntilAppeared;
- (<DOCTagEditorDelegate> *)delegate;
- (bool)isExtremelyVerticallyCompact;
- (NSArray *)items;
- (bool)pinTextFieldToTopBound;
- (void)setDelayResizingUntilAppeared:(bool)arg1;
- (void)setDelegate:(id <DOCTagEditorDelegate>)arg1;
- (void)setIsExtremelyVerticallyCompact:(bool)arg1;
- (void)setItems:(NSArray *)arg1;
- (void)setPinTextFieldToTopBound:(bool)arg1;
- (void)setShowAddTagConfirmButtons:(bool)arg1;
- (void)setUseCompactColorPicker:(bool)arg1;
- (bool)showAddTagConfirmButtons;
- (bool)useCompactColorPicker;

@end