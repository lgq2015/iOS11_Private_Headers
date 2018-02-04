/* made by EzioChiu.
 */

@protocol HKGraphRenderDelegate <NSObject>

@required

- (void)graphRenderer:(UIView<HKGraphRenderer> *)arg1 shouldRenderSceneWithContext:(struct CGContext { }*)arg2;
- (bool)stillAnimating:(UIView<HKGraphRenderer> *)arg1;

@end