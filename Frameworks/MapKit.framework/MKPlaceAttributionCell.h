/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceAttributionCell : MKPlaceSectionRowView {
    <MKPlaceAttributionCellDelegate> * _cellDelegate;
    NSLayoutConstraint * _collapsedConstraint;
    _MKUILabel * _label;
    NSLayoutConstraint * _labelBaselineToTop;
    UIButton * _labelButton;
    NSLayoutConstraint * _labelLastBaselineToBottom;
    NSArray * _visibleConstraints;
}

@property (nonatomic) <MKPlaceAttributionCellDelegate> *cellDelegate;
@property (nonatomic, retain) _MKUILabel *label;
@property (nonatomic, retain) NSLayoutConstraint *labelBaselineToTop;
@property (nonatomic, retain) UIButton *labelButton;
@property (nonatomic, retain) NSLayoutConstraint *labelLastBaselineToBottom;

+ (id)fontForLabel;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)attributionClicked;
- (id)cellDelegate;
- (void)createConstraints;
- (double)currentHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelBaselineToTop;
- (id)labelButton;
- (id)labelLastBaselineToBottom;
- (void)setAttributionString:(id)arg1;
- (void)setCellDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelBaselineToTop:(id)arg1;
- (void)setLabelButton:(id)arg1;
- (void)setLabelLastBaselineToBottom:(id)arg1;
- (void)updateConstraints;

@end
