/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchReefRepairOperator : NSObject {
    int  _brushSize;
    void * _buffer;
    int  _height;
    void * _maskBuffer;
    int  _maskHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _maskRect;
    int  _maskRowBytes;
    int  _maskWidth;
    int  _rowBytes;
    int  _width;
}

+ (int)borderWithBrushSize:(int)arg1;

- (struct CGPoint { double x1; double x2; })analyzeOffset;
- (id)initWithRepairSourceData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)repair;
- (void)repairWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBrushSize:(int)arg1;
- (void)setMaskData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)setMaskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
