/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEntityMappingTransformer : NSObject <PMLTransformerProtocol> {
    NSDataDetector * _dataDetector;
    NSString * _emailMapping;
    NSString * _linkMapping;
}

@property (retain) NSDataDetector *dataDetector;
@property (retain) NSString *emailMapping;
@property (retain) NSString *linkMapping;

+ (id)withEmailMapping:(id)arg1 linkMapping:(id)arg2;

- (void).cxx_destruct;
- (id)dataDetector;
- (id)emailMapping;
- (id)initWithEmailMapping:(id)arg1 linkMapping:(id)arg2;
- (id)linkMapping;
- (void)setDataDetector:(id)arg1;
- (void)setEmailMapping:(id)arg1;
- (void)setLinkMapping:(id)arg1;
- (id)transform:(id)arg1;

@end
