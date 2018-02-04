/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXColorScheme : NSObject

+ (id)colorForScheme:(id)arg1 colorMap:(id)arg2 value:(id)arg3;
+ (id)colorForScheme:(id)arg1 value:(id)arg2;
+ (void)readFromXmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 toColorScheme:(id)arg2;
+ (id)schemeColorEnumMap;
+ (void)writeColorScheme:(id)arg1 to:(id)arg2 state:(id)arg3;

@end
