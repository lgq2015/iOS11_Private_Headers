/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAVRoutingControllerDelegate> {
    int  _airPlayPasswordAlertDidAppearToken;
    bool  _airPlayPasswordAlertDidAppearTokenIsValid;
    int  _airPlayPasswordAlertDidCancelToken;
    long long  _avItemType;
    bool  _displayMirroringRoutes;
    NSArray * _displayedRoutes;
    MPAVRoutingController * _routingController;
    bool  _wirelessDisplayCapableRouteIsPicked;
    bool  _wirelessDisplayRouteIsPendingAsPicked;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (readonly) Class superclass;

+ (id)routesPreferringMirroring;

- (void).cxx_destruct;
- (id)_availableRoutes;
- (void)_debugButtonAction:(id)arg1;
- (id)_displayedRoutes;
- (id)_effectivePickedRouteReturningActualPickedRouteType:(long long*)arg1;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (id)_pickedRoute;
- (bool)_wirelessDisplayCapableRouteIsPicked;
- (void)dealloc;
- (id)initWithType:(long long)arg1 displayMirroringRoutes:(bool)arg2;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
