/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFileBackedImageKey : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSURL * _url;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUrl:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)url;

@end
