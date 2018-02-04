/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget> {
    UIView * _associatedView;
    _MKUserTrackingButtonController * _controller;
    UIButton * _customButton;
    bool  _explicitlyEnabled;
    bool  _hasCustomAssociatedView;
    bool  _internallyEnabled;
    bool  _isLegacy;
    MKMapView * _mapView;
    UINavigationBar * _navigationBar;
    UIToolbar * _toolbar;
    UIImage * _trackingEmptyImage;
    UIImage * _trackingFollowImage;
    UIImage * _trackingFollowWithHeadingImage;
    UIImage * _trackingNoneImage;
    _MKUserTrackingButton * _userTrackingButton;
}

@property (nonatomic, retain) UIView *_associatedView;
@property (nonatomic, retain) UINavigationBar *_navigationBar;
@property (setter=_setState:, nonatomic) long long _state;
@property (nonatomic, retain) UIToolbar *_toolbar;
@property (setter=_setUserTrackingView:, nonatomic, retain) <MKUserTrackingView> *_userTrackingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapView *mapView;
@property (getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:, nonatomic) bool selectsWhenTracking;
@property (readonly) Class superclass;

+ (Class)_activityIndicatorClass;

- (void).cxx_destruct;
- (long long)_activityIndicatorStyle;
- (id)_associatedView;
- (void)_goToNextMode:(id)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_imageForUserTrackingMode:(long long)arg1;
- (bool)_isHighlightedForState:(long long)arg1;
- (bool)_isInMiniBar;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1;
- (id)_navigationBar;
- (void)_repositionViews;
- (bool)_selectsWhenTracking;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2;
- (void)_setInternallyEnabled:(bool)arg1;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2;
- (void)_setSelectsWhenTracking:(bool)arg1;
- (void)_setState:(long long)arg1;
- (void)_setUserTrackingView:(id)arg1;
- (long long)_state;
- (long long)_styleForState:(long long)arg1;
- (id)_toolbar;
- (id)_trackingEmptyImage;
- (id)_trackingFollowImage;
- (id)_trackingFollowWithHeadingImage;
- (id)_trackingNoneImage;
- (void)_updateForState:(long long)arg1;
- (id)_userTrackingView;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapView:(id)arg1;
- (bool)isEnabled;
- (id)mapView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setEnabled:(bool)arg1;
- (void)setMapView:(id)arg1;
- (void)set_associatedView:(id)arg1;
- (void)set_navigationBar:(id)arg1;
- (void)set_toolbar:(id)arg1;

@end
