/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) double backgroundMultitaskingWatchdogTimeout;
@property (nonatomic, readonly) bool forcesMedusaAdoption;
@property (nonatomic, readonly) bool ignoresDeclaredNetworkUsage;
@property (nonatomic, readonly) bool shouldAllowScreenshotsInLoginWindow;
@property (nonatomic, readonly) bool shouldShowInternalApplications;
@property (nonatomic, readonly) bool shouldShowNonDefaultSystemApplications;

- (void)_bindAndRegisterDefaults;

@end
