/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface XMLWrapperQuery : NSObject

+ (void)initialize;

- (id)elementForNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (id)executeXpathQuery:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 query:(id)arg2 ctxNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg3 error:(id*)arg4;
- (void)registerNamespace:(id)arg1;
- (bool)registerXpathNamespacesForCtx:(struct _xmlXPathContext { struct _xmlDoc {} *x1; struct _xmlNode {} *x2; int x3; int x4; struct _xmlHashTable {} *x5; int x6; int x7; struct _xmlXPathType {} *x8; int x9; int x10; struct _xmlHashTable {} *x11; int x12; int x13; struct _xmlXPathAxis {} *x14; struct _xmlNs {} **x15; int x16; void *x17; int x18; int x19; int x20; struct _xmlNode {} *x21; struct _xmlNode {} *x22; struct _xmlHashTable {} *x23; int (*x24)(); void *x25; void *x26; char *x27; char *x28; int (*x29)(); void *x30; struct _xmlNs {} **x31; int x32; void *x33; int (*x34)(); struct _xmlError { int x_35_1_1; int x_35_1_2; char *x_35_1_3; int x_35_1_4; char *x_35_1_5; int x_35_1_6; char *x_35_1_7; char *x_35_1_8; char *x_35_1_9; int x_35_1_10; int x_35_1_11; void *x_35_1_12; void *x_35_1_13; } x35; struct _xmlNode {} *x36; struct _xmlDict {} *x37; int x38; void *x39; }*)arg1 error:(id*)arg2;
- (id)searchNodeWithXpathQuery:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 query:(id)arg2 error:(id*)arg3;

@end
