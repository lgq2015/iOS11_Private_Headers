/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAirPlayScreenDetector : NSObject {
    PUAirPlayScreenMap * __detectedScreensMap;
    <PUAirPlayScreenReceiver> * _receiver;
}

@property (setter=_setDetectedScreensMap:, nonatomic, retain) PUAirPlayScreenMap *_detectedScreensMap;
@property (nonatomic, readonly) NSArray *availableScreens;
@property (nonatomic) <PUAirPlayScreenReceiver> *receiver;

- (void).cxx_destruct;
- (void)_appEnteredBackground:(id)arg1;
- (void)_appEnteringForeground:(id)arg1;
- (void)_detectedNewScreen:(id)arg1;
- (id)_detectedScreensMap;
- (void)_lostScreen:(id)arg1;
- (void)_scanForAvailableScreensIfNeeded;
- (void)_setDetectedScreensMap:(id)arg1;
- (void)_setUpApplicationNotifications;
- (void)_setUpScreenNotifications;
- (void)_tearDownApplicationNotifications;
- (void)_tearDownScreenNotifications;
- (id)availableScreens;
- (void)dealloc;
- (id)init;
- (id)receiver;
- (void)setReceiver:(id)arg1;
- (bool)shouldIgnoreScreen:(id)arg1;

@end