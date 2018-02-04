/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventMapDetailItem : EKEventDetailItem <MKMapViewDelegate> {
    UITableViewCell * _cell;
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    UIView * _loadingView;
    CLLocation * _location;
    MKMapView * _mapView;
    UITableViewCell * _oldCell;
    UIView * _overlayView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_locationStringForStructuredLocation:(id)arg1;
+ (id)_mapsURLForLocationOnEvent:(id)arg1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg2;

- (void).cxx_destruct;
- (double)_mapHeight;
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2;
- (void)_setupMapView;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(bool)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)reset;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;

@end
