/* made by EzioChiu.
 */

@protocol STTextRenderCollector

@required

- (void)addTextStorage:(STTextTangierStorage *)arg1 withLayout:(STTextTangierTextLayout *)arg2 forNamedFlow:(NSString *)arg3 directLayerHostView:(UIView<TSDRepDirectLayerHosting> *)arg4 selectable:(bool)arg5 componentIdentifier:(NSString *)arg6;

@end