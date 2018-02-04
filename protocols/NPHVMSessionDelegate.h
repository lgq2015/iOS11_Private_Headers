/* made by EzioChiu.
 */

@protocol NPHVMSessionDelegate <NSObject>

@required

- (void)syncSession:(void *)arg1 applyChanges:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SYSession *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)syncSession:(SYSession *)arg1 didEndWithError:(NSError *)arg2;
- (bool)syncSession:(SYSession *)arg1 resetDataStoreWithError:(id*)arg2;

@end
