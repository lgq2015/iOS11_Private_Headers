/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioURLRequest : ICStoreURLRequest {
    bool  _backgroundRadioRequest;
    NSNumber * _privateListeningEnabled;
    long long  _protocolVersion;
    id /* block */  _radioContentDictionaryCreationBlock;
}

@property (getter=isBackgroundRadioRequest, nonatomic) bool backgroundRadioRequest;
@property (getter=isPrivateListeningEnabled, nonatomic, copy) NSNumber *privateListeningEnabled;
@property (nonatomic) long long protocolVersion;
@property (nonatomic, copy) id /* block */ radioContentDictionaryCreationBlock;

- (void).cxx_destruct;
- (void)_decorateHeaderPropertiesForURLRequest:(id)arg1 withBuilderProperties:(id)arg2;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (bool)isBackgroundRadioRequest;
- (id)isPrivateListeningEnabled;
- (long long)protocolVersion;
- (id /* block */)radioContentDictionaryCreationBlock;
- (void)setBackgroundRadioRequest:(bool)arg1;
- (void)setPrivateListeningEnabled:(id)arg1;
- (void)setProtocolVersion:(long long)arg1;
- (void)setRadioContentDictionaryCreationBlock:(id /* block */)arg1;

@end
