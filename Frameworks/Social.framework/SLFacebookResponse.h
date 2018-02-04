/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookResponse : NSObject <NSCoding> {
    long long  _httpErrorCode;
    NSData * _responseData;
    id  _untypedResponseParameters;
    NSHTTPURLResponse * _urlResponse;
}

@property (readonly) int APIresponseErrorCode;
@property (readonly) long long httpErrorCode;
@property (readonly) NSDictionary *responseParameters;
@property (readonly) NSHTTPURLResponse *urlResponse;

- (void).cxx_destruct;
- (int)APIresponseErrorCode;
- (id)checkpointURL;
- (void)encodeWithCoder:(id)arg1;
- (id)failedRequestIDs;
- (bool)hasBadTokenError;
- (bool)hasError;
- (bool)hasHTTPStatusOK;
- (bool)hasMissingTokenOrAppID;
- (long long)httpErrorCode;
- (long long)httpStatusCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseData:(id)arg1 urlResponse:(id)arg2;
- (bool)isBatchResponse;
- (id)responseParameters;
- (id)untypedResponseParameters;
- (id)urlResponse;

@end
