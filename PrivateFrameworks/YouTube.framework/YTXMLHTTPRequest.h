/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest {
    NSMutableURLRequest * _deferredRequest;
    bool  _needsAccountAuth;
    bool  _needsHostHeader;
}

@property (nonatomic) bool needsAccountAuth;
@property (nonatomic) bool needsHostHeader;

- (void)dealloc;
- (void)didAuthenticate:(id)arg1;
- (void)failedToAuthenticate:(id)arg1;
- (id)init;
- (void)listenForAuthenticationNotifications:(bool)arg1;
- (void)loadRequest:(id)arg1;
- (bool)needsAccountAuth;
- (bool)needsHostHeader;
- (void)setNeedsAccountAuth:(bool)arg1;
- (void)setNeedsHostHeader:(bool)arg1;

@end
