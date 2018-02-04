/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponent : SXJSONObject {
    SXComponentClassification * _classification;
    SXComponentAnimation * backingAnimation;
}

@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) SXComponentAnchor *anchor;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, retain) SXComponentAnimation *backingAnimation;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *style;
@property (nonatomic, readonly) NSString *type;

+ (id /* block */)purgeClassBlockForPropertyWithName:(id)arg1;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (void).cxx_destruct;
- (id)animationWithValue:(id)arg1 withType:(int)arg2;
- (id)backingAnimation;
- (id)classification;
- (unsigned long long)contentRelevanceWithValue:(id)arg1 withType:(int)arg2;
- (id)description;
- (int)role;
- (void)setBackingAnimation:(id)arg1;

@end
