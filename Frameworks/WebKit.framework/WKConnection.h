/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKConnection : NSObject <WKObject> {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<WKConnectionDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<WKConnectionDelegate> > { 
        id m_weakReference; 
    }  _delegate;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property <WKConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct WebConnection { int (**x1)(); id x2; int (*x3)(); int (**x4)(); struct WebConnectionClient { struct WKConnectionClientV0 { struct WKConnectionClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); } x_5_1_1; } x5; }*)_connection;
- (void)dealloc;
- (id)delegate;
- (void)sendMessageWithName:(id)arg1 body:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
