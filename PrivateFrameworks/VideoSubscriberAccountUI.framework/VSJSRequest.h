/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSJSRequest : IKJSObject <NSCopying, VSJSRequest> {
    NSString * _appleVerificationToken;
    NSArray * _attributeNames;
    NSString * _currentAuthentication;
    NSString * _requestBody;
    NSString * _requestType;
    NSDictionary * _requestorInfo;
    NSString * _requestorVerificationToken;
}

@property (nonatomic, copy) NSString *appleVerificationToken;
@property (nonatomic, copy) NSArray *attributeNames;
@property (nonatomic, copy) NSString *currentAuthentication;
@property (nonatomic, copy) NSString *requestBody;
@property (nonatomic, copy) NSString *requestType;
@property (nonatomic, copy) NSDictionary *requestorInfo;
@property (nonatomic, copy) NSString *requestorVerificationToken;

- (void).cxx_destruct;
- (id)appleVerificationToken;
- (id)attributeNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentAuthentication;
- (id)requestBody;
- (id)requestType;
- (id)requestorInfo;
- (id)requestorVerificationToken;
- (void)setAppleVerificationToken:(id)arg1;
- (void)setAttributeNames:(id)arg1;
- (void)setCurrentAuthentication:(id)arg1;
- (void)setRequestBody:(id)arg1;
- (void)setRequestType:(id)arg1;
- (void)setRequestorInfo:(id)arg1;
- (void)setRequestorVerificationToken:(id)arg1;

@end
