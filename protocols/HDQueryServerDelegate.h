/* made by EzioChiu.
 */

@protocol HDQueryServerDelegate <NSObject>

@required

- (unsigned int)clientSDKVersionForQueryServer:(HDQueryServer *)arg1;
- (NSArray *)queryServer:(HDQueryServer *)arg1 filterSamplesForReadAuthorization:(NSArray *)arg2;
- (bool)queryServer:(HDQueryServer *)arg1 isAuthorizationStatusDeterminedForTypes:(NSSet *)arg2 error:(id*)arg3;
- (void)queryServer:(void *)arg1 requestsAuthorizationForSamples:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HDQueryServer *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)queryServerDidFinish:(HDQueryServer *)arg1;
- (HDReadAuthorizationStatus *)readAuthorizationStatusForQueryServer:(HDQueryServer *)arg1 type:(HKObjectType *)arg2 error:(id*)arg3;

@end
