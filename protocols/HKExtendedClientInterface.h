/* made by EzioChiu.
 */

@protocol HKExtendedClientInterface <NSObject>

@required

- (void)clientRemote_achievementDefinitionUnviewedCountChanged;
- (void)clientRemote_achievementsWereAddedOrRemoved;

@end