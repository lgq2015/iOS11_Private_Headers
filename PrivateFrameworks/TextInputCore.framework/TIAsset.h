/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAsset : NSObject {
    TIAssetAttributes * _attributes;
    long long  _compatibilityVersion;
    long long  _contentVersion;
    NSArray * _contents;
    long long  _numberOfAssertions;
    unsigned long long  _sizeInBytes;
    NSURL * _url;
}

@property (nonatomic, readonly) TIAssetAttributes *attributes;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly) NSArray *contents;
@property (nonatomic, readonly) bool isCompatible;
@property (nonatomic, readonly) unsigned long long sizeInBytes;
@property (nonatomic, readonly) NSURL *url;

+ (id)knownAssetTypes;
+ (bool)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1;
+ (long long)supportedCompatibilityVersion;

- (void)addAssertion;
- (id)assetContentItemsMatching:(id)arg1;
- (id)attributes;
- (long long)compatibilityVersion;
- (long long)contentVersion;
- (id)contents;
- (void)dealloc;
- (id)description;
- (bool)hasAssertions;
- (unsigned long long)hash;
- (id)initWithASAsset:(id)arg1;
- (id)initWithAttributes:(id)arg1 url:(id)arg2 contentVersion:(long long)arg3 compatibilityVersion:(long long)arg4 sizeInBytes:(unsigned long long)arg5 contents:(id)arg6;
- (bool)isCompatible;
- (bool)isEqual:(id)arg1;
- (id)laterAsset:(id)arg1;
- (id)recursiveDescription;
- (void)removeAssertion;
- (unsigned long long)sizeInBytes;
- (id)url;

@end
