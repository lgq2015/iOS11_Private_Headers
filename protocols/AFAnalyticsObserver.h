/* made by EzioChiu.
 */

@protocol AFAnalyticsObserver <NSObject>

@required

- (oneway void)didObserveEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
