/* made by EzioChiu.
 */

@protocol PUPhotosGridBarsHelperDelegate <NSObject>

@required

- (void)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 didChange:(unsigned long long)arg2;
- (void)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 getTitle:(out id*)arg2 prompt:(out id*)arg3 shouldHideBackButton:(out bool*)arg4 leftBarButtonItems:(out id*)arg5 rightBarButtonItems:(out id*)arg6 forPhotoSelectionManager:(PUPhotoSelectionManager *)arg7;
- (NSString *)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 titleForPhotoSelectionManager:(PUPhotoSelectionManager *)arg2;
- (PUPhotoSelectionManager *)photosGridBarsHelperPhotoSelectionManager:(PUPhotosGridBarsHelper *)arg1;

@end
