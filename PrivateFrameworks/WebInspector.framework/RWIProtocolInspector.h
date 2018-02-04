/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolInspector : NSObject {
    struct RetainPtr<RWIProtocolConfiguration> { 
        void *m_ptr; 
    }  _configuration;
    struct AugmentableInspectorController { int (**x1)(); } * _inspectorController;
    struct unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient> > { 
        struct __compressed_pair<RWIAugmentableInspectorControllerClient *, std::__1::default_delete<RWIAugmentableInspectorControllerClient> > { 
            struct RWIAugmentableInspectorControllerClient {} *__first_; 
        } __ptr_; 
    }  _inspectorControllerClient;
}

@property (nonatomic, readonly) RWIProtocolConfiguration *configuration;
@property (nonatomic, readonly) bool connected;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)configuration;
- (bool)connected;
- (void)dealloc;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)inspectorControllerDestroyed;

@end
