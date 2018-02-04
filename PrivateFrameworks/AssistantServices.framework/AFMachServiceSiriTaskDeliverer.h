/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {
    NSString * _machServiceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)deliverSiriTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)initWithMachServiceName:(id)arg1;

@end
