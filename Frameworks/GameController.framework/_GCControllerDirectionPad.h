/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCControllerDirectionPad : GCControllerDirectionPad {
    NSString * _descriptionName;
    id /* block */  _valueChangedHandler;
    _GCControllerAxisInput * _xAxis;
    _GCControllerAxisInput * _yAxis;
}

- (void).cxx_destruct;
- (void)_fireValueChanged;
- (void)_fireValueChangedWithQueue:(id)arg1;
- (id)description;
- (id)down;
- (id)initWithFlippedY:(bool)arg1 digital:(bool)arg2;
- (id)initWithFlippedY:(bool)arg1 digital:(bool)arg2 descriptionName:(id)arg3;
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
