/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBHardwareDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool disableHomeButton;
@property (nonatomic, readonly) bool disableHomeButtonDoublePress;
@property (nonatomic, readonly) bool disableProximitySensor;
@property (nonatomic) bool hasSeenACaseLatchCoverOnce;
@property (nonatomic) long long homeButtonHapticType;
@property (nonatomic, readonly) bool useHardwareSwitchAsOrientationLock;

- (void)_bindAndRegisterDefaults;

@end
