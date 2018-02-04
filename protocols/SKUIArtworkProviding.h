/* made by EzioChiu.
 */

@protocol SKUIArtworkProviding <NSObject, NSSecureCoding, SKUICacheCoding, NSCopying>

@required

+ (bool)canHandleArtworkFormat:(id)arg1;

- (SKUIArtwork *)artworkForSize:(long long)arg1;
- (NSURL *)artworkURLForSize:(long long)arg1;
- (SKUIArtwork *)artworkWithWidth:(long long)arg1;
- (SKUIArtwork *)bestArtworkForScaledSize:(struct CGSize { double x1; double x2; })arg1;
- (SKUIArtwork *)bestArtworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hasArtwork;
- (SKUIArtwork *)largestArtwork;
- (SKUIArtwork *)preferredExactArtworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (SKUIArtwork *)smallestArtwork;

@end
