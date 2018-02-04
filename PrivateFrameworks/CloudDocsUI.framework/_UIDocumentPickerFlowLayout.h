/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerFlowLayout : UICollectionViewFlowLayout <_UICollectionViewLayoutCellStyle> {
    double  _contentSizeAdjustment;
    long long  cellStyle;
}

@property (nonatomic) long long cellStyle;
@property (nonatomic) double contentSizeAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canBeEdited;
- (long long)cellStyle;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)contentSizeAdjustment;
- (void)setCellStyle:(long long)arg1;
- (void)setContentSizeAdjustment:(double)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
