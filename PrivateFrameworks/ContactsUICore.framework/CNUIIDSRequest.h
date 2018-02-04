/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIIDSRequest : NSObject

+ (id)IDSResponseQueue;
+ (id)IDSServiceForService:(long long)arg1;
+ (bool)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(id)arg2;
+ (id)resultsForIDSControllerResult:(id)arg1 handlesByDestination:(id)arg2;
+ (id)validHandlesFromHandles:(id)arg1;
+ (id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4;

@end
