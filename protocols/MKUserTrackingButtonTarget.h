/* made by EzioChiu.
 */

@protocol MKUserTrackingButtonTarget <NSObject>

@required

+ (Class)_activityIndicatorClass;

- (long long)_activityIndicatorStyle;
- (UIImage *)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (bool)_isHighlightedForState:(long long)arg1;
- (void)_repositionViews;
- (void)_setInternallyEnabled:(bool)arg1;
- (void)_updateForState:(long long)arg1;

@end
