/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) IKDOMNode *ownerElement;
@property (nonatomic, readonly) NSString *value;

- (void)addEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (id)appendChild:(id)arg1;
- (id)childNodes;
- (id)cloneNode:(bool)arg1;
- (bool)dispatchEvent:(id)arg1;
- (id)firstChild;
- (id)getFeature:(id)arg1 :(id)arg2;
- (bool)hasChildNodes;
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)lastChild;
- (id)name;
- (id)nextSibling;
- (id)nodeName;
- (long long)nodeType;
- (id)nodeValue;
- (id)ownerElement;
- (id)previousSibling;
- (id)removeChild:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)textContent;
- (id)value;

@end
