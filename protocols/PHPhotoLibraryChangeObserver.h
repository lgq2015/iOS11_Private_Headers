/* made by EzioChiu.
 */

@protocol PHPhotoLibraryChangeObserver <NSObject>

@required

- (void)photoLibraryDidChange:(PHChange *)arg1;

@end
