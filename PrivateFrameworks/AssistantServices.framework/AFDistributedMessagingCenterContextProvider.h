/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDistributedMessagingCenterContextProvider : NSObject <AFSiriAppContextProviding> {
    NSString * _bundleIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getAppContextWithDeliveryHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithAppBundleIdentifier:(id)arg1;

@end
