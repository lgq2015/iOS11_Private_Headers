/* made by EzioChiu.
 */

@protocol DOCThumbnail <NSObject>

@required

- (void)addListener:(id <DOCThumbnailListener>)arg1;
- (bool)isLoading;
- (bool)isRepresentativeIcon;
- (NSOperation *)operation;
- (void)removeListener:(id <DOCThumbnailListener>)arg1;
- (UIImage *)thumbnail;

@end
