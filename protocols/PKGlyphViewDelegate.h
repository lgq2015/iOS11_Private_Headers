/* made by EzioChiu.
 */

@protocol PKGlyphViewDelegate <NSObject>

@optional

- (void)glyphView:(PKGlyphView *)arg1 revealingCheckmark:(bool)arg2;
- (void)glyphView:(PKGlyphView *)arg1 transitioningToState:(long long)arg2;

@end
