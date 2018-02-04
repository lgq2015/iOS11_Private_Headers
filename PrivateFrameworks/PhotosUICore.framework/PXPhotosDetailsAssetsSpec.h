/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec {
    PXWidgetSpec * __widgetSpec;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentGuideInsets;
    unsigned long long  _detailsOptions;
    double  _editorialInterTileSpacing;
    long long  _editorialNumberOfColumns;
    bool  _enableBadges;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _gridContentInsets;
    long long  _gridContentMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _gridInterItemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _gridItemSize;
    bool  _shouldShowTitle;
}

@property (nonatomic, readonly) PXWidgetSpec *_widgetSpec;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentGuideInsets;
@property (nonatomic, readonly) unsigned long long detailsOptions;
@property (nonatomic, readonly) double editorialInterTileSpacing;
@property (nonatomic, readonly) long long editorialNumberOfColumns;
@property (nonatomic, readonly) bool enableBadges;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } gridContentInsets;
@property (nonatomic, readonly) long long gridContentMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } gridInterItemSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } gridItemSize;
@property (nonatomic, readonly) bool shouldShowTitle;

+ (struct CGSize { double x1; double x2; })bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 bestSpacing:(double*)arg3 bestInset:(double*)arg4;
+ (bool)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_computeEditorialWithExtendedTraitCollection:(id)arg1;
- (void)_computeGridWithExtendedTraitCollection:(id)arg1;
- (void)_computeSpecWithExtendedTraitCollection:(id)arg1;
- (id)_widgetSpec;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentGuideInsets;
- (double)defaultCornerRadius;
- (unsigned long long)detailsOptions;
- (double)editorialInterTileSpacing;
- (long long)editorialNumberOfColumns;
- (bool)enableBadges;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gridContentInsets;
- (long long)gridContentMode;
- (struct CGSize { double x1; double x2; })gridInterItemSpacing;
- (struct CGSize { double x1; double x2; })gridItemSize;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (bool)shouldShowTitle;

@end
