/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _nodeHandle;
}

@property (nonatomic) bool HTMLInputElementIsAutoFilled;
@property (nonatomic, readonly) bool HTMLInputElementIsUserEdited;
@property (nonatomic, readonly) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
@property (nonatomic, readonly) bool HTMLTextAreaElementIsUserEdited;
@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) struct InjectedBundleNodeHandle { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x3; void*x4; float x5; void*x6; void*x7; void*x8; unsigned int x9/* : ? */; unsigned char x10; out const void*x11; SEL x12; SEL x13; inout out double x14; void*x15; void*x16; void*x17; struct Node {} *x18; }*_nodeHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementBounds;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2;

- (bool)HTMLInputElementIsAutoFilled;
- (bool)HTMLInputElementIsUserEdited;
- (id)HTMLTableCellElementCellAbove;
- (bool)HTMLTextAreaElementIsUserEdited;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct InjectedBundleNodeHandle { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x3; void*x4; float x5; void*x6; void*x7; void*x8; unsigned int x9/* : ? */; unsigned char x10; out const void*x11; SEL x12; SEL x13; inout out double x14; void*x15; void*x16; void*x17; struct Node {} *x18; }*)_nodeHandle;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBounds;
- (id)frame;
- (id)htmlIFrameElementContentFrame;
- (bool)isTextField;
- (id)renderedImageWithOptions:(unsigned int)arg1;
- (id)renderedImageWithOptions:(unsigned int)arg1 width:(id)arg2;
- (void)setHTMLInputElementIsAutoFilled:(bool)arg1;

@end
