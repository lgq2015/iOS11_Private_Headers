/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantINPersonConverter : NSObject

+ (id)INPersonForCNContact:(id)arg1;
+ (id)INPersonForCNContact:(id)arg1 withDisplayName:(id)arg2 includePersonHandle:(bool)arg3;
+ (id)INPersonForIMHandle:(id)arg1 withOriginalINPerson:(id)arg2;
+ (id)INPersonForSPIHandle:(id)arg1;
+ (id)INPersonToDictionary:(id)arg1;
+ (id)INPersonsForAllIMHandles:(id)arg1 withOriginalINPerson:(id)arg2;
+ (id)INPersonsForSPIHandles:(id)arg1;
+ (id)INPersonsToDictionary:(id)arg1;

@end
