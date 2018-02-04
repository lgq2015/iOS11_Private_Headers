/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) long long lastLockedOrientation;
@property (getter=isVideoRotationEnabled, nonatomic, readonly) bool videoRotationEnabled;

- (void)_bindAndRegisterDefaults;

@end
