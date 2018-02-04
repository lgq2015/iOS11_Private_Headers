/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol> {
    NSArray * _transformers;
}

@property (retain) NSArray *transformers;

+ (id)withTransformers:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTransformers:(id)arg1;
- (void)setTransformers:(id)arg1;
- (id)transform:(id)arg1;
- (id)transform:(id)arg1 stopAfterTransformerWithIndex:(unsigned long long)arg2;
- (id)transformers;

@end
