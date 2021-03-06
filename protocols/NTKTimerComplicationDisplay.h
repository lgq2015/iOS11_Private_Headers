/* made by EzioChiu.
 */

@protocol NTKTimerComplicationDisplay <NTKComplicationDisplay>

@required

- (void)setStoppedWithTime:(double)arg1;
- (void)setTime:(double)arg1;

@optional

- (bool)actsAsOffWhenEditing;

@end
