/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSectionHeaderView : UICollectionReusableView {
    UIButton * _actionButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _actionButtonInitialContentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _actionButtonInitialSize;
    double  _actionButtonLabelInitialMaxY;
    NSString * _actionButtonTitle;
    bool  _allowsPhotosDetailsInteraction;
    _UIBackdropView * _backdropView;
    NSString * _backdropViewGroupName;
    unsigned long long  _backgroundStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UILabel * _dateLabel;
    <PUPhotosSectionHeaderViewDelegate> * _delegate;
    UIImageView * _disclosureIconView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _highlightInsets;
    UIView * _highlightView;
    bool  _highlightViewVisible;
    bool  _inLayoutTransition;
    UILabel * _locationsLabel;
    bool  _performingBatchDateDependentUpdate;
    NSDate * _sectionEndDate;
    long long  _sectionIndex;
    NSArray * _sectionLocations;
    NSDate * _sectionStartDate;
    NSString * _sectionTitle;
    UILabel * _separatorLabel;
    bool  _showsActionButton;
    long long  _style;
    UILabel * _titleLabel;
    bool  _useYearOnlyForDefaultTitle;
    bool  _usingBackgroundBlur;
}

@property (nonatomic, copy) NSString *actionButtonTitle;
@property (nonatomic) bool allowsPhotosDetailsInteraction;
@property (nonatomic, copy) NSString *backdropViewGroupName;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) <PUPhotosSectionHeaderViewDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } highlightInsets;
@property (nonatomic, readonly) NSDate *sectionEndDate;
@property (nonatomic) long long sectionIndex;
@property (nonatomic, retain) NSArray *sectionLocations;
@property (nonatomic, readonly) NSDate *sectionStartDate;
@property (nonatomic, retain) NSString *sectionTitle;
@property (nonatomic) bool showsActionButton;
@property (nonatomic) long long style;
@property (nonatomic, readonly) NSString *synthesizedSectionTitle;
@property (nonatomic) bool useYearOnlyForDefaultTitle;

+ (bool)_hasAccessibilityLargeText;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_dateRangeCompactFormatter;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (id)_dateRangeLongFormatter;
- (id)_dateRangeYearFormatter;
- (bool)_disableRasterizeInAnimations;
- (void)_handleActionButton:(id)arg1;
- (void)_handleSignificantDateChange:(id)arg1;
- (void)_hideHighlightView;
- (void)_layoutSubviewsForCurentStyle;
- (struct CGSize { double x1; double x2; })_preferredSizeForLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredSizeForText:(id)arg1 withFont:(id)arg2;
- (void)_setHighlightViewVisible:(bool)arg1;
- (void)_setUsingBackgroundBlur:(bool)arg1;
- (void)_updateActionButton;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackground;
- (void)_updateDateDependentLabels;
- (void)_updateDateLabel;
- (void)_updateDisclosureIconVisibility;
- (void)_updateHighlightView;
- (void)_updateLabelsForTextStyle;
- (void)_updateLocationsLabelVisibility;
- (void)_updateTitleLabel;
- (bool)_usingDateAsTitle;
- (id)actionButtonTitle;
- (bool)allowLocationTapForTouch:(id)arg1;
- (bool)allowsPhotosDetailsInteraction;
- (void)applyLayoutAttributes:(id)arg1;
- (id)backdropViewGroupName;
- (unsigned long long)backgroundStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (id)delegate;
- (void)didEndDisplaying;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })highlightInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)performBatchUpdateOfDateDependentPropertiesWithBlock:(id /* block */)arg1;
- (void)prepareForReuse;
- (id)sectionEndDate;
- (long long)sectionIndex;
- (id)sectionLocations;
- (id)sectionStartDate;
- (id)sectionTitle;
- (void)setActionButtonTitle:(id)arg1;
- (void)setAllowsPhotosDetailsInteraction:(bool)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)setSectionLocations:(id)arg1;
- (void)setSectionStartDate:(id)arg1 endDate:(id)arg2;
- (void)setSectionTitle:(id)arg1;
- (void)setShowsActionButton:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUseYearOnlyForDefaultTitle:(bool)arg1;
- (bool)showsActionButton;
- (long long)style;
- (id)synthesizedSectionTitle;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)useYearOnlyForDefaultTitle;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
