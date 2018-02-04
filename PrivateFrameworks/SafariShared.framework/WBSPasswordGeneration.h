/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSPasswordGeneration : NSObject

+ (id)defaultRequirementsForDomain:(id)arg1;
+ (id)defaultRequirementsForURL:(id)arg1;
+ (id)generatedPasswordMatchingRequirements:(id)arg1;
+ (bool)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1;
+ (bool)passwordGenerationIsDisallowedByRequirements:(id)arg1;
+ (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1;
+ (id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2;

@end
