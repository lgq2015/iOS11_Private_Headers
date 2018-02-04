/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenKeyExchangeParameters : NSObject {
    long long  _requestedSize;
    NSData * _sharedInfo;
}

@property (readonly) long long requestedSize;
@property (readonly, copy) NSData *sharedInfo;

- (void).cxx_destruct;
- (id)initWithXpcDictionary:(id)arg1;
- (long long)requestedSize;
- (id)sharedInfo;

@end
