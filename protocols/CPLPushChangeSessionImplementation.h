/* made by EzioChiu.
 */

@protocol CPLPushChangeSessionImplementation <CPLChangeSessionImplementation>

@required

- (void)commitChangeBatch:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 10: CPLChangeBatch *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, unsigned long long, CPLPushChangeTasks *, NSString *, void*

@end
