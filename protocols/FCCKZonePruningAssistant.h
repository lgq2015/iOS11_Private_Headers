/* made by EzioChiu.
 */

@protocol FCCKZonePruningAssistant <NSObject>

@required

- (bool)canHelpPruneZoneName:(NSString *)arg1;
- (NSArray *)pruneRecords:(NSArray *)arg1 forZoneName:(NSString *)arg2;

@end
