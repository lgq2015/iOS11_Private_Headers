/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface GKInterfaceListener : NSObject {
    struct __SCDynamicStore { } * _dynamicStore;
    id  _interfaceListenerDelegate;
    bool  _isCellUp;
    bool  _isWifiUp;
    bool  _monitoringAvailable;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _notificationMutex;
    int  _notifyToken;
}

@property bool _isCellUp;
@property bool _isWifiUp;
@property <InterfaceListenerDelegate> *interfaceListenerDelegate;

- (bool)_isCellUp;
- (bool)_isWifiUp;
- (void)dealloc;
- (void)hasConnectionWithWifi:(bool*)arg1 cell:(bool*)arg2;
- (id)init;
- (id)interfaceListenerDelegate;
- (void)setInterfaceListenerDelegate:(id)arg1;
- (void)set_isCellUp:(bool)arg1;
- (void)set_isWifiUp:(bool)arg1;
- (bool)startChangeListener;
- (bool)startRoutingChangeListener;
- (bool)stopChangeListener;
- (void)stopRoutingChangeListener;

@end
