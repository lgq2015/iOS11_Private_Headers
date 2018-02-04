/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSpecification : NSObject <BSDescriptionProviding, NSCopying>

@property (nonatomic, readonly) Class clientAgentClass;
@property (nonatomic, readonly, copy) FBUISceneClientIdentity *clientIdentity;
@property (nonatomic, readonly) Class clientSettingsClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class hostAgentClass;
@property (nonatomic, readonly) Class settingsClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class transitionContextClass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)specification;

- (Class)clientAgentClass;
- (Class)clientSettingsClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (Class)hostAgentClass;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (Class)settingsClass;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (Class)transitionContextClass;

// Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices

- (id)clientIdentity;
- (id)initWithClientIdentity:(id)arg1;

@end
