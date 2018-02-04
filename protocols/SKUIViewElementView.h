/* made by EzioChiu.
 */

@protocol SKUIViewElementView <NSObject>

@required

+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(SKUIViewElement *)arg1 context:(SKUIViewElementLayoutContext *)arg2;
+ (bool)prefetchResourcesForViewElement:(SKUIViewElement *)arg1 reason:(long long)arg2 context:(SKUIViewElementLayoutContext *)arg3;
+ (void)requestLayoutForViewElement:(SKUIViewElement *)arg1 width:(double)arg2 context:(SKUIViewElementLayoutContext *)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(SKUIViewElement *)arg2 context:(SKUIViewElementLayoutContext *)arg3;

- (void)reloadWithViewElement:(SKUIViewElement *)arg1 width:(double)arg2 context:(SKUIViewElementLayoutContext *)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(UIImage *)arg1 forArtworkRequest:(SKUIArtworkRequest *)arg2 context:(SKUIViewElementLayoutContext *)arg3;
- (bool)updateWithItemState:(SKUIItemState *)arg1 context:(SKUIViewElementLayoutContext *)arg2 animated:(bool)arg3;
- (UIView *)viewForElementIdentifier:(NSString *)arg1;

@optional

+ (SKUIViewTextProperties *)textPropertiesForViewElement:(SKUIViewElement *)arg1 width:(double)arg2 context:(SKUIViewElementLayoutContext *)arg3;

@end
