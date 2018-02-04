/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKSummaryStructuredAnswer : AceObject <SAGKStructuredAnswer>

@property (nonatomic, copy) NSArray *answerPropertyGroups;
@property (nonatomic, copy) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *image;
@property (nonatomic, copy) NSString *imageCaption;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleAnnotation;

+ (id)summaryStructuredAnswer;
+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)answerPropertyGroups;
- (id)category;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)imageCaption;
- (void)setAnswerPropertyGroups:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageCaption:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAnnotation:(id)arg1;
- (id)text;
- (id)title;
- (id)titleAnnotation;

@end