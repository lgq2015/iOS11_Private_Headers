/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKEffectsGridLabelsView : UIView <_UIBackdropViewObserver> {
    _UIBackdropView * __backdropView;
    _UILegibilitySettingsProvider * __legibilitySettingsProvider;
    bool  _disableLayoutForLabels;
    NSArray * _filterIndices;
    NSArray * _filterLabelViews;
    CMKEffectsGridView * _gridView;
    long long  _orientation;
}

@property (nonatomic, retain) _UIBackdropView *_backdropView;
@property (nonatomic, retain) _UILegibilitySettingsProvider *_legibilitySettingsProvider;
@property (getter=isDisabledLayoutForLabels, nonatomic) bool disableLayoutForLabels;
@property (setter=_setFilterIndices:, nonatomic, retain) NSArray *filterIndices;
@property (setter=_setFilterLabelViews:, nonatomic, retain) NSArray *filterLabelViews;
@property (nonatomic, retain) CMKEffectsGridView *gridView;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)_backdropView;
- (id)_legibilitySettingsProvider;
- (void)_rebuildLabelViews;
- (void)_replaceLabelViews:(bool)arg1;
- (void)_setFilterIndices:(id)arg1;
- (void)_setFilterLabelViews:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForOrientation:(long long)arg1;
- (void)backdropViewDidChange:(id)arg1;
- (void)dealloc;
- (id)filterIndices;
- (id)filterLabelViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLabelView:(id)arg1 withinGridFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)gridView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabledLayoutForLabels;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setDisableLayoutForLabels:(bool)arg1;
- (void)setGridView:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)set_backdropView:(id)arg1;
- (void)set_legibilitySettingsProvider:(id)arg1;
- (void)updateFilterLabels;
- (void)updateToContentSize:(id)arg1;

@end
