/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMTextProcessor : NSObject {
    AXMDataDetector * _dataDetector;
    NSDictionary * _globalWhitelistedWords;
    AXMLexiconManager * _lexiconManager;
    NSMutableDictionary * _localeWhitelistedWords;
    AXMSpeechFormatterCache * _speechFormatterCache;
    AXMSpellChecker * _spellChecker;
    AXMTagger * _tagger;
}

- (void).cxx_destruct;
- (id)_preprocessText:(id)arg1;
- (id)dataDetector;
- (id)init;
- (id)lexiconManager;
- (id)processText:(id)arg1 withOperation:(id)arg2;
- (id)spellChecker;
- (id)tagger;

@end
