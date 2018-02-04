/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardWriting : NSObject

+ (id)blacklistFieldsForPerson:(id)arg1 options:(id)arg2;
+ (id)blacklistedMeCardFields;
+ (id)dataWithPeople:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)dataWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (void)makevCardWithBuilder:(id)arg1 serializer:(id)arg2 options:(id)arg3;
+ (id)scopeForPerson:(id)arg1 options:(id)arg2;
+ (void)serializePerson:(id)arg1 withSerializer:(id)arg2 options:(id)arg3;
+ (id)stringWithPeople:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)stringWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
