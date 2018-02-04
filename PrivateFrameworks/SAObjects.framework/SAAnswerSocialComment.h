/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSocialComment : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)socialComment;
+ (id)socialCommentWithDictionary:(id)arg1 context:(id)arg2;

- (id)author;
- (id)date;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAuthor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
