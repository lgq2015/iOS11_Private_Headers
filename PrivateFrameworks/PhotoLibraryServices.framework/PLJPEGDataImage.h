/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJPEGDataImage : UIImage {
    struct __CVBuffer { } * _pixelBuffer;
    NSData * _plData;
}

+ (id)pl_imageWithStoredJPEGData:(id)arg1;

- (void)dealloc;
- (id)pl_imageJPEGData;

@end
