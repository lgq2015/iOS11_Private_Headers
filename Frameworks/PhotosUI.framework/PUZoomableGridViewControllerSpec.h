/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUZoomableGridViewControllerSpec : NSObject {
    bool  _canDisplayMultipleRightBarButtonItems;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _collectionsLevelSectionHeaderHighlightInset;
    long long  _collectionsSectionHeaderStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fullMomentsLevelSectionHeaderHighlightInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullMomentsLevelThumbnailSize;
    long long  _fullMomentsSectionHeaderStyle;
    PUPhotosGridViewControllerSpec * _gridSpec;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _magnifiedDragEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _magnifiedImageSize;
    double  _magnifiedYOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _yearsLevelSectionHeaderHighlightInset;
    long long  _yearsSectionHeaderStyle;
}

@property (nonatomic, readonly) bool canDisplayMultipleRightBarButtonItems;
@property (nonatomic, readonly) long long collectionsLevelCellFillMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collectionsLevelThumbnailSize;
@property (nonatomic, readonly) unsigned long long collectionsSectionHeaderBackgroundStyle;
@property (nonatomic, readonly) long long collectionsSectionHeaderStyle;
@property (nonatomic, readonly) long long fullMomentsLevelCellFillMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fullMomentsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fullMomentsLevelThumbnailSize;
@property (nonatomic, readonly) unsigned long long fullMomentsSectionHeaderBackgroundStyle;
@property (nonatomic, readonly) long long fullMomentsSectionHeaderStyle;
@property (setter=_setGridSpec:, nonatomic, retain) PUPhotosGridViewControllerSpec *gridSpec;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } magnifiedDragEdgeInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } magnifiedImageSize;
@property (nonatomic) double magnifiedYOffset;
@property (nonatomic, readonly) long long yearsLevelCellFillMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } yearsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } yearsLevelThumbnailSize;
@property (nonatomic, readonly) unsigned long long yearsSectionHeaderBackgroundStyle;
@property (nonatomic, readonly) long long yearsSectionHeaderStyle;

- (void).cxx_destruct;
- (void)_setGridSpec:(id)arg1;
- (bool)canDisplayMultipleRightBarButtonItems;
- (long long)collectionsLevelCellFillMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })collectionsLevelThumbnailSize;
- (unsigned long long)collectionsSectionHeaderBackgroundStyle;
- (long long)collectionsSectionHeaderStyle;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (bool)dynamicLayoutEnabled;
- (long long)fullMomentsLevelCellFillMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fullMomentsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })fullMomentsLevelThumbnailSize;
- (unsigned long long)fullMomentsSectionHeaderBackgroundStyle;
- (long long)fullMomentsSectionHeaderStyle;
- (id)gridSpec;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })magnifiedDragEdgeInsets;
- (struct CGSize { double x1; double x2; })magnifiedImageSize;
- (double)magnifiedYOffset;
- (id)newGridSpec;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMagnifiedYOffset:(double)arg1;
- (long long)yearsLevelCellFillMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })yearsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })yearsLevelThumbnailSize;
- (unsigned long long)yearsSectionHeaderBackgroundStyle;
- (long long)yearsSectionHeaderStyle;

@end
