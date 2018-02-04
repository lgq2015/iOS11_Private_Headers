/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXConnectionsAddressFormatter : NSObject

+ (id)addressComponentValueWithSemanticTag:(unsigned char)arg1 forAddress:(id)arg2 duetEvent:(id)arg3;
+ (id)addressDictionaryForPEXLocation:(id)arg1;
+ (id)addressDictionaryFromAttributeSet:(id)arg1;
+ (id)formattedAddressWithSemanticTag:(unsigned char)arg1 address:(id)arg2 duetEvent:(id)arg3 shortStyle:(bool)arg4;
+ (id)formattedCityAndStateWithCity:(id)arg1 state:(id)arg2;
+ (id)formattedStreetNameWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2;
+ (bool)isValidAddressDictionary:(id)arg1;
+ (id)postalAddressFromAttributeSet:(id)arg1;
+ (id)postalAddressFromDuetEvent:(id)arg1;
+ (id)singleLineFormattedAddressWithPostalAddress:(id)arg1 shortStyle:(bool)arg2;

@end
