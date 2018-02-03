/* made by EzioChiu.
 */

@protocol _UIForceObservationMessageConstructing <NSObject>

@required

- (void)setStage:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTouchForce:(double)arg1;
- (unsigned long long)stage;
- (double)timestamp;
- (double)touchForce;

@end