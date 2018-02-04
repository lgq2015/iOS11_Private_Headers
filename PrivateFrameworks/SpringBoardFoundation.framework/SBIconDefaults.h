/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool didShowIconReorderAlert;
@property (nonatomic, readonly) NSDictionary *legacyIconState;
@property (nonatomic, readonly) NSDictionary *legacyIconState2;
@property (nonatomic, readonly) long long maxIconListCount;
@property (nonatomic, readonly) bool shouldDisableLiveIcons;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
