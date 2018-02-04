/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isBreadcrumbDisabled, nonatomic, readonly) bool breadcrumbDisabled;
@property (nonatomic, readonly) long long medusaDeviceSimulation;
@property (getter=isMedusaEnabled, nonatomic, readonly) bool medusaEnabled;
@property (nonatomic, retain) NSData *mostRecentFloatingApplicationState;

- (void)_bindAndRegisterDefaults;

@end
