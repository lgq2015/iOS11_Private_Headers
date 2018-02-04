/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FADispatchFamilyPushRequest : FAFamilyCircleRequest {
    NSDictionary * _payload;
}

@property (readonly, copy) NSDictionary *payload;

- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1;
- (id)payload;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
