/* made by EzioChiu.
 */

@protocol XREngineeringTypeDef

@required

- (unsigned long long)attributes;
- (bool)deprecated;
- (XREngineeringTypeEncodingConvention *)encodingConvention;
- (NSString *)enumString;
- (bool)experimental;
- (unsigned char)impl;
- (NSString *)mnemonic;
- (NSString *)title;
- (NSString *)usage;

@end
