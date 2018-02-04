/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentClassification : NSObject {
    SXComponentLayoutRules * _layoutRules;
    SXComponentTextRules * _textRules;
}

@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (nonatomic, readonly) NSArray *defaultComponentStyleIdentifiers;
@property (nonatomic, readonly) NSArray *defaultTextStyleIdentifiers;
@property (nonatomic, readonly) SXComponentLayoutRules *layoutRules;
@property (nonatomic, readonly) SXComponentTextRules *textRules;

+ (id)classificationForClass:(Class)arg1;
+ (id)classificationForComponentWithRole:(int)arg1;
+ (id)classificationForComponentWithType:(id)arg1;
+ (id)classificationForComponentWithType:(id)arg1 role:(id)arg2;
+ (void)initialize;
+ (void)initializeClassifications;
+ (void)registerClassification;
+ (int)role;
+ (id)roleString;
+ (bool)shouldRegister;
+ (id)typeString;

- (void).cxx_destruct;
- (id)accessibilityContextualLabel;
- (id)accessibilityCustomRotorMembership;
- (bool)accessibilitySkippedDuringReadAll;
- (Class)componentModelClass;
- (Class)componentSizerClass;
- (Class)componentViewClass;
- (unsigned long long)contentRelevance;
- (id)defaultComponentStyleIdentifiers;
- (id)defaultTextStyleIdentifiers;
- (bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (bool)isCollapsible;
- (id)layoutRules;
- (id)textRules;

@end
