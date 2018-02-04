/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasMainMenuSectionMetrics : NSObject {
    struct CGSize { double x1; double x2; } * _calculatedSizes;
    <VideosExtrasMainMenuSectionMetricsDataSource> * _dataSource;
    double  _desiredCellSpacing;
    UIFontDescriptor * _desiredFontDescriptor;
    double  _desiredWidth;
    double  _fittingCellSpacing;
    UIFontDescriptor * _fittingFontDescriptor;
    double  _fittingWidth;
    long long  _itemCount;
    double  _minimumCellSpacing;
    UIFontDescriptor * _minimumFontDescriptor;
    bool  _needsUpdate;
    struct CGSize { 
        double width; 
        double height; 
    }  _totalFittingSize;
}

@property (nonatomic) <VideosExtrasMainMenuSectionMetricsDataSource> *dataSource;
@property (nonatomic) double desiredCellSpacing;
@property (nonatomic, retain) UIFontDescriptor *desiredFontDescriptor;
@property (nonatomic) double desiredWidth;
@property (nonatomic, readonly) double fittingCellSpacing;
@property (nonatomic, readonly) UIFontDescriptor *fittingFontDescriptor;
@property (nonatomic) double minimumCellSpacing;
@property (nonatomic, retain) UIFontDescriptor *minimumFontDescriptor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } totalFittingSize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(double)arg2 itemCount:(long long)arg3 itemSizes:(out struct CGSize { double x1; double x2; }*)arg4;
- (void)_recalculateSizes;
- (void)_setNeedsUpdate;
- (void)_updateAllMetrics;
- (id)dataSource;
- (void)dealloc;
- (double)desiredCellSpacing;
- (id)desiredFontDescriptor;
- (double)desiredWidth;
- (double)fittingCellSpacing;
- (id)fittingFontDescriptor;
- (double)minimumCellSpacing;
- (id)minimumFontDescriptor;
- (void)setDataSource:(id)arg1;
- (void)setDesiredCellSpacing:(double)arg1;
- (void)setDesiredFontDescriptor:(id)arg1;
- (void)setDesiredWidth:(double)arg1;
- (void)setFittingWidth:(double)arg1;
- (void)setMinimumCellSpacing:(double)arg1;
- (void)setMinimumFontDescriptor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForCellAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })totalFittingSize;
- (void)updateSizes;

@end
