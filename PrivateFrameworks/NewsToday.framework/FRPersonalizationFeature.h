/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface FRPersonalizationFeature : NSObject <NSCopying> {
    NSString * _personalizationIdentifier;
    NSString * _tagID;
}

@property (nonatomic, readonly) NSString *fr_description;
@property (nonatomic, retain) NSString *personalizationIdentifier;
@property (nonatomic, retain) NSString *tagID;

+ (id /* block */)concatFeatureGenerator:(id /* block */)arg1 withGenerator:(id /* block */)arg2;
+ (id)featureForFreeValuedIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1 allowFreeValued:(bool)arg2;
+ (id)featureFromTagID:(id)arg1;
+ (id /* block */)featureGeneratorForGroupType:(long long)arg1;
+ (id /* block */)featureGeneratorForHeadline:(id)arg1;
+ (id /* block */)featureGeneratorForHeadline:(id)arg1 groupType:(long long)arg2;
+ (id /* block */)featureGeneratorForTag:(id)arg1;
+ (id /* block */)featureGeneratorForTagID:(id)arg1;
+ (id /* block */)featureGeneratorForVideoWithPublisher:(id)arg1;
+ (id)featureObserver;
+ (id)featuresFromHeadline:(id)arg1;
+ (id)featuresFromPersonalizingArticle:(id)arg1;
+ (id)featuresFromTag:(id)arg1;
+ (id)featuresFromTagIDs:(id)arg1;
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fr_description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personalizationIdentifier;
- (void)setPersonalizationIdentifier:(id)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;

@end
