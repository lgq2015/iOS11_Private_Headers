/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKEditCommandObjC : NSObject {
    struct RefPtr<WebKit::WebEditCommandProxy> { 
        struct WebEditCommandProxy {} *m_ptr; 
    }  m_command;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WebEditCommandProxy { int (**x1)(); id x2; int x3; struct WebPageProxy {} *x4; }*)command;
- (id)initWithWebEditCommandProxy:(struct Ref<WebKit::WebEditCommandProxy> { struct WebEditCommandProxy {} *x1; }*)arg1;

@end
