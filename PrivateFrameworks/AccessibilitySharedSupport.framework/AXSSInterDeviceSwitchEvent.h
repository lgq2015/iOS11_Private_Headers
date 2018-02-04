/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSInterDeviceSwitchEvent : NSObject {
    NSArray * _actions;
    NSString * _deviceIdentifier;
    bool  _isDown;
    NSArray * _longPressActions;
    NSString * _switchDisplayName;
    NSString * _switchIdentifier;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) bool isDown;
@property (nonatomic, retain) NSArray *longPressActions;
@property (nonatomic, copy) NSString *switchDisplayName;
@property (nonatomic, copy) NSString *switchIdentifier;

- (void).cxx_destruct;
- (id)actions;
- (id)description;
- (id)deviceIdentifier;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 isDown:(bool)arg5;
- (id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 longPressActions:(id)arg5 isDown:(bool)arg6;
- (bool)isDown;
- (id)longPressActions;
- (void)setActions:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setIsDown:(bool)arg1;
- (void)setLongPressActions:(id)arg1;
- (void)setSwitchDisplayName:(id)arg1;
- (void)setSwitchIdentifier:(id)arg1;
- (id)switchDisplayName;
- (id)switchIdentifier;

@end
