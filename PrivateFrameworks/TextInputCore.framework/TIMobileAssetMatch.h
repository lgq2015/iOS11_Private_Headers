/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMobileAssetMatch : NSObject {
    NSArray * _inputModeLevels;
    NSArray * _regions;
    NSArray * _types;
}

@property (nonatomic, readonly) NSArray *inputModeLevels;
@property (nonatomic, readonly) NSArray *regions;
@property (nonatomic, readonly) NSArray *types;

+ (id)knownAssetRegionAttributes;
+ (id)mobileAssetMatchWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3;
- (id)inputModeLevels;
- (bool)isEqual:(id)arg1;
- (id)regions;
- (id)types;

@end
