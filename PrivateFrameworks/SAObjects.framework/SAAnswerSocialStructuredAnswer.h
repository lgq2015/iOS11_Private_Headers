/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSocialStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic, copy) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *socialQuestions;
@property (readonly) Class superclass;

+ (id)socialStructuredAnswer;
+ (id)socialStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)category;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCategory:(id)arg1;
- (void)setSocialQuestions:(id)arg1;
- (id)socialQuestions;

@end
