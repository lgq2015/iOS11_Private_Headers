/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSULocaleStructuredDictionary : NSObject {
    NSMutableDictionary * _cldrLanguageScriptForKey;
    NSMutableDictionary * _cldrLanguageScriptRegionForKey;
    NSDictionary * _dictionary;
}

+ (id)dateFormatterSymbolsFallbackDictionary;
+ (id)dictionaryWithContentsOfFileForLocale:(struct __CFLocale { }*)arg1 inDirectory:(id)arg2 inBundle:(id)arg3;
+ (id)numberFormatterSymbolsFallbackDictionary;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1 locale:(struct __CFLocale { }*)arg2;
- (bool)p_extractLanguage:(id*)arg1 script:(id*)arg2 region:(id*)arg3 fromString:(id)arg4;
- (id)p_makeLocaleIdentifierWithLanguage:(id)arg1 script:(id)arg2 region:(id)arg3;

@end
