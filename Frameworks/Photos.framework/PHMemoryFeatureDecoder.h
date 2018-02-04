/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMemoryFeatureDecoder : NSKeyedUnarchiver {
    PHPhotoLibrary * _photoLibrary;
}

@property (retain) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;

@end
