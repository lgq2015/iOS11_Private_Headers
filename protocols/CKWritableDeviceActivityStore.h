/* made by EzioChiu.
 */

@protocol CKWritableDeviceActivityStore

@required

- (void)recordActivityWithIdentifier:(void *)arg1 startDate:(void *)arg2 endDate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)recordActivityWithIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 error:(id*)arg4;

@end
