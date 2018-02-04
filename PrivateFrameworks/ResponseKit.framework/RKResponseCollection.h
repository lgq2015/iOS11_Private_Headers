/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKResponseCollection : NSObject {
    <RKDisplayStringsProvider> * _displayStringsProvider;
    NSURL * _dynamicDataURL;
    NSMutableDictionary * _personalizersByLanguageID;
    NSMutableDictionary * _responseCatalog;
}

@property (readonly) <RKDisplayStringsProvider> *displayStringsProvider;
@property (readonly) NSURL *dynamicDataURL;
@property (retain) NSMutableDictionary *personalizersByLanguageID;
@property (retain) NSMutableDictionary *responseCatalog;

+ (id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2;
+ (id)responsesForFullScreenMoments:(id)arg1;
+ (id)responsesForFullScreenMoments:(id)arg1 withLanguage:(id)arg2;
+ (id)speechActsForCategory:(unsigned long long)arg1 platform:(id)arg2;

- (void).cxx_destruct;
- (id)displayStringsProvider;
- (id)dynamicDataURL;
- (void)flushDynamicData;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;
- (id)personalizerForLanguageID:(id)arg1;
- (id)personalizersByLanguageID;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 context:(id)arg4 effectiveDate:(id)arg5;
- (void)resetRegisteredResponses;
- (id)responseCatalog;
- (id)responsesForCategory:(unsigned long long)arg1 gender:(unsigned long long)arg2 maximumResponses:(unsigned long long)arg3 withLanguage:(id)arg4 context:(id)arg5 options:(unsigned long long)arg6;
- (void)setPersonalizersByLanguageID:(id)arg1;
- (void)setResponseCatalog:(id)arg1;
- (id)standardResponsesByCategoryForLanguageIdentifier:(id)arg1 andUsage:(id)arg2;

@end
