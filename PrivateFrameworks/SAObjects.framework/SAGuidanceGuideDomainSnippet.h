/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGuidanceGuideDomainSnippet : SAUISnippet

@property (nonatomic, copy) NSString *domainAlternateDisplayName;
@property (nonatomic, copy) NSString *domainDisplayName;
@property (nonatomic, copy) NSURL *domainIconURI;
@property (nonatomic, copy) NSString *domainName;
@property (nonatomic) bool enabledInOfflineMode;
@property (nonatomic) bool enabledInOnlineMode;
@property (nonatomic, copy) NSArray *guideSections;
@property (nonatomic, copy) NSString *iconDisplayIdentifier;
@property (nonatomic) bool iconNeedsProcessing;
@property (nonatomic, copy) NSString *iconResourceName;
@property (nonatomic) bool isAppIcon;
@property (nonatomic) bool performIntentEnabledAppAuthorizationCheck;
@property (nonatomic, copy) NSString *tagPhrase;

+ (id)guideDomainSnippet;
+ (id)guideDomainSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainAlternateDisplayName;
- (id)domainDisplayName;
- (id)domainIconURI;
- (id)domainName;
- (bool)enabledInOfflineMode;
- (bool)enabledInOnlineMode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)guideSections;
- (id)iconDisplayIdentifier;
- (bool)iconNeedsProcessing;
- (id)iconResourceName;
- (bool)isAppIcon;
- (bool)performIntentEnabledAppAuthorizationCheck;
- (void)setDomainAlternateDisplayName:(id)arg1;
- (void)setDomainDisplayName:(id)arg1;
- (void)setDomainIconURI:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setEnabledInOfflineMode:(bool)arg1;
- (void)setEnabledInOnlineMode:(bool)arg1;
- (void)setGuideSections:(id)arg1;
- (void)setIconDisplayIdentifier:(id)arg1;
- (void)setIconNeedsProcessing:(bool)arg1;
- (void)setIconResourceName:(id)arg1;
- (void)setIsAppIcon:(bool)arg1;
- (void)setPerformIntentEnabledAppAuthorizationCheck:(bool)arg1;
- (void)setTagPhrase:(id)arg1;
- (id)tagPhrase;

@end
