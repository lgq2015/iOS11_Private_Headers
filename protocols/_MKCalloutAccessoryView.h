/* made by EzioChiu.
 */

@protocol _MKCalloutAccessoryView <NSObject>

@optional

- (double)_mapkit_calloutCustomLeftMargin;
- (double)_mapkit_calloutCustomRightMargin;
- (bool)_mapkit_calloutShouldAlignToDetailBaseline;
- (bool)_mapkit_calloutShouldUseIntrinsicContentSize;
- (double)_mapkit_minimumCalloutWidthMultiplier;
- (void)_mapkit_setCalloutAlignedToDetailView:(bool)arg1;
- (void)_mapkit_setCalloutBackgroundColor:(UIColor *)arg1;
- (void)_mapkit_setCalloutTextColor:(UIColor *)arg1;
- (bool)_mapkit_shouldFillCalloutHeight;

@end
