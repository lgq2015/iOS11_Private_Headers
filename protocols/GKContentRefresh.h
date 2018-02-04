/* made by EzioChiu.
 */

@protocol GKContentRefresh <NSObject>

@required

- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkResetContents;
- (bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)_gkForceNextContentUpdate;
- (void)_gkSetContentsNeedUpdateWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
