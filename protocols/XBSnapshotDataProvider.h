/* made by EzioChiu.
 */

@protocol XBSnapshotDataProvider <NSObject>

@required

- (XBSnapshotDataProviderContext *)context;

@optional

- (UIImage *)fetchImage;
- (NSData *)fetchImageData:(out struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1;
- (void)invalidateImage;

@end
