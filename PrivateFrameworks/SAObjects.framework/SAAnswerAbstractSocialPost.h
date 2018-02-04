/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *authorTitle;
@property (nonatomic, copy) NSArray *comments;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *icon;
@property (nonatomic) long long rank;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;

+ (id)abstractSocialPost;
+ (id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2;

- (id)author;
- (id)authorTitle;
- (id)comments;
- (id)dateCreated;
- (id)dateModified;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)icon;
- (long long)rank;
- (void)setAuthor:(id)arg1;
- (void)setAuthorTitle:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDateModified:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (id)title;

@end