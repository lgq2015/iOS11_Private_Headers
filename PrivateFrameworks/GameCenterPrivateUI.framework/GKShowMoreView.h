/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKShowMoreView : UICollectionReusableView {
    UICollectionView * _collectionView;
    NSLayoutConstraint * _horizontalContraint;
    GKLabel * _label;
    bool  _loading;
    long long  _numberToShow;
    long long  _sectionIndex;
    SEL  _showMoreAction;
    bool  _showShowAll;
    UIActivityIndicatorView * _spinner;
    double  _textAlignmentOffset;
    NSLayoutConstraint * _verticalContraint;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) NSLayoutConstraint *horizontalContraint;
@property (nonatomic, retain) GKLabel *label;
@property (nonatomic) bool loading;
@property (nonatomic) long long numberToShow;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) SEL showMoreAction;
@property (nonatomic) bool showShowAll;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic) double textAlignmentOffset;
@property (nonatomic, retain) NSLayoutConstraint *verticalContraint;

+ (bool)requiresConstraintBasedLayout;

- (void)applyLayoutAttributes:(id)arg1;
- (id)baseTextStyle;
- (id)collectionView;
- (void)dealloc;
- (id)horizontalContraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (bool)loading;
- (long long)numberToShow;
- (void)prepareForReuse;
- (long long)sectionIndex;
- (void)setCollectionView:(id)arg1;
- (void)setHorizontalContraint:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setNumberToShow:(long long)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)setShowMoreAction:(SEL)arg1;
- (void)setShowShowAll:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTextAlignmentOffset:(double)arg1;
- (void)setVerticalContraint:(id)arg1;
- (SEL)showMoreAction;
- (bool)showShowAll;
- (id)spinner;
- (double)textAlignmentOffset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (void)updateLabel;
- (id)verticalContraint;

@end
