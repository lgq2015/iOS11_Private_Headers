/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol> {
    int  _linguisticDataNotificationToken;
    NSString * _locale;
    bool  _nameTagging;
    void * _nlpTagger;
    NSString * _personalNameMapping;
    NSString * _punctuationMapping;
    NSLinguisticTagger * _tagger;
}

+ (id)forLocale:(id)arg1;
+ (id)forLocale:(id)arg1 withNameTagging:(bool)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;
+ (id)forLocale:(id)arg1 withPersonalNameMapping:(id)arg2;

- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)initForLocale:(id)arg1 withNameTagging:(bool)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;
- (id)transform:(id)arg1;
- (void)transformWithCoreNLP:(id)arg1 block:(id /* block */)arg2;
- (void)transformWithNLLinguisticTagger:(id)arg1 block:(id /* block */)arg2;

@end
