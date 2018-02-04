/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDPDFImageProvider : TSDImageProvider {
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    struct CGPDFDocument { } * mPDFDocument;
}

- (struct CGPDFDocument { }*)CGPDFDocument;
- (void)dealloc;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)flush;
- (bool)hasFlushableContent;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGPDFDocument { }*)p_load;
- (void)p_loadIfNecessary;
- (long long)pageAngle;

@end
