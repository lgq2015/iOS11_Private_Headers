/* made by EzioChiu.
 */

@protocol FBSystemServiceClient <NSObject>

@required

- (NSObject<OS_xpc_object> *)connection;
- (<FBSystemServiceFacilityClient> *)facilityClient;
- (bool)isSuspended;
- (int)pid;
- (FBProcess *)process;
- (void)setFacilityClient:(id <FBSystemServiceFacilityClient>)arg1;

@end
