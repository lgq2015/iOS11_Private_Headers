/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentDependency : NSObject {
    SXComponentDependencyDescriptor * _descriptor;
    NSString * _fromComponentIdentifier;
    long long  _fromDependencyAttribute;
    NSString * _toComponentIdentifier;
    long long  _toDependencyAttribute;
}

@property (nonatomic, retain) SXComponentDependencyDescriptor *descriptor;
@property (nonatomic, retain) NSString *fromComponentIdentifier;
@property (nonatomic) long long fromDependencyAttribute;
@property (nonatomic, retain) NSString *toComponentIdentifier;
@property (nonatomic) long long toDependencyAttribute;

+ (id)componentDependencyFromComponentIdentifier:(id)arg1 toComponentIdentifier:(id)arg2 fromLayoutAttribute:(long long)arg3 toAttribute:(long long)arg4 withDescriptor:(id)arg5;

- (void).cxx_destruct;
- (id)description;
- (id)descriptor;
- (id)fromComponentIdentifier;
- (long long)fromDependencyAttribute;
- (unsigned long long)hash;
- (id)initWithComponentDependencyFromComponentIdentifier:(id)arg1 toComponentIdentifier:(id)arg2 fromLayoutAttribute:(long long)arg3 toAttribute:(long long)arg4 withDescriptor:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setFromComponentIdentifier:(id)arg1;
- (void)setFromDependencyAttribute:(long long)arg1;
- (void)setToComponentIdentifier:(id)arg1;
- (void)setToDependencyAttribute:(long long)arg1;
- (id)toComponentIdentifier;
- (long long)toDependencyAttribute;

@end
