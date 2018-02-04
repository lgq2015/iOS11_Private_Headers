/* made by EzioChiu.
 */

@protocol SXLayouter <NSObject>

@required

- (<SXLayouterDelegate> *)delegate;
- (void)layoutBlueprint:(SXLayoutBlueprint *)arg1 columnLayout:(SXColumnLayout *)arg2 layoutAttributes:(SXLayoutAttributes *)arg3 shouldContinue:(bool*)arg4;
- (void)setDelegate:(id <SXLayouterDelegate>)arg1;

@end
