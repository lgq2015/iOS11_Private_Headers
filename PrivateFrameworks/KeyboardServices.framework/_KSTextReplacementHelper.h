/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementHelper : NSObject

+ (id)aggdPrefix;
+ (id)appleLanguagesPreference;
+ (id)errorStringForCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3;
+ (id)errorWithCode:(long long)arg1 forEntry:(id)arg2;
+ (void)extractAggdMetricsForTextReplacement:(id)arg1;
+ (id)fetchConfigurationPlist;
+ (void)fetchConfigurationPlistIfNeeded;
+ (void)logAggdValueForSyncIsPull:(bool)arg1 success:(bool)arg2;
+ (void)logPhraseWordCount:(long long)arg1;
+ (id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2;
+ (id)sampleShortcut;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)arg1;
+ (id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(bool)arg2;
+ (long long)validateTextReplacement:(id)arg1;

@end
