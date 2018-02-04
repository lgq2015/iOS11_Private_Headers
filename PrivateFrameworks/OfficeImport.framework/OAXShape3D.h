/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXShape3D : NSObject

+ (id)bevelTypeEnumMap;
+ (bool)isEmpty:(id)arg1;
+ (id)materialEnumMap;
+ (id)readBevelFromXmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (id)readShape3DFromXmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (void)writeBevel:(id)arg1 to:(id)arg2;
+ (void)writeShape3D:(id)arg1 to:(id)arg2;
+ (void)writeShape3DMaterialOnly:(id)arg1 to:(id)arg2;

@end
