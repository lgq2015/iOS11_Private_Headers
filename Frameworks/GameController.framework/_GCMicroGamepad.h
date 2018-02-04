/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCMicroGamepad : GCMicroGamepad <GCNamedProfile, NSSecureCoding> {
    _GCControllerButtonInput * _button0;
    _GCControllerButtonInput * _button1;
    GCController * _controller;
    _GCControllerDirectionPad * _dpad;
    bool  _dpadFlippedY;
    id /* block */  _valueChangedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttonA;
- (id)buttonX;
- (id)controller;
- (id)dpad;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(bool)arg2;
- (id)name;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (bool)supportsDpadTaps;
- (id /* block */)valueChangedHandler;

@end
