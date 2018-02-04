/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATimerShowAndPerformTimerAction : SABaseClientBoundCommand

@property (nonatomic, retain) <SATimerTimerAction> *timerAction;

+ (id)showAndPerformTimerAction;
+ (id)showAndPerformTimerActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setTimerAction:(id)arg1;
- (id)timerAction;

@end
