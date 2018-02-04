/* made by EzioChiu.
 */

@protocol VSDeveloperServiceProtocol <NSObject>

@required

- (void)addDeveloperIdentityProvider:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: VSIdentityProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VSFailable *, void*
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VSFailable *, void*
- (void)removeDeveloperIdentityProviderWithUniqueID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VSFailable *, void*
- (void)updateExistingDeveloperIdentityProvider:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: VSIdentityProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VSFailable *, void*

@end
