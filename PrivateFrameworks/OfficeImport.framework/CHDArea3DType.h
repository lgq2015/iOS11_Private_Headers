/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDArea3DType : CHDArea2DType {
    int  mGapDepth;
}

+ (bool)is3DType;

- (int)gapDepth;
- (id)initWithChart:(id)arg1;
- (void)setGapDepth:(int)arg1;

@end
