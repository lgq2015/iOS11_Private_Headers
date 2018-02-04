/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBBasicSystemServiceFacilityClient : NSObject <FBSystemServiceFacilityClient> {
    <FBSystemServiceClient> * _systemServiceClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <FBSystemServiceClient> *systemServiceClient;

+ (id)facilityClientWithSystemServiceClient:(id)arg1;

- (id)initWithSystemServiceClient:(id)arg1;
- (id)systemServiceClient;

@end
