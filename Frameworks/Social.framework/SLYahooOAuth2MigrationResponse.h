/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLYahooOAuth2MigrationResponse : NSObject {
    NSString * _accessToken;
    NSError * _error;
    NSDate * _expiryDate;
    NSString * _refreshToken;
    NSDictionary * _responseBody;
    long long  _statusCode;
}

@property (readonly) NSString *accessToken;
@property (readonly) NSError *error;
@property (readonly) NSDate *expiryDate;
@property (readonly) NSString *refreshToken;
@property (readonly) NSDictionary *responseBody;
@property (readonly) long long statusCode;

- (void).cxx_destruct;
- (id)accessToken;
- (id)error;
- (id)expiryDate;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)refreshToken;
- (id)responseBody;
- (long long)statusCode;

@end
