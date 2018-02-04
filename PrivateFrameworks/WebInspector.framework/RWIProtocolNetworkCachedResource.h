/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (nonatomic) double bodySize;
@property (nonatomic, retain) RWIProtocolNetworkResponse *response;
@property (nonatomic, copy) NSString *sourceMapURL;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *url;

- (double)bodySize;
- (id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3;
- (id)response;
- (void)setBodySize:(double)arg1;
- (void)setResponse:(id)arg1;
- (void)setSourceMapURL:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (id)sourceMapURL;
- (long long)type;
- (id)url;

@end
