/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenDriverContext : NSExtensionContext <TKTokenDriverProtocol> {
    TKTokenDriver * _driver;
    bool  _invalidated;
    NSString * _tokenID;
}

@property (retain) TKTokenDriver *driver;
@property bool invalidated;
@property (retain) NSString *tokenID;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)acquireTokenEndpointWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)driver;
- (bool)invalidated;
- (void)setDriver:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setTokenID:(id)arg1;
- (id)tokenID;

@end
