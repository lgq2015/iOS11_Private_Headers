/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARManufacturerIcon : NSObject {
    NSData * _imageData;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    bool  _prerendered;
}

@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (getter=isPrerendered, nonatomic, readonly) bool prerendered;

- (void).cxx_destruct;
- (id)description;
- (id)imageData;
- (id)initWithPropertySupplier:(id /* block */)arg1;
- (bool)isPrerendered;
- (struct CGSize { double x1; double x2; })pixelSize;

@end
