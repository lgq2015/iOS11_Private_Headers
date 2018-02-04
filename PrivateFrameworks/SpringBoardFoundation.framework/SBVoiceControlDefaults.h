/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBVoiceControlDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool disableHandlerActions;
@property (nonatomic, readonly) bool disableVoiceControlForBluetoothRequests;
@property (getter=isVoiceControlLoggingEnabled, nonatomic, readonly) bool voiceControlLoggingEnabled;

- (void)_bindAndRegisterDefaults;

@end