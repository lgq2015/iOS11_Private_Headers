/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (nonatomic) long long followersCount;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSURL *profileImageUrl;
@property (nonatomic, copy) NSString *screenName;
@property (nonatomic, copy) NSNumber *userId;
@property (nonatomic) bool verified;

+ (id)twitterPostAuthor;
+ (id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)followersCount;
- (id)fullName;
- (id)groupIdentifier;
- (id)profileImageUrl;
- (id)screenName;
- (void)setFollowersCount:(long long)arg1;
- (void)setFullName:(id)arg1;
- (void)setProfileImageUrl:(id)arg1;
- (void)setScreenName:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setVerified:(bool)arg1;
- (id)userId;
- (bool)verified;

@end