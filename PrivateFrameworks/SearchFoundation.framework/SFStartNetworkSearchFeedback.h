/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback {
    unsigned long long  _endpoint;
    NSDictionary * _headers;
    NSString * _url;
}

@property (nonatomic) unsigned long long endpoint;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSString *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endpoint;
- (id)headers;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6;
- (void)setEndpoint:(unsigned long long)arg1;
- (void)setHeaders:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
