/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasGridViewControllerStyle : NSObject {
    bool  _adjustsContentInsetByBottomNavBar;
    UIColor * _backgroundColor;
    double  _cellLineSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _collectionViewInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _defaultCellSectionInsets;
    VideosExtrasGridCellStyle * _defaultCellStyle;
    double  _defaultSpacing;
    NSDictionary * _detailDefaultFontAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _detailInsets;
    UIColor * _detailTextColor;
    NSString * _detailTextStyle;
    VideosExtrasGridHeaderStyle * _headerStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageCellSectionInsets;
    VideosExtrasGridCellStyle * _imageCellStyle;
    double  _imageSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _productCellSectionInsets;
    VideosExtrasGridCellStyle * _productCellStyle;
    double  _productSpacing;
    VideosExtrasGridSectionHeaderStyle * _sectionHeaderStyle;
    bool  _showsScrollFade;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _videoCellSectionInsets;
    VideosExtrasGridCellStyle * _videoCellStyle;
    double  _videoSpacing;
}

@property (nonatomic) bool adjustsContentInsetByBottomNavBar;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) double cellLineSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionViewInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } defaultCellSectionInsets;
@property (nonatomic, retain) VideosExtrasGridCellStyle *defaultCellStyle;
@property (nonatomic) double defaultSpacing;
@property (nonatomic, retain) NSDictionary *detailDefaultFontAttributes;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } detailInsets;
@property (nonatomic, retain) UIColor *detailTextColor;
@property (nonatomic, retain) NSString *detailTextStyle;
@property (nonatomic, retain) VideosExtrasGridHeaderStyle *headerStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageCellSectionInsets;
@property (nonatomic, retain) VideosExtrasGridCellStyle *imageCellStyle;
@property (nonatomic) double imageSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } productCellSectionInsets;
@property (nonatomic, retain) VideosExtrasGridCellStyle *productCellStyle;
@property (nonatomic) double productSpacing;
@property (nonatomic, retain) VideosExtrasGridSectionHeaderStyle *sectionHeaderStyle;
@property (nonatomic) bool showsScrollFade;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } videoCellSectionInsets;
@property (nonatomic, retain) VideosExtrasGridCellStyle *videoCellStyle;
@property (nonatomic) double videoSpacing;

- (void).cxx_destruct;
- (bool)adjustsContentInsetByBottomNavBar;
- (id)backgroundColor;
- (double)cellLineSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultCellSectionInsets;
- (id)defaultCellStyle;
- (double)defaultSpacing;
- (id)detailDefaultFontAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })detailInsets;
- (id)detailTextColor;
- (id)detailTextStyle;
- (id)headerStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageCellSectionInsets;
- (id)imageCellStyle;
- (double)imageSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })productCellSectionInsets;
- (id)productCellStyle;
- (double)productSpacing;
- (id)sectionHeaderStyle;
- (void)setAdjustsContentInsetByBottomNavBar:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellLineSpacing:(double)arg1;
- (void)setCollectionViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDefaultCellSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDefaultCellStyle:(id)arg1;
- (void)setDefaultSpacing:(double)arg1;
- (void)setDetailDefaultFontAttributes:(id)arg1;
- (void)setDetailInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setDetailTextStyle:(id)arg1;
- (void)setHeaderStyle:(id)arg1;
- (void)setImageCellSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImageCellStyle:(id)arg1;
- (void)setImageSpacing:(double)arg1;
- (void)setProductCellSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setProductCellStyle:(id)arg1;
- (void)setProductSpacing:(double)arg1;
- (void)setSectionHeaderStyle:(id)arg1;
- (void)setShowsScrollFade:(bool)arg1;
- (void)setVideoCellSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVideoCellStyle:(id)arg1;
- (void)setVideoSpacing:(double)arg1;
- (bool)showsScrollFade;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })videoCellSectionInsets;
- (id)videoCellStyle;
- (double)videoSpacing;

@end
