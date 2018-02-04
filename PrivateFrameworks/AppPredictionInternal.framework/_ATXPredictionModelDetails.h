/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXPredictionModelDetails : NSObject <NSSecureCoding> {
    NSString * _abGroup;
    long long  _assetCompatibilityVersion;
    long long  _assetVersion;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) long long assetCompatibilityVersion;
@property (nonatomic) long long assetVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)abGroup;
- (long long)assetCompatibilityVersion;
- (long long)assetVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAssetCompatibilityVersion:(long long)arg1 assetVersion:(long long)arg2 abGroup:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setAssetCompatibilityVersion:(long long)arg1;
- (void)setAssetVersion:(long long)arg1;

@end
