/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@interface NPSDomainAccessorUtils : NSObject

+ (id)URLForObject:(id)arg1;
+ (id)arrayForObject:(id)arg1;
+ (bool)boolForObject:(id)arg1 existsAndHasValidFormat:(bool*)arg2;
+ (id)dataForObject:(id)arg1;
+ (id)dictionaryForObject:(id)arg1;
+ (double)doubleForObject:(id)arg1 existsAndHasValidFormat:(bool*)arg2;
+ (float)floatForObject:(id)arg1 existsAndHasValidFormat:(bool*)arg2;
+ (long long)integerForObject:(id)arg1 existsAndHasValidFormat:(bool*)arg2;
+ (long long)longForObject:(id)arg1 existsAndHasValidFormat:(bool*)arg2;
+ (id)objectForURL:(id)arg1;
+ (id)stringArrayForObject:(id)arg1;
+ (id)stringForObject:(id)arg1;

@end
