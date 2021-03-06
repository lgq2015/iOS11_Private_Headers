/* made by EzioChiu.
 */

@protocol ICUserIdentityStoreBackend <NSObject, NSCopying, NSSecureCoding>

@required

- (NSNumber *)activeAccountDSID;
- (NSNumber *)activeLockerAccountDSID;
- (<ICUserIdentityStoreBackendDelegate> *)delegate;
- (ICMutableUserIdentityProperties *)identityPropertiesForDSID:(NSNumber *)arg1;
- (ICUserIdentityProperties *)primaryICloudAccountIdentityProperties;
- (void)removeIdentityForDSID:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)replaceIdentityProperties:(void *)arg1 forDSID:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: ICUserIdentityProperties *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <ICUserIdentityStoreBackendDelegate>)arg1;
- (void)setIdentityProperties:(void *)arg1 forDSID:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: ICUserIdentityProperties *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)synchronize;
- (void)updateActiveAccountDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateActiveLockerAccountDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (ICUserVerificationContext *)verificationContextForDSID:(NSNumber *)arg1;
- (ICUserVerificationContext *)verificationContextToEstablishAccount;

@end
