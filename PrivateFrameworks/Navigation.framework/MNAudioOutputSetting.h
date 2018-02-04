/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAudioOutputSetting : NSObject <NSSecureCoding> {
    bool  _hfpPreference;
    NSSet * _pickableRoutes;
    bool  _selected;
    bool  _selectedForSystem;
}

@property (nonatomic, readonly) bool hfpPreference;
@property (nonatomic) bool selectedForSystem;

+ (bool)isBluetoothRoute:(id)arg1;
+ (id)macAddressForRoute:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isHFPRoute:(id)arg1;
- (bool)_isPicked:(id)arg1;
- (bool)_pickRoute:(id)arg1;
- (bool)allowHFPPreferenceSelectionForRouteSelection:(unsigned long long)arg1;
- (bool)containsPickableRoute:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hfpPreference;
- (id)initWithCoder:(id)arg1;
- (id)initWithPickableRoute:(id)arg1;
- (id)initWithPickableRoutes:(id)arg1;
- (bool)isEqualToSetting:(id)arg1;
- (bool)isPicked;
- (id)macAddress;
- (id)pickableRouteForHFPPreference:(bool)arg1;
- (bool)pickedStateConsistentWithHFPPreference;
- (id)routeUID;
- (bool)selectedForRouteSelection:(unsigned long long)arg1;
- (bool)selectedForSystem;
- (void)setHfpPreference:(bool)arg1;
- (void)setPicked:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 shouldSetHFPPreference:(bool)arg2;
- (void)setSelectedForSystem:(bool)arg1;
- (bool)settingForBluetoothComboDevice;
- (bool)settingForBluetoothDevice;
- (bool)settingForDefaultRoute;
- (bool)settingSupportsBluetoothHFP;

@end
