/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCGPixelImageBuffer : BLPixelImageBuffer {
    struct CGContext { } * _bitmapContext;
    NSMutableData * _bitmapData;
    unsigned long long  _rowBytes;
}

@property (nonatomic, retain) NSMutableData *bitmapData;

- (void).cxx_destruct;
- (void)accessPixelsByAddressInBlock:(id /* block */)arg1;
- (void)accessPixelsByContextInBlock:(id /* block */)arg1;
- (id)bitmapData;
- (id)ciImage;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2;
- (void)readPixelsByAddressInBlock:(id /* block */)arg1;
- (void)renderCIImage:(id)arg1;
- (void)setBitmapData:(id)arg1;

@end
