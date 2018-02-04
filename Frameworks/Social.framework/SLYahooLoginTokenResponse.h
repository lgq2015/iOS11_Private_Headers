/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLYahooLoginTokenResponse : NSObject {
    NSString * _body;
    NSError * _error;
    NSString * _loginToken;
    long long  _statusCode;
}

@property (readonly) NSString *body;
@property (readonly) NSError *error;
@property (readonly) NSString *loginToken;
@property (readonly) long long statusCode;

- (void).cxx_destruct;
- (id)body;
- (id)error;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)loginToken;
- (long long)statusCode;

@end
