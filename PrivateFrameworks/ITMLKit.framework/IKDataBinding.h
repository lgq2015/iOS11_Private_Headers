/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDataBinding : NSObject {
    NSSet * _dataBoundKeys;
    struct NSDictionary { Class x1; } * _keyValues;
    NSMutableSet * _unresolvedKeys;
}

@property (nonatomic, readonly) NSSet *dataBoundKeys;
@property (nonatomic, copy) NSDictionary *keyValues;
@property (nonatomic, readonly) NSSet *unresolvedKeys;

- (void).cxx_destruct;
- (void)appendKeyValues:(struct NSDictionary { Class x1; }*)arg1;
- (id)dataBoundKeys;
- (id)initWithKeyValues:(struct NSDictionary { Class x1; }*)arg1;
- (struct NSDictionary { Class x1; }*)keyValues;
- (void)markResolvedForKey:(id)arg1;
- (void)setKeyValues:(struct NSDictionary { Class x1; }*)arg1;
- (void)setNeedsResolutionForAllKeys;
- (void)setNeedsResolutionForKey:(id)arg1;
- (id)unresolvedKeys;

@end
