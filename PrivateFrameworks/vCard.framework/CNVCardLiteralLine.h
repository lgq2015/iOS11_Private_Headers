/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardLiteralLine : CNVCardLine {
    NSData * _literalValue;
}

+ (id)lineWithLiteralValue:(id)arg1;

- (void).cxx_destruct;
- (id)initWithLiteralValue:(id)arg1;
- (void)serializeWithStrategy:(id)arg1;

@end
