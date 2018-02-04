/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLHashingVectorizer : NSObject <PMLPlistAndChunksSerializableProtocol, PMLTransformerProtocol> {
    int  _buckets;
    bool  _intercept;
    int  _ngrams;
    bool  _normalize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool normalize;
@property (readonly) Class superclass;

+ (id)withBucketSize:(int)arg1;
+ (id)withBucketSize:(int)arg1 andNgrams:(int)arg2;
+ (id)withBucketSize:(int)arg1 ngrams:(int)arg2 andIntercept:(bool)arg3;

- (id)init;
- (id)initWithBucketSize:(int)arg1 ngrams:(int)arg2 andIntercept:(bool)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)normalize;
- (void)setNormalize:(bool)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
