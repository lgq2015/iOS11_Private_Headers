/* made by EzioChiu.
 */

@protocol _UILAPropertySource <NSObject>

@required

- (NSSet *)_newlyHiddenItems;
- (NSSet *)_newlyUnhiddenItems;
- (long long)axis;
- (bool)layoutFillsCanvas;
- (bool)layoutUsesCanvasMarginsWhenFilling;
- (void)setAxis:(long long)arg1;
- (void)setLayoutFillsCanvas:(bool)arg1;
- (void)setLayoutUsesCanvasMarginsWhenFilling:(bool)arg1;

@end
