/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface XMLWrapperAttribute : NSObject {
    struct _xmlAttr { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlAttr {} *x7; struct _xmlAttr {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; int x11; void *x12; } * _attributeNode;
    NSString * _name;
    XMLWrapperNamespace * _ns;
    int  _type;
    NSString * _value;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) XMLWrapperNamespace *ns;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)initWithNode:(struct _xmlAttr { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlAttr {} *x7; struct _xmlAttr {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; int x11; void *x12; }*)arg1 error:(id*)arg2;
- (id)name;
- (id)ns;
- (void)setName:(id)arg1;
- (void)setNs:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)value;
- (bool)xmlAttrNodeForNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 error:(id*)arg2;

@end
