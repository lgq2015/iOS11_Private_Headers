/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLYahooUserInfoResponse : NSObject {
    NSString * _displayName;
    NSString * _emailAddress;
    NSError * _error;
    NSString * _errorMessage;
    long long  _statusCode;
}

@property (readonly) NSString *displayName;
@property (readonly) NSString *emailAddress;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property (readonly) long long statusCode;

- (void).cxx_destruct;
- (id)displayName;
- (id)emailAddress;
- (id)error;
- (id)errorMessage;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (long long)statusCode;

@end
