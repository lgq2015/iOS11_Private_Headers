/* made by EzioChiu.
 */

@protocol CNVCardActivityAlertAbstractSerializationStrategy <NSObject>

@required

+ (NSString *)serializeString:(NSString *)arg1;
+ (bool)strategyWouldAlterString:(NSString *)arg1;

@end