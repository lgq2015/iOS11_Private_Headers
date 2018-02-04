/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPushNotificationsEnableTypesRequest : ICRequestOperation {
    NSDictionary * _notificationParams;
    NSString * _notificationType;
    ICStoreRequestContext * _requestContext;
    ICPushNotificationsResponse * _response;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 notificationType:(id)arg2 notificationParameters:(id)arg3;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
