/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKImageFittingObject : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _containerFittingSize;
    double  _maximumFillFactor;
}

@property (nonatomic) struct CGSize { double x1; double x2; } containerFittingSize;
@property (nonatomic) double maximumFillFactor;

+ (id)containerFittingSize:(struct CGSize { double x1; double x2; })arg1 maximumFillFactor:(double)arg2;

- (struct CGSize { double x1; double x2; })containerFittingSize;
- (struct CGSize { double x1; double x2; })idealFittingSizeOfImageViewforImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (double)maximumFillFactor;
- (void)setContainerFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaximumFillFactor:(double)arg1;

@end
