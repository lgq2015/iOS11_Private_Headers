/* made by EzioChiu.
 */

@protocol VTUIEndPointDelegate <NSObject>

@required

- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)arg1;

@end
