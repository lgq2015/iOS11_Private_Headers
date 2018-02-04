/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesSpec : PXFeatureSpec {
    double  __displayScale;
    unsigned long long  __style;
    struct UIColor { Class x1; } * _borderColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _borderOffset;
    double  _borderWidth;
    double  _distanceBetweenHeaderBaselineAndImageTop;
    double  _feedAdditionalContentThreshold;
    struct UIColor { Class x1; } * _feedBackgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _feedEntryEdgeInsets;
    double  _feedEntryHeaderHeight;
    double  _feedHeroImageAspectRatio;
    long long  _feedHeroPosition;
    double  _feedInteritemSpacing;
    unsigned long long  _feedMemoriesPerRow;
    long long  _feedScrollDirection;
    double  _firstFeedEntryHeaderHeight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _highlightedSectionHeaderOffset;
    long long  _idiom;
    struct UIColor { Class x1; } * _selectionHighlightColor;
    bool  _shouldRemoveHighlightOnScroll;
    double  _tabTitleBaselineOffset;
    struct UIFont { Class x1; } * _tabTitleFont;
    struct UIColor { Class x1; } * _tabTitleTextColor;
    double  _tabTopContentPadding;
}

@property (nonatomic, readonly) double _displayScale;
@property (nonatomic, readonly) unsigned long long _style;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } borderOffset;
@property (nonatomic, readonly) double borderWidth;
@property (nonatomic, readonly) double bottomShadowPadding;
@property (nonatomic, readonly) double distanceBetweenHeaderBaselineAndImageTop;
@property (nonatomic, readonly) double feedAdditionalContentThreshold;
@property (nonatomic, readonly) UIColor *feedBackgroundColor;
@property (nonatomic, readonly) Class feedDataSourceManagerClass;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } feedEntryEdgeInsets;
@property (nonatomic, readonly) double feedEntryHeaderHeight;
@property (nonatomic, readonly) double feedHeroImageAspectRatio;
@property (nonatomic, readonly) double feedHeroImagePaddingBottom;
@property (nonatomic, readonly) double feedHeroImagePaddingTop;
@property (nonatomic, readonly) long long feedHeroPosition;
@property (nonatomic, readonly) double feedInteritemSpacing;
@property (nonatomic, readonly) Class feedLayoutMetricsClass;
@property (nonatomic, readonly) unsigned long long feedMemoriesPerRow;
@property (nonatomic, readonly) long long feedScrollDirection;
@property (nonatomic, readonly) double feedSecondaryImagePaddingBottom;
@property (nonatomic, readonly) long long feedSectionLayoutAxis;
@property (nonatomic, readonly) Class feedTransitionAnimationCoordinatorClass;
@property (nonatomic, readonly) double firstFeedEntryHeaderHeight;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } highlightedSectionHeaderOffset;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutInsets;
@property (nonatomic, readonly) UIColor *selectionHighlightColor;
@property (nonatomic, readonly) bool shouldRemoveHighlightOnScroll;
@property (nonatomic, readonly) double tabTitleBaselineOffset;
@property (nonatomic, readonly) UIFont *tabTitleFont;
@property (nonatomic, readonly) UIColor *tabTitleTextColor;
@property (nonatomic, readonly) double tabTopContentPadding;

- (void).cxx_destruct;
- (void)_calculateSectionInsetWithExtendedTraitCollection:(id)arg1;
- (double)_displayScale;
- (double)_feedInteritemSpacingForReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)_style;
- (struct UIColor { Class x1; }*)borderColor;
- (struct CGPoint { double x1; double x2; })borderOffset;
- (double)borderWidth;
- (double)bottomShadowPadding;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (double)distanceBetweenHeaderBaselineAndImageTop;
- (double)feedAdditionalContentThreshold;
- (struct UIColor { Class x1; }*)feedBackgroundColor;
- (struct UIColor { Class x1; }*)feedCategoryLabelTextColor;
- (Class)feedDataSourceManagerClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })feedEntryEdgeInsets;
- (double)feedEntryHeaderHeight;
- (double)feedHeroImageAspectRatio;
- (double)feedHeroImagePaddingBottom;
- (double)feedHeroImagePaddingTop;
- (long long)feedHeroPosition;
- (double)feedInteritemSpacing;
- (Class)feedLayoutMetricsClass;
- (unsigned long long)feedMemoriesPerRow;
- (long long)feedScrollDirection;
- (double)feedSecondaryImagePaddingBottom;
- (long long)feedSectionLayoutAxis;
- (Class)feedTransitionAnimationCoordinatorClass;
- (double)firstFeedEntryHeaderHeight;
- (struct CGPoint { double x1; double x2; })highlightedSectionHeaderOffset;
- (long long)idiom;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsets;
- (id)newLayoutGeneratorWithMetrics:(id)arg1;
- (struct UIColor { Class x1; }*)selectionHighlightColor;
- (bool)shouldRemoveHighlightOnScroll;
- (double)tabTitleBaselineOffset;
- (struct UIFont { Class x1; }*)tabTitleFont;
- (struct UIColor { Class x1; }*)tabTitleTextColor;
- (double)tabTopContentPadding;

@end
