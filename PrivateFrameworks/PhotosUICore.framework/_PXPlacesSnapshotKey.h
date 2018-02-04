/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXPlacesSnapshotKey : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  __imageSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } _imageSize;

- (struct CGSize { double x1; double x2; })_imageSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (void)set_imageSize:(struct CGSize { double x1; double x2; })arg1;

@end
