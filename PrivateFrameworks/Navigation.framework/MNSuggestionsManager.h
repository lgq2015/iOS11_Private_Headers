/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSuggestionsManager : NSObject <MNLocationManagerObserver> {
    bool  _changingState;
    bool  _locationsAvailable;
    NSHashTable * _observers;
    unsigned long long  _state;
    NSMutableDictionary * _suggestionsStorage;
}

@property (readonly) NSArray *allSuggestions;
@property bool changingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool locationsAvailable;
@property (retain) NSHashTable *observers;
@property (nonatomic) unsigned long long state;
@property (retain) NSMutableDictionary *suggestionsStorage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addFakeSuggestion:(id)arg1;
- (void)_notifyObserversDidAddSuggestion:(id)arg1;
- (void)_notifyObserversDidUpdateSuggestions;
- (void)_startListenForDebugTestNotifications;
- (void)_stopListenForDebugTestNotifications;
- (void)_updateLocationsAvailable;
- (void)_verifyHaveObservers;
- (void)addObserver:(id)arg1;
- (void)addSuggestions:(id)arg1;
- (id)allSuggestions;
- (bool)changingState;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (bool)locationsAvailable;
- (id)observers;
- (bool)refreshSuggestions;
- (void)removeObserver:(id)arg1;
- (void)setChangingState:(bool)arg1;
- (void)setLocationsAvailable:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSuggestionsStorage:(id)arg1;
- (unsigned long long)state;
- (id)suggestionsStorage;

@end
