/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBSoundDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, retain) NSString *calendarAlarmPath;
@property (nonatomic, readonly) bool playSoundOnBasebandReset;
@property (nonatomic, readonly) bool playSoundOnDeviceWake;
@property (getter=isRingerMuted, nonatomic) bool ringerMuted;
@property (nonatomic, readonly) bool vibrateWhenRinging;
@property (nonatomic, readonly) bool vibrateWhenSilent;

- (void)_bindAndRegisterDefaults;

@end
