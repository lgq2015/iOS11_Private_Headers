/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECColumnWidthConvertor : NSObject {
    int  mMultiplier;
}

- (float)fontWidthAdjustmentFor:(id)arg1;
- (double)lassoColumnWidthFromXl:(double)arg1;
- (void)setupWithEDFont:(id)arg1 state:(id)arg2;
- (struct CGSize { double x1; double x2; })stringSizeWithFont:(id)arg1 edFont:(id)arg2 drawingState:(id)arg3;
- (double)xlColumnWidthFromLasso:(double)arg1;
- (double)xlColumnWidthFromXlBaseColumnWidth:(double)arg1;

@end
