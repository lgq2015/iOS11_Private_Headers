/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardActivityAlertEscapingSerializationStrategy : NSObject <CNVCardActivityAlertAbstractSerializationStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)charactersToTriggerStrategy;
+ (id)regex;
+ (id)serializeString:(id)arg1;
+ (bool)strategyWouldAlterString:(id)arg1;

@end
