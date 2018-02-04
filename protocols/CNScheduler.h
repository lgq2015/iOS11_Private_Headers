/* made by EzioChiu.
 */

@protocol CNScheduler <NSObject>

@required

- (<CNCancelable> *)afterDelay:(void *)arg1 performBlock:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<CNCancelable> *)afterDelay:(void *)arg1 performBlock:(void *)arg2 qualityOfService:(void *)arg3; // needs 3 arg types, found 7: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned long long
- (void)performBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performBlock:(void *)arg1 qualityOfService:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned long long
- (<CNCancelable> *)performCancelableBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNCancelationToken *, void*
- (<CNCancelable> *)performCancelableBlock:(void *)arg1 qualityOfService:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNCancelationToken *, void*, unsigned long long
- (double)timestamp;

@end
