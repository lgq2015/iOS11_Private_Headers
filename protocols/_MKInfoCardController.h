/* made by EzioChiu.
 */

@protocol _MKInfoCardController <NSObject>

@required

+ (double)headerHeightInMinimalMode;

- (GEOAutomobileOptions *)automobileOptions;
- (double)contentAlpha;
- (void)hideTitle:(bool)arg1;
- (<UIScrollViewDelegate> *)scrollViewDelegate;
- (void)setAutomobileOptions:(GEOAutomobileOptions *)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setScrollViewDelegate:(id <UIScrollViewDelegate>)arg1;
- (void)setTransitOptions:(GEOTransitOptions *)arg1;
- (GEOTransitOptions *)transitOptions;

@end
