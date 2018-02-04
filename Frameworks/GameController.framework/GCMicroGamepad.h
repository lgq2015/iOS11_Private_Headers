/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCMicroGamepad : NSObject {
    bool  _allowsRotation;
    bool  _reportsAbsoluteDpadValues;
}

@property (nonatomic) bool allowsRotation;
@property (nonatomic, readonly, retain) GCControllerButtonInput *buttonA;
@property (nonatomic, readonly, retain) GCControllerButtonInput *buttonX;
@property (nonatomic, readonly) GCController *controller;
@property (nonatomic, readonly, retain) GCControllerDirectionPad *dpad;
@property (nonatomic) bool reportsAbsoluteDpadValues;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

+ (bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;

- (bool)allowsRotation;
- (id)button0;
- (id)button1;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)controller;
- (id)dpad;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (bool)reportsAbsoluteDpadValues;
- (id)saveSnapshot;
- (void)setAllowsRotation:(bool)arg1;
- (void)setButton:(id)arg1 pressed:(bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setReportsAbsoluteDpadValues:(bool)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (bool)supportsDpadTaps;
- (id /* block */)valueChangedHandler;

@end
