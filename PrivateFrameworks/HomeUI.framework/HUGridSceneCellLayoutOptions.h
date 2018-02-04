/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridSceneCellLayoutOptions : HUGridCellLayoutOptions {
    double  _cellHeight;
    UIFont * _descriptionFont;
    double  _iconInnerHorizontalMargin;
    unsigned long long  _numberOfTitleLines;
    double  _titleDescriptionLineSpacing;
    double  _titleInterLineSpacing;
}

@property (nonatomic) double cellHeight;
@property (nonatomic, retain) UIFont *descriptionFont;
@property (nonatomic) double iconInnerHorizontalMargin;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (nonatomic) double titleDescriptionLineSpacing;
@property (nonatomic) double titleInterLineSpacing;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (void).cxx_destruct;
- (double)cellHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionFont;
- (double)iconInnerHorizontalMargin;
- (unsigned long long)numberOfTitleLines;
- (void)setCellHeight:(double)arg1;
- (void)setDescriptionFont:(id)arg1;
- (void)setIconInnerHorizontalMargin:(double)arg1;
- (void)setNumberOfTitleLines:(unsigned long long)arg1;
- (void)setTitleDescriptionLineSpacing:(double)arg1;
- (void)setTitleInterLineSpacing:(double)arg1;
- (double)titleDescriptionLineSpacing;
- (double)titleInterLineSpacing;

@end
