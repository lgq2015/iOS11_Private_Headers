/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPhotoshopRenditionSpec : TDRenditionSpec

@property (nonatomic) bool isTintable;
@property (nonatomic, retain) TDPhotoshopLayer *photoshopLayer;

- (int)_layerIndexInPSDImage:(id)arg1;
- (void)_logError:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (bool)_sliceRectanglesForPSDImage:(id)arg1 rowsPerRendition:(int*)arg2 columnsPerRendition:(int*)arg3 originalColumnWidth:(int*)arg4 newColumnWidth:(int*)arg5 originalRowHeight:(int*)arg6 newRowHeight:(int*)arg7 originalColumnX:(int*)arg8 originalRowY:(int*)arg9 newRenditionSize:(struct { int x1; int x2; }*)arg10 newSliceCount:(int*)arg11 renditionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg12 throwawaySliceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg13;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })_subtractThrowawaySliceFromMetricsIfNeeded:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 metrics:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg2 renditionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(bool)arg2 colorSpaceID:(unsigned long long)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(bool)arg2 colorSpaceID:(unsigned long long)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(bool)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 baselineMetricsMask:(id)arg5 auxiliary1MetricsMask:(id)arg6 auxiliary2MetricsMask:(id)arg7 colorSpaceID:(unsigned long long)arg8;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)debugDescription;
- (void)drawPackableRenditionInContext:(struct CGContext { }*)arg1 withDocument:(id)arg2;
- (int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7;
- (void)setAttributesFromCopyData:(id)arg1;
- (bool)updatePackingPropertiesWithDocument:(id)arg1;

@end
