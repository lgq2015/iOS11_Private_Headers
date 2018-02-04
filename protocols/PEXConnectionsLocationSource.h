/* made by EzioChiu.
 */

@protocol PEXConnectionsLocationSource <NSObject>

@required

+ (NSString *)identifier;

- (NSArray *)locationItemsWithCriteria:(PEXCriteria *)arg1 earliest:(NSDate *)arg2 latest:(NSDate *)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 category:(unsigned long long)arg6;

@end
