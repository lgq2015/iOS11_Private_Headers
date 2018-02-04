/* made by EzioChiu.
 */

@protocol TSDTileGeometryProviding <NSObject>

@required

- (void)setTileGeometryDirty:(bool)arg1;
- (void)tileGeometryAddVisibileIndices:(NSMutableIndexSet *)arg1 withLayer:(TSDTilingLayer *)arg2 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)tileGeometryConfigureWithLayer:(TSDTilingLayer *)arg1 tileLayer:(CALayer *)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)tileGeometryCountWithLayer:(TSDTilingLayer *)arg1;
- (bool)tileGeometryDirty;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tileGeometryRectWithLayer:(TSDTilingLayer *)arg1 atIndex:(unsigned long long)arg2 mask:(unsigned int*)arg3;

@end
