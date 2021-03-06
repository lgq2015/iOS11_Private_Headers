/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneDefinition : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    FBSSceneClientIdentity * _clientIdentity;
    FBSSceneIdentity * _identity;
    FBSSceneSpecification * _specification;
}

@property (nonatomic, copy) FBSSceneClientIdentity *clientIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FBSSceneIdentity *identity;
@property (nonatomic, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;

+ (id)definition;

- (id)clientIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)identity;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setClientIdentity:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setSpecification:(id)arg1;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
