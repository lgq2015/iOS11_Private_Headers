/* made by EzioChiu.
 */

@protocol PXPlacesMapRenderer <PXPlacesMapPipelineComponent>

@required

- (long long)annotationType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumEdgeInsets;

@end
