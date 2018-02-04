/* made by EzioChiu.
 */

@protocol TSDAnimationSession <NSObject>

@required

- (bool)isOffscreenPlayback;
- (void)setShouldDrawTexturesAsynchronously:(bool)arg1;
- (void)setShouldForceTextureGeneration:(bool)arg1;
- (void)setShouldUseSourceImage:(bool)arg1;
- (bool)shouldDrawTexturesAsynchronously;
- (bool)shouldForceTextureGeneration;
- (bool)shouldUseSourceImage;
- (double)showScale;

@end
