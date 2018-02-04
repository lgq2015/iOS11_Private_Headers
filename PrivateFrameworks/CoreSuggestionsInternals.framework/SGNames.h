/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNames : NSObject

+ (unsigned int)attributesForNameWord:(id)arg1;
+ (id)bestName:(id)arg1;
+ (id)cjkSpacerCharacters;
+ (id)cjkSpacersToWhiteSpace:(id)arg1;
+ (id)cleanName:(id)arg1;
+ (id)handleLastNameFirstOrder:(id)arg1;
+ (bool)isCommonNameWord:(id)arg1;
+ (bool)isCommonVietnameseSurname:(id)arg1;
+ (bool)isDifficultName:(id)arg1;
+ (bool)isFamilyName:(id)arg1;
+ (bool)isLowercaseStringCommonNameWord:(id)arg1;
+ (bool)isProbablyShortCJKName:(id)arg1;
+ (bool)isSalientName:(id)arg1;
+ (bool)isSalientNameByChars:(id)arg1;
+ (id)nameFromEmail:(id)arg1;
+ (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 8; unsigned int x6 : 20; })namePayload:(id)arg1;
+ (double)nameSimilarity:(id)arg1 and:(id)arg2;
+ (id)nameStringFromEmailAddress:(id)arg1 inContext:(id)arg2;
+ (bool)namesApproximatelyMatch:(id)arg1 and:(id)arg2;
+ (bool)namesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3;
+ (id)possibleNameStringFromEmailAddress:(id)arg1 inContext:(id)arg2;
+ (id)sgNameFromString:(id)arg1 origin:(id)arg2 recordId:(id)arg3 extractionType:(unsigned long long)arg4;
+ (bool)shouldInvertOrderOfFirst:(id)arg1 last:(id)arg2;
+ (id)sketchesForName:(id)arg1;
+ (id)stripAndReturnHonorifics:(id)arg1;
+ (id)stripHonorifics:(id)arg1;
+ (id)surnameFromName:(id)arg1;
+ (id)universalCleanName:(id)arg1;
+ (double)unnormalizedNameSimilarity:(id)arg1 and:(id)arg2;
+ (bool)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2;
+ (bool)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3;

@end
