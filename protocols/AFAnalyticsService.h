/* made by EzioChiu.
 */

@protocol AFAnalyticsService <NSObject>

@required

- (oneway void)stageEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (oneway void)stageEvent:(AFAnalyticsEvent *)arg1;
- (oneway void)stageEvents:(NSArray *)arg1;

@end
