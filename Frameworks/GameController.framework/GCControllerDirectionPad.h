/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerDirectionPad : GCControllerElement

@property (nonatomic, readonly) GCControllerButtonInput *down;
@property (nonatomic, readonly) GCControllerButtonInput *left;
@property (nonatomic, readonly) GCControllerButtonInput *right;
@property (nonatomic, readonly) GCControllerButtonInput *up;
@property (nonatomic, copy) id /* block */ valueChangedHandler;
@property (nonatomic, readonly) GCControllerAxisInput *xAxis;
@property (nonatomic, readonly) GCControllerAxisInput *yAxis;

- (id)description;
- (id)down;
- (id)initWithFlippedY:(bool)arg1 digital:(bool)arg2;
- (id)left;
- (id)right;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1 queue:(id)arg2;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (id)up;
- (id /* block */)valueChangedHandler;
- (id)xAxis;
- (id)yAxis;

@end
