/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView> {
    UIView<_MKCalloutAccessoryView> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (double)_mapkit_calloutCustomLeftMargin;
- (double)_mapkit_calloutCustomRightMargin;
- (double)_mapkit_minimumCalloutWidthMultiplier;
- (void)_mapkit_setCalloutBackgroundColor:(id)arg1;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (id)initWithView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

@end
