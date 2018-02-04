/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVInternalDeviceList : NSObject {
    id /* block */  changeListener;
    NSMutableArray * deviceList;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  listLock;
}

@property (nonatomic, copy) id /* block */ changeListener;

+ (id)defaultDeviceOfType:(unsigned int)arg1;
+ (id)newDeviceList;

- (id /* block */)changeListener;
- (void)cleanup;
- (unsigned int)dataSourceControlID;
- (void)dealloc;
- (id)deviceList;
- (id)init;
- (void)notifyDeviceListChanged;
- (void)setChangeListener:(id /* block */)arg1;

@end
