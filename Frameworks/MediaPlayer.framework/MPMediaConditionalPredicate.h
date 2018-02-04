/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    MPMediaPredicate * _conditionPredicate;
    MPMediaPredicate * _elsePredicate;
    MPMediaPredicate * _thenPredicate;
}

@property (nonatomic, readonly, copy) MPMediaPredicate *conditionPredicate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) MPMediaPredicate *elsePredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) MPMediaPredicate *thenPredicate;

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)conditionPredicate;
- (id)elsePredicate;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (id)protobufferEncodableObject;
- (id)thenPredicate;

@end
