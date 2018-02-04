/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool forceWakeToMaps;
@property (nonatomic) bool limitFeaturesForRemoteLock;
@property (nonatomic) double nowPlayingTimeout;
@property (nonatomic) bool showAuthenticationEngineeringUI;
@property (nonatomic, readonly) bool showLegalText;
@property (nonatomic) bool showQuickNoteFingerGestureRecognizer;
@property (nonatomic) bool showSupervisionText;
@property (nonatomic) bool weDontNeedNoEducation;

- (void)_bindAndRegisterDefaults;

@end
