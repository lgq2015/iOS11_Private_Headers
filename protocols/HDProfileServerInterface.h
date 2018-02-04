/* made by EzioChiu.
 */

@protocol HDProfileServerInterface <NSObject>

@required

- (void)remote_createProfileOfType:(void *)arg1 displayName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKProfileIdentifier *, NSError *, void*
- (void)remote_deleteProfile:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKProfileIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_getAllProfilesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_setDisplayName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
