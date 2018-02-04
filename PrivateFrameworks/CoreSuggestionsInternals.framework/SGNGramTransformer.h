/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNGramTransformer : NSObject {
    unsigned long long  _ngrams;
}

@property unsigned long long ngrams;

+ (id)withNGrams:(unsigned long long)arg1;

- (unsigned long long)ngrams;
- (void)setNgrams:(unsigned long long)arg1;
- (id)transform:(id)arg1;

@end
