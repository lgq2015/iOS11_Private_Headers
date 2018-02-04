/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKElementAction : NSObject {
    id /* block */  _actionHandler;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<WKActionSheetAssistant>="m_weakReference"@}' */ struct WeakObjCPtr<WKActionSheetAssistant> { 
        id m_weakReference; 
    }  _defaultActionSheetAssistant;
    id /* block */  _dismissalHandler;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _title;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;

+ (id)_elementActionWithType:(long long)arg1 assistant:(id)arg2;
+ (id)_elementActionWithType:(long long)arg1 customTitle:(id)arg2 assistant:(id)arg3;
+ (id)_elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(id /* block */)arg3;
+ (id)elementActionWithTitle:(id)arg1 actionHandler:(id /* block */)arg2;
+ (id)elementActionWithType:(long long)arg1;
+ (id)elementActionWithType:(long long)arg1 customTitle:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 actionHandler:(id /* block */)arg2 type:(long long)arg3 assistant:(id)arg4;
- (void)_runActionWithElementInfo:(id)arg1 forActionSheetAssistant:(id)arg2;
- (void)dealloc;
- (id /* block */)dismissalHandler;
- (void)runActionWithElementInfo:(id)arg1;
- (void)setDismissalHandler:(id /* block */)arg1;
- (id)title;
- (long long)type;

@end
