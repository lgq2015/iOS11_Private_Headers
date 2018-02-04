/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *displayLink;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *link;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SAUIAppPunchOut *punchOut;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSURL *searchUri;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *thumbnails;

+ (id)linkedAnswer;
+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)descriptionText;
- (id)displayLink;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)link;
- (id)name;
- (id)punchOut;
- (id)query;
- (id)searchUri;
- (void)setDescriptionText:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSearchUri:(id)arg1;
- (void)setThumbnails:(id)arg1;
- (id)thumbnails;

@end