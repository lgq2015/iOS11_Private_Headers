/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPParameters : NSObject {
    NSString * _abGroupIdentifier;
    NSDictionary * _defaultValues;
}

@property (copy) NSString *abGroupIdentifier;
@property (readonly, copy) NSDictionary *defaultValues;
@property (readonly, copy) NSString *topLevelKey;

+ (id)parameters;
+ (id)parametersWithDefaultValues:(id)arg1 useAsset:(bool)arg2;

- (void).cxx_destruct;
- (id)abGroupIdentifier;
- (id)defaultValues;
- (id)init;
- (id)initWithDefaultValues:(id)arg1 useAsset:(bool)arg2;
- (void)setAbGroupIdentifier:(id)arg1;
- (id)topLevelKey;

@end
