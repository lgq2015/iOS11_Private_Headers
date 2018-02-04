/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIASRGrammars : NSObject <NSURLSessionDelegate> {
    NSDictionary * _grammar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedGrammars;

- (void).cxx_destruct;
- (id)_getLMEWithGrammar:(id)arg1 withLocale:(id)arg2;
- (id)_getLeadingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2;
- (id)_getRegexPatternsWithGrammars:(id)arg1 withUtt:(long long)arg2 withLocale:(id)arg3;
- (id)_getTrailingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2;
- (id)createGrammars;
- (id)getLMEforLocale:(id)arg1;
- (id)getLeadingPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)getRegexPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)getTrailingPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)init;

@end
