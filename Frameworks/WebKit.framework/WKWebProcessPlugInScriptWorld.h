/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _world;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) struct InjectedBundleScriptWorld { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x3; void*x4; float x5; void*x6; void*x7; void*x8; unsigned int x9/* : ? */; unsigned char x10; out const void*x11; SEL x12; SEL x13; long doublex14; bycopy void*x15; void*x16; const void*x17; void*x18; void*x19; void*x20; const void*x21; out const long x22; double x23; void*x24; void*x25; struct DOMWrapperWorld {} *x26; }*_scriptWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)normalWorld;
+ (id)world;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct InjectedBundleScriptWorld { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x3; void*x4; float x5; void*x6; void*x7; void*x8; unsigned int x9/* : ? */; unsigned char x10; out const void*x11; SEL x12; SEL x13; long doublex14; bycopy void*x15; void*x16; const void*x17; void*x18; void*x19; void*x20; const void*x21; out const long x22; double x23; void*x24; void*x25; struct DOMWrapperWorld {} *x26; }*)_scriptWorld;
- (void)clearWrappers;
- (void)dealloc;
- (void)makeAllShadowRootsOpen;
- (id)name;

@end
