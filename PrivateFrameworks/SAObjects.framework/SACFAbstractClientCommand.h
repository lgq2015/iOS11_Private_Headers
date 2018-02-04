/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFAbstractClientCommand : SADomainCommand

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSArray *jsLibraries;
@property (nonatomic, copy) NSString *jsParameters;
@property (nonatomic, copy) NSString *jsScript;
@property (nonatomic) bool shouldCacheScript;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)abstractClientCommand;
+ (id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)domain;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsLibraries;
- (id)jsParameters;
- (id)jsScript;
- (bool)requiresResponse;
- (void)setDomain:(id)arg1;
- (void)setJsLibraries:(id)arg1;
- (void)setJsParameters:(id)arg1;
- (void)setJsScript:(id)arg1;
- (void)setShouldCacheScript:(bool)arg1;
- (bool)shouldCacheScript;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

- (bool)_cf_emptyPayload;

@end
