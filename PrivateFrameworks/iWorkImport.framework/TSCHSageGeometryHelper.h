/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSageGeometryHelper : NSObject {
    TSCHChartInfo * mChartInfo;
    TSDInfoGeometry * mImportedInfoGeometry;
}

+ (id)helperWithImportedChartInfo:(id)arg1 importedInfoGeometry:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sageChartAreaBoundsForExportWithChartInfo:(id)arg1 geometryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 returningContainingViewportSize:(id*)arg3;

- (void)dealloc;
- (id)initWithImportedChartInfo:(id)arg1 importedInfoGeometry:(id)arg2;
- (struct CGSize { double x1; double x2; })naturalSize;

@end
