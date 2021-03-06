/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView> {
    NSArray * __constraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __margins;
    UILabel * __subtitleLabel;
    bool  __subtitleVisible;
    UILabel * __titleLabel;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct { 
        bool texts; 
        bool fonts; 
        bool constraints; 
        bool size; 
    }  _needsUpdateFlags;
    NSString * _subtitle;
    UIFont * _subtitleFont;
    double  _subviewsAlpha;
    NSString * _title;
    UIFont * _titleFont;
    UIColor * _titleTextColor;
    long long  _verticalSizeClass;
}

@property (setter=_setConstraints:, nonatomic, retain) NSArray *_constraints;
@property (setter=_setMargins:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _margins;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (getter=_isSubtitleVisible, setter=_setSubtitleVisible:, nonatomic) bool _subtitleVisible;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic) double subviewsAlpha;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic) long long verticalSizeClass;

- (void).cxx_destruct;
- (id)_constraints;
- (void)_invalidateConstraints;
- (void)_invalidateFonts;
- (void)_invalidateSize;
- (void)_invalidateTexts;
- (bool)_isSubtitleVisible;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_margins;
- (bool)_needsUpdate;
- (void)_setConstraints:(id)arg1;
- (void)_setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setNeedsUpdate;
- (void)_setSubtitleVisible:(bool)arg1;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)_updateConstraintsIfNeeded;
- (void)_updateFontsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSizeIfNeeded;
- (void)_updateTextsIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)performChanges:(id /* block */)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setSubviewsAlpha:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setVerticalSizeClass:(long long)arg1;
- (id)subtitle;
- (id)subtitleFont;
- (double)subviewsAlpha;
- (id)title;
- (id)titleFont;
- (id)titleTextColor;
- (void)updateConstraints;
- (long long)verticalSizeClass;

@end
