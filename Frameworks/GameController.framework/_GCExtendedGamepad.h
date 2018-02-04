/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCExtendedGamepad : GCExtendedGamepad <GCNamedProfile, NSSecureCoding> {
    _GCControllerButtonInput * _button0;
    _GCControllerButtonInput * _button1;
    _GCControllerButtonInput * _button2;
    _GCControllerButtonInput * _button3;
    GCController * _controller;
    _GCControllerDirectionPad * _dpad;
    bool  _dpadFlippedY;
    bool  _leftFlippedY;
    _GCControllerButtonInput * _leftShoulder;
    _GCControllerDirectionPad * _leftThumbstick;
    _GCControllerButtonInput * _leftTrigger;
    bool  _rightFlippedY;
    _GCControllerButtonInput * _rightShoulder;
    _GCControllerDirectionPad * _rightThumbstick;
    _GCControllerButtonInput * _rightTrigger;
    id /* block */  _valueChangedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (id)dpad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(bool)arg2 leftFlippedY:(bool)arg3 rightFlippedY:(bool)arg4;
- (id)leftShoulder;
- (id)leftThumbstick;
- (id)leftTrigger;
- (id)name;
- (id)rightShoulder;
- (id)rightThumbstick;
- (id)rightTrigger;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (id /* block */)valueChangedHandler;

@end
