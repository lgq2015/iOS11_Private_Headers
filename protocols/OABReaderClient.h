/* made by EzioChiu.
 */

@protocol OABReaderClient

@required

+ (bool)escherIsFullySupported;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(OABReaderState *)arg2;
+ (void)readClientDataFromGroup:(ESDContainer *)arg1 toGroup:(OADGroup *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromShape:(ESDObject *)arg1 toGraphic:(OADGraphic *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromTableCell:(ESDObject *)arg1 toTableCell:(OADTableCell *)arg2 state:(OABReaderState *)arg3;
+ (OADDrawable *)readDrawableFromPackagePart:(OCPPackagePart *)arg1 foundInObject:(ESDObject *)arg2 state:(OABReaderState *)arg3;
+ (bool)tablesAreAllowed;
+ (bool)xmlEquivalentOfDrawableCanBeUsed;

@end
