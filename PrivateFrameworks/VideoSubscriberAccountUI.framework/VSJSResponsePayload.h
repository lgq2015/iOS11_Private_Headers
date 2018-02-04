/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSJSResponsePayload : IKJSObject <NSCopying, VSJSResponsePayload> {
    NSString * _authN;
    NSString * _authenticationScheme;
    NSNumber * _expectedAction;
    NSDate * _expirationDate;
    NSString * _logout;
    NSString * _statusCode;
    NSArray * _userChannelList;
    NSString * _userMetadata;
    NSString * _username;
}

@property (nonatomic, copy) NSString *authN;
@property (nonatomic, copy) NSString *authenticationScheme;
@property (nonatomic, copy) NSNumber *expectedAction;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *logout;
@property (nonatomic, copy) NSString *statusCode;
@property (nonatomic, copy) NSArray *userChannelList;
@property (nonatomic, copy) NSString *userMetadata;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)authN;
- (id)authenticationScheme;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)expectedAction;
- (id)expirationDate;
- (id)init;
- (id)logout;
- (void)setAuthN:(id)arg1;
- (void)setAuthenticationScheme:(id)arg1;
- (void)setExpectedAction:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setLogout:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setUserChannelList:(id)arg1;
- (void)setUserMetadata:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)statusCode;
- (id)userChannelList;
- (id)userMetadata;
- (id)username;

@end
