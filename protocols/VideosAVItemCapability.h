/* made by EzioChiu.
 */

@protocol VideosAVItemCapability <NSObject>

@optional

- (bool)overrideCurrentItemIsReady;
- (unsigned long long)overrideType;
- (bool)supportsNotification;
- (bool)supportsPictureInPicture;
- (bool)supportsScrubbing;

@end
