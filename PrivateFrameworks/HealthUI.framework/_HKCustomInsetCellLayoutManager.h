/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKCustomInsetCellLayoutManager : UITableViewCellLayoutManager {
    double  _textLabelLeftInset;
    double  _topInset;
}

@property (nonatomic) double textLabelLeftInset;
@property (nonatomic) double topInset;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForCell:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editControlEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editControlStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (void)setTextLabelLeftInset:(double)arg1;
- (void)setTopInset:(double)arg1;
- (double)textLabelLeftInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(bool)arg3;
- (double)topInset;

@end
