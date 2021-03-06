/* made by EzioChiu.
 */

@protocol ADPrerollViewDelegate <NSObject>

@required

- (void)actionButtonPressed;
- (void)doneButtonPressed;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (bool)prerollViewRequestsEmbeddedStatus;
- (void)privacyButtonPressed;
- (void)skipButtonPressed;

@end
