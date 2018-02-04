/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutMetrics : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } referenceSize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;

@end
