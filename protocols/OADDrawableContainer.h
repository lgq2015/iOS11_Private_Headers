/* made by EzioChiu.
 */

@protocol OADDrawableContainer <NSObject>

@required

- (void)addChild:(OADDrawable *)arg1;
- (void)addChildren:(NSArray *)arg1;
- (OADDrawable *)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (NSArray *)children;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logicalBounds;
- (void)removeChild:(OADDrawable *)arg1;
- (void)replaceChild:(OADDrawable *)arg1 with:(OADDrawable *)arg2;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
